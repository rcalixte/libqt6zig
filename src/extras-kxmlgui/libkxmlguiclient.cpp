#include <KActionCollection>
#include <KXMLGUIBuilder>
#include <KXMLGUIClient>
#define WORKAROUND_INNER_CLASS_DEFINITION_KXMLGUIClient__StateChange
#include <KXMLGUIFactory>
#include <QAction>
#include <QDomDocument>
#include <QDomElement>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kxmlguiclient.h>
#include "libkxmlguiclient.h"
#include "libkxmlguiclient.hxx"

KXMLGUIClient* KXMLGUIClient_new() {
    return new VirtualKXMLGUIClient();
}

KXMLGUIClient* KXMLGUIClient_new2(KXMLGUIClient* parent) {
    return new VirtualKXMLGUIClient(parent);
}

QAction* KXMLGUIClient_Action(const KXMLGUIClient* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->action(name_QString);
}

QAction* KXMLGUIClient_Action2(const KXMLGUIClient* self, const QDomElement* element) {
    auto* vkxmlguiclient = dynamic_cast<const VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        return self->action(*element);
    } else {
        return ((VirtualKXMLGUIClient*)self)->action(*element);
    }
}

KActionCollection* KXMLGUIClient_ActionCollection(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<const VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        return self->actionCollection();
    } else {
        return ((VirtualKXMLGUIClient*)self)->actionCollection();
    }
}

libqt_string KXMLGUIClient_ComponentName(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<const VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        QString _ret = self->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXMLGUIClient*)self)->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

QDomDocument* KXMLGUIClient_DomDocument(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<const VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        return new QDomDocument(self->domDocument());
    } else {
        return new QDomDocument(((VirtualKXMLGUIClient*)self)->domDocument());
    }
}

libqt_string KXMLGUIClient_XmlFile(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<const VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        QString _ret = self->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXMLGUIClient*)self)->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

libqt_string KXMLGUIClient_LocalXMLFile(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<const VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        QString _ret = self->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXMLGUIClient*)self)->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void KXMLGUIClient_SetXMLGUIBuildDocument(KXMLGUIClient* self, const QDomDocument* doc) {
    self->setXMLGUIBuildDocument(*doc);
}

QDomDocument* KXMLGUIClient_XmlguiBuildDocument(const KXMLGUIClient* self) {
    return new QDomDocument(self->xmlguiBuildDocument());
}

void KXMLGUIClient_SetFactory(KXMLGUIClient* self, KXMLGUIFactory* factory) {
    self->setFactory(factory);
}

KXMLGUIFactory* KXMLGUIClient_Factory(const KXMLGUIClient* self) {
    return self->factory();
}

KXMLGUIClient* KXMLGUIClient_ParentClient(const KXMLGUIClient* self) {
    return self->parentClient();
}

void KXMLGUIClient_InsertChildClient(KXMLGUIClient* self, KXMLGUIClient* child) {
    self->insertChildClient(child);
}

void KXMLGUIClient_RemoveChildClient(KXMLGUIClient* self, KXMLGUIClient* child) {
    self->removeChildClient(child);
}

libqt_list /* of KXMLGUIClient* */ KXMLGUIClient_ChildClients(KXMLGUIClient* self) {
    QList<KXMLGUIClient*> _ret = self->childClients();
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

void KXMLGUIClient_SetClientBuilder(KXMLGUIClient* self, KXMLGUIBuilder* builder) {
    self->setClientBuilder(builder);
}

KXMLGUIBuilder* KXMLGUIClient_ClientBuilder(const KXMLGUIClient* self) {
    return self->clientBuilder();
}

void KXMLGUIClient_ReloadXML(KXMLGUIClient* self) {
    self->reloadXML();
}

void KXMLGUIClient_PlugActionList(KXMLGUIClient* self, const libqt_string name, const libqt_list /* of QAction* */ actionList) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QAction*> actionList_QList;
    actionList_QList.reserve(actionList.len);
    QAction** actionList_arr = static_cast<QAction**>(actionList.data);
    for (size_t i = 0; i < actionList.len; ++i) {
        actionList_QList.push_back(actionList_arr[i]);
    }
    self->plugActionList(name_QString, actionList_QList);
}

