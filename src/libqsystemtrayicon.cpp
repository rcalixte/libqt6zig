#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSystemTrayIcon_Tr(const char* s) {
    auto _ret = QSystemTrayIcon::tr(s);
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
    auto _ret = self->toolTip();
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
    QSystemTrayIcon::connect(self,
                             static_cast<void (QSystemTrayIcon::*)(QSystemTrayIcon::ActivationReason)>(&QSystemTrayIcon::activated),
                             [self, slotFunc](QSystemTrayIcon::ActivationReason reason) {
                                 int sigval1 = static_cast<int>(reason);
                                 slotFunc(self, sigval1);
                             });
}

void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self) {
    self->messageClicked();
}

void QSystemTrayIcon_Connect_MessageClicked(QSystemTrayIcon* self, intptr_t slot) {
    void (*slotFunc)(QSystemTrayIcon*) = reinterpret_cast<void (*)(QSystemTrayIcon*)>(slot);
    QSystemTrayIcon::connect(self,
                             static_cast<void (QSystemTrayIcon::*)()>(&QSystemTrayIcon::messageClicked),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon) {
        return vqsystemtrayicon->event(event);
    }
    qFatal("Error: Protected method QSystemTrayIcon::event called without a directly constructed type");
}

libqt_string QSystemTrayIcon_Tr2(const char* s, const char* c) {
    auto _ret = QSystemTrayIcon::tr(s, c);
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
    auto _ret = QSystemTrayIcon::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QSystemTrayIcon_SuperMetaObject(const QSystemTrayIcon* self) {
    return (QMetaObject*)self->QSystemTrayIcon::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnMetaObject(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self)))
        vqsystemtrayicon->qsystemtrayicon_metaobject_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSystemTrayIcon_SuperMetacast(QSystemTrayIcon* self, const char* param1) {
    return self->QSystemTrayIcon::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnMetacast(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_metacast_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSystemTrayIcon_SuperMetacall(QSystemTrayIcon* self, int param1, int param2, void** param3) {
    return self->QSystemTrayIcon::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnMetacall(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_metacall_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QSystemTrayIcon_SuperEvent(QSystemTrayIcon* self, QEvent* event) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self)) {
        return vqsystemtrayicon->QSystemTrayIcon::event(event);
    } else
        qFatal("Error: Protected virtual method QSystemTrayIcon::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnEvent(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_event_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSystemTrayIcon_EventFilter(QSystemTrayIcon* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSystemTrayIcon_SuperEventFilter(QSystemTrayIcon* self, QObject* watched, QEvent* event) {
    return self->QSystemTrayIcon::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnEventFilter(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_eventfilter_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSystemTrayIcon_TimerEvent(QSystemTrayIcon* self, QTimerEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon) {
        vqsystemtrayicon->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSystemTrayIcon::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSystemTrayIcon_SuperTimerEvent(QSystemTrayIcon* self, QTimerEvent* event) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self)) {
        vqsystemtrayicon->QSystemTrayIcon::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSystemTrayIcon::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnTimerEvent(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_timerevent_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSystemTrayIcon_ChildEvent(QSystemTrayIcon* self, QChildEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon) {
        vqsystemtrayicon->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSystemTrayIcon::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSystemTrayIcon_SuperChildEvent(QSystemTrayIcon* self, QChildEvent* event) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self)) {
        vqsystemtrayicon->QSystemTrayIcon::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSystemTrayIcon::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnChildEvent(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_childevent_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSystemTrayIcon_CustomEvent(QSystemTrayIcon* self, QEvent* event) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon) {
        vqsystemtrayicon->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSystemTrayIcon::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSystemTrayIcon_SuperCustomEvent(QSystemTrayIcon* self, QEvent* event) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self)) {
        vqsystemtrayicon->QSystemTrayIcon::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSystemTrayIcon::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnCustomEvent(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_customevent_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSystemTrayIcon_ConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon) {
        vqsystemtrayicon->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSystemTrayIcon::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSystemTrayIcon_SuperConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self)) {
        vqsystemtrayicon->QSystemTrayIcon::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSystemTrayIcon::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnConnectNotify(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_connectnotify_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSystemTrayIcon_DisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
    if (vqsystemtrayicon) {
        vqsystemtrayicon->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSystemTrayIcon::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSystemTrayIcon_SuperDisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self)) {
        vqsystemtrayicon->QSystemTrayIcon::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSystemTrayIcon::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnDisconnectNotify(QSystemTrayIcon* self, intptr_t slot) {
    if (auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self))
        vqsystemtrayicon->qsystemtrayicon_disconnectnotify_callback = reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSystemTrayIcon_Sender(const QSystemTrayIcon* self) {
    if (auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self))) {
        return vqsystemtrayicon->VirtualQSystemTrayIcon::sender();
    } else
        qFatal("Error: Protected method QSystemTrayIcon::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSystemTrayIcon_SenderSignalIndex(const QSystemTrayIcon* self) {
    if (auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self))) {
        return vqsystemtrayicon->VirtualQSystemTrayIcon::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSystemTrayIcon::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSystemTrayIcon_Receivers(const QSystemTrayIcon* self, const char* signal) {
    if (auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self))) {
        return vqsystemtrayicon->VirtualQSystemTrayIcon::receivers(signal);
    } else
        qFatal("Error: Protected method QSystemTrayIcon::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSystemTrayIcon_IsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal) {
    if (auto* vqsystemtrayicon = const_cast<VirtualQSystemTrayIcon*>(dynamic_cast<const VirtualQSystemTrayIcon*>(self))) {
        return vqsystemtrayicon->VirtualQSystemTrayIcon::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSystemTrayIcon::isSignalConnected called without a directly constructed type");
}

void QSystemTrayIcon_Delete(QSystemTrayIcon* self) {
    delete self;
}
