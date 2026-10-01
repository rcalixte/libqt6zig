#include <KActionCategory>
#include <KActionCollection>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kactioncategory.h>
#include "libkactioncategory.h"
#include "libkactioncategory.hxx"

KActionCategory* KActionCategory_new(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKActionCategory(text_QString);
}

KActionCategory* KActionCategory_new2(const libqt_string text, KActionCollection* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKActionCategory(text_QString, parent);
}

QMetaObject* KActionCategory_MetaObject(const KActionCategory* self) {
    return (QMetaObject*)self->metaObject();
}

void* KActionCategory_Metacast(KActionCategory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KActionCategory_Metacall(KActionCategory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KActionCategory_Tr(const char* s) {
    auto _ret = KActionCategory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* KActionCategory_AddAction(KActionCategory* self, const libqt_string name, QAction* action) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString, action);
}

QAction* KActionCategory_AddAction2(KActionCategory* self, int actionType) {
    return self->addAction(static_cast<KStandardAction::StandardAction>(actionType));
}

QAction* KActionCategory_AddAction3(KActionCategory* self, int actionType, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(static_cast<KStandardAction::StandardAction>(actionType), name_QString);
}

QAction* KActionCategory_AddAction4(KActionCategory* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString);
}

QAction* KActionCategory_AddAction5(KActionCategory* self, int actionType) {
    return self->addAction(static_cast<KStandardActions::StandardAction>(actionType));
}

libqt_list /* of QAction* */ KActionCategory_Actions(const KActionCategory* self) {
    const QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KActionCollection* KActionCategory_Collection(const KActionCategory* self) {
    return self->collection();
}

libqt_string KActionCategory_Text(const KActionCategory* self) {
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

void KActionCategory_SetText(KActionCategory* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string KActionCategory_Tr2(const char* s, const char* c) {
    auto _ret = KActionCategory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KActionCategory_Tr3(const char* s, const char* c, int n) {
    auto _ret = KActionCategory::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* KActionCategory_AddAction22(KActionCategory* self, int actionType, const QObject* receiver) {
    return self->addAction(static_cast<KStandardAction::StandardAction>(actionType), receiver);
}

QAction* KActionCategory_AddAction32(KActionCategory* self, int actionType, const QObject* receiver, const char* member) {
    return self->addAction(static_cast<KStandardAction::StandardAction>(actionType), receiver, member);
}

QAction* KActionCategory_AddAction33(KActionCategory* self, int actionType, const libqt_string name, const QObject* receiver) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(static_cast<KStandardAction::StandardAction>(actionType), name_QString, receiver);
}

QAction* KActionCategory_AddAction42(KActionCategory* self, int actionType, const libqt_string name, const QObject* receiver, const char* member) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(static_cast<KStandardAction::StandardAction>(actionType), name_QString, receiver, member);
}

QAction* KActionCategory_AddAction23(KActionCategory* self, const libqt_string name, const QObject* receiver) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString, receiver);
}

QAction* KActionCategory_AddAction34(KActionCategory* self, const libqt_string name, const QObject* receiver, const char* member) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString, receiver, member);
}

// Base class handler implementation
QMetaObject* KActionCategory_SuperMetaObject(const KActionCategory* self) {
    return (QMetaObject*)self->KActionCategory::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnMetaObject(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self)))
        vkactioncategory->kactioncategory_metaobject_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KActionCategory_SuperMetacast(KActionCategory* self, const char* param1) {
    return self->KActionCategory::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnMetacast(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_metacast_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_Metacast_Callback>(slot);
}

// Base class handler implementation
int KActionCategory_SuperMetacall(KActionCategory* self, int param1, int param2, void** param3) {
    return self->KActionCategory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnMetacall(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_metacall_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KActionCategory_Event(KActionCategory* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KActionCategory_SuperEvent(KActionCategory* self, QEvent* event) {
    return self->KActionCategory::event(event);
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnEvent(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_event_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_Event_Callback>(slot);
}

// Derived class handler implementation
bool KActionCategory_EventFilter(KActionCategory* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KActionCategory_SuperEventFilter(KActionCategory* self, QObject* watched, QEvent* event) {
    return self->KActionCategory::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnEventFilter(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_eventfilter_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KActionCategory_TimerEvent(KActionCategory* self, QTimerEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory) {
        vkactioncategory->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionCategory::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionCategory_SuperTimerEvent(KActionCategory* self, QTimerEvent* event) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self)) {
        vkactioncategory->KActionCategory::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionCategory::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnTimerEvent(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_timerevent_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionCategory_ChildEvent(KActionCategory* self, QChildEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory) {
        vkactioncategory->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionCategory::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionCategory_SuperChildEvent(KActionCategory* self, QChildEvent* event) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self)) {
        vkactioncategory->KActionCategory::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionCategory::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnChildEvent(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_childevent_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionCategory_CustomEvent(KActionCategory* self, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory) {
        vkactioncategory->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionCategory::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionCategory_SuperCustomEvent(KActionCategory* self, QEvent* event) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self)) {
        vkactioncategory->KActionCategory::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionCategory::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnCustomEvent(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_customevent_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionCategory_ConnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory) {
        vkactioncategory->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KActionCategory::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionCategory_SuperConnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self)) {
        vkactioncategory->KActionCategory::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KActionCategory::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnConnectNotify(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_connectnotify_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KActionCategory_DisconnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory) {
        vkactioncategory->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KActionCategory::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionCategory_SuperDisconnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self)) {
        vkactioncategory->KActionCategory::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KActionCategory::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnDisconnectNotify(KActionCategory* self, intptr_t slot) {
    if (auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self))
        vkactioncategory->kactioncategory_disconnectnotify_callback = reinterpret_cast<VirtualKActionCategory::KActionCategory_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KActionCategory_Sender(const KActionCategory* self) {
    if (auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self))) {
        return vkactioncategory->VirtualKActionCategory::sender();
    } else
        qFatal("Error: Protected method KActionCategory::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KActionCategory_SenderSignalIndex(const KActionCategory* self) {
    if (auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self))) {
        return vkactioncategory->VirtualKActionCategory::senderSignalIndex();
    } else
        qFatal("Error: Protected method KActionCategory::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KActionCategory_Receivers(const KActionCategory* self, const char* signal) {
    if (auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self))) {
        return vkactioncategory->VirtualKActionCategory::receivers(signal);
    } else
        qFatal("Error: Protected method KActionCategory::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KActionCategory_IsSignalConnected(const KActionCategory* self, const QMetaMethod* signal) {
    if (auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self))) {
        return vkactioncategory->VirtualKActionCategory::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KActionCategory::isSignalConnected called without a directly constructed type");
}

void KActionCategory_Delete(KActionCategory* self) {
    delete self;
}