void KXMLGUIClient_UnplugActionList(KXMLGUIClient* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->unplugActionList(name_QString);
}

libqt_string KXMLGUIClient_FindMostRecentXMLFile(const libqt_list /* of libqt_string */ files, libqt_string doc) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    QString doc_QString = QString::fromUtf8(doc.data, doc.len);
    QString _ret = KXMLGUIClient::findMostRecentXMLFile(files_QList, doc_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXMLGUIClient_AddStateActionEnabled(KXMLGUIClient* self, const libqt_string state, const libqt_string action) {
    QString state_QString = QString::fromUtf8(state.data, state.len);
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->addStateActionEnabled(state_QString, action_QString);
}

void KXMLGUIClient_AddStateActionDisabled(KXMLGUIClient* self, const libqt_string state, const libqt_string action) {
    QString state_QString = QString::fromUtf8(state.data, state.len);
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->addStateActionDisabled(state_QString, action_QString);
}

KXMLGUIClient__StateChange* KXMLGUIClient_GetActionsToChangeForState(KXMLGUIClient* self, const libqt_string state) {
    QString state_QString = QString::fromUtf8(state.data, state.len);
    return new KXMLGUIClient::StateChange(self->getActionsToChangeForState(state_QString));
}

void KXMLGUIClient_BeginXMLPlug(KXMLGUIClient* self, QWidget* param1) {
    self->beginXMLPlug(param1);
}

void KXMLGUIClient_EndXMLPlug(KXMLGUIClient* self) {
    self->endXMLPlug();
}

void KXMLGUIClient_PrepareXMLUnplug(KXMLGUIClient* self, QWidget* param1) {
    self->prepareXMLUnplug(param1);
}

void KXMLGUIClient_ReplaceXMLFile(KXMLGUIClient* self, const libqt_string xmlfile, const libqt_string localxmlfile) {
    QString xmlfile_QString = QString::fromUtf8(xmlfile.data, xmlfile.len);
    QString localxmlfile_QString = QString::fromUtf8(localxmlfile.data, localxmlfile.len);
    self->replaceXMLFile(xmlfile_QString, localxmlfile_QString);
}

libqt_string KXMLGUIClient_FindVersionNumber(const libqt_string xml) {
    QString xml_QString = QString::fromUtf8(xml.data, xml.len);
    QString _ret = KXMLGUIClient::findVersionNumber(xml_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXMLGUIClient_SetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

void KXMLGUIClient_SetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

void KXMLGUIClient_SetLocalXMLFile(KXMLGUIClient* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setLocalXMLFile(file_QString);
    }
}

void KXMLGUIClient_SetXML(KXMLGUIClient* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setXML(document_QString, merge);
    }
}

void KXMLGUIClient_SetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setDOMDocument(*document, merge);
    }
}

void KXMLGUIClient_StateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

void KXMLGUIClient_ReplaceXMLFile3(KXMLGUIClient* self, const libqt_string xmlfile, const libqt_string localxmlfile, bool merge) {
    QString xmlfile_QString = QString::fromUtf8(xmlfile.data, xmlfile.len);
    QString localxmlfile_QString = QString::fromUtf8(localxmlfile.data, localxmlfile.len);
    self->replaceXMLFile(xmlfile_QString, localxmlfile_QString, merge);
}

// Base class handler implementation
QAction* KXMLGUIClient_QBaseAction2(const KXMLGUIClient* self, const QDomElement* element) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_Action2_IsBase(true);
        return vkxmlguiclient->action(*element);
    } else {
        return self->KXMLGUIClient::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnAction2(const KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_Action2_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_Action2_Callback>(slot));
    }
}

