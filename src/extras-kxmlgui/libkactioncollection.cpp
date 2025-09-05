#include <KActionCollection>
#include <KConfigGroup>
#include <KXMLGUIClient>
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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <kactioncollection.h>
#include "libkactioncollection.h"
#include "libkactioncollection.hxx"

KActionCollection* KActionCollection_new(QObject* parent) {
    return new VirtualKActionCollection(parent);
}

KActionCollection* KActionCollection_new2(QObject* parent, const libqt_string cName) {
    QString cName_QString = QString::fromUtf8(cName.data, cName.len);
    return new VirtualKActionCollection(parent, cName_QString);
}

QMetaObject* KActionCollection_MetaObject(const KActionCollection* self) {
    return (QMetaObject*)self->metaObject();
}

void* KActionCollection_Metacast(KActionCollection* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KActionCollection_Metacall(KActionCollection* self, int param1, int param2, void** param3) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKActionCollection*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KActionCollection_Tr(const char* s) {
    QString _ret = KActionCollection::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KActionCollection* */ KActionCollection_AllCollections() {
    const QList<KActionCollection*>& _ret = KActionCollection::allCollections();
    // Convert QList<> from C++ memory to manually-managed C memory
    KActionCollection** _arr = static_cast<KActionCollection**>(malloc(sizeof(KActionCollection*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KActionCollection_Clear(KActionCollection* self) {
    self->clear();
}

void KActionCollection_AssociateWidget(const KActionCollection* self, QWidget* widget) {
    self->associateWidget(widget);
}

void KActionCollection_AddAssociatedWidget(KActionCollection* self, QWidget* widget) {
    self->addAssociatedWidget(widget);
}

void KActionCollection_RemoveAssociatedWidget(KActionCollection* self, QWidget* widget) {
    self->removeAssociatedWidget(widget);
}

libqt_list /* of QWidget* */ KActionCollection_AssociatedWidgets(const KActionCollection* self) {
    QList<QWidget*> _ret = self->associatedWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KActionCollection_ClearAssociatedWidgets(KActionCollection* self) {
    self->clearAssociatedWidgets();
}

libqt_string KActionCollection_ConfigGroup(const KActionCollection* self) {
    QString _ret = self->configGroup();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KActionCollection_ConfigIsGlobal(const KActionCollection* self) {
    return self->configIsGlobal();
}

void KActionCollection_SetConfigGroup(KActionCollection* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setConfigGroup(group_QString);
}

void KActionCollection_SetConfigGlobal(KActionCollection* self, bool global) {
    self->setConfigGlobal(global);
}

void KActionCollection_ReadSettings(KActionCollection* self) {
    self->readSettings();
}

void KActionCollection_ImportGlobalShortcuts(KActionCollection* self, KConfigGroup* config) {
    self->importGlobalShortcuts(config);
}

void KActionCollection_ExportGlobalShortcuts(const KActionCollection* self, KConfigGroup* config) {
    self->exportGlobalShortcuts(config);
}

void KActionCollection_WriteSettings(const KActionCollection* self) {
    self->writeSettings();
}

int KActionCollection_Count(const KActionCollection* self) {
    return self->count();
}

bool KActionCollection_IsEmpty(const KActionCollection* self) {
    return self->isEmpty();
}

QAction* KActionCollection_Action(const KActionCollection* self, int index) {
    return self->action(static_cast<int>(index));
}

QAction* KActionCollection_Action2(const KActionCollection* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->action(name_QString);
}

libqt_list /* of QAction* */ KActionCollection_Actions(const KActionCollection* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAction* */ KActionCollection_ActionsWithoutGroup(const KActionCollection* self) {
    const QList<QAction*> _ret = self->actionsWithoutGroup();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QActionGroup* */ KActionCollection_ActionGroups(const KActionCollection* self) {
    const QList<QActionGroup*> _ret = self->actionGroups();
    // Convert QList<> from C++ memory to manually-managed C memory
    QActionGroup** _arr = static_cast<QActionGroup**>(malloc(sizeof(QActionGroup*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KActionCollection_SetComponentName(KActionCollection* self, const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    self->setComponentName(componentName_QString);
}

libqt_string KActionCollection_ComponentName(const KActionCollection* self) {
    QString _ret = self->componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KActionCollection_SetComponentDisplayName(KActionCollection* self, const libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    self->setComponentDisplayName(displayName_QString);
}

libqt_string KActionCollection_ComponentDisplayName(const KActionCollection* self) {
    QString _ret = self->componentDisplayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KXMLGUIClient* KActionCollection_ParentGUIClient(const KActionCollection* self) {
    return (KXMLGUIClient*)self->parentGUIClient();
}

void KActionCollection_Inserted(KActionCollection* self, QAction* action) {
    self->inserted(action);
}

void KActionCollection_Connect_Inserted(KActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KActionCollection*, QAction*) = reinterpret_cast<void (*)(KActionCollection*, QAction*)>(slot);
    KActionCollection::connect(self, &KActionCollection::inserted, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void KActionCollection_Changed(KActionCollection* self) {
    self->changed();
}

void KActionCollection_Connect_Changed(KActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KActionCollection*) = reinterpret_cast<void (*)(KActionCollection*)>(slot);
    KActionCollection::connect(self, &KActionCollection::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KActionCollection_ActionHovered(KActionCollection* self, QAction* action) {
    self->actionHovered(action);
}

void KActionCollection_Connect_ActionHovered(KActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KActionCollection*, QAction*) = reinterpret_cast<void (*)(KActionCollection*, QAction*)>(slot);
    KActionCollection::connect(self, &KActionCollection::actionHovered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void KActionCollection_ActionTriggered(KActionCollection* self, QAction* action) {
    self->actionTriggered(action);
}

void KActionCollection_Connect_ActionTriggered(KActionCollection* self, intptr_t slot) {
    void (*slotFunc)(KActionCollection*, QAction*) = reinterpret_cast<void (*)(KActionCollection*, QAction*)>(slot);
    KActionCollection::connect(self, &KActionCollection::actionTriggered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void KActionCollection_ConnectNotify(KActionCollection* self, const QMetaMethod* signal) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->connectNotify(*signal);
    }
}

void KActionCollection_SlotActionTriggered(KActionCollection* self) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->slotActionTriggered();
    }
}

QAction* KActionCollection_AddAction(KActionCollection* self, const libqt_string name, QAction* action) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString, action);
}

void KActionCollection_AddActions(KActionCollection* self, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->addActions(actions_QList);
}

void KActionCollection_RemoveAction(KActionCollection* self, QAction* action) {
    self->removeAction(action);
}

QAction* KActionCollection_TakeAction(KActionCollection* self, QAction* action) {
    return self->takeAction(action);
}

QAction* KActionCollection_AddAction2(KActionCollection* self, int actionType) {
    return self->addAction(static_cast<KStandardActions::StandardAction>(actionType));
}

QKeySequence* KActionCollection_DefaultShortcut(QAction* action) {
    return new QKeySequence(KActionCollection::defaultShortcut(action));
}

libqt_list /* of QKeySequence* */ KActionCollection_DefaultShortcuts(QAction* action) {
    QList<QKeySequence> _ret = KActionCollection::defaultShortcuts(action);
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KActionCollection_SetDefaultShortcut(QAction* action, const QKeySequence* shortcut) {
    KActionCollection::setDefaultShortcut(action, *shortcut);
}

void KActionCollection_SetDefaultShortcuts(QAction* action, const libqt_list /* of QKeySequence* */ shortcuts) {
    QList<QKeySequence> shortcuts_QList;
    shortcuts_QList.reserve(shortcuts.len);
    QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts.data);
    for (size_t i = 0; i < shortcuts.len; ++i) {
        shortcuts_QList.push_back(*(shortcuts_arr[i]));
    }
    KActionCollection::setDefaultShortcuts(action, shortcuts_QList);
}

bool KActionCollection_IsShortcutsConfigurable(QAction* action) {
    return KActionCollection::isShortcutsConfigurable(action);
}

void KActionCollection_SetShortcutsConfigurable(QAction* action, bool configurable) {
    KActionCollection::setShortcutsConfigurable(action, configurable);
}

libqt_string KActionCollection_Tr2(const char* s, const char* c) {
    QString _ret = KActionCollection::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KActionCollection_Tr3(const char* s, const char* c, int n) {
    QString _ret = KActionCollection::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KActionCollection_ReadSettings1(KActionCollection* self, KConfigGroup* config) {
    self->readSettings(config);
}

void KActionCollection_ExportGlobalShortcuts2(const KActionCollection* self, KConfigGroup* config, bool writeDefaults) {
    self->exportGlobalShortcuts(config, writeDefaults);
}

void KActionCollection_WriteSettings1(const KActionCollection* self, KConfigGroup* config) {
    self->writeSettings(config);
}

void KActionCollection_WriteSettings2(const KActionCollection* self, KConfigGroup* config, bool writeDefaults) {
    self->writeSettings(config, writeDefaults);
}

void KActionCollection_WriteSettings3(const KActionCollection* self, KConfigGroup* config, bool writeDefaults, QAction* oneAction) {
    self->writeSettings(config, writeDefaults, oneAction);
}

// Base class handler implementation
int KActionCollection_QBaseMetacall(KActionCollection* self, int param1, int param2, void** param3) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Metacall_IsBase(true);
        return vkactioncollection->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KActionCollection::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnMetacall(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Metacall_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KActionCollection_QBaseConnectNotify(KActionCollection* self, const QMetaMethod* signal) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_ConnectNotify_IsBase(true);
        vkactioncollection->connectNotify(*signal);
    } else {
        ((VirtualKActionCollection*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnConnectNotify(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_ConnectNotify_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_ConnectNotify_Callback>(slot));
    }
}

// Base class handler implementation
void KActionCollection_QBaseSlotActionTriggered(KActionCollection* self) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_SlotActionTriggered_IsBase(true);
        vkactioncollection->slotActionTriggered();
    } else {
        ((VirtualKActionCollection*)self)->slotActionTriggered();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnSlotActionTriggered(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_SlotActionTriggered_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_SlotActionTriggered_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionCollection_Event(KActionCollection* self, QEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return vkactioncollection->event(event);
    } else {
        return self->KActionCollection::event(event);
    }
}

// Base class handler implementation
bool KActionCollection_QBaseEvent(KActionCollection* self, QEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Event_IsBase(true);
        return vkactioncollection->event(event);
    } else {
        return self->KActionCollection::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnEvent(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Event_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionCollection_EventFilter(KActionCollection* self, QObject* watched, QEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return vkactioncollection->eventFilter(watched, event);
    } else {
        return self->KActionCollection::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KActionCollection_QBaseEventFilter(KActionCollection* self, QObject* watched, QEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_EventFilter_IsBase(true);
        return vkactioncollection->eventFilter(watched, event);
    } else {
        return self->KActionCollection::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnEventFilter(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_EventFilter_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCollection_TimerEvent(KActionCollection* self, QTimerEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->timerEvent(event);
    } else {
        ((VirtualKActionCollection*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KActionCollection_QBaseTimerEvent(KActionCollection* self, QTimerEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_TimerEvent_IsBase(true);
        vkactioncollection->timerEvent(event);
    } else {
        ((VirtualKActionCollection*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnTimerEvent(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_TimerEvent_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCollection_ChildEvent(KActionCollection* self, QChildEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->childEvent(event);
    } else {
        ((VirtualKActionCollection*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KActionCollection_QBaseChildEvent(KActionCollection* self, QChildEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_ChildEvent_IsBase(true);
        vkactioncollection->childEvent(event);
    } else {
        ((VirtualKActionCollection*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnChildEvent(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_ChildEvent_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCollection_CustomEvent(KActionCollection* self, QEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->customEvent(event);
    } else {
        ((VirtualKActionCollection*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KActionCollection_QBaseCustomEvent(KActionCollection* self, QEvent* event) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_CustomEvent_IsBase(true);
        vkactioncollection->customEvent(event);
    } else {
        ((VirtualKActionCollection*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnCustomEvent(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_CustomEvent_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCollection_DisconnectNotify(KActionCollection* self, const QMetaMethod* signal) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->disconnectNotify(*signal);
    } else {
        ((VirtualKActionCollection*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KActionCollection_QBaseDisconnectNotify(KActionCollection* self, const QMetaMethod* signal) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_DisconnectNotify_IsBase(true);
        vkactioncollection->disconnectNotify(*signal);
    } else {
        ((VirtualKActionCollection*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnDisconnectNotify(KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = dynamic_cast<VirtualKActionCollection*>(self);
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_DisconnectNotify_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KActionCollection_Sender(const KActionCollection* self) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return vkactioncollection->sender();
    } else {
        return ((VirtualKActionCollection*)self)->sender();
    }
}

// Base class handler implementation
QObject* KActionCollection_QBaseSender(const KActionCollection* self) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Sender_IsBase(true);
        return vkactioncollection->sender();
    } else {
        return ((VirtualKActionCollection*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnSender(const KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Sender_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionCollection_SenderSignalIndex(const KActionCollection* self) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return vkactioncollection->senderSignalIndex();
    } else {
        return ((VirtualKActionCollection*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KActionCollection_QBaseSenderSignalIndex(const KActionCollection* self) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_SenderSignalIndex_IsBase(true);
        return vkactioncollection->senderSignalIndex();
    } else {
        return ((VirtualKActionCollection*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnSenderSignalIndex(const KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_SenderSignalIndex_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionCollection_Receivers(const KActionCollection* self, const char* signal) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return vkactioncollection->receivers(signal);
    } else {
        return ((VirtualKActionCollection*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KActionCollection_QBaseReceivers(const KActionCollection* self, const char* signal) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Receivers_IsBase(true);
        return vkactioncollection->receivers(signal);
    } else {
        return ((VirtualKActionCollection*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnReceivers(const KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_Receivers_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionCollection_IsSignalConnected(const KActionCollection* self, const QMetaMethod* signal) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        return vkactioncollection->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionCollection*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KActionCollection_QBaseIsSignalConnected(const KActionCollection* self, const QMetaMethod* signal) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_IsSignalConnected_IsBase(true);
        return vkactioncollection->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionCollection*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCollection_OnIsSignalConnected(const KActionCollection* self, intptr_t slot) {
    auto* vkactioncollection = const_cast<VirtualKActionCollection*>(dynamic_cast<const VirtualKActionCollection*>(self));
    if (vkactioncollection && vkactioncollection->isVirtualKActionCollection) {
        vkactioncollection->setKActionCollection_IsSignalConnected_Callback(reinterpret_cast<VirtualKActionCollection::KActionCollection_IsSignalConnected_Callback>(slot));
    }
}

void KActionCollection_Delete(KActionCollection* self) {
    delete self;
}
