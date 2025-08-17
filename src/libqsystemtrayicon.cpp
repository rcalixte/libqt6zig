#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemTrayIcon>
#include <QTimerEvent>
#include <qsystemtrayicon.h>
#include "libqsystemtrayicon.h"
#include "libqsystemtrayicon.hxx"

QSystemTrayIcon* QSystemTrayIcon_new() {
    return new VirtualQSystemTrayIcon();
}

QSystemTrayIcon* QSystemTrayIcon_new2(const QIcon* icon) {
    return new VirtualQSystemTrayIcon(*icon);
}

QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent) {
    return new VirtualQSystemTrayIcon(parent);
}

QSystemTrayIcon* QSystemTrayIcon_new4(const QIcon* icon, QObject* parent) {
    return new VirtualQSystemTrayIcon(*icon, parent);
}

QMetaObject* QSystemTrayIcon_MetaObject(const QSystemTrayIcon* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSystemTrayIcon_Metacast(QSystemTrayIcon* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSystemTrayIcon_Metacall(QSystemTrayIcon* self, int param1, int param2, void** param3) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSystemTrayIcon_OnMetacall(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Metacall_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSystemTrayIcon_QBaseMetacall(QSystemTrayIcon* self, int param1, int param2, void** param3) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Metacall_IsBase(true);
        return vqsystemtrayicon->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSystemTrayIcon_Tr(const char* s) {
    QString _ret = QSystemTrayIcon::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu) {
    self->setContextMenu(menu);
}

QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self) {
    return self->contextMenu();
}

QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self) {
    return new QIcon(self->icon());
}

void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, const QIcon* icon) {
    self->setIcon(*icon);
}

libqt_string QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, const libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setToolTip(tip_QString);
}

bool QSystemTrayIcon_IsSystemTrayAvailable() {
    return QSystemTrayIcon::isSystemTrayAvailable();
}

bool QSystemTrayIcon_SupportsMessages() {
    return QSystemTrayIcon::supportsMessages();
}

QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self) {
    return new QRect(self->geometry());
}

bool QSystemTrayIcon_IsVisible(const QSystemTrayIcon* self) {
    return self->isVisible();
}

void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible) {
    self->setVisible(visible);
}

void QSystemTrayIcon_Show(QSystemTrayIcon* self) {
    self->show();
}

void QSystemTrayIcon_Hide(QSystemTrayIcon* self) {
    self->hide();
}

void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->showMessage(title_QString, msg_QString, *icon);
}

void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->showMessage(title_QString, msg_QString);
}

void QSystemTrayIcon_Activated(QSystemTrayIcon* self, int reason) {
    self->activated(static_cast<QSystemTrayIcon::ActivationReason>(reason));
}

void QSystemTrayIcon_Connect_Activated(QSystemTrayIcon* self, intptr_t slot) {
    void (*slotFunc)(QSystemTrayIcon*, int) = reinterpret_cast<void (*)(QSystemTrayIcon*, int)>(slot);
    QSystemTrayIcon::connect(self, &QSystemTrayIcon::activated, [self, slotFunc](QSystemTrayIcon::ActivationReason reason) {
        int sigval1 = static_cast<int>(reason);
        slotFunc(self, sigval1);
    });
}

void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self) {
    self->messageClicked();
}

void QSystemTrayIcon_Connect_MessageClicked(QSystemTrayIcon* self, intptr_t slot) {
    void (*slotFunc)(QSystemTrayIcon*) = reinterpret_cast<void (*)(QSystemTrayIcon*)>(slot);
    QSystemTrayIcon::connect(self, &QSystemTrayIcon::messageClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QSystemTrayIcon_Tr2(const char* s, const char* c) {
    QString _ret = QSystemTrayIcon::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSystemTrayIcon_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSystemTrayIcon::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon, int msecs) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->showMessage(title_QString, msg_QString, *icon, static_cast<int>(msecs));
}

void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->showMessage(title_QString, msg_QString, static_cast<QSystemTrayIcon::MessageIcon>(icon));
}

void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon, int msecs) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->showMessage(title_QString, msg_QString, static_cast<QSystemTrayIcon::MessageIcon>(icon), static_cast<int>(msecs));
}

// Derived class handler implementation
bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return vqsystemtrayicon->event(event);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->event(event);
    }
}