// Base class handler implementation
KActionCollection* KXMLGUIClient_QBaseActionCollection(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_ActionCollection_IsBase(true);
        return vkxmlguiclient->actionCollection();
    } else {
        return self->KXMLGUIClient::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnActionCollection(const KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_ActionCollection_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_ActionCollection_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KXMLGUIClient_QBaseComponentName(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_ComponentName_IsBase(true);
        QString _ret = vkxmlguiclient->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXMLGUIClient::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnComponentName(const KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_ComponentName_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_ComponentName_Callback>(slot));
    }
}

// Base class handler implementation
QDomDocument* KXMLGUIClient_QBaseDomDocument(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_DomDocument_IsBase(true);
        return new QDomDocument(vkxmlguiclient->domDocument());
    } else {
        return new QDomDocument(((VirtualKXMLGUIClient*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnDomDocument(const KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_DomDocument_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_DomDocument_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KXMLGUIClient_QBaseXmlFile(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_XmlFile_IsBase(true);
        QString _ret = vkxmlguiclient->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXMLGUIClient::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnXmlFile(const KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_XmlFile_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_XmlFile_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KXMLGUIClient_QBaseLocalXMLFile(const KXMLGUIClient* self) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_LocalXMLFile_IsBase(true);
        QString _ret = vkxmlguiclient->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXMLGUIClient::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnLocalXMLFile(const KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = const_cast<VirtualKXMLGUIClient*>(dynamic_cast<const VirtualKXMLGUIClient*>(self));
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_LocalXMLFile_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_LocalXMLFile_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseSetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetComponentName_IsBase(true);
        vkxmlguiclient->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKXMLGUIClient*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnSetComponentName(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetComponentName_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_SetComponentName_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseSetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetXMLFile_IsBase(true);
        vkxmlguiclient->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKXMLGUIClient*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnSetXMLFile(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetXMLFile_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_SetXMLFile_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseSetLocalXMLFile(KXMLGUIClient* self, const libqt_string file) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetLocalXMLFile_IsBase(true);
        vkxmlguiclient->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKXMLGUIClient*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnSetLocalXMLFile(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_SetLocalXMLFile_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseSetXML(KXMLGUIClient* self, const libqt_string document, bool merge) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetXML_IsBase(true);
        vkxmlguiclient->setXML(document_QString, merge);
    } else {
        ((VirtualKXMLGUIClient*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnSetXML(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetXML_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_SetXML_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseSetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetDOMDocument_IsBase(true);
        vkxmlguiclient->setDOMDocument(*document, merge);
    } else {
        ((VirtualKXMLGUIClient*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnSetDOMDocument(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_SetDOMDocument_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_SetDOMDocument_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseStateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_StateChanged_IsBase(true);
        vkxmlguiclient->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKXMLGUIClient*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnStateChanged(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_StateChanged_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KXMLGUIClient_StandardsXmlFileLocation(KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        QString _ret = vkxmlguiclient->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXMLGUIClient*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KXMLGUIClient_QBaseStandardsXmlFileLocation(KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkxmlguiclient->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXMLGUIClient*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnStandardsXmlFileLocation(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMLGUIClient_LoadStandardsXmlFile(KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->loadStandardsXmlFile();
    } else {
        ((VirtualKXMLGUIClient*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KXMLGUIClient_QBaseLoadStandardsXmlFile(KXMLGUIClient* self) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_LoadStandardsXmlFile_IsBase(true);
        vkxmlguiclient->loadStandardsXmlFile();
    } else {
        ((VirtualKXMLGUIClient*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIClient_OnLoadStandardsXmlFile(KXMLGUIClient* self, intptr_t slot) {
    auto* vkxmlguiclient = dynamic_cast<VirtualKXMLGUIClient*>(self);
    if (vkxmlguiclient && vkxmlguiclient->isVirtualKXMLGUIClient) {
        vkxmlguiclient->setKXMLGUIClient_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKXMLGUIClient::KXMLGUIClient_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KXMLGUIClient_Delete(KXMLGUIClient* self) {
    delete self;
}

libqt_list /* of libqt_string */ KXMLGUIClient__StateChange_ActionsToEnable(const KXMLGUIClient__StateChange* self) {
    QList<QString> actionsToEnable_ret = self->actionsToEnable;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* actionsToEnable_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (actionsToEnable_ret.size() + 1)));
    for (qsizetype i = 0; i < actionsToEnable_ret.size(); ++i) {
        QString actionsToEnable_lv_ret = actionsToEnable_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray actionsToEnable_lv_b = actionsToEnable_lv_ret.toUtf8();
        libqt_string actionsToEnable_lv_str;
        actionsToEnable_lv_str.len = actionsToEnable_lv_b.length();
        actionsToEnable_lv_str.data = static_cast<const char*>(malloc(actionsToEnable_lv_str.len + 1));
        memcpy((void*)actionsToEnable_lv_str.data, actionsToEnable_lv_b.data(), actionsToEnable_lv_str.len);
        ((char*)actionsToEnable_lv_str.data)[actionsToEnable_lv_str.len] = '\0';
        actionsToEnable_arr[i] = actionsToEnable_lv_str;
    }
    libqt_list actionsToEnable_out;
    actionsToEnable_out.len = actionsToEnable_ret.size();
    actionsToEnable_out.data = static_cast<void*>(actionsToEnable_arr);
    return actionsToEnable_out;
}

void KXMLGUIClient__StateChange_SetActionsToEnable(KXMLGUIClient__StateChange* self, libqt_list /* of libqt_string */ actionsToEnable) {
    QList<QString> actionsToEnable_QList;
    actionsToEnable_QList.reserve(actionsToEnable.len);
    libqt_string* actionsToEnable_arr = static_cast<libqt_string*>(actionsToEnable.data);
    for (size_t i = 0; i < actionsToEnable.len; ++i) {
        QString actionsToEnable_arr_i_QString = QString::fromUtf8(actionsToEnable_arr[i].data, actionsToEnable_arr[i].len);
        actionsToEnable_QList.push_back(actionsToEnable_arr_i_QString);
    }
    self->actionsToEnable = actionsToEnable_QList;
}

libqt_list /* of libqt_string */ KXMLGUIClient__StateChange_ActionsToDisable(const KXMLGUIClient__StateChange* self) {
    QList<QString> actionsToDisable_ret = self->actionsToDisable;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* actionsToDisable_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (actionsToDisable_ret.size() + 1)));
    for (qsizetype i = 0; i < actionsToDisable_ret.size(); ++i) {
        QString actionsToDisable_lv_ret = actionsToDisable_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray actionsToDisable_lv_b = actionsToDisable_lv_ret.toUtf8();
        libqt_string actionsToDisable_lv_str;
        actionsToDisable_lv_str.len = actionsToDisable_lv_b.length();
        actionsToDisable_lv_str.data = static_cast<const char*>(malloc(actionsToDisable_lv_str.len + 1));
        memcpy((void*)actionsToDisable_lv_str.data, actionsToDisable_lv_b.data(), actionsToDisable_lv_str.len);
        ((char*)actionsToDisable_lv_str.data)[actionsToDisable_lv_str.len] = '\0';
        actionsToDisable_arr[i] = actionsToDisable_lv_str;
    }
    libqt_list actionsToDisable_out;
    actionsToDisable_out.len = actionsToDisable_ret.size();
    actionsToDisable_out.data = static_cast<void*>(actionsToDisable_arr);
    return actionsToDisable_out;
}

void KXMLGUIClient__StateChange_SetActionsToDisable(KXMLGUIClient__StateChange* self, libqt_list /* of libqt_string */ actionsToDisable) {
    QList<QString> actionsToDisable_QList;
    actionsToDisable_QList.reserve(actionsToDisable.len);
    libqt_string* actionsToDisable_arr = static_cast<libqt_string*>(actionsToDisable.data);
    for (size_t i = 0; i < actionsToDisable.len; ++i) {
        QString actionsToDisable_arr_i_QString = QString::fromUtf8(actionsToDisable_arr[i].data, actionsToDisable_arr[i].len);
        actionsToDisable_QList.push_back(actionsToDisable_arr_i_QString);
    }
    self->actionsToDisable = actionsToDisable_QList;
}

void KXMLGUIClient__StateChange_Delete(KXMLGUIClient__StateChange* self) {
    delete self;
}
