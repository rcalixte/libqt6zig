#include <KXMessages>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kxmessages.h>
#include "libkxmessages.h"
#include "libkxmessages.hxx"

#ifdef __linux__
KXMessages* KXMessages_new() {
    return new VirtualKXMessages();
}
#endif

#ifdef __linux__
KXMessages* KXMessages_new2(xcb_connection_t* connection, uint32_t rootWindow) {
    return new VirtualKXMessages(connection, rootWindow);
}
#endif

#ifdef __linux__
KXMessages* KXMessages_new3(const char* accept_broadcast) {
    return new VirtualKXMessages(accept_broadcast);
}
#endif

#ifdef __linux__
KXMessages* KXMessages_new4(const char* accept_broadcast, QObject* parent) {
    return new VirtualKXMessages(accept_broadcast, parent);
}
#endif

#ifdef __linux__
KXMessages* KXMessages_new5(xcb_connection_t* connection, uint32_t rootWindow, const char* accept_broadcast) {
    return new VirtualKXMessages(connection, rootWindow, accept_broadcast);
}
#endif

#ifdef __linux__
KXMessages* KXMessages_new6(xcb_connection_t* connection, uint32_t rootWindow, const char* accept_broadcast, QObject* parent) {
    return new VirtualKXMessages(connection, rootWindow, accept_broadcast, parent);
}
#endif

#ifdef __linux__
QMetaObject* KXMessages_MetaObject(const KXMessages* self) {
    return (QMetaObject*)self->metaObject();
}
#endif

#ifdef __linux__
void* KXMessages_Metacast(KXMessages* self, const char* param1) {
    return self->qt_metacast(param1);
}
#endif

#ifdef __linux__
int KXMessages_Metacall(KXMessages* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}
#endif

#ifdef __linux__
libqt_string KXMessages_Tr(const char* s) {
    auto _ret = KXMessages::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
#endif

#ifdef __linux__
void KXMessages_BroadcastMessage(KXMessages* self, const char* msg_type, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->broadcastMessage(msg_type, message_QString);
}
#endif

#ifdef __linux__
bool KXMessages_BroadcastMessageX(xcb_connection_t* c, const char* msg_type, const libqt_string message, int screenNumber) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return KXMessages::broadcastMessageX(c, msg_type, message_QString, static_cast<int>(screenNumber));
}
#endif

#ifdef __linux__
void KXMessages_GotMessage(KXMessages* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->gotMessage(message_QString);
}
#endif

void KXMessages_Connect_GotMessage(KXMessages* self, intptr_t slot) {
    void (*slotFunc)(KXMessages*, const char*) = reinterpret_cast<void (*)(KXMessages*, const char*)>(slot);
    KXMessages::connect(self,
                        static_cast<void (KXMessages::*)(const QString&)>(&KXMessages::gotMessage),
                        [self, slotFunc](const QString& message) {
                            const auto message_ret = message;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray message_b = message_ret.toUtf8();
                            auto message_str_len = message_b.length();
                            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                            memcpy((void*)message_str, message_b.data(), message_str_len);
                            ((char*)message_str)[message_str_len] = '\0';
                            const char* sigval1 = message_str;
                            slotFunc(self, sigval1);
                            libqt_free(message_str);
                        });
}

