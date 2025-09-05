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
#include <QByteArray>
#include <cstring>
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
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKXMLGUIFactory*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KXMLGUIFactory_Tr(const char* s) {
    QString _ret = KXMLGUIFactory::tr(s);
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
    QString _ret = KXMLGUIFactory::readConfigFile(filename_QString);
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
    KXMLGUIClient** _arr = static_cast<KXMLGUIClient**>(malloc(sizeof(KXMLGUIClient*) * (_ret.size() + 1)));
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
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
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
    KXMLGUIFactory::connect(self, &KXMLGUIFactory::clientAdded, [self, slotFunc](KXMLGUIClient* client) {
        KXMLGUIClient* sigval1 = client;
        slotFunc(self, sigval1);
    });
}

void KXMLGUIFactory_ClientRemoved(KXMLGUIFactory* self, KXMLGUIClient* client) {
    self->clientRemoved(client);
}

void KXMLGUIFactory_Connect_ClientRemoved(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*, KXMLGUIClient*) = reinterpret_cast<void (*)(KXMLGUIFactory*, KXMLGUIClient*)>(slot);
    KXMLGUIFactory::connect(self, &KXMLGUIFactory::clientRemoved, [self, slotFunc](KXMLGUIClient* client) {
        KXMLGUIClient* sigval1 = client;
        slotFunc(self, sigval1);
    });
}

void KXMLGUIFactory_MakingChanges(KXMLGUIFactory* self, bool param1) {
    self->makingChanges(param1);
}

