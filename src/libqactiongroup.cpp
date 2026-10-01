#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qactiongroup.h>
#include "libqactiongroup.h"
#include "libqactiongroup.hxx"

QActionGroup* QActionGroup_new(QObject* parent) {
    return new VirtualQActionGroup(parent);
}

QMetaObject* QActionGroup_MetaObject(const QActionGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QActionGroup_Metacast(QActionGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QActionGroup_Metacall(QActionGroup* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QActionGroup_Tr(const char* s) {
    auto _ret = QActionGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a) {
    return self->addAction(a);
}

QAction* QActionGroup_AddAction2(QActionGroup* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(text_QString);
}

QAction* QActionGroup_AddAction3(QActionGroup* self, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(*icon, text_QString);
}

void QActionGroup_RemoveAction(QActionGroup* self, QAction* a) {
    self->removeAction(a);
}

libqt_list /* of QAction* */ QActionGroup_Actions(const QActionGroup* self) {
    QList<QAction*> _ret = self->actions();
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

QAction* QActionGroup_CheckedAction(const QActionGroup* self) {
    return self->checkedAction();
}

bool QActionGroup_IsExclusive(const QActionGroup* self) {
    return self->isExclusive();
}

bool QActionGroup_IsEnabled(const QActionGroup* self) {
    return self->isEnabled();
}

bool QActionGroup_IsVisible(const QActionGroup* self) {
    return self->isVisible();
}

int QActionGroup_ExclusionPolicy(const QActionGroup* self) {
    return static_cast<int>(self->exclusionPolicy());
}

void QActionGroup_SetEnabled(QActionGroup* self, bool enabled) {
    self->setEnabled(enabled);
}

void QActionGroup_SetDisabled(QActionGroup* self, bool b) {
    self->setDisabled(b);
}

void QActionGroup_SetVisible(QActionGroup* self, bool visible) {
    self->setVisible(visible);
}

void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive) {
    self->setExclusive(exclusive);
}

void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy) {
    self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_Triggered(QActionGroup* self, QAction* param1) {
    self->triggered(param1);
}

void QActionGroup_Connect_Triggered(QActionGroup* self, intptr_t slot) {
    void (*slotFunc)(QActionGroup*, QAction*) = reinterpret_cast<void (*)(QActionGroup*, QAction*)>(slot);
    QActionGroup::connect(self,
                          static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::triggered),
                          [self, slotFunc](QAction* param1) {
                              QAction* sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QActionGroup_Hovered(QActionGroup* self, QAction* param1) {
    self->hovered(param1);
}

void QActionGroup_Connect_Hovered(QActionGroup* self, intptr_t slot) {
    void (*slotFunc)(QActionGroup*, QAction*) = reinterpret_cast<void (*)(QActionGroup*, QAction*)>(slot);
    QActionGroup::connect(self,
                          static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::hovered),
                          [self, slotFunc](QAction* param1) {
                              QAction* sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

libqt_string QActionGroup_Tr2(const char* s, const char* c) {
    auto _ret = QActionGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QActionGroup_Tr3(const char* s, const char* c, int n) {
    auto _ret = QActionGroup::tr(s, c, static_cast<int>(n));
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
QMetaObject* QActionGroup_SuperMetaObject(const QActionGroup* self) {
    return (QMetaObject*)self->QActionGroup::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnMetaObject(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self)))
        vqactiongroup->qactiongroup_metaobject_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QActionGroup_SuperMetacast(QActionGroup* self, const char* param1) {
    return self->QActionGroup::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnMetacast(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_metacast_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_Metacast_Callback>(slot);
}

// Base class handler implementation
int QActionGroup_SuperMetacall(QActionGroup* self, int param1, int param2, void** param3) {
    return self->QActionGroup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnMetacall(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_metacall_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QActionGroup_Event(QActionGroup* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QActionGroup_SuperEvent(QActionGroup* self, QEvent* event) {
    return self->QActionGroup::event(event);
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_event_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_Event_Callback>(slot);
}

// Derived class handler implementation
bool QActionGroup_EventFilter(QActionGroup* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QActionGroup_SuperEventFilter(QActionGroup* self, QObject* watched, QEvent* event) {
    return self->QActionGroup::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnEventFilter(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_eventfilter_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QActionGroup_TimerEvent(QActionGroup* self, QTimerEvent* event) {
    auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self);
    if (vqactiongroup) {
        vqactiongroup->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QActionGroup::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QActionGroup_SuperTimerEvent(QActionGroup* self, QTimerEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->QActionGroup::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QActionGroup::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnTimerEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_timerevent_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QActionGroup_ChildEvent(QActionGroup* self, QChildEvent* event) {
    auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self);
    if (vqactiongroup) {
        vqactiongroup->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QActionGroup::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QActionGroup_SuperChildEvent(QActionGroup* self, QChildEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->QActionGroup::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QActionGroup::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnChildEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_childevent_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QActionGroup_CustomEvent(QActionGroup* self, QEvent* event) {
    auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self);
    if (vqactiongroup) {
        vqactiongroup->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QActionGroup::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QActionGroup_SuperCustomEvent(QActionGroup* self, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->QActionGroup::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QActionGroup::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnCustomEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_customevent_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QActionGroup_ConnectNotify(QActionGroup* self, const QMetaMethod* signal) {
    auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self);
    if (vqactiongroup) {
        vqactiongroup->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QActionGroup::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QActionGroup_SuperConnectNotify(QActionGroup* self, const QMetaMethod* signal) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->QActionGroup::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QActionGroup::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnConnectNotify(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_connectnotify_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QActionGroup_DisconnectNotify(QActionGroup* self, const QMetaMethod* signal) {
    auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self);
    if (vqactiongroup) {
        vqactiongroup->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QActionGroup::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QActionGroup_SuperDisconnectNotify(QActionGroup* self, const QMetaMethod* signal) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->QActionGroup::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QActionGroup::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnDisconnectNotify(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self))
        vqactiongroup->qactiongroup_disconnectnotify_callback = reinterpret_cast<VirtualQActionGroup::QActionGroup_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QActionGroup_Sender(const QActionGroup* self) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->VirtualQActionGroup::sender();
    } else
        qFatal("Error: Protected method QActionGroup::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QActionGroup_SenderSignalIndex(const QActionGroup* self) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->VirtualQActionGroup::senderSignalIndex();
    } else
        qFatal("Error: Protected method QActionGroup::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QActionGroup_Receivers(const QActionGroup* self, const char* signal) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->VirtualQActionGroup::receivers(signal);
    } else
        qFatal("Error: Protected method QActionGroup::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QActionGroup_IsSignalConnected(const QActionGroup* self, const QMetaMethod* signal) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->VirtualQActionGroup::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QActionGroup::isSignalConnected called without a directly constructed type");
}

void QActionGroup_Delete(QActionGroup* self) {
    delete self;
}
