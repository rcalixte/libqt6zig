#include <QAbstractButton>
#include <QButtonGroup>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qbuttongroup.h>
#include "libqbuttongroup.h"
#include "libqbuttongroup.hxx"

QButtonGroup* QButtonGroup_new() {
    return new VirtualQButtonGroup();
}

QButtonGroup* QButtonGroup_new2(QObject* parent) {
    return new VirtualQButtonGroup(parent);
}

QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QButtonGroup_Metacast(QButtonGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QButtonGroup_Metacall(QButtonGroup* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QButtonGroup_Tr(const char* s) {
    auto _ret = QButtonGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive) {
    self->setExclusive(exclusive);
}

bool QButtonGroup_Exclusive(const QButtonGroup* self) {
    return self->exclusive();
}

void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1) {
    self->addButton(param1);
}

void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1) {
    self->removeButton(param1);
}

libqt_list /* of QAbstractButton* */ QButtonGroup_Buttons(const QButtonGroup* self) {
    QList<QAbstractButton*> _ret = self->buttons();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self) {
    return self->checkedButton();
}

QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id) {
    return self->button(static_cast<int>(id));
}

void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id) {
    self->setId(button, static_cast<int>(id));
}

int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button) {
    return self->id(button);
}

int QButtonGroup_CheckedId(const QButtonGroup* self) {
    return self->checkedId();
}

void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1) {
    self->buttonClicked(param1);
}

void QButtonGroup_Connect_ButtonClicked(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked),
                          [self, slotFunc](QAbstractButton* param1) {
                              QAbstractButton* sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1) {
    self->buttonPressed(param1);
}

void QButtonGroup_Connect_ButtonPressed(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonPressed),
                          [self, slotFunc](QAbstractButton* param1) {
                              QAbstractButton* sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1) {
    self->buttonReleased(param1);
}

void QButtonGroup_Connect_ButtonReleased(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonReleased),
                          [self, slotFunc](QAbstractButton* param1) {
                              QAbstractButton* sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
    self->buttonToggled(param1, param2);
}

void QButtonGroup_Connect_ButtonToggled(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*, bool) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*, bool)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(QAbstractButton*, bool)>(&QButtonGroup::buttonToggled),
                          [self, slotFunc](QAbstractButton* param1, bool param2) {
                              QAbstractButton* sigval1 = param1;
                              bool sigval2 = param2;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QButtonGroup_IdClicked(QButtonGroup* self, int param1) {
    self->idClicked(static_cast<int>(param1));
}

void QButtonGroup_Connect_IdClicked(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idClicked),
                          [self, slotFunc](int param1) {
                              int sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QButtonGroup_IdPressed(QButtonGroup* self, int param1) {
    self->idPressed(static_cast<int>(param1));
}

void QButtonGroup_Connect_IdPressed(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idPressed),
                          [self, slotFunc](int param1) {
                              int sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QButtonGroup_IdReleased(QButtonGroup* self, int param1) {
    self->idReleased(static_cast<int>(param1));
}

void QButtonGroup_Connect_IdReleased(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idReleased),
                          [self, slotFunc](int param1) {
                              int sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2) {
    self->idToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_Connect_IdToggled(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int, bool) = reinterpret_cast<void (*)(QButtonGroup*, int, bool)>(slot);
    QButtonGroup::connect(self,
                          static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::idToggled),
                          [self, slotFunc](int param1, bool param2) {
                              int sigval1 = param1;
                              bool sigval2 = param2;
                              slotFunc(self, sigval1, sigval2);
                          });
}

libqt_string QButtonGroup_Tr2(const char* s, const char* c) {
    auto _ret = QButtonGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QButtonGroup_Tr3(const char* s, const char* c, int n) {
    auto _ret = QButtonGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
    self->addButton(param1, static_cast<int>(id));
}

// Base class handler implementation
QMetaObject* QButtonGroup_SuperMetaObject(const QButtonGroup* self) {
    return (QMetaObject*)self->QButtonGroup::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnMetaObject(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self)))
        vqbuttongroup->qbuttongroup_metaobject_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QButtonGroup_SuperMetacast(QButtonGroup* self, const char* param1) {
    return self->QButtonGroup::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnMetacast(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_metacast_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Metacast_Callback>(slot);
}

// Base class handler implementation
int QButtonGroup_SuperMetacall(QButtonGroup* self, int param1, int param2, void** param3) {
    return self->QButtonGroup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnMetacall(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_metacall_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QButtonGroup_Event(QButtonGroup* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QButtonGroup_SuperEvent(QButtonGroup* self, QEvent* event) {
    return self->QButtonGroup::event(event);
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnEvent(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_event_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Event_Callback>(slot);
}

// Derived class handler implementation
bool QButtonGroup_EventFilter(QButtonGroup* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QButtonGroup_SuperEventFilter(QButtonGroup* self, QObject* watched, QEvent* event) {
    return self->QButtonGroup::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnEventFilter(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_eventfilter_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QButtonGroup_TimerEvent(QButtonGroup* self, QTimerEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup) {
        vqbuttongroup->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QButtonGroup::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QButtonGroup_SuperTimerEvent(QButtonGroup* self, QTimerEvent* event) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self)) {
        vqbuttongroup->QButtonGroup::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QButtonGroup::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnTimerEvent(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_timerevent_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QButtonGroup_ChildEvent(QButtonGroup* self, QChildEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup) {
        vqbuttongroup->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QButtonGroup::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QButtonGroup_SuperChildEvent(QButtonGroup* self, QChildEvent* event) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self)) {
        vqbuttongroup->QButtonGroup::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QButtonGroup::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnChildEvent(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_childevent_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QButtonGroup_CustomEvent(QButtonGroup* self, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup) {
        vqbuttongroup->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QButtonGroup::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QButtonGroup_SuperCustomEvent(QButtonGroup* self, QEvent* event) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self)) {
        vqbuttongroup->QButtonGroup::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QButtonGroup::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnCustomEvent(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_customevent_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QButtonGroup_ConnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup) {
        vqbuttongroup->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QButtonGroup::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QButtonGroup_SuperConnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self)) {
        vqbuttongroup->QButtonGroup::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QButtonGroup::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnConnectNotify(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_connectnotify_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QButtonGroup_DisconnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup) {
        vqbuttongroup->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QButtonGroup::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QButtonGroup_SuperDisconnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self)) {
        vqbuttongroup->QButtonGroup::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QButtonGroup::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnDisconnectNotify(QButtonGroup* self, intptr_t slot) {
    if (auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self))
        vqbuttongroup->qbuttongroup_disconnectnotify_callback = reinterpret_cast<VirtualQButtonGroup::QButtonGroup_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QButtonGroup_Sender(const QButtonGroup* self) {
    if (auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self))) {
        return vqbuttongroup->VirtualQButtonGroup::sender();
    } else
        qFatal("Error: Protected method QButtonGroup::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QButtonGroup_SenderSignalIndex(const QButtonGroup* self) {
    if (auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self))) {
        return vqbuttongroup->VirtualQButtonGroup::senderSignalIndex();
    } else
        qFatal("Error: Protected method QButtonGroup::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QButtonGroup_Receivers(const QButtonGroup* self, const char* signal) {
    if (auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self))) {
        return vqbuttongroup->VirtualQButtonGroup::receivers(signal);
    } else
        qFatal("Error: Protected method QButtonGroup::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QButtonGroup_IsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal) {
    if (auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self))) {
        return vqbuttongroup->VirtualQButtonGroup::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QButtonGroup::isSignalConnected called without a directly constructed type");
}

void QButtonGroup_Delete(QButtonGroup* self) {
    delete self;
}
