#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalMapper>
#include <QString>
#include <QTimerEvent>
#include <qsignalmapper.h>
#include "libqsignalmapper.h"
#include "libqsignalmapper.hxx"

QSignalMapper* QSignalMapper_new() {
    return new VirtualQSignalMapper();
}

QSignalMapper* QSignalMapper_new2(QObject* parent) {
    return new VirtualQSignalMapper(parent);
}

QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSignalMapper_Metacast(QSignalMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSignalMapper_Metacall(QSignalMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSignalMapper_Tr(const char* s) {
    auto _ret = QSignalMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id) {
    self->setMapping(sender, static_cast<int>(id));
}

void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMapping(sender, text_QString);
}

void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object) {
    self->setMapping(sender, object);
}

void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender) {
    self->removeMappings(sender);
}

QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id) {
    return self->mapping(static_cast<int>(id));
}

QObject* QSignalMapper_Mapping2(const QSignalMapper* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->mapping(text_QString);
}

QObject* QSignalMapper_Mapping3(const QSignalMapper* self, QObject* object) {
    return self->mapping(object);
}

void QSignalMapper_MappedInt(QSignalMapper* self, int param1) {
    self->mappedInt(static_cast<int>(param1));
}

void QSignalMapper_Connect_MappedInt(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, int) = reinterpret_cast<void (*)(QSignalMapper*, int)>(slot);
    QSignalMapper::connect(self,
                           static_cast<void (QSignalMapper::*)(int)>(&QSignalMapper::mappedInt),
                           [self, slotFunc](int param1) {
                               int sigval1 = param1;
                               slotFunc(self, sigval1);
                           });
}

void QSignalMapper_MappedString(QSignalMapper* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->mappedString(param1_QString);
}

void QSignalMapper_Connect_MappedString(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, const char*) = reinterpret_cast<void (*)(QSignalMapper*, const char*)>(slot);
    QSignalMapper::connect(self,
                           static_cast<void (QSignalMapper::*)(const QString&)>(&QSignalMapper::mappedString),
                           [self, slotFunc](const QString& param1) {
                               const auto param1_ret = param1;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray param1_b = param1_ret.toUtf8();
                               auto param1_str_len = param1_b.length();
                               const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                               memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                               ((char*)param1_str)[param1_str_len] = '\0';
                               const char* sigval1 = param1_str;
                               slotFunc(self, sigval1);
                               libqt_free(param1_str);
                           });
}

void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1) {
    self->mappedObject(param1);
}

void QSignalMapper_Connect_MappedObject(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, QObject*) = reinterpret_cast<void (*)(QSignalMapper*, QObject*)>(slot);
    QSignalMapper::connect(self,
                           static_cast<void (QSignalMapper::*)(QObject*)>(&QSignalMapper::mappedObject),
                           [self, slotFunc](QObject* param1) {
                               QObject* sigval1 = param1;
                               slotFunc(self, sigval1);
                           });
}

void QSignalMapper_Map(QSignalMapper* self) {
    self->map();
}

void QSignalMapper_Map2(QSignalMapper* self, QObject* sender) {
    self->map(sender);
}

libqt_string QSignalMapper_Tr2(const char* s, const char* c) {
    auto _ret = QSignalMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSignalMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSignalMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSignalMapper_SuperMetaObject(const QSignalMapper* self) {
    return (QMetaObject*)self->QSignalMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnMetaObject(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self)))
        vqsignalmapper->qsignalmapper_metaobject_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSignalMapper_SuperMetacast(QSignalMapper* self, const char* param1) {
    return self->QSignalMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnMetacast(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_metacast_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSignalMapper_SuperMetacall(QSignalMapper* self, int param1, int param2, void** param3) {
    return self->QSignalMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnMetacall(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_metacall_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QSignalMapper_Event(QSignalMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSignalMapper_SuperEvent(QSignalMapper* self, QEvent* event) {
    return self->QSignalMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnEvent(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_event_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSignalMapper_EventFilter(QSignalMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSignalMapper_SuperEventFilter(QSignalMapper* self, QObject* watched, QEvent* event) {
    return self->QSignalMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnEventFilter(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_eventfilter_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSignalMapper_TimerEvent(QSignalMapper* self, QTimerEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper) {
        vqsignalmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSignalMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalMapper_SuperTimerEvent(QSignalMapper* self, QTimerEvent* event) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self)) {
        vqsignalmapper->QSignalMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSignalMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnTimerEvent(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_timerevent_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSignalMapper_ChildEvent(QSignalMapper* self, QChildEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper) {
        vqsignalmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSignalMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalMapper_SuperChildEvent(QSignalMapper* self, QChildEvent* event) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self)) {
        vqsignalmapper->QSignalMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSignalMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnChildEvent(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_childevent_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSignalMapper_CustomEvent(QSignalMapper* self, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper) {
        vqsignalmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSignalMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalMapper_SuperCustomEvent(QSignalMapper* self, QEvent* event) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self)) {
        vqsignalmapper->QSignalMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSignalMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnCustomEvent(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_customevent_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSignalMapper_ConnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper) {
        vqsignalmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSignalMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalMapper_SuperConnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self)) {
        vqsignalmapper->QSignalMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSignalMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnConnectNotify(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_connectnotify_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSignalMapper_DisconnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper) {
        vqsignalmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSignalMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalMapper_SuperDisconnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self)) {
        vqsignalmapper->QSignalMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSignalMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnDisconnectNotify(QSignalMapper* self, intptr_t slot) {
    if (auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self))
        vqsignalmapper->qsignalmapper_disconnectnotify_callback = reinterpret_cast<VirtualQSignalMapper::QSignalMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSignalMapper_Sender(const QSignalMapper* self) {
    if (auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self))) {
        return vqsignalmapper->VirtualQSignalMapper::sender();
    } else
        qFatal("Error: Protected method QSignalMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSignalMapper_SenderSignalIndex(const QSignalMapper* self) {
    if (auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self))) {
        return vqsignalmapper->VirtualQSignalMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSignalMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSignalMapper_Receivers(const QSignalMapper* self, const char* signal) {
    if (auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self))) {
        return vqsignalmapper->VirtualQSignalMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QSignalMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSignalMapper_IsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal) {
    if (auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self))) {
        return vqsignalmapper->VirtualQSignalMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSignalMapper::isSignalConnected called without a directly constructed type");
}

void QSignalMapper_Delete(QSignalMapper* self) {
    delete self;
}
