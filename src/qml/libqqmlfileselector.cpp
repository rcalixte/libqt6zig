#include <QChildEvent>
#include <QEvent>
#include <QFileSelector>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlFileSelector>
#include <QString>
#include <QTimerEvent>
#include <qqmlfileselector.h>
#include "libqqmlfileselector.h"
#include "libqqmlfileselector.hxx"

QQmlFileSelector* QQmlFileSelector_new(QQmlEngine* engine) {
    return new VirtualQQmlFileSelector(engine);
}

QQmlFileSelector* QQmlFileSelector_new2(QQmlEngine* engine, QObject* parent) {
    return new VirtualQQmlFileSelector(engine, parent);
}

QMetaObject* QQmlFileSelector_MetaObject(const QQmlFileSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlFileSelector_Metacast(QQmlFileSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlFileSelector_Metacall(QQmlFileSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlFileSelector_Tr(const char* s) {
    auto _ret = QQmlFileSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QFileSelector* QQmlFileSelector_Selector(const QQmlFileSelector* self) {
    return self->selector();
}

void QQmlFileSelector_SetSelector(QQmlFileSelector* self, QFileSelector* selector) {
    self->setSelector(selector);
}

void QQmlFileSelector_SetExtraSelectors(QQmlFileSelector* self, const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    self->setExtraSelectors(strings_QList);
}

QQmlFileSelector* QQmlFileSelector_Get(QQmlEngine* param1) {
    return QQmlFileSelector::get(param1);
}

libqt_string QQmlFileSelector_Tr2(const char* s, const char* c) {
    auto _ret = QQmlFileSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlFileSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlFileSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlFileSelector_SuperMetaObject(const QQmlFileSelector* self) {
    return (QMetaObject*)self->QQmlFileSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnMetaObject(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self)))
        vqqmlfileselector->qqmlfileselector_metaobject_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlFileSelector_SuperMetacast(QQmlFileSelector* self, const char* param1) {
    return self->QQmlFileSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnMetacast(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_metacast_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlFileSelector_SuperMetacall(QQmlFileSelector* self, int param1, int param2, void** param3) {
    return self->QQmlFileSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnMetacall(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_metacall_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QQmlFileSelector_Event(QQmlFileSelector* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlFileSelector_SuperEvent(QQmlFileSelector* self, QEvent* event) {
    return self->QQmlFileSelector::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnEvent(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_event_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlFileSelector_EventFilter(QQmlFileSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlFileSelector_SuperEventFilter(QQmlFileSelector* self, QObject* watched, QEvent* event) {
    return self->QQmlFileSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnEventFilter(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_eventfilter_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlFileSelector_TimerEvent(QQmlFileSelector* self, QTimerEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector) {
        vqqmlfileselector->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlFileSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperTimerEvent(QQmlFileSelector* self, QTimerEvent* event) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self)) {
        vqqmlfileselector->QQmlFileSelector::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlFileSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnTimerEvent(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_timerevent_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlFileSelector_ChildEvent(QQmlFileSelector* self, QChildEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector) {
        vqqmlfileselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlFileSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperChildEvent(QQmlFileSelector* self, QChildEvent* event) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self)) {
        vqqmlfileselector->QQmlFileSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlFileSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnChildEvent(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_childevent_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlFileSelector_CustomEvent(QQmlFileSelector* self, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector) {
        vqqmlfileselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlFileSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperCustomEvent(QQmlFileSelector* self, QEvent* event) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self)) {
        vqqmlfileselector->QQmlFileSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlFileSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnCustomEvent(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_customevent_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlFileSelector_ConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector) {
        vqqmlfileselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlFileSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self)) {
        vqqmlfileselector->QQmlFileSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlFileSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnConnectNotify(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_connectnotify_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlFileSelector_DisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector) {
        vqqmlfileselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlFileSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperDisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self)) {
        vqqmlfileselector->QQmlFileSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlFileSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnDisconnectNotify(QQmlFileSelector* self, intptr_t slot) {
    if (auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self))
        vqqmlfileselector->qqmlfileselector_disconnectnotify_callback = reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlFileSelector_Sender(const QQmlFileSelector* self) {
    if (auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self))) {
        return vqqmlfileselector->VirtualQQmlFileSelector::sender();
    } else
        qFatal("Error: Protected method QQmlFileSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlFileSelector_SenderSignalIndex(const QQmlFileSelector* self) {
    if (auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self))) {
        return vqqmlfileselector->VirtualQQmlFileSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlFileSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlFileSelector_Receivers(const QQmlFileSelector* self, const char* signal) {
    if (auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self))) {
        return vqqmlfileselector->VirtualQQmlFileSelector::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlFileSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlFileSelector_IsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal) {
    if (auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self))) {
        return vqqmlfileselector->VirtualQQmlFileSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlFileSelector::isSignalConnected called without a directly constructed type");
}

void QQmlFileSelector_Delete(QQmlFileSelector* self) {
    delete self;
}