void KXMLGUIFactory_Connect_MakingChanges(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*, bool) = reinterpret_cast<void (*)(KXMLGUIFactory*, bool)>(slot);
    KXMLGUIFactory::connect(self, &KXMLGUIFactory::makingChanges, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void KXMLGUIFactory_ShortcutsSaved(KXMLGUIFactory* self) {
    self->shortcutsSaved();
}

void KXMLGUIFactory_Connect_ShortcutsSaved(KXMLGUIFactory* self, intptr_t slot) {
    void (*slotFunc)(KXMLGUIFactory*) = reinterpret_cast<void (*)(KXMLGUIFactory*)>(slot);
    KXMLGUIFactory::connect(self, &KXMLGUIFactory::shortcutsSaved, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KXMLGUIFactory_Tr2(const char* s, const char* c) {
    QString _ret = KXMLGUIFactory::tr(s, c);
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
    QString _ret = KXMLGUIFactory::tr(s, c, static_cast<int>(n));
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
    QString _ret = KXMLGUIFactory::readConfigFile(filename_QString, componentName_QString);
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
int KXMLGUIFactory_QBaseMetacall(KXMLGUIFactory* self, int param1, int param2, void** param3) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Metacall_IsBase(true);
        return vkxmlguifactory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KXMLGUIFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnMetacall(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Metacall_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXMLGUIFactory_Event(KXMLGUIFactory* self, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return vkxmlguifactory->event(event);
    } else {
        return self->KXMLGUIFactory::event(event);
    }
}

// Base class handler implementation
bool KXMLGUIFactory_QBaseEvent(KXMLGUIFactory* self, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Event_IsBase(true);
        return vkxmlguifactory->event(event);
    } else {
        return self->KXMLGUIFactory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnEvent(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Event_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXMLGUIFactory_EventFilter(KXMLGUIFactory* self, QObject* watched, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return vkxmlguifactory->eventFilter(watched, event);
    } else {
        return self->KXMLGUIFactory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KXMLGUIFactory_QBaseEventFilter(KXMLGUIFactory* self, QObject* watched, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_EventFilter_IsBase(true);
        return vkxmlguifactory->eventFilter(watched, event);
    } else {
        return self->KXMLGUIFactory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnEventFilter(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_EventFilter_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMLGUIFactory_TimerEvent(KXMLGUIFactory* self, QTimerEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->timerEvent(event);
    } else {
        ((VirtualKXMLGUIFactory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KXMLGUIFactory_QBaseTimerEvent(KXMLGUIFactory* self, QTimerEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_TimerEvent_IsBase(true);
        vkxmlguifactory->timerEvent(event);
    } else {
        ((VirtualKXMLGUIFactory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnTimerEvent(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_TimerEvent_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMLGUIFactory_ChildEvent(KXMLGUIFactory* self, QChildEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->childEvent(event);
    } else {
        ((VirtualKXMLGUIFactory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KXMLGUIFactory_QBaseChildEvent(KXMLGUIFactory* self, QChildEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_ChildEvent_IsBase(true);
        vkxmlguifactory->childEvent(event);
    } else {
        ((VirtualKXMLGUIFactory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnChildEvent(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_ChildEvent_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMLGUIFactory_CustomEvent(KXMLGUIFactory* self, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->customEvent(event);
    } else {
        ((VirtualKXMLGUIFactory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KXMLGUIFactory_QBaseCustomEvent(KXMLGUIFactory* self, QEvent* event) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_CustomEvent_IsBase(true);
        vkxmlguifactory->customEvent(event);
    } else {
        ((VirtualKXMLGUIFactory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnCustomEvent(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_CustomEvent_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMLGUIFactory_ConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->connectNotify(*signal);
    } else {
        ((VirtualKXMLGUIFactory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KXMLGUIFactory_QBaseConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_ConnectNotify_IsBase(true);
        vkxmlguifactory->connectNotify(*signal);
    } else {
        ((VirtualKXMLGUIFactory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnConnectNotify(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_ConnectNotify_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMLGUIFactory_DisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->disconnectNotify(*signal);
    } else {
        ((VirtualKXMLGUIFactory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KXMLGUIFactory_QBaseDisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_DisconnectNotify_IsBase(true);
        vkxmlguifactory->disconnectNotify(*signal);
    } else {
        ((VirtualKXMLGUIFactory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnDisconnectNotify(KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = dynamic_cast<VirtualKXMLGUIFactory*>(self);
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_DisconnectNotify_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KXMLGUIFactory_Sender(const KXMLGUIFactory* self) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return vkxmlguifactory->sender();
    } else {
        return ((VirtualKXMLGUIFactory*)self)->sender();
    }
}

// Base class handler implementation
QObject* KXMLGUIFactory_QBaseSender(const KXMLGUIFactory* self) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Sender_IsBase(true);
        return vkxmlguifactory->sender();
    } else {
        return ((VirtualKXMLGUIFactory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnSender(const KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Sender_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KXMLGUIFactory_SenderSignalIndex(const KXMLGUIFactory* self) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return vkxmlguifactory->senderSignalIndex();
    } else {
        return ((VirtualKXMLGUIFactory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KXMLGUIFactory_QBaseSenderSignalIndex(const KXMLGUIFactory* self) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_SenderSignalIndex_IsBase(true);
        return vkxmlguifactory->senderSignalIndex();
    } else {
        return ((VirtualKXMLGUIFactory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnSenderSignalIndex(const KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_SenderSignalIndex_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KXMLGUIFactory_Receivers(const KXMLGUIFactory* self, const char* signal) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return vkxmlguifactory->receivers(signal);
    } else {
        return ((VirtualKXMLGUIFactory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KXMLGUIFactory_QBaseReceivers(const KXMLGUIFactory* self, const char* signal) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Receivers_IsBase(true);
        return vkxmlguifactory->receivers(signal);
    } else {
        return ((VirtualKXMLGUIFactory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnReceivers(const KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_Receivers_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXMLGUIFactory_IsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        return vkxmlguifactory->isSignalConnected(*signal);
    } else {
        return ((VirtualKXMLGUIFactory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KXMLGUIFactory_QBaseIsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_IsSignalConnected_IsBase(true);
        return vkxmlguifactory->isSignalConnected(*signal);
    } else {
        return ((VirtualKXMLGUIFactory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIFactory_OnIsSignalConnected(const KXMLGUIFactory* self, intptr_t slot) {
    auto* vkxmlguifactory = const_cast<VirtualKXMLGUIFactory*>(dynamic_cast<const VirtualKXMLGUIFactory*>(self));
    if (vkxmlguifactory && vkxmlguifactory->isVirtualKXMLGUIFactory) {
        vkxmlguifactory->setKXMLGUIFactory_IsSignalConnected_Callback(reinterpret_cast<VirtualKXMLGUIFactory::KXMLGUIFactory_IsSignalConnected_Callback>(slot));
    }
}

void KXMLGUIFactory_Delete(KXMLGUIFactory* self) {
    delete self;
}
