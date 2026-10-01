#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QTimerEvent>
#include <qsocketnotifier.h>
#include "libqsocketnotifier.h"
#include "libqsocketnotifier.hxx"

QSocketNotifier* QSocketNotifier_new(int param1) {
    return new VirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2) {
    return new VirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent) {
    return new VirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1), parent);
}

QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent) {
    return new VirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSocketNotifier_Metacall(QSocketNotifier* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSocketNotifier_Tr(const char* s) {
    auto _ret = QSocketNotifier::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket) {
    self->setSocket((qintptr)(socket));
}

intptr_t QSocketNotifier_Socket(const QSocketNotifier* self) {
    qintptr _ret = self->socket();
    return (intptr_t)(_ret);
}

int QSocketNotifier_Type(const QSocketNotifier* self) {
    return static_cast<int>(self->type());
}

bool QSocketNotifier_IsValid(const QSocketNotifier* self) {
    return self->isValid();
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
    return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1) {
    auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
    if (vqsocketnotifier) {
        return vqsocketnotifier->event(param1);
    }
    qFatal("Error: Protected method QSocketNotifier::event called without a directly constructed type");
}

libqt_string QSocketNotifier_Tr2(const char* s, const char* c) {
    auto _ret = QSocketNotifier::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSocketNotifier_SuperMetaObject(const QSocketNotifier* self) {
    return (QMetaObject*)self->QSocketNotifier::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnMetaObject(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self)))
        vqsocketnotifier->qsocketnotifier_metaobject_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSocketNotifier_SuperMetacast(QSocketNotifier* self, const char* param1) {
    return self->QSocketNotifier::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnMetacast(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_metacast_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSocketNotifier_SuperMetacall(QSocketNotifier* self, int param1, int param2, void** param3) {
    return self->QSocketNotifier::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnMetacall(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_metacall_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QSocketNotifier_SuperEvent(QSocketNotifier* self, QEvent* param1) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        return vqsocketnotifier->QSocketNotifier::event(param1);
    } else
        qFatal("Error: Protected virtual method QSocketNotifier::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_event_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSocketNotifier_EventFilter(QSocketNotifier* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSocketNotifier_SuperEventFilter(QSocketNotifier* self, QObject* watched, QEvent* event) {
    return self->QSocketNotifier::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnEventFilter(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_eventfilter_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSocketNotifier_TimerEvent(QSocketNotifier* self, QTimerEvent* event) {
    auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
    if (vqsocketnotifier) {
        vqsocketnotifier->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSocketNotifier::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSocketNotifier_SuperTimerEvent(QSocketNotifier* self, QTimerEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->QSocketNotifier::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSocketNotifier::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnTimerEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_timerevent_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSocketNotifier_ChildEvent(QSocketNotifier* self, QChildEvent* event) {
    auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
    if (vqsocketnotifier) {
        vqsocketnotifier->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSocketNotifier::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSocketNotifier_SuperChildEvent(QSocketNotifier* self, QChildEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->QSocketNotifier::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSocketNotifier::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnChildEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_childevent_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSocketNotifier_CustomEvent(QSocketNotifier* self, QEvent* event) {
    auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
    if (vqsocketnotifier) {
        vqsocketnotifier->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSocketNotifier::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSocketNotifier_SuperCustomEvent(QSocketNotifier* self, QEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->QSocketNotifier::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSocketNotifier::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnCustomEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_customevent_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSocketNotifier_ConnectNotify(QSocketNotifier* self, const QMetaMethod* signal) {
    auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
    if (vqsocketnotifier) {
        vqsocketnotifier->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSocketNotifier::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSocketNotifier_SuperConnectNotify(QSocketNotifier* self, const QMetaMethod* signal) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->QSocketNotifier::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSocketNotifier::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnConnectNotify(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_connectnotify_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSocketNotifier_DisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal) {
    auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
    if (vqsocketnotifier) {
        vqsocketnotifier->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSocketNotifier::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSocketNotifier_SuperDisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->QSocketNotifier::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSocketNotifier::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnDisconnectNotify(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self))
        vqsocketnotifier->qsocketnotifier_disconnectnotify_callback = reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSocketNotifier_Sender(const QSocketNotifier* self) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->VirtualQSocketNotifier::sender();
    } else
        qFatal("Error: Protected method QSocketNotifier::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSocketNotifier_SenderSignalIndex(const QSocketNotifier* self) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->VirtualQSocketNotifier::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSocketNotifier::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSocketNotifier_Receivers(const QSocketNotifier* self, const char* signal) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->VirtualQSocketNotifier::receivers(signal);
    } else
        qFatal("Error: Protected method QSocketNotifier::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSocketNotifier_IsSignalConnected(const QSocketNotifier* self, const QMetaMethod* signal) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->VirtualQSocketNotifier::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSocketNotifier::isSignalConnected called without a directly constructed type");
}

void QSocketNotifier_Connect_Activated(QSocketNotifier* self, intptr_t slot) {
    void (*slotFunc)(QSocketNotifier*, QSocketDescriptor*, int) = reinterpret_cast<void (*)(QSocketNotifier*, QSocketDescriptor*, int)>(slot);
    QSocketNotifier::connect(self, &QSocketNotifier::activated, [self, slotFunc](QSocketDescriptor socket, QSocketNotifier::Type activationEvent) {
        QSocketDescriptor* sigval1 = new QSocketDescriptor(socket);
        int sigval2 = static_cast<int>(activationEvent);
        slotFunc(self, sigval1, sigval2);
    });
}

void QSocketNotifier_Delete(QSocketNotifier* self) {
    delete self;
}

QSocketDescriptor* QSocketDescriptor_new(const QSocketDescriptor* other) {
    return new QSocketDescriptor(*other);
}

QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* other) {
    return new QSocketDescriptor(std::move(*other));
}

QSocketDescriptor* QSocketDescriptor_new3() {
    return new QSocketDescriptor();
}

QSocketDescriptor* QSocketDescriptor_new4(const QSocketDescriptor* param1) {
    return new QSocketDescriptor(*param1);
}

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
QSocketDescriptor* QSocketDescriptor_new5(int descriptor) {
    return new QSocketDescriptor(static_cast<QSocketDescriptor::DescriptorType>(descriptor));
}
#endif

void QSocketDescriptor_CopyAssign(QSocketDescriptor* self, QSocketDescriptor* other) {
    *self = *other;
}

void QSocketDescriptor_MoveAssign(QSocketDescriptor* self, QSocketDescriptor* other) {
    *self = std::move(*other);
}

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
int QSocketDescriptor_ToInt(const QSocketDescriptor* self) {
    return static_cast<int>(self->operator int());
}
#endif

bool QSocketDescriptor_IsValid(const QSocketDescriptor* self) {
    return self->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
    delete self;
}
