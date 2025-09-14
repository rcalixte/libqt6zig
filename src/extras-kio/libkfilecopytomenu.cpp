#include <KFileCopyToMenu>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileCopyToMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFileCopyToMenu_Tr(const char* s) {
    QString _ret = KFileCopyToMenu::tr(s);
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
    KFileCopyToMenu::connect(self, &KFileCopyToMenu::error, [self, slotFunc](int errorCode, const QString& message) {
        int sigval1 = errorCode;
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval2 = message_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(message_str);
    });
}

libqt_string KFileCopyToMenu_Tr2(const char* s, const char* c) {
    QString _ret = KFileCopyToMenu::tr(s, c);
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
    QString _ret = KFileCopyToMenu::tr(s, c, static_cast<int>(n));
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
int KFileCopyToMenu_QBaseMetacall(KFileCopyToMenu* self, int param1, int param2, void** param3) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Metacall_IsBase(true);
        return vkfilecopytomenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileCopyToMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnMetacall(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Metacall_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCopyToMenu_Event(KFileCopyToMenu* self, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return vkfilecopytomenu->event(event);
    } else {
        return self->KFileCopyToMenu::event(event);
    }
}

// Base class handler implementation
bool KFileCopyToMenu_QBaseEvent(KFileCopyToMenu* self, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Event_IsBase(true);
        return vkfilecopytomenu->event(event);
    } else {
        return self->KFileCopyToMenu::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnEvent(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Event_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCopyToMenu_EventFilter(KFileCopyToMenu* self, QObject* watched, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return vkfilecopytomenu->eventFilter(watched, event);
    } else {
        return self->KFileCopyToMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFileCopyToMenu_QBaseEventFilter(KFileCopyToMenu* self, QObject* watched, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_EventFilter_IsBase(true);
        return vkfilecopytomenu->eventFilter(watched, event);
    } else {
        return self->KFileCopyToMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnEventFilter(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_EventFilter_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCopyToMenu_TimerEvent(KFileCopyToMenu* self, QTimerEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->timerEvent(event);
    } else {
        ((VirtualKFileCopyToMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileCopyToMenu_QBaseTimerEvent(KFileCopyToMenu* self, QTimerEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_TimerEvent_IsBase(true);
        vkfilecopytomenu->timerEvent(event);
    } else {
        ((VirtualKFileCopyToMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnTimerEvent(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_TimerEvent_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCopyToMenu_ChildEvent(KFileCopyToMenu* self, QChildEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->childEvent(event);
    } else {
        ((VirtualKFileCopyToMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileCopyToMenu_QBaseChildEvent(KFileCopyToMenu* self, QChildEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_ChildEvent_IsBase(true);
        vkfilecopytomenu->childEvent(event);
    } else {
        ((VirtualKFileCopyToMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnChildEvent(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_ChildEvent_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCopyToMenu_CustomEvent(KFileCopyToMenu* self, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->customEvent(event);
    } else {
        ((VirtualKFileCopyToMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileCopyToMenu_QBaseCustomEvent(KFileCopyToMenu* self, QEvent* event) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_CustomEvent_IsBase(true);
        vkfilecopytomenu->customEvent(event);
    } else {
        ((VirtualKFileCopyToMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnCustomEvent(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_CustomEvent_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCopyToMenu_ConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->connectNotify(*signal);
    } else {
        ((VirtualKFileCopyToMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileCopyToMenu_QBaseConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_ConnectNotify_IsBase(true);
        vkfilecopytomenu->connectNotify(*signal);
    } else {
        ((VirtualKFileCopyToMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnConnectNotify(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCopyToMenu_DisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->disconnectNotify(*signal);
    } else {
        ((VirtualKFileCopyToMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileCopyToMenu_QBaseDisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_DisconnectNotify_IsBase(true);
        vkfilecopytomenu->disconnectNotify(*signal);
    } else {
        ((VirtualKFileCopyToMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnDisconnectNotify(KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = dynamic_cast<VirtualKFileCopyToMenu*>(self);
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileCopyToMenu_Sender(const KFileCopyToMenu* self) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return vkfilecopytomenu->sender();
    } else {
        return ((VirtualKFileCopyToMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileCopyToMenu_QBaseSender(const KFileCopyToMenu* self) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Sender_IsBase(true);
        return vkfilecopytomenu->sender();
    } else {
        return ((VirtualKFileCopyToMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnSender(const KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Sender_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCopyToMenu_SenderSignalIndex(const KFileCopyToMenu* self) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return vkfilecopytomenu->senderSignalIndex();
    } else {
        return ((VirtualKFileCopyToMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileCopyToMenu_QBaseSenderSignalIndex(const KFileCopyToMenu* self) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_SenderSignalIndex_IsBase(true);
        return vkfilecopytomenu->senderSignalIndex();
    } else {
        return ((VirtualKFileCopyToMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnSenderSignalIndex(const KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCopyToMenu_Receivers(const KFileCopyToMenu* self, const char* signal) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return vkfilecopytomenu->receivers(signal);
    } else {
        return ((VirtualKFileCopyToMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileCopyToMenu_QBaseReceivers(const KFileCopyToMenu* self, const char* signal) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Receivers_IsBase(true);
        return vkfilecopytomenu->receivers(signal);
    } else {
        return ((VirtualKFileCopyToMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnReceivers(const KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_Receivers_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCopyToMenu_IsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        return vkfilecopytomenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileCopyToMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileCopyToMenu_QBaseIsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_IsSignalConnected_IsBase(true);
        return vkfilecopytomenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileCopyToMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCopyToMenu_OnIsSignalConnected(const KFileCopyToMenu* self, intptr_t slot) {
    auto* vkfilecopytomenu = const_cast<VirtualKFileCopyToMenu*>(dynamic_cast<const VirtualKFileCopyToMenu*>(self));
    if (vkfilecopytomenu && vkfilecopytomenu->isVirtualKFileCopyToMenu) {
        vkfilecopytomenu->setKFileCopyToMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileCopyToMenu::KFileCopyToMenu_IsSignalConnected_Callback>(slot));
    }
}

void KFileCopyToMenu_Delete(KFileCopyToMenu* self) {
    delete self;
}
