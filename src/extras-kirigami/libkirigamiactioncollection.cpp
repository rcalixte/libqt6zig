#include <KConfigGroup>
#include <KirigamiActionCollection>
#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kirigamiactioncollection.h>
#include "libkirigamiactioncollection.h"
#include "libkirigamiactioncollection.hxx"

KirigamiActionCollection* KirigamiActionCollection_new(QObject* parent) {
    return new VirtualKirigamiActionCollection(parent);
}

KirigamiActionCollection* KirigamiActionCollection_new2(QObject* parent, const libqt_string cName) {
    QString cName_QString = QString::fromUtf8(cName.data, cName.len);
    return new VirtualKirigamiActionCollection(parent, cName_QString);
}

QMetaObject* KirigamiActionCollection_MetaObject(const KirigamiActionCollection* self) {
    return (QMetaObject*)self->metaObject();
}

void* KirigamiActionCollection_Metacast(KirigamiActionCollection* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KirigamiActionCollection_Metacall(KirigamiActionCollection* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KirigamiActionCollection_Tr(const char* s) {
    auto _ret = KirigamiActionCollection::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KirigamiActionCollection* */ KirigamiActionCollection_AllCollections() {
    const QList<KirigamiActionCollection*>& _ret = KirigamiActionCollection::allCollections();
    // Convert QList<> from C++ memory to manually-managed C memory
    KirigamiActionCollection** _arr = static_cast<KirigamiActionCollection**>(malloc(sizeof(KirigamiActionCollection*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KirigamiActionCollection_Clear(KirigamiActionCollection* self) {
    self->clear();
}

libqt_string KirigamiActionCollection_ConfigGroup(const KirigamiActionCollection* self) {
    auto _ret = self->configGroup();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KirigamiActionCollection_ConfigIsGlobal(const KirigamiActionCollection* self) {
    return self->configIsGlobal();
}

void KirigamiActionCollection_SetConfigGroup(KirigamiActionCollection* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setConfigGroup(group_QString);
}

void KirigamiActionCollection_SetConfigGlobal(KirigamiActionCollection* self, bool global) {
    self->setConfigGlobal(global);
}

void KirigamiActionCollection_ReadSettings(KirigamiActionCollection* self) {
    self->readSettings();
}

void KirigamiActionCollection_WriteSettings(const KirigamiActionCollection* self) {
    self->writeSettings();
}

int KirigamiActionCollection_Count(const KirigamiActionCollection* self) {
    return self->count();
}

bool KirigamiActionCollection_IsEmpty(const KirigamiActionCollection* self) {
    return self->isEmpty();
}

QAction* KirigamiActionCollection_Action(const KirigamiActionCollection* self, int index) {
    return self->action(static_cast<int>(index));
}

QAction* KirigamiActionCollection_Action2(const KirigamiActionCollection* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->action(name_QString);
}

libqt_list /* of QAction* */ KirigamiActionCollection_Actions(const KirigamiActionCollection* self) {
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

libqt_list /* of QAction* */ KirigamiActionCollection_ActionsWithoutGroup(const KirigamiActionCollection* self) {
    const QList<QAction*> _ret = self->actionsWithoutGroup();
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

libqt_list /* of QActionGroup* */ KirigamiActionCollection_ActionGroups(const KirigamiActionCollection* self) {
    const QList<QActionGroup*> _ret = self->actionGroups();
    // Convert QList<> from C++ memory to manually-managed C memory
    QActionGroup** _arr = static_cast<QActionGroup**>(malloc(sizeof(QActionGroup*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KirigamiActionCollection_SetComponentName(KirigamiActionCollection* self, const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    self->setComponentName(componentName_QString);
}

libqt_string KirigamiActionCollection_ComponentName(const KirigamiActionCollection* self) {
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

void KirigamiActionCollection_SetComponentDisplayName(KirigamiActionCollection* self, const libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    self->setComponentDisplayName(displayName_QString);
}

libqt_string KirigamiActionCollection_ComponentDisplayName(const KirigamiActionCollection* self) {
    auto _ret = self->componentDisplayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KirigamiActionCollection_Inserted(KirigamiActionCollection* self, QAction* action) {
    self->inserted(action);
}

void KirigamiActionCollection_Connect_Inserted(KirigamiActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KirigamiActionCollection*, QAction*) = reinterpret_cast<void (*)(KirigamiActionCollection*, QAction*)>(slot);
    KirigamiActionCollection::connect(self,
                                      static_cast<void (KirigamiActionCollection::*)(QAction*)>(&KirigamiActionCollection::inserted),
                                      [self, slotFunc](QAction* action) {
                                          QAction* sigval1 = action;
                                          slotFunc(self, sigval1);
                                      });
}

void KirigamiActionCollection_Changed(KirigamiActionCollection* self) {
    self->changed();
}

void KirigamiActionCollection_Connect_Changed(KirigamiActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KirigamiActionCollection*) = reinterpret_cast<void (*)(KirigamiActionCollection*)>(slot);
    KirigamiActionCollection::connect(self,
                                      static_cast<void (KirigamiActionCollection::*)()>(&KirigamiActionCollection::changed),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void KirigamiActionCollection_ActionHovered(KirigamiActionCollection* self, QAction* action) {
    self->actionHovered(action);
}

void KirigamiActionCollection_Connect_ActionHovered(KirigamiActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KirigamiActionCollection*, QAction*) = reinterpret_cast<void (*)(KirigamiActionCollection*, QAction*)>(slot);
    KirigamiActionCollection::connect(self,
                                      static_cast<void (KirigamiActionCollection::*)(QAction*)>(&KirigamiActionCollection::actionHovered),
                                      [self, slotFunc](QAction* action) {
                                          QAction* sigval1 = action;
                                          slotFunc(self, sigval1);
                                      });
}

void KirigamiActionCollection_ActionTriggered(KirigamiActionCollection* self, QAction* action) {
    self->actionTriggered(action);
}

void KirigamiActionCollection_Connect_ActionTriggered(KirigamiActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KirigamiActionCollection*, QAction*) = reinterpret_cast<void (*)(KirigamiActionCollection*, QAction*)>(slot);
    KirigamiActionCollection::connect(self,
                                      static_cast<void (KirigamiActionCollection::*)(QAction*)>(&KirigamiActionCollection::actionTriggered),
                                      [self, slotFunc](QAction* action) {
                                          QAction* sigval1 = action;
                                          slotFunc(self, sigval1);
                                      });
}

void KirigamiActionCollection_ConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->connectNotify(*signal);
    }
}

void KirigamiActionCollection_SlotActionTriggered(KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->slotActionTriggered();
    }
}

QAction* KirigamiActionCollection_AddAction(KirigamiActionCollection* self, const libqt_string name, QAction* action) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString, action);
}

void KirigamiActionCollection_AddActions(KirigamiActionCollection* self, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->addActions(actions_QList);
}

void KirigamiActionCollection_RemoveAction(KirigamiActionCollection* self, QAction* action) {
    self->removeAction(action);
}

QAction* KirigamiActionCollection_TakeAction(KirigamiActionCollection* self, QAction* action) {
    return self->takeAction(action);
}

QKeySequence* KirigamiActionCollection_DefaultShortcut(QAction* action) {
    return new QKeySequence(KirigamiActionCollection::defaultShortcut(action));
}

libqt_list /* of QKeySequence* */ KirigamiActionCollection_DefaultShortcuts(QAction* action) {
    QList<QKeySequence> _ret = KirigamiActionCollection::defaultShortcuts(action);
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KirigamiActionCollection_SetDefaultShortcut(QAction* action, const QKeySequence* shortcut) {
    KirigamiActionCollection::setDefaultShortcut(action, *shortcut);
}

void KirigamiActionCollection_SetDefaultShortcuts(QAction* action, const libqt_list /* of QKeySequence* */ shortcuts) {
    QList<QKeySequence> shortcuts_QList;
    shortcuts_QList.reserve(shortcuts.len);
    QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts.data);
    for (size_t i = 0; i < shortcuts.len; ++i) {
        shortcuts_QList.push_back(*(shortcuts_arr[i]));
    }
    KirigamiActionCollection::setDefaultShortcuts(action, shortcuts_QList);
}

bool KirigamiActionCollection_IsShortcutsConfigurable(QAction* action) {
    return KirigamiActionCollection::isShortcutsConfigurable(action);
}

void KirigamiActionCollection_SetShortcutsConfigurable(QAction* action, bool configurable) {
    KirigamiActionCollection::setShortcutsConfigurable(action, configurable);
}

libqt_string KirigamiActionCollection_Tr2(const char* s, const char* c) {
    auto _ret = KirigamiActionCollection::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KirigamiActionCollection_Tr3(const char* s, const char* c, int n) {
    auto _ret = KirigamiActionCollection::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KirigamiActionCollection_ReadSettings1(KirigamiActionCollection* self, KConfigGroup* config) {
    self->readSettings(config);
}

void KirigamiActionCollection_WriteSettings1(const KirigamiActionCollection* self, KConfigGroup* config) {
    self->writeSettings(config);
}

void KirigamiActionCollection_WriteSettings2(const KirigamiActionCollection* self, KConfigGroup* config, bool writeDefaults) {
    self->writeSettings(config, writeDefaults);
}

void KirigamiActionCollection_WriteSettings3(const KirigamiActionCollection* self, KConfigGroup* config, bool writeDefaults, QAction* oneAction) {
    self->writeSettings(config, writeDefaults, oneAction);
}

// Base class handler implementation
QMetaObject* KirigamiActionCollection_SuperMetaObject(const KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_MetaObject_IsBase(true);
        return (QMetaObject*)vkirigamiactioncollection->metaObject();
    } else {
        return (QMetaObject*)self->KirigamiActionCollection::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnMetaObject(const KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_MetaObject_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* KirigamiActionCollection_SuperMetacast(KirigamiActionCollection* self, const char* param1) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_Metacast_IsBase(true);
        return vkirigamiactioncollection->qt_metacast(param1);
    } else {
        return self->KirigamiActionCollection::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnMetacast(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_Metacast_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_Metacast_Callback>(slot));
}

// Base class handler implementation
int KirigamiActionCollection_SuperMetacall(KirigamiActionCollection* self, int param1, int param2, void** param3) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_Metacall_IsBase(true);
        return vkirigamiactioncollection->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KirigamiActionCollection::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnMetacall(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_Metacall_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_Metacall_Callback>(slot));
}

// Base class handler implementation
void KirigamiActionCollection_SuperConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_ConnectNotify_IsBase(true);
        vkirigamiactioncollection->connectNotify(*signal);
    } else {
        ((VirtualKirigamiActionCollection*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnConnectNotify(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_ConnectNotify_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_ConnectNotify_Callback>(slot));
}

// Base class handler implementation
void KirigamiActionCollection_SuperSlotActionTriggered(KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_SlotActionTriggered_IsBase(true);
        vkirigamiactioncollection->slotActionTriggered();
    } else {
        ((VirtualKirigamiActionCollection*)self)->slotActionTriggered();
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnSlotActionTriggered(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_SlotActionTriggered_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_SlotActionTriggered_Callback>(slot));
}

// Derived class handler implementation
bool KirigamiActionCollection_Event(KirigamiActionCollection* self, QEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        return vkirigamiactioncollection->event(event);
    } else {
        return self->KirigamiActionCollection::event(event);
    }
}

// Base class handler implementation
bool KirigamiActionCollection_SuperEvent(KirigamiActionCollection* self, QEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_Event_IsBase(true);
        return vkirigamiactioncollection->event(event);
    } else {
        return self->KirigamiActionCollection::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnEvent(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_Event_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_Event_Callback>(slot));
}

// Derived class handler implementation
bool KirigamiActionCollection_EventFilter(KirigamiActionCollection* self, QObject* watched, QEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        return vkirigamiactioncollection->eventFilter(watched, event);
    } else {
        return self->KirigamiActionCollection::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KirigamiActionCollection_SuperEventFilter(KirigamiActionCollection* self, QObject* watched, QEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_EventFilter_IsBase(true);
        return vkirigamiactioncollection->eventFilter(watched, event);
    } else {
        return self->KirigamiActionCollection::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnEventFilter(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_EventFilter_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void KirigamiActionCollection_TimerEvent(KirigamiActionCollection* self, QTimerEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->timerEvent(event);
    } else {
        ((VirtualKirigamiActionCollection*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KirigamiActionCollection_SuperTimerEvent(KirigamiActionCollection* self, QTimerEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_TimerEvent_IsBase(true);
        vkirigamiactioncollection->timerEvent(event);
    } else {
        ((VirtualKirigamiActionCollection*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnTimerEvent(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_TimerEvent_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void KirigamiActionCollection_ChildEvent(KirigamiActionCollection* self, QChildEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->childEvent(event);
    } else {
        ((VirtualKirigamiActionCollection*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KirigamiActionCollection_SuperChildEvent(KirigamiActionCollection* self, QChildEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_ChildEvent_IsBase(true);
        vkirigamiactioncollection->childEvent(event);
    } else {
        ((VirtualKirigamiActionCollection*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnChildEvent(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_ChildEvent_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void KirigamiActionCollection_CustomEvent(KirigamiActionCollection* self, QEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->customEvent(event);
    } else {
        ((VirtualKirigamiActionCollection*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KirigamiActionCollection_SuperCustomEvent(KirigamiActionCollection* self, QEvent* event) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_CustomEvent_IsBase(true);
        vkirigamiactioncollection->customEvent(event);
    } else {
        ((VirtualKirigamiActionCollection*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnCustomEvent(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_CustomEvent_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void KirigamiActionCollection_DisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->disconnectNotify(*signal);
    } else {
        ((VirtualKirigamiActionCollection*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KirigamiActionCollection_SuperDisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_DisconnectNotify_IsBase(true);
        vkirigamiactioncollection->disconnectNotify(*signal);
    } else {
        ((VirtualKirigamiActionCollection*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnDisconnectNotify(KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = dynamic_cast<VirtualKirigamiActionCollection*>(self);
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_DisconnectNotify_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* KirigamiActionCollection_Sender(const KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        return vkirigamiactioncollection->sender();
    } else {
        return ((VirtualKirigamiActionCollection*)self)->sender();
    }
}

// Base class handler implementation
QObject* KirigamiActionCollection_SuperSender(const KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_Sender_IsBase(true);
        return vkirigamiactioncollection->sender();
    } else {
        return ((VirtualKirigamiActionCollection*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnSender(const KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_Sender_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_Sender_Callback>(slot));
}

// Derived class handler implementation
int KirigamiActionCollection_SenderSignalIndex(const KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        return vkirigamiactioncollection->senderSignalIndex();
    } else {
        return ((VirtualKirigamiActionCollection*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KirigamiActionCollection_SuperSenderSignalIndex(const KirigamiActionCollection* self) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_SenderSignalIndex_IsBase(true);
        return vkirigamiactioncollection->senderSignalIndex();
    } else {
        return ((VirtualKirigamiActionCollection*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnSenderSignalIndex(const KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_SenderSignalIndex_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int KirigamiActionCollection_Receivers(const KirigamiActionCollection* self, const char* signal) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        return vkirigamiactioncollection->receivers(signal);
    } else {
        return ((VirtualKirigamiActionCollection*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KirigamiActionCollection_SuperReceivers(const KirigamiActionCollection* self, const char* signal) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_Receivers_IsBase(true);
        return vkirigamiactioncollection->receivers(signal);
    } else {
        return ((VirtualKirigamiActionCollection*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnReceivers(const KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_Receivers_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool KirigamiActionCollection_IsSignalConnected(const KirigamiActionCollection* self, const QMetaMethod* signal) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        return vkirigamiactioncollection->isSignalConnected(*signal);
    } else {
        return ((VirtualKirigamiActionCollection*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KirigamiActionCollection_SuperIsSignalConnected(const KirigamiActionCollection* self, const QMetaMethod* signal) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection) {
        vkirigamiactioncollection->setKirigamiActionCollection_IsSignalConnected_IsBase(true);
        return vkirigamiactioncollection->isSignalConnected(*signal);
    } else {
        return ((VirtualKirigamiActionCollection*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KirigamiActionCollection_OnIsSignalConnected(const KirigamiActionCollection* self, intptr_t slot) {
    auto* vkirigamiactioncollection = const_cast<VirtualKirigamiActionCollection*>(dynamic_cast<const VirtualKirigamiActionCollection*>(self));
    if (vkirigamiactioncollection && vkirigamiactioncollection->isVirtualKirigamiActionCollection)
        vkirigamiactioncollection->setKirigamiActionCollection_IsSignalConnected_Callback(reinterpret_cast<VirtualKirigamiActionCollection::KirigamiActionCollection_IsSignalConnected_Callback>(slot));
}

void KirigamiActionCollection_Delete(KirigamiActionCollection* self) {
    delete self;
}