// Base class handler implementation
bool QSystemTrayIcon_QBaseEvent(QSystemTrayIcon* self, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Event_IsBase(true);
        return vqsystemtrayicon->event(event);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnEvent(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Event_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSystemTrayIcon_EventFilter(QSystemTrayIcon* self, QObject* watched, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return vqsystemtrayicon->eventFilter(watched, event);
    } else {
        return self->QSystemTrayIcon::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSystemTrayIcon_QBaseEventFilter(QSystemTrayIcon* self, QObject* watched, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_EventFilter_IsBase(true);
        return vqsystemtrayicon->eventFilter(watched, event);
    } else {
        return self->QSystemTrayIcon::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnEventFilter(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_EventFilter_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSystemTrayIcon_TimerEvent(QSystemTrayIcon* self, QTimerEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->timerEvent(event);
    } else {
        ((VirtualQSystemTrayIcon*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSystemTrayIcon_QBaseTimerEvent(QSystemTrayIcon* self, QTimerEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_TimerEvent_IsBase(true);
        vqsystemtrayicon->timerEvent(event);
    } else {
        ((VirtualQSystemTrayIcon*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnTimerEvent(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_TimerEvent_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSystemTrayIcon_ChildEvent(QSystemTrayIcon* self, QChildEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->childEvent(event);
    } else {
        ((VirtualQSystemTrayIcon*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSystemTrayIcon_QBaseChildEvent(QSystemTrayIcon* self, QChildEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_ChildEvent_IsBase(true);
        vqsystemtrayicon->childEvent(event);
    } else {
        ((VirtualQSystemTrayIcon*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnChildEvent(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_ChildEvent_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSystemTrayIcon_CustomEvent(QSystemTrayIcon* self, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->customEvent(event);
    } else {
        ((VirtualQSystemTrayIcon*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSystemTrayIcon_QBaseCustomEvent(QSystemTrayIcon* self, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_CustomEvent_IsBase(true);
        vqsystemtrayicon->customEvent(event);
    } else {
        ((VirtualQSystemTrayIcon*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnCustomEvent(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_CustomEvent_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSystemTrayIcon_ConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->connectNotify(*signal);
    } else {
        ((VirtualQSystemTrayIcon*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSystemTrayIcon_QBaseConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_ConnectNotify_IsBase(true);
        vqsystemtrayicon->connectNotify(*signal);
    } else {
        ((VirtualQSystemTrayIcon*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnConnectNotify(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_ConnectNotify_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSystemTrayIcon_DisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->disconnectNotify(*signal);
    } else {
        ((VirtualQSystemTrayIcon*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSystemTrayIcon_QBaseDisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_DisconnectNotify_IsBase(true);
        vqsystemtrayicon->disconnectNotify(*signal);
    } else {
        ((VirtualQSystemTrayIcon*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnDisconnectNotify(QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_DisconnectNotify_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSystemTrayIcon_Sender(const QSystemTrayIcon* self) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return vqsystemtrayicon->sender();
    } else {
        return ((VirtualQSystemTrayIcon*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSystemTrayIcon_QBaseSender(const QSystemTrayIcon* self) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Sender_IsBase(true);
        return vqsystemtrayicon->sender();
    } else {
        return ((VirtualQSystemTrayIcon*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnSender(const QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Sender_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSystemTrayIcon_SenderSignalIndex(const QSystemTrayIcon* self) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return vqsystemtrayicon->senderSignalIndex();
    } else {
        return ((VirtualQSystemTrayIcon*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSystemTrayIcon_QBaseSenderSignalIndex(const QSystemTrayIcon* self) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_SenderSignalIndex_IsBase(true);
        return vqsystemtrayicon->senderSignalIndex();
    } else {
        return ((VirtualQSystemTrayIcon*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnSenderSignalIndex(const QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSystemTrayIcon_Receivers(const QSystemTrayIcon* self, const char* signal) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return vqsystemtrayicon->receivers(signal);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSystemTrayIcon_QBaseReceivers(const QSystemTrayIcon* self, const char* signal) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Receivers_IsBase(true);
        return vqsystemtrayicon->receivers(signal);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnReceivers(const QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_Receivers_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSystemTrayIcon_IsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        return vqsystemtrayicon->isSignalConnected(*signal);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSystemTrayIcon_QBaseIsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_IsSignalConnected_IsBase(true);
        return vqsystemtrayicon->isSignalConnected(*signal);
    } else {
        return ((VirtualQSystemTrayIcon*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnIsSignalConnected(const QSystemTrayIcon* self, intptr_t slot) {
    auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self));
    if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
        vqsystemtrayicon->setQSystemTrayIcon_IsSignalConnected_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_IsSignalConnected_Callback>(slot));
    }
}

void QSystemTrayIcon_Delete(QSystemTrayIcon* self) {
    delete self;
}
