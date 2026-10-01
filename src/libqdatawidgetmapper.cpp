#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataWidgetMapper>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <qdatawidgetmapper.h>
#include "libqdatawidgetmapper.h"
#include "libqdatawidgetmapper.hxx"

QDataWidgetMapper* QDataWidgetMapper_new() {
    return new VirtualQDataWidgetMapper();
}

QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent) {
    return new VirtualQDataWidgetMapper(parent);
}

QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDataWidgetMapper_Metacall(QDataWidgetMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDataWidgetMapper_Tr(const char* s) {
    auto _ret = QDataWidgetMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self) {
    return self->model();
}

void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self) {
    return self->itemDelegate();
}

void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self) {
    return new QModelIndex(self->rootIndex());
}

void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation) {
    self->setOrientation(static_cast<Qt::Orientation>(aOrientation));
}

int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self) {
    return static_cast<int>(self->orientation());
}

void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy) {
    self->setSubmitPolicy(static_cast<QDataWidgetMapper::SubmitPolicy>(policy));
}

int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self) {
    return static_cast<int>(self->submitPolicy());
}

void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section) {
    self->addMapping(widget, static_cast<int>(section));
}

void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, const libqt_string propertyName) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    self->addMapping(widget, static_cast<int>(section), propertyName_QByteArray);
}

void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget) {
    self->removeMapping(widget);
}

int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget) {
    return self->mappedSection(widget);
}

libqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget) {
    QByteArray _qb = self->mappedPropertyName(widget);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section) {
    return self->mappedWidgetAt(static_cast<int>(section));
}

void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self) {
    self->clearMapping();
}

int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self) {
    return self->currentIndex();
}

void QDataWidgetMapper_Revert(QDataWidgetMapper* self) {
    self->revert();
}

bool QDataWidgetMapper_Submit(QDataWidgetMapper* self) {
    return self->submit();
}

void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self) {
    self->toFirst();
}

void QDataWidgetMapper_ToLast(QDataWidgetMapper* self) {
    self->toLast();
}

void QDataWidgetMapper_ToNext(QDataWidgetMapper* self) {
    self->toNext();
}

void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self) {
    self->toPrevious();
}

void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, const QModelIndex* index) {
    self->setCurrentModelIndex(*index);
}

void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index) {
    self->currentIndexChanged(static_cast<int>(index));
}

void QDataWidgetMapper_Connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot) {
    void (*slotFunc)(QDataWidgetMapper*, int) = reinterpret_cast<void (*)(QDataWidgetMapper*, int)>(slot);
    QDataWidgetMapper::connect(self,
                               static_cast<void (QDataWidgetMapper::*)(int)>(&QDataWidgetMapper::currentIndexChanged),
                               [self, slotFunc](int index) {
                                   int sigval1 = index;
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QDataWidgetMapper_Tr2(const char* s, const char* c) {
    auto _ret = QDataWidgetMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDataWidgetMapper_SuperMetaObject(const QDataWidgetMapper* self) {
    return (QMetaObject*)self->QDataWidgetMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnMetaObject(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self)))
        vqdatawidgetmapper->qdatawidgetmapper_metaobject_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDataWidgetMapper_SuperMetacast(QDataWidgetMapper* self, const char* param1) {
    return self->QDataWidgetMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnMetacast(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_metacast_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDataWidgetMapper_SuperMetacall(QDataWidgetMapper* self, int param1, int param2, void** param3) {
    return self->QDataWidgetMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnMetacall(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_metacall_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Metacall_Callback>(slot);
}

// Base class handler implementation
void QDataWidgetMapper_SuperSetCurrentIndex(QDataWidgetMapper* self, int index) {
    self->QDataWidgetMapper::setCurrentIndex(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnSetCurrentIndex(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_setcurrentindex_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_SetCurrentIndex_Callback>(slot);
}

// Derived class handler implementation
bool QDataWidgetMapper_Event(QDataWidgetMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDataWidgetMapper_SuperEvent(QDataWidgetMapper* self, QEvent* event) {
    return self->QDataWidgetMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnEvent(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_event_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDataWidgetMapper_EventFilter(QDataWidgetMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDataWidgetMapper_SuperEventFilter(QDataWidgetMapper* self, QObject* watched, QEvent* event) {
    return self->QDataWidgetMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnEventFilter(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_eventfilter_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDataWidgetMapper_TimerEvent(QDataWidgetMapper* self, QTimerEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper) {
        vqdatawidgetmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDataWidgetMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDataWidgetMapper_SuperTimerEvent(QDataWidgetMapper* self, QTimerEvent* event) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self)) {
        vqdatawidgetmapper->QDataWidgetMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDataWidgetMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnTimerEvent(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_timerevent_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDataWidgetMapper_ChildEvent(QDataWidgetMapper* self, QChildEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper) {
        vqdatawidgetmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDataWidgetMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDataWidgetMapper_SuperChildEvent(QDataWidgetMapper* self, QChildEvent* event) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self)) {
        vqdatawidgetmapper->QDataWidgetMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDataWidgetMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnChildEvent(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_childevent_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDataWidgetMapper_CustomEvent(QDataWidgetMapper* self, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper) {
        vqdatawidgetmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDataWidgetMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDataWidgetMapper_SuperCustomEvent(QDataWidgetMapper* self, QEvent* event) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self)) {
        vqdatawidgetmapper->QDataWidgetMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDataWidgetMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnCustomEvent(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_customevent_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDataWidgetMapper_ConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper) {
        vqdatawidgetmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDataWidgetMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDataWidgetMapper_SuperConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self)) {
        vqdatawidgetmapper->QDataWidgetMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDataWidgetMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnConnectNotify(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_connectnotify_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDataWidgetMapper_DisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper) {
        vqdatawidgetmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDataWidgetMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDataWidgetMapper_SuperDisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self)) {
        vqdatawidgetmapper->QDataWidgetMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDataWidgetMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnDisconnectNotify(QDataWidgetMapper* self, intptr_t slot) {
    if (auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self))
        vqdatawidgetmapper->qdatawidgetmapper_disconnectnotify_callback = reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDataWidgetMapper_Sender(const QDataWidgetMapper* self) {
    if (auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self))) {
        return vqdatawidgetmapper->VirtualQDataWidgetMapper::sender();
    } else
        qFatal("Error: Protected method QDataWidgetMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDataWidgetMapper_SenderSignalIndex(const QDataWidgetMapper* self) {
    if (auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self))) {
        return vqdatawidgetmapper->VirtualQDataWidgetMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDataWidgetMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDataWidgetMapper_Receivers(const QDataWidgetMapper* self, const char* signal) {
    if (auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self))) {
        return vqdatawidgetmapper->VirtualQDataWidgetMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QDataWidgetMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDataWidgetMapper_IsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal) {
    if (auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self))) {
        return vqdatawidgetmapper->VirtualQDataWidgetMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDataWidgetMapper::isSignalConnected called without a directly constructed type");
}

void QDataWidgetMapper_Delete(QDataWidgetMapper* self) {
    delete self;
}
