#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVBarModelMapper>
#include <qvbarmodelmapper.h>
#include "libqvbarmodelmapper.h"
#include "libqvbarmodelmapper.hxx"

QVBarModelMapper* QVBarModelMapper_new() {
    return new VirtualQVBarModelMapper();
}

QVBarModelMapper* QVBarModelMapper_new2(QObject* parent) {
    return new VirtualQVBarModelMapper(parent);
}

QMetaObject* QVBarModelMapper_MetaObject(const QVBarModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVBarModelMapper_Metacast(QVBarModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVBarModelMapper_Metacall(QVBarModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVBarModelMapper_Tr(const char* s) {
    auto _ret = QVBarModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QVBarModelMapper_Model(const QVBarModelMapper* self) {
    return self->model();
}

void QVBarModelMapper_SetModel(QVBarModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractBarSeries* QVBarModelMapper_Series(const QVBarModelMapper* self) {
    return self->series();
}

void QVBarModelMapper_SetSeries(QVBarModelMapper* self, QAbstractBarSeries* series) {
    self->setSeries(series);
}

int QVBarModelMapper_FirstBarSetColumn(const QVBarModelMapper* self) {
    return self->firstBarSetColumn();
}

void QVBarModelMapper_SetFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn) {
    self->setFirstBarSetColumn(static_cast<int>(firstBarSetColumn));
}

int QVBarModelMapper_LastBarSetColumn(const QVBarModelMapper* self) {
    return self->lastBarSetColumn();
}

void QVBarModelMapper_SetLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn) {
    self->setLastBarSetColumn(static_cast<int>(lastBarSetColumn));
}

int QVBarModelMapper_FirstRow(const QVBarModelMapper* self) {
    return self->firstRow();
}

void QVBarModelMapper_SetFirstRow(QVBarModelMapper* self, int firstRow) {
    self->setFirstRow(static_cast<int>(firstRow));
}

int QVBarModelMapper_RowCount(const QVBarModelMapper* self) {
    return self->rowCount();
}

void QVBarModelMapper_SetRowCount(QVBarModelMapper* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void QVBarModelMapper_SeriesReplaced(QVBarModelMapper* self) {
    self->seriesReplaced();
}

void QVBarModelMapper_Connect_SeriesReplaced(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self,
                              static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::seriesReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVBarModelMapper_ModelReplaced(QVBarModelMapper* self) {
    self->modelReplaced();
}

void QVBarModelMapper_Connect_ModelReplaced(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self,
                              static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::modelReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVBarModelMapper_FirstBarSetColumnChanged(QVBarModelMapper* self) {
    self->firstBarSetColumnChanged();
}

void QVBarModelMapper_Connect_FirstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self,
                              static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::firstBarSetColumnChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVBarModelMapper_LastBarSetColumnChanged(QVBarModelMapper* self) {
    self->lastBarSetColumnChanged();
}

void QVBarModelMapper_Connect_LastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self,
                              static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::lastBarSetColumnChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVBarModelMapper_FirstRowChanged(QVBarModelMapper* self) {
    self->firstRowChanged();
}

void QVBarModelMapper_Connect_FirstRowChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self,
                              static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::firstRowChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVBarModelMapper_RowCountChanged(QVBarModelMapper* self) {
    self->rowCountChanged();
}

void QVBarModelMapper_Connect_RowCountChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self,
                              static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::rowCountChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QVBarModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QVBarModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBarModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVBarModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVBarModelMapper_SuperMetaObject(const QVBarModelMapper* self) {
    return (QMetaObject*)self->QVBarModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnMetaObject(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self)))
        vqvbarmodelmapper->qvbarmodelmapper_metaobject_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVBarModelMapper_SuperMetacast(QVBarModelMapper* self, const char* param1) {
    return self->QVBarModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnMetacast(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_metacast_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVBarModelMapper_SuperMetacall(QVBarModelMapper* self, int param1, int param2, void** param3) {
    return self->QVBarModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnMetacall(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_metacall_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVBarModelMapper_Event(QVBarModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVBarModelMapper_SuperEvent(QVBarModelMapper* self, QEvent* event) {
    return self->QVBarModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_event_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVBarModelMapper_EventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVBarModelMapper_SuperEventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event) {
    return self->QVBarModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnEventFilter(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVBarModelMapper_TimerEvent(QVBarModelMapper* self, QTimerEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper) {
        vqvbarmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBarModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBarModelMapper_SuperTimerEvent(QVBarModelMapper* self, QTimerEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->QVBarModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBarModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnTimerEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_timerevent_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBarModelMapper_ChildEvent(QVBarModelMapper* self, QChildEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper) {
        vqvbarmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBarModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBarModelMapper_SuperChildEvent(QVBarModelMapper* self, QChildEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->QVBarModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBarModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnChildEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_childevent_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBarModelMapper_CustomEvent(QVBarModelMapper* self, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper) {
        vqvbarmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBarModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBarModelMapper_SuperCustomEvent(QVBarModelMapper* self, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->QVBarModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBarModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnCustomEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_customevent_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBarModelMapper_ConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper) {
        vqvbarmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVBarModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBarModelMapper_SuperConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->QVBarModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVBarModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnConnectNotify(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVBarModelMapper_DisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper) {
        vqvbarmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVBarModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBarModelMapper_SuperDisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->QVBarModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVBarModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnDisconnectNotify(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self))
        vqvbarmodelmapper->qvbarmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QVBarModelMapper_First(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::first();
    } else
        qFatal("Error: Protected method QVBarModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBarModelMapper_SetFirst(QVBarModelMapper* self, int first) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->VirtualQVBarModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QVBarModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBarModelMapper_Count(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::count();
    } else
        qFatal("Error: Protected method QVBarModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBarModelMapper_SetCount(QVBarModelMapper* self, int count) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->VirtualQVBarModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QVBarModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBarModelMapper_FirstBarSetSection(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::firstBarSetSection();
    } else
        qFatal("Error: Protected method QVBarModelMapper::firstBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBarModelMapper_SetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->VirtualQVBarModelMapper::setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else
        qFatal("Error: Protected method QVBarModelMapper::setFirstBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBarModelMapper_LastBarSetSection(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::lastBarSetSection();
    } else
        qFatal("Error: Protected method QVBarModelMapper::lastBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBarModelMapper_SetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->VirtualQVBarModelMapper::setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else
        qFatal("Error: Protected method QVBarModelMapper::setLastBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBarModelMapper_Orientation(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return static_cast<int>(vqvbarmodelmapper->VirtualQVBarModelMapper::orientation());
    } else
        qFatal("Error: Protected method QVBarModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBarModelMapper_SetOrientation(QVBarModelMapper* self, int orientation) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->VirtualQVBarModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QVBarModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVBarModelMapper_Sender(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::sender();
    } else
        qFatal("Error: Protected method QVBarModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBarModelMapper_SenderSignalIndex(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVBarModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBarModelMapper_Receivers(const QVBarModelMapper* self, const char* signal) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QVBarModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVBarModelMapper_IsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->VirtualQVBarModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVBarModelMapper::isSignalConnected called without a directly constructed type");
}

void QVBarModelMapper_Delete(QVBarModelMapper* self) {
    delete self;
}
