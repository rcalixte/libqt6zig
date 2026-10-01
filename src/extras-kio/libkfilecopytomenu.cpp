#include <KFileCopyToMenu>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QWidget>
#include <kfilecopytomenu.h>
#include "libkfilecopytomenu.h"
#include "libkfilecopytomenu.hxx"

KFileCopyToMenu* KFileCopyToMenu_new(QWidget* parentWidget) {
    return new VirtualKFileCopyToMenu(parentWidget);
}

QMetaObject* KFileCopyToMenu_MetaObject(const KFileCopyToMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileCopyToMenu_Metacast(KFileCopyToMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileCopyToMenu_Metacall(KFileCopyToMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileCopyToMenu_Tr(const char* s) {
    auto _ret = KFileCopyToMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileCopyToMenu_SetUrls(KFileCopyToMenu* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setUrls(urls_QList);
}

void KFileCopyToMenu_SetReadOnly(KFileCopyToMenu* self, bool ro) {
    self->setReadOnly(ro);
}

void KFileCopyToMenu_AddActionsTo(const KFileCopyToMenu* self, QMenu* menu) {
    self->addActionsTo(menu);
}

void KFileCopyToMenu_SetAutoErrorHandlingEnabled(KFileCopyToMenu* self, bool b) {
    self->setAutoErrorHandlingEnabled(b);
}

void KFileCopyToMenu_Error(KFileCopyToMenu* self, int errorCode, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->error(static_cast<int>(errorCode), message_QString);
}

void KFileCopyToMenu_Connect_Error(KFileCopyToMenu* self, intptr_t slot) {
    void (*slotFunc)(KFileCopyToMenu*, int, const char*) = reinterpret_cast<void (*)(KFileCopyToMenu*, int, const char*)>(slot);
    KFileCopyToMenu::connect(self,
                             static_cast<void (KFileCopyToMenu::*)(int, const QString&)>(&KFileCopyToMenu::error),
                             [self, slotFunc](int errorCode, const QString& message) {
                                 int sigval1 = errorCode;
                                 const auto message_ret = message;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray message_b = message_ret.toUtf8();
                                 auto message_str_len = message_b.length();
                                 const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                                 memcpy((void*)message_str, message_b.data(), message_str_len);
                                 ((char*)message_str)[message_str_len] = '\0';
                                 const char* sigval2 = message_str;
                                 slotFunc(self, sigval1, sigval2);
                                 libqt_free(message_str);
                             });
}

libqt_string KFileCopyToMenu_Tr2(const char* s, const char* c) {
    auto _ret = KFileCopyToMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileCopyToMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileCopyToMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFileCopyToMenu_SuperMetaObject(const KFileCopyToMenu* self) {
    return (QMetaObject*)self->KFileCopyToMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnMetaObject(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self)))
        vkfilecopytomenu->kfilecopytomenu_metaobject_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileCopyToMenu_SuperMetacast(KFileCopyToMenu* self, const char* param1) {
    return self->KFileCopyToMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnMetacast(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_metacast_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileCopyToMenu_SuperMetacall(KFileCopyToMenu* self, int param1, int param2, void** param3) {
    return self->KFileCopyToMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnMetacall(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_metacall_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KFileCopyToMenu_Event(KFileCopyToMenu* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFileCopyToMenu_SuperEvent(KFileCopyToMenu* self, QEvent* event) {
    return self->KFileCopyToMenu::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnEvent(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_event_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFileCopyToMenu_EventFilter(KFileCopyToMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFileCopyToMenu_SuperEventFilter(KFileCopyToMenu* self, QObject* watched, QEvent* event) {
    return self->KFileCopyToMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnEventFilter(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_eventfilter_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFileCopyToMenu_TimerEvent(KFileCopyToMenu* self, QTimerEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu) {
        vkfilecopytomenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCopyToMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCopyToMenu_SuperTimerEvent(KFileCopyToMenu* self, QTimerEvent* event) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self)) {
        vkfilecopytomenu->KFileCopyToMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCopyToMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnTimerEvent(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_timerevent_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCopyToMenu_ChildEvent(KFileCopyToMenu* self, QChildEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu) {
        vkfilecopytomenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCopyToMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCopyToMenu_SuperChildEvent(KFileCopyToMenu* self, QChildEvent* event) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self)) {
        vkfilecopytomenu->KFileCopyToMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCopyToMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnChildEvent(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_childevent_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCopyToMenu_CustomEvent(KFileCopyToMenu* self, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu) {
        vkfilecopytomenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCopyToMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCopyToMenu_SuperCustomEvent(KFileCopyToMenu* self, QEvent* event) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self)) {
        vkfilecopytomenu->KFileCopyToMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCopyToMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnCustomEvent(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_customevent_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCopyToMenu_ConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu) {
        vkfilecopytomenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileCopyToMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCopyToMenu_SuperConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self)) {
        vkfilecopytomenu->KFileCopyToMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileCopyToMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnConnectNotify(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_connectnotify_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileCopyToMenu_DisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu) {
        vkfilecopytomenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileCopyToMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCopyToMenu_SuperDisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self)) {
        vkfilecopytomenu->KFileCopyToMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileCopyToMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnDisconnectNotify(KFileCopyToMenu* self, intptr_t slot) {
    if (auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self))
        vkfilecopytomenu->kfilecopytomenu_disconnectnotify_callback = reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KFileCopyToMenu_Sender(const KFileCopyToMenu* self) {
    if (auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self))) {
        return vkfilecopytomenu->VirtualKFileCopyToMenu::sender();
    } else
        qFatal("Error: Protected method KFileCopyToMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileCopyToMenu_SenderSignalIndex(const KFileCopyToMenu* self) {
    if (auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self))) {
        return vkfilecopytomenu->VirtualKFileCopyToMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileCopyToMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileCopyToMenu_Receivers(const KFileCopyToMenu* self, const char* signal) {
    if (auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self))) {
        return vkfilecopytomenu->VirtualKFileCopyToMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KFileCopyToMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileCopyToMenu_IsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal) {
    if (auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self))) {
        return vkfilecopytomenu->VirtualKFileCopyToMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileCopyToMenu::isSignalConnected called without a directly constructed type");
}

void KFileCopyToMenu_Delete(KFileCopyToMenu* self) {
    delete self;
}
