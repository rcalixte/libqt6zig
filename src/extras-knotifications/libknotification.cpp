#include <KNotification>
#include <KNotificationReplyAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWindow>
#include <knotification.h>
#include "libknotification.h"
#include "libknotification.hxx"

KNotificationAction* KNotificationAction_new() {
    return new VirtualKNotificationAction();
}

KNotificationAction* KNotificationAction_new2(const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualKNotificationAction(label_QString);
}

KNotificationAction* KNotificationAction_new3(QObject* parent) {
    return new VirtualKNotificationAction(parent);
}

QMetaObject* KNotificationAction_MetaObject(const KNotificationAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNotificationAction_Metacast(KNotificationAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNotificationAction_Metacall(KNotificationAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNotificationAction_Tr(const char* s) {
    auto _ret = KNotificationAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotificationAction_Label(const KNotificationAction* self) {
    auto _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationAction_SetLabel(KNotificationAction* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

void KNotificationAction_Activated(KNotificationAction* self) {
    self->activated();
}

void KNotificationAction_Connect_Activated(KNotificationAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationAction*) = reinterpret_cast<void (*)(KNotificationAction*)>(slot);
    KNotificationAction::connect(self,
                                 static_cast<void (KNotificationAction::*)()>(&KNotificationAction::activated),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

void KNotificationAction_LabelChanged(KNotificationAction* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->labelChanged(label_QString);
}

void KNotificationAction_Connect_LabelChanged(KNotificationAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationAction*, const char*) = reinterpret_cast<void (*)(KNotificationAction*, const char*)>(slot);
    KNotificationAction::connect(self,
                                 static_cast<void (KNotificationAction::*)(const QString&)>(&KNotificationAction::labelChanged),
                                 [self, slotFunc](const QString& label) {
                                     const auto label_ret = label;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray label_b = label_ret.toUtf8();
                                     auto label_str_len = label_b.length();
                                     const char* label_str = static_cast<const char*>(malloc(label_str_len + 1));
                                     memcpy((void*)label_str, label_b.data(), label_str_len);
                                     ((char*)label_str)[label_str_len] = '\0';
                                     const char* sigval1 = label_str;
                                     slotFunc(self, sigval1);
                                     libqt_free(label_str);
                                 });
}

libqt_string KNotificationAction_Tr2(const char* s, const char* c) {
    auto _ret = KNotificationAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotificationAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNotificationAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNotificationAction_SuperMetaObject(const KNotificationAction* self) {
    return (QMetaObject*)self->KNotificationAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnMetaObject(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = const_cast<VirtualKNotificationAction*>(dynamic_cast<const VirtualKNotificationAction*>(self)))
        vknotificationaction->knotificationaction_metaobject_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNotificationAction_SuperMetacast(KNotificationAction* self, const char* param1) {
    return self->KNotificationAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnMetacast(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_metacast_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNotificationAction_SuperMetacall(KNotificationAction* self, int param1, int param2, void** param3) {
    return self->KNotificationAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnMetacall(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_metacall_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KNotificationAction_Event(KNotificationAction* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KNotificationAction_SuperEvent(KNotificationAction* self, QEvent* event) {
    return self->KNotificationAction::event(event);
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnEvent(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_event_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNotificationAction_EventFilter(KNotificationAction* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNotificationAction_SuperEventFilter(KNotificationAction* self, QObject* watched, QEvent* event) {
    return self->KNotificationAction::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnEventFilter(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_eventfilter_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNotificationAction_TimerEvent(KNotificationAction* self, QTimerEvent* event) {
    auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self);
    if (vknotificationaction) {
        vknotificationaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotificationAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationAction_SuperTimerEvent(KNotificationAction* self, QTimerEvent* event) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self)) {
        vknotificationaction->KNotificationAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotificationAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnTimerEvent(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_timerevent_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotificationAction_ChildEvent(KNotificationAction* self, QChildEvent* event) {
    auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self);
    if (vknotificationaction) {
        vknotificationaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotificationAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationAction_SuperChildEvent(KNotificationAction* self, QChildEvent* event) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self)) {
        vknotificationaction->KNotificationAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotificationAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnChildEvent(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_childevent_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotificationAction_CustomEvent(KNotificationAction* self, QEvent* event) {
    auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self);
    if (vknotificationaction) {
        vknotificationaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotificationAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationAction_SuperCustomEvent(KNotificationAction* self, QEvent* event) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self)) {
        vknotificationaction->KNotificationAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotificationAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnCustomEvent(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_customevent_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotificationAction_ConnectNotify(KNotificationAction* self, const QMetaMethod* signal) {
    auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self);
    if (vknotificationaction) {
        vknotificationaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNotificationAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationAction_SuperConnectNotify(KNotificationAction* self, const QMetaMethod* signal) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self)) {
        vknotificationaction->KNotificationAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNotificationAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnConnectNotify(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_connectnotify_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNotificationAction_DisconnectNotify(KNotificationAction* self, const QMetaMethod* signal) {
    auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self);
    if (vknotificationaction) {
        vknotificationaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNotificationAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationAction_SuperDisconnectNotify(KNotificationAction* self, const QMetaMethod* signal) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self)) {
        vknotificationaction->KNotificationAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNotificationAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationAction_OnDisconnectNotify(KNotificationAction* self, intptr_t slot) {
    if (auto* vknotificationaction = dynamic_cast<VirtualKNotificationAction*>(self))
        vknotificationaction->knotificationaction_disconnectnotify_callback = reinterpret_cast<VirtualKNotificationAction::KNotificationAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KNotificationAction_Sender(const KNotificationAction* self) {
    if (auto* vknotificationaction = const_cast<VirtualKNotificationAction*>(dynamic_cast<const VirtualKNotificationAction*>(self))) {
        return vknotificationaction->VirtualKNotificationAction::sender();
    } else
        qFatal("Error: Protected method KNotificationAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNotificationAction_SenderSignalIndex(const KNotificationAction* self) {
    if (auto* vknotificationaction = const_cast<VirtualKNotificationAction*>(dynamic_cast<const VirtualKNotificationAction*>(self))) {
        return vknotificationaction->VirtualKNotificationAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNotificationAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNotificationAction_Receivers(const KNotificationAction* self, const char* signal) {
    if (auto* vknotificationaction = const_cast<VirtualKNotificationAction*>(dynamic_cast<const VirtualKNotificationAction*>(self))) {
        return vknotificationaction->VirtualKNotificationAction::receivers(signal);
    } else
        qFatal("Error: Protected method KNotificationAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNotificationAction_IsSignalConnected(const KNotificationAction* self, const QMetaMethod* signal) {
    if (auto* vknotificationaction = const_cast<VirtualKNotificationAction*>(dynamic_cast<const VirtualKNotificationAction*>(self))) {
        return vknotificationaction->VirtualKNotificationAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNotificationAction::isSignalConnected called without a directly constructed type");
}

void KNotificationAction_Delete(KNotificationAction* self) {
    delete self;
}

KNotification* KNotification_new(const libqt_string eventId) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    return new VirtualKNotification(eventId_QString);
}

KNotification* KNotification_new2(const libqt_string eventId, int flags) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    return new VirtualKNotification(eventId_QString, static_cast<KNotification::NotificationFlags>(flags));
}

KNotification* KNotification_new3(const libqt_string eventId, int flags, QObject* parent) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    return new VirtualKNotification(eventId_QString, static_cast<KNotification::NotificationFlags>(flags), parent);
}

QMetaObject* KNotification_MetaObject(const KNotification* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNotification_Metacast(KNotification* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNotification_Metacall(KNotification* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNotification_Tr(const char* s) {
    auto _ret = KNotification::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotification_EventId(const KNotification* self) {
    auto _ret = self->eventId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotification_SetEventId(KNotification* self, const libqt_string eventId) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    self->setEventId(eventId_QString);
}

libqt_string KNotification_Title(const KNotification* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotification_SetTitle(KNotification* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string KNotification_Text(const KNotification* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotification_SetText(KNotification* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string KNotification_IconName(const KNotification* self) {
    auto _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotification_SetIconName(KNotification* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setIconName(icon_QString);
}

QPixmap* KNotification_Pixmap(const KNotification* self) {
    return new QPixmap(self->pixmap());
}

void KNotification_SetPixmap(KNotification* self, const QPixmap* pix) {
    self->setPixmap(*pix);
}

KNotificationAction* KNotification_DefaultAction(const KNotification* self) {
    return self->defaultAction();
}

KNotificationAction* KNotification_AddDefaultAction(KNotification* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->addDefaultAction(label_QString);
}

KNotificationAction* KNotification_AddAction(KNotification* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->addAction(label_QString);
}

void KNotification_ClearActions(KNotification* self) {
    self->clearActions();
}

KNotificationReplyAction* KNotification_ReplyAction(const KNotification* self) {
    return self->replyAction();
}

void KNotification_SetReplyAction(KNotification* self, KNotificationReplyAction* replyAction) {
    self->setReplyAction(std::unique_ptr<KNotificationReplyAction>(replyAction));
}

int KNotification_Flags(const KNotification* self) {
    return static_cast<int>(self->flags());
}

void KNotification_SetFlags(KNotification* self, const int* flags) {
    self->setFlags((const KNotification::NotificationFlags&)(*flags));
}

libqt_string KNotification_ComponentName(const KNotification* self) {
    auto _ret = self->componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotification_SetComponentName(KNotification* self, const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    self->setComponentName(componentName_QString);
}

libqt_list /* of QUrl* */ KNotification_Urls(const KNotification* self) {
    QList<QUrl> _ret = self->urls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNotification_SetUrls(KNotification* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setUrls(urls_QList);
}

int KNotification_Urgency(const KNotification* self) {
    return static_cast<int>(self->urgency());
}

void KNotification_SetUrgency(KNotification* self, int urgency) {
    self->setUrgency(static_cast<KNotification::Urgency>(urgency));
}

void KNotification_SetWindow(KNotification* self, QWindow* window) {
    self->setWindow(window);
}

QWindow* KNotification_Window(const KNotification* self) {
    return self->window();
}

libqt_string KNotification_AppName(const KNotification* self) {
    auto _ret = self->appName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KNotification_IsAutoDelete(const KNotification* self) {
    return self->isAutoDelete();
}

void KNotification_SetAutoDelete(KNotification* self, bool autoDelete) {
    self->setAutoDelete(autoDelete);
}

libqt_string KNotification_XdgActivationToken(const KNotification* self) {
    auto _ret = self->xdgActivationToken();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotification_Closed(KNotification* self) {
    self->closed();
}

void KNotification_Connect_Closed(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::closed),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_Ignored(KNotification* self) {
    self->ignored();
}

void KNotification_Connect_Ignored(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::ignored),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_EventIdChanged(KNotification* self) {
    self->eventIdChanged();
}

void KNotification_Connect_EventIdChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::eventIdChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_TitleChanged(KNotification* self) {
    self->titleChanged();
}

void KNotification_Connect_TitleChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::titleChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_TextChanged(KNotification* self) {
    self->textChanged();
}

void KNotification_Connect_TextChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::textChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_IconNameChanged(KNotification* self) {
    self->iconNameChanged();
}

void KNotification_Connect_IconNameChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::iconNameChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_DefaultActionChanged(KNotification* self) {
    self->defaultActionChanged();
}

void KNotification_Connect_DefaultActionChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::defaultActionChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_ActionsChanged(KNotification* self) {
    self->actionsChanged();
}

void KNotification_Connect_ActionsChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::actionsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_FlagsChanged(KNotification* self) {
    self->flagsChanged();
}

void KNotification_Connect_FlagsChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::flagsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_ComponentNameChanged(KNotification* self) {
    self->componentNameChanged();
}

void KNotification_Connect_ComponentNameChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::componentNameChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_UrlsChanged(KNotification* self) {
    self->urlsChanged();
}

void KNotification_Connect_UrlsChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::urlsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_UrgencyChanged(KNotification* self) {
    self->urgencyChanged();
}

void KNotification_Connect_UrgencyChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::urgencyChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_AutoDeleteChanged(KNotification* self) {
    self->autoDeleteChanged();
}

void KNotification_Connect_AutoDeleteChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::autoDeleteChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_XdgActivationTokenChanged(KNotification* self) {
    self->xdgActivationTokenChanged();
}

void KNotification_Connect_XdgActivationTokenChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::xdgActivationTokenChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_HintsChanged(KNotification* self) {
    self->hintsChanged();
}

void KNotification_Connect_HintsChanged(KNotification* self, intptr_t slot) {
    void (*slotFunc)(KNotification*) = reinterpret_cast<void (*)(KNotification*)>(slot);
    KNotification::connect(self,
                           static_cast<void (KNotification::*)()>(&KNotification::hintsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KNotification_Close(KNotification* self) {
    self->close();
}

void KNotification_SendEvent(KNotification* self) {
    self->sendEvent();
}

void KNotification_SetHint(KNotification* self, const libqt_string hint, const QVariant* value) {
    QString hint_QString = QString::fromUtf8(hint.data, hint.len);
    self->setHint(hint_QString, *value);
}

libqt_map /* of libqt_string to QVariant* */ KNotification_Hints(const KNotification* self) {
    QMap<QString, QVariant> _ret = self->hints();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        auto _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void KNotification_SetHints(KNotification* self, const libqt_map /* of libqt_string to QVariant* */ hints) {
    QMap<QString, QVariant> hints_QMap;
    libqt_string* hints_karr = static_cast<libqt_string*>(hints.keys);
    QVariant** hints_varr = static_cast<QVariant**>(hints.values);
    for (size_t i = 0; i < hints.len; ++i) {
        QString hints_karr_i_QString = QString::fromUtf8(hints_karr[i].data, hints_karr[i].len);
        hints_QMap.insert(hints_karr_i_QString, *(hints_varr[i]));
    }
    self->setHints(hints_QMap);
}

KNotification* KNotification_Event(const libqt_string eventId, const libqt_string title, const libqt_string text) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(eventId_QString, title_QString, text_QString);
}

KNotification* KNotification_Event2(const libqt_string eventId) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    return KNotification::event(eventId_QString);
}

KNotification* KNotification_Event3(int eventId) {
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId));
}

KNotification* KNotification_Event4(int eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), title_QString, text_QString, *pixmap);
}

KNotification* KNotification_Event5(const libqt_string eventId, const libqt_string title, const libqt_string text, const libqt_string iconName) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return KNotification::event(eventId_QString, title_QString, text_QString, iconName_QString);
}

KNotification* KNotification_Event6(int eventId, const libqt_string title, const libqt_string text, const libqt_string iconName) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), title_QString, text_QString, iconName_QString);
}

KNotification* KNotification_Event7(int eventId, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), title_QString, text_QString);
}

void KNotification_Beep() {
    KNotification::beep();
}

libqt_string KNotification_Tr2(const char* s, const char* c) {
    auto _ret = KNotification::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotification_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNotification::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNotification* KNotification_Event42(const libqt_string eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(eventId_QString, title_QString, text_QString, *pixmap);
}

KNotification* KNotification_Event52(const libqt_string eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap, const int* flags) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(eventId_QString, title_QString, text_QString, *pixmap, (const KNotification::NotificationFlags&)(*flags));
}

KNotification* KNotification_Event62(const libqt_string eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap, const int* flags, const libqt_string componentName) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    return KNotification::event(eventId_QString, title_QString, text_QString, *pixmap, (const KNotification::NotificationFlags&)(*flags), componentName_QString);
}

KNotification* KNotification_Event22(const libqt_string eventId, const libqt_string text) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(eventId_QString, text_QString);
}

KNotification* KNotification_Event32(const libqt_string eventId, const libqt_string text, const QPixmap* pixmap) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(eventId_QString, text_QString, *pixmap);
}

KNotification* KNotification_Event43(const libqt_string eventId, const libqt_string text, const QPixmap* pixmap, const int* flags) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(eventId_QString, text_QString, *pixmap, (const KNotification::NotificationFlags&)(*flags));
}

KNotification* KNotification_Event53(const libqt_string eventId, const libqt_string text, const QPixmap* pixmap, const int* flags, const libqt_string componentName) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    return KNotification::event(eventId_QString, text_QString, *pixmap, (const KNotification::NotificationFlags&)(*flags), componentName_QString);
}

KNotification* KNotification_Event23(int eventId, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), text_QString);
}

KNotification* KNotification_Event33(int eventId, const libqt_string text, const QPixmap* pixmap) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), text_QString, *pixmap);
}

KNotification* KNotification_Event44(int eventId, const libqt_string text, const QPixmap* pixmap, const int* flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), text_QString, *pixmap, (const KNotification::NotificationFlags&)(*flags));
}

KNotification* KNotification_Event54(int eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap, const int* flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), title_QString, text_QString, *pixmap, (const KNotification::NotificationFlags&)(*flags));
}

KNotification* KNotification_Event55(const libqt_string eventId, const libqt_string title, const libqt_string text, const libqt_string iconName, const int* flags) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return KNotification::event(eventId_QString, title_QString, text_QString, iconName_QString, (const KNotification::NotificationFlags&)(*flags));
}

KNotification* KNotification_Event63(const libqt_string eventId, const libqt_string title, const libqt_string text, const libqt_string iconName, const int* flags, const libqt_string componentName) {
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    return KNotification::event(eventId_QString, title_QString, text_QString, iconName_QString, (const KNotification::NotificationFlags&)(*flags), componentName_QString);
}

KNotification* KNotification_Event56(int eventId, const libqt_string title, const libqt_string text, const libqt_string iconName, const int* flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), title_QString, text_QString, iconName_QString, (const KNotification::NotificationFlags&)(*flags));
}

KNotification* KNotification_Event45(int eventId, const libqt_string title, const libqt_string text, const int* flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KNotification::event(static_cast<KNotification::StandardEvent>(eventId), title_QString, text_QString, (const KNotification::NotificationFlags&)(*flags));
}

void KNotification_Beep1(const libqt_string reason) {
    QString reason_QString = QString::fromUtf8(reason.data, reason.len);
    KNotification::beep(reason_QString);
}

// Base class handler implementation
QMetaObject* KNotification_SuperMetaObject(const KNotification* self) {
    return (QMetaObject*)self->KNotification::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnMetaObject(KNotification* self, intptr_t slot) {
    if (auto* vknotification = const_cast<VirtualKNotification*>(dynamic_cast<const VirtualKNotification*>(self)))
        vknotification->knotification_metaobject_callback = reinterpret_cast<VirtualKNotification::KNotification_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNotification_SuperMetacast(KNotification* self, const char* param1) {
    return self->KNotification::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnMetacast(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_metacast_callback = reinterpret_cast<VirtualKNotification::KNotification_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNotification_SuperMetacall(KNotification* self, int param1, int param2, void** param3) {
    return self->KNotification::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnMetacall(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_metacall_callback = reinterpret_cast<VirtualKNotification::KNotification_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KNotification_EventFilter(KNotification* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNotification_SuperEventFilter(KNotification* self, QObject* watched, QEvent* event) {
    return self->KNotification::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnEventFilter(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_eventfilter_callback = reinterpret_cast<VirtualKNotification::KNotification_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNotification_TimerEvent(KNotification* self, QTimerEvent* event) {
    auto* vknotification = dynamic_cast<VirtualKNotification*>(self);
    if (vknotification) {
        vknotification->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotification::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotification_SuperTimerEvent(KNotification* self, QTimerEvent* event) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self)) {
        vknotification->KNotification::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotification::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnTimerEvent(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_timerevent_callback = reinterpret_cast<VirtualKNotification::KNotification_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotification_ChildEvent(KNotification* self, QChildEvent* event) {
    auto* vknotification = dynamic_cast<VirtualKNotification*>(self);
    if (vknotification) {
        vknotification->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotification::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotification_SuperChildEvent(KNotification* self, QChildEvent* event) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self)) {
        vknotification->KNotification::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotification::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnChildEvent(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_childevent_callback = reinterpret_cast<VirtualKNotification::KNotification_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotification_CustomEvent(KNotification* self, QEvent* event) {
    auto* vknotification = dynamic_cast<VirtualKNotification*>(self);
    if (vknotification) {
        vknotification->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotification::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotification_SuperCustomEvent(KNotification* self, QEvent* event) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self)) {
        vknotification->KNotification::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotification::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnCustomEvent(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_customevent_callback = reinterpret_cast<VirtualKNotification::KNotification_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotification_ConnectNotify(KNotification* self, const QMetaMethod* signal) {
    auto* vknotification = dynamic_cast<VirtualKNotification*>(self);
    if (vknotification) {
        vknotification->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNotification::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotification_SuperConnectNotify(KNotification* self, const QMetaMethod* signal) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self)) {
        vknotification->KNotification::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNotification::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnConnectNotify(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_connectnotify_callback = reinterpret_cast<VirtualKNotification::KNotification_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNotification_DisconnectNotify(KNotification* self, const QMetaMethod* signal) {
    auto* vknotification = dynamic_cast<VirtualKNotification*>(self);
    if (vknotification) {
        vknotification->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNotification::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotification_SuperDisconnectNotify(KNotification* self, const QMetaMethod* signal) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self)) {
        vknotification->KNotification::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNotification::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotification_OnDisconnectNotify(KNotification* self, intptr_t slot) {
    if (auto* vknotification = dynamic_cast<VirtualKNotification*>(self))
        vknotification->knotification_disconnectnotify_callback = reinterpret_cast<VirtualKNotification::KNotification_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KNotification_Sender(const KNotification* self) {
    if (auto* vknotification = const_cast<VirtualKNotification*>(dynamic_cast<const VirtualKNotification*>(self))) {
        return vknotification->VirtualKNotification::sender();
    } else
        qFatal("Error: Protected method KNotification::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNotification_SenderSignalIndex(const KNotification* self) {
    if (auto* vknotification = const_cast<VirtualKNotification*>(dynamic_cast<const VirtualKNotification*>(self))) {
        return vknotification->VirtualKNotification::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNotification::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNotification_Receivers(const KNotification* self, const char* signal) {
    if (auto* vknotification = const_cast<VirtualKNotification*>(dynamic_cast<const VirtualKNotification*>(self))) {
        return vknotification->VirtualKNotification::receivers(signal);
    } else
        qFatal("Error: Protected method KNotification::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNotification_IsSignalConnected(const KNotification* self, const QMetaMethod* signal) {
    if (auto* vknotification = const_cast<VirtualKNotification*>(dynamic_cast<const VirtualKNotification*>(self))) {
        return vknotification->VirtualKNotification::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNotification::isSignalConnected called without a directly constructed type");
}

void KNotification_Delete(KNotification* self) {
    delete self;
}
