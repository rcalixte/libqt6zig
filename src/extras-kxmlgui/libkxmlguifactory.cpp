#include <KXMLGUIBuilder>
#include <KXMLGUIClient>
#include <KXMLGUIFactory>
#include <QAction>
#include <QChildEvent>
#include <QDomDocument>
#include <QDomElement>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kxmlguifactory.h>
#include "libkxmlguifactory.h"
#include "libkxmlguifactory.hxx"

KXMLGUIFactory* KXMLGUIFactory_new(KXMLGUIBuilder* builder) {
    return new VirtualKXMLGUIFactory(builder);
}

KXMLGUIFactory* KXMLGUIFactory_new2(KXMLGUIBuilder* builder, QObject* parent) {
    return new VirtualKXMLGUIFactory(builder, parent);
}

QMetaObject* KXMLGUIFactory_MetaObject(const KXMLGUIFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* KXMLGUIFactory_Metacast(KXMLGUIFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KXMLGUIFactory_Metacall(KXMLGUIFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KXMLGUIFactory_Tr(const char* s) {
    auto _ret = KXMLGUIFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KXMLGUIFactory_ReadConfigFile(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    auto _ret = KXMLGUIFactory::readConfigFile(filename_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KXMLGUIFactory_SaveConfigFile(const QDomDocument* doc, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return KXMLGUIFactory::saveConfigFile(*doc, filename_QString);
}

QDomElement* KXMLGUIFactory_ActionPropertiesElement(QDomDocument* doc) {
    return new QDomElement(KXMLGUIFactory::actionPropertiesElement(*doc));
}

QDomElement* KXMLGUIFactory_FindActionByName(QDomElement* elem, const libqt_string sName, bool create) {
    QString sName_QString = QString::fromUtf8(sName.data, sName.len);
    return new QDomElement(KXMLGUIFactory::findActionByName(*elem, sName_QString, create));
}

void KXMLGUIFactory_AddClient(KXMLGUIFactory* self, KXMLGUIClient* client) {
    self->addClient(client);
}

void KXMLGUIFactory_RemoveClient(KXMLGUIFactory* self, KXMLGUIClient* client) {
    self->removeClient(client);
}

void KXMLGUIFactory_PlugActionList(KXMLGUIFactory* self, KXMLGUIClient* client, const libqt_string name, const libqt_list /* of QAction* */ actionList) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QAction*> actionList_QList;
    actionList_QList.reserve(actionList.len);
    QAction** actionList_arr = static_cast<QAction**>(actionList.data);
    for (size_t i = 0; i < actionList.len; ++i) {
        actionList_QList.push_back(actionList_arr[i]);
    }
    self->plugActionList(client, name_QString, actionList_QList);
}

void KXMLGUIFactory_UnplugActionList(KXMLGUIFactory* self, KXMLGUIClient* client, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->unplugActionList(client, name_QString);
}

libqt_list /* of KXMLGUIClient* */ KXMLGUIFactory_Clients(const KXMLGUIFactory* self) {
    QList<KXMLGUIClient*> _ret = self->clients();
    // Convert QList<> from C++ memory to manually-managed C memory
    KXMLGUIClient** _arr = static_cast<KXMLGUIClient**>(malloc(sizeof(KXMLGUIClient*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* KXMLGUIFactory_Container(KXMLGUIFactory* self, const libqt_string containerName, KXMLGUIClient* client) {
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    return self->container(containerName_QString, client);
}

libqt_list /* of QWidget* */ KXMLGUIFactory_Containers(KXMLGUIFactory* self, const libqt_string tagName) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    QList<QWidget*> _ret = self->containers(tagName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KXMLGUIFactory_Reset(KXMLGUIFactory* self) {
    self->reset();
}

void KXMLGUIFactory_ResetContainer(KXMLGUIFactory* self, const libqt_string containerName) {
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    self->resetContainer(containerName_QString);
}

void KXMLGUIFactory_RefreshActionProperties(KXMLGUIFactory* self) {
    self->refreshActionProperties();
}

void KXMLGUIFactory_ShowConfigureShortcutsDialog(KXMLGUIFactory* self) {
    self->showConfigureShortcutsDialog();
}

void KXMLGUIFactory_ChangeShortcutScheme(KXMLGUIFactory* self, const libqt_string scheme) {
    QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
    self->changeShortcutScheme(scheme_QString);
}

void KXMLGUIFactory_ClientAdded(KXMLGUIFactory* self, KXMLGUIClient* client) {
    self->clientAdded(client);
}

void KXMLGUIFactory_Connect_ClientAdded(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*, KXMLGUIClient*) = reinterpret_cast<void (*)(KXMLGUIFactory*, KXMLGUIClient*)>(slot);
    KXMLGUIFactory::connect(self,
                            static_cast<void (KXMLGUIFactory::*)(KXMLGUIClient*)>(&KXMLGUIFactory::clientAdded),
                            [self, slotFunc](KXMLGUIClient* client) {
                                KXMLGUIClient* sigval1 = client;
                                slotFunc(self, sigval1);
                            });
}

void KXMLGUIFactory_ClientRemoved(KXMLGUIFactory* self, KXMLGUIClient* client) {
    self->clientRemoved(client);
}

void KXMLGUIFactory_Connect_ClientRemoved(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*, KXMLGUIClient*) = reinterpret_cast<void (*)(KXMLGUIFactory*, KXMLGUIClient*)>(slot);
    KXMLGUIFactory::connect(self,
                            static_cast<void (KXMLGUIFactory::*)(KXMLGUIClient*)>(&KXMLGUIFactory::clientRemoved),
                            [self, slotFunc](KXMLGUIClient* client) {
                                KXMLGUIClient* sigval1 = client;
                                slotFunc(self, sigval1);
                            });
}

void KXMLGUIFactory_MakingChanges(KXMLGUIFactory* self, bool param1) {
    self->makingChanges(param1);
}

void KXMLGUIFactory_Connect_MakingChanges(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*, bool) = reinterpret_cast<void (*)(KXMLGUIFactory*, bool)>(slot);
    KXMLGUIFactory::connect(self,
                            static_cast<void (KXMLGUIFactory::*)(bool)>(&KXMLGUIFactory::makingChanges),
                            [self, slotFunc](bool param1) {
                                bool sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void KXMLGUIFactory_ShortcutsSaved(KXMLGUIFactory* self) {
    self->shortcutsSaved();
}

void KXMLGUIFactory_Connect_ShortcutsSaved(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*) = reinterpret_cast<void (*)(KXMLGUIFactory*)>(slot);
    KXMLGUIFactory::connect(self,
                            static_cast<void (KXMLGUIFactory::*)()>(&KXMLGUIFactory::shortcutsSaved),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

libqt_string KXMLGUIFactory_Tr2(const char* s, const char* c) {
    auto _ret = KXMLGUIFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KXMLGUIFactory_Tr3(const char* s, const char* c, int n) {
    auto _ret = KXMLGUIFactory::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KXMLGUIFactory_ReadConfigFile2(const libqt_string filename, const libqt_string componentName) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    auto _ret = KXMLGUIFactory::readConfigFile(filename_QString, componentName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KXMLGUIFactory_SaveConfigFile3(const QDomDocument* doc, const libqt_string filename, const libqt_string componentName) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    return KXMLGUIFactory::saveConfigFile(*doc, filename_QString, componentName_QString);
}

QWidget* KXMLGUIFactory_Container3(KXMLGUIFactory* self, const libqt_string containerName, KXMLGUIClient* client, bool useTagName) {
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    return self->container(containerName_QString, client, useTagName);
}

void KXMLGUIFactory_ResetContainer2(KXMLGUIFactory* self, const libqt_string containerName, bool useTagName) {
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    self->resetContainer(containerName_QString, useTagName);
}

// Base class handler implementation
QMetaObject* KXMLGUIFactory_SuperMetaObject(const KXMLGUIFactory* self) {
    return (QMetaObject*)self->KXMLGUIFactory::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnMetaObject(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self)))
        vkxmlguifactory->kxmlguifactory_metaobject_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KXMLGUIFactory_SuperMetacast(KXMLGUIFactory* self, const char* param1) {
    return self->KXMLGUIFactory::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnMetacast(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_metacast_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Metacast_Callback>(slot);
}

// Base class handler implementation
int KXMLGUIFactory_SuperMetacall(KXMLGUIFactory* self, int param1, int param2, void** param3) {
    return self->KXMLGUIFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnMetacall(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_metacall_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KXMLGUIFactory_Event(KXMLGUIFactory* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KXMLGUIFactory_SuperEvent(KXMLGUIFactory* self, QEvent* event) {
    return self->KXMLGUIFactory::event(event);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnEvent(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_event_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Event_Callback>(slot);
}

// Derived class handler implementation
bool KXMLGUIFactory_EventFilter(KXMLGUIFactory* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KXMLGUIFactory_SuperEventFilter(KXMLGUIFactory* self, QObject* watched, QEvent* event) {
    return self->KXMLGUIFactory::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnEventFilter(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_eventfilter_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KXMLGUIFactory_TimerEvent(KXMLGUIFactory* self, QTimerEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory) {
        vkxmlguifactory->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXMLGUIFactory::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMLGUIFactory_SuperTimerEvent(KXMLGUIFactory* self, QTimerEvent* event) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self)) {
        vkxmlguifactory->KXMLGUIFactory::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KXMLGUIFactory::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnTimerEvent(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_timerevent_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KXMLGUIFactory_ChildEvent(KXMLGUIFactory* self, QChildEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory) {
        vkxmlguifactory->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXMLGUIFactory::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMLGUIFactory_SuperChildEvent(KXMLGUIFactory* self, QChildEvent* event) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self)) {
        vkxmlguifactory->KXMLGUIFactory::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KXMLGUIFactory::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnChildEvent(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_childevent_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KXMLGUIFactory_CustomEvent(KXMLGUIFactory* self, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory) {
        vkxmlguifactory->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXMLGUIFactory::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMLGUIFactory_SuperCustomEvent(KXMLGUIFactory* self, QEvent* event) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self)) {
        vkxmlguifactory->KXMLGUIFactory::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KXMLGUIFactory::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnCustomEvent(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_customevent_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KXMLGUIFactory_ConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory) {
        vkxmlguifactory->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXMLGUIFactory::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMLGUIFactory_SuperConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self)) {
        vkxmlguifactory->KXMLGUIFactory::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXMLGUIFactory::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnConnectNotify(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_connectnotify_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KXMLGUIFactory_DisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory) {
        vkxmlguifactory->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXMLGUIFactory::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXMLGUIFactory_SuperDisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self)) {
        vkxmlguifactory->KXMLGUIFactory::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXMLGUIFactory::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnDisconnectNotify(KXMLGUIFactory* self, intptr_t slot) {
    if (auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self))
        vkxmlguifactory->kxmlguifactory_disconnectnotify_callback = reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KXMLGUIFactory_Sender(const KXMLGUIFactory* self) {
    if (auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self))) {
        return vkxmlguifactory->VirtualKXMLGUIFactory::sender();
    } else
        qFatal("Error: Protected method KXMLGUIFactory::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KXMLGUIFactory_SenderSignalIndex(const KXMLGUIFactory* self) {
    if (auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self))) {
        return vkxmlguifactory->VirtualKXMLGUIFactory::senderSignalIndex();
    } else
        qFatal("Error: Protected method KXMLGUIFactory::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KXMLGUIFactory_Receivers(const KXMLGUIFactory* self, const char* signal) {
    if (auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self))) {
        return vkxmlguifactory->VirtualKXMLGUIFactory::receivers(signal);
    } else
        qFatal("Error: Protected method KXMLGUIFactory::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXMLGUIFactory_IsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal) {
    if (auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self))) {
        return vkxmlguifactory->VirtualKXMLGUIFactory::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KXMLGUIFactory::isSignalConnected called without a directly constructed type");
}

void KXMLGUIFactory_Delete(KXMLGUIFactory* self) {
    delete self;
}