#ifdef __linux__
libqt_string KXMessages_Tr2(const char* s, const char* c) {
    auto _ret = KXMessages::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
#endif

#ifdef __linux__
libqt_string KXMessages_Tr3(const char* s, const char* c, int n) {
    auto _ret = KXMessages::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
#endif

#ifdef __linux__
void KXMessages_BroadcastMessage3(KXMessages* self, const char* msg_type, const libqt_string message, int screen) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->broadcastMessage(msg_type, message_QString, static_cast<int>(screen));
}
#endif

// Base class handler implementation
QMetaObject* KXMessages_SuperMetaObject(const KXMessages* self) {
    return (QMetaObject*)self->KXMessages::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnMetaObject(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self)))
        vkxmessages->kxmessages_metaobject_callback = reinterpret_cast<VirtualKXMessages::KXMessages_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KXMessages_SuperMetacast(KXMessages* self, const char* param1) {
    return self->KXMessages::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnMetacast(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_metacast_callback = reinterpret_cast<VirtualKXMessages::KXMessages_Metacast_Callback>(slot);
}

// Base class handler implementation
int KXMessages_SuperMetacall(KXMessages* self, int param1, int param2, void** param3) {
    return self->KXMessages::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnMetacall(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_metacall_callback = reinterpret_cast<VirtualKXMessages::KXMessages_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KXMessages_Event(KXMessages* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KXMessages_SuperEvent(KXMessages* self, QEvent* event) {
    return self->KXMessages::event(event);
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnEvent(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_event_callback = reinterpret_cast<VirtualKXMessages::KXMessages_Event_Callback>(slot);
}

// Derived class handler implementation
bool KXMessages_EventFilter(KXMessages* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KXMessages_SuperEventFilter(KXMessages* self, QObject* watched, QEvent* event) {
    return self->KXMessages::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnEventFilter(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_eventfilter_callback = reinterpret_cast<VirtualKXMessages::KXMessages_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KXMessages_TimerEvent(KXMessages* self, QTimerEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages) {
        vkxmessages->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXMessages::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMessages_SuperTimerEvent(KXMessages* self, QTimerEvent* event) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self)) {
        vkxmessages->KXMessages::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KXMessages::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnTimerEvent(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_timerevent_callback = reinterpret_cast<VirtualKXMessages::KXMessages_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KXMessages_ChildEvent(KXMessages* self, QChildEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages) {
        vkxmessages->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXMessages::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMessages_SuperChildEvent(KXMessages* self, QChildEvent* event) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self)) {
        vkxmessages->KXMessages::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KXMessages::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnChildEvent(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_childevent_callback = reinterpret_cast<VirtualKXMessages::KXMessages_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KXMessages_CustomEvent(KXMessages* self, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages) {
        vkxmessages->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXMessages::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMessages_SuperCustomEvent(KXMessages* self, QEvent* event) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self)) {
        vkxmessages->KXMessages::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KXMessages::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnCustomEvent(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_customevent_callback = reinterpret_cast<VirtualKXMessages::KXMessages_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KXMessages_ConnectNotify(KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages) {
        vkxmessages->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXMessages::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMessages_SuperConnectNotify(KXMessages* self, const QMetaMethod* signal) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self)) {
        vkxmessages->KXMessages::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXMessages::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnConnectNotify(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_connectnotify_callback = reinterpret_cast<VirtualKXMessages::KXMessages_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KXMessages_DisconnectNotify(KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages) {
        vkxmessages->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXMessages::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMessages_SuperDisconnectNotify(KXMessages* self, const QMetaMethod* signal) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self)) {
        vkxmessages->KXMessages::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXMessages::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnDisconnectNotify(KXMessages* self, intptr_t slot) {
    if (auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self))
        vkxmessages->kxmessages_disconnectnotify_callback = reinterpret_cast<VirtualKXMessages::KXMessages_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KXMessages_Sender(const KXMessages* self) {
    if (auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self))) {
        return vkxmessages->VirtualKXMessages::sender();
    } else
        qFatal("Error: Protected method KXMessages::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KXMessages_SenderSignalIndex(const KXMessages* self) {
    if (auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self))) {
        return vkxmessages->VirtualKXMessages::senderSignalIndex();
    } else
        qFatal("Error: Protected method KXMessages::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KXMessages_Receivers(const KXMessages* self, const char* signal) {
    if (auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self))) {
        return vkxmessages->VirtualKXMessages::receivers(signal);
    } else
        qFatal("Error: Protected method KXMessages::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXMessages_IsSignalConnected(const KXMessages* self, const QMetaMethod* signal) {
    if (auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self))) {
        return vkxmessages->VirtualKXMessages::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KXMessages::isSignalConnected called without a directly constructed type");
}

void KXMessages_Delete(KXMessages* self) {
    delete self;
}
