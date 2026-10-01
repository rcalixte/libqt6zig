#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVXYModelMapper>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVXYModelMapper_Tr(const char* s) {
    auto _ret = QVXYModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QVXYModelMapper::connect(self,
                             static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::seriesReplaced),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QVXYModelMapper_ModelReplaced(QVXYModelMapper* self) {
    self->modelReplaced();
}

void QVXYModelMapper_Connect_ModelReplaced(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self,
                             static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::modelReplaced),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QVXYModelMapper_XColumnChanged(QVXYModelMapper* self) {
    self->xColumnChanged();
}

void QVXYModelMapper_Connect_XColumnChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self,
                             static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::xColumnChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QVXYModelMapper_YColumnChanged(QVXYModelMapper* self) {
    self->yColumnChanged();
}

void QVXYModelMapper_Connect_YColumnChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self,
                             static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::yColumnChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QVXYModelMapper_FirstRowChanged(QVXYModelMapper* self) {
    self->firstRowChanged();
}

void QVXYModelMapper_Connect_FirstRowChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self,
                             static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::firstRowChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QVXYModelMapper_RowCountChanged(QVXYModelMapper* self) {
    self->rowCountChanged();
}

void QVXYModelMapper_Connect_RowCountChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self,
                             static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::rowCountChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

libqt_string QVXYModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QVXYModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVXYModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVXYModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVXYModelMapper_SuperMetaObject(const QVXYModelMapper* self) {
    return (QMetaObject*)self->QVXYModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnMetaObject(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self)))
        vqvxymodelmapper->qvxymodelmapper_metaobject_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVXYModelMapper_SuperMetacast(QVXYModelMapper* self, const char* param1) {
    return self->QVXYModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnMetacast(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_metacast_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVXYModelMapper_SuperMetacall(QVXYModelMapper* self, int param1, int param2, void** param3) {
    return self->QVXYModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnMetacall(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_metacall_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVXYModelMapper_Event(QVXYModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVXYModelMapper_SuperEvent(QVXYModelMapper* self, QEvent* event) {
    return self->QVXYModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_event_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVXYModelMapper_EventFilter(QVXYModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVXYModelMapper_SuperEventFilter(QVXYModelMapper* self, QObject* watched, QEvent* event) {
    return self->QVXYModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnEventFilter(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_eventfilter_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVXYModelMapper_TimerEvent(QVXYModelMapper* self, QTimerEvent* event) {
    auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self);
    if (vqvxymodelmapper) {
        vqvxymodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVXYModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVXYModelMapper_SuperTimerEvent(QVXYModelMapper* self, QTimerEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->QVXYModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVXYModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnTimerEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_timerevent_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVXYModelMapper_ChildEvent(QVXYModelMapper* self, QChildEvent* event) {
    auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self);
    if (vqvxymodelmapper) {
        vqvxymodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVXYModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVXYModelMapper_SuperChildEvent(QVXYModelMapper* self, QChildEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->QVXYModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVXYModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnChildEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_childevent_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVXYModelMapper_CustomEvent(QVXYModelMapper* self, QEvent* event) {
    auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self);
    if (vqvxymodelmapper) {
        vqvxymodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVXYModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVXYModelMapper_SuperCustomEvent(QVXYModelMapper* self, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->QVXYModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVXYModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnCustomEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_customevent_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVXYModelMapper_ConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal) {
    auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self);
    if (vqvxymodelmapper) {
        vqvxymodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVXYModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVXYModelMapper_SuperConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->QVXYModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVXYModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnConnectNotify(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_connectnotify_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVXYModelMapper_DisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal) {
    auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self);
    if (vqvxymodelmapper) {
        vqvxymodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVXYModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVXYModelMapper_SuperDisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->QVXYModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVXYModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnDisconnectNotify(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self))
        vqvxymodelmapper->qvxymodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QVXYModelMapper_First(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::first();
    } else
        qFatal("Error: Protected method QVXYModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QVXYModelMapper_SetFirst(QVXYModelMapper* self, int first) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->VirtualQVXYModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QVXYModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QVXYModelMapper_Count(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::count();
    } else
        qFatal("Error: Protected method QVXYModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QVXYModelMapper_SetCount(QVXYModelMapper* self, int count) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->VirtualQVXYModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QVXYModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QVXYModelMapper_Orientation(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return static_cast<int>(vqvxymodelmapper->VirtualQVXYModelMapper::orientation());
    } else
        qFatal("Error: Protected method QVXYModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QVXYModelMapper_SetOrientation(QVXYModelMapper* self, int orientation) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->VirtualQVXYModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QVXYModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
int QVXYModelMapper_XSection(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::xSection();
    } else
        qFatal("Error: Protected method QVXYModelMapper::xSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVXYModelMapper_SetXSection(QVXYModelMapper* self, int xSection) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->VirtualQVXYModelMapper::setXSection(static_cast<int>(xSection));
    } else
        qFatal("Error: Protected method QVXYModelMapper::setXSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVXYModelMapper_YSection(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::ySection();
    } else
        qFatal("Error: Protected method QVXYModelMapper::ySection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVXYModelMapper_SetYSection(QVXYModelMapper* self, int ySection) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->VirtualQVXYModelMapper::setYSection(static_cast<int>(ySection));
    } else
        qFatal("Error: Protected method QVXYModelMapper::setYSection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVXYModelMapper_Sender(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::sender();
    } else
        qFatal("Error: Protected method QVXYModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVXYModelMapper_SenderSignalIndex(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVXYModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVXYModelMapper_Receivers(const QVXYModelMapper* self, const char* signal) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QVXYModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVXYModelMapper_IsSignalConnected(const QVXYModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->VirtualQVXYModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVXYModelMapper::isSignalConnected called without a directly constructed type");
}

void QVXYModelMapper_Delete(QVXYModelMapper* self) {
    delete self;
}
