#include <KActionCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#include <KXMLGUIClient>
#include <QAction>
#include <QDomDocument>
#include <QDomElement>
#include <QObject>
#include <QString>
#include <partbase.h>
#include "libpartbase.h"
#include "libpartbase.hxx"

KParts__PartBase* KParts__PartBase_new() {
    return new VirtualKPartsPartBase();
}

void KParts__PartBase_SetPartObject(KParts__PartBase* self, QObject* object) {
    self->setPartObject(object);
}

QObject* KParts__PartBase_PartObject(const KParts__PartBase* self) {
    return self->partObject();
}

// Derived class handler implementation
QAction* KParts__PartBase_Action2(const KParts__PartBase* self, const QDomElement* element) {
    return self->action(*element);
}

// Base class handler implementation
QAction* KParts__PartBase_SuperAction2(const KParts__PartBase* self, const QDomElement* element) {
    return self->KParts::PartBase::action(*element);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnAction2(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self)))
        vkpartspartbase->kparts__partbase_action2_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_Action2_Callback>(slot);
}

// Derived class handler implementation
KActionCollection* KParts__PartBase_ActionCollection(const KParts__PartBase* self) {
    return self->actionCollection();
}

// Base class handler implementation
KActionCollection* KParts__PartBase_SuperActionCollection(const KParts__PartBase* self) {
    return self->KParts::PartBase::actionCollection();
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnActionCollection(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self)))
        vkpartspartbase->kparts__partbase_actioncollection_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_ActionCollection_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__PartBase_ComponentName(const KParts__PartBase* self) {
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

// Base class handler implementation
libqt_string KParts__PartBase_SuperComponentName(const KParts__PartBase* self) {
    auto _ret = self->KParts::PartBase::componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnComponentName(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self)))
        vkpartspartbase->kparts__partbase_componentname_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_ComponentName_Callback>(slot);
}

// Derived class handler implementation
QDomDocument* KParts__PartBase_DomDocument(const KParts__PartBase* self) {
    return new QDomDocument(self->domDocument());
}

// Base class handler implementation
QDomDocument* KParts__PartBase_SuperDomDocument(const KParts__PartBase* self) {
    return new QDomDocument(self->KParts::PartBase::domDocument());
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnDomDocument(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self)))
        vkpartspartbase->kparts__partbase_domdocument_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_DomDocument_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__PartBase_XmlFile(const KParts__PartBase* self) {
    auto _ret = self->xmlFile();
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
libqt_string KParts__PartBase_SuperXmlFile(const KParts__PartBase* self) {
    auto _ret = self->KParts::PartBase::xmlFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnXmlFile(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self)))
        vkpartspartbase->kparts__partbase_xmlfile_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_XmlFile_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__PartBase_LocalXMLFile(const KParts__PartBase* self) {
    auto _ret = self->localXMLFile();
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
libqt_string KParts__PartBase_SuperLocalXMLFile(const KParts__PartBase* self) {
    auto _ret = self->KParts::PartBase::localXMLFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnLocalXMLFile(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self)))
        vkpartspartbase->kparts__partbase_localxmlfile_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_LocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartBase_SetComponentName(KParts__PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase) {
        vkpartspartbase->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::PartBase::setComponentName called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartBase_SuperSetComponentName(KParts__PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->KParts::PartBase::setComponentName(componentName_QString, componentDisplayName_QString);
    } else
        qFatal("Error: Protected virtual method KParts::PartBase::setComponentName called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetComponentName(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self))
        vkpartspartbase->kparts__partbase_setcomponentname_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetComponentName_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartBase_SetXMLFile(KParts__PartBase* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase) {
        vkpartspartbase->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        qFatal("Error: Protected virtual method KParts::PartBase::setXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartBase_SuperSetXMLFile(KParts__PartBase* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->KParts::PartBase::setXMLFile(file_QString, merge, setXMLDoc);
    } else
        qFatal("Error: Protected virtual method KParts::PartBase::setXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetXMLFile(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self))
        vkpartspartbase->kparts__partbase_setxmlfile_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartBase_SetLocalXMLFile(KParts__PartBase* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase) {
        vkpartspartbase->setLocalXMLFile(file_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::PartBase::setLocalXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartBase_SuperSetLocalXMLFile(KParts__PartBase* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->KParts::PartBase::setLocalXMLFile(file_QString);
    } else
        qFatal("Error: Protected virtual method KParts::PartBase::setLocalXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetLocalXMLFile(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self))
        vkpartspartbase->kparts__partbase_setlocalxmlfile_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetLocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartBase_SetXML(KParts__PartBase* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase) {
        vkpartspartbase->setXML(document_QString, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::PartBase::setXML called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartBase_SuperSetXML(KParts__PartBase* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->KParts::PartBase::setXML(document_QString, merge);
    } else
        qFatal("Error: Protected virtual method KParts::PartBase::setXML called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetXML(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self))
        vkpartspartbase->kparts__partbase_setxml_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetXML_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartBase_SetDOMDocument(KParts__PartBase* self, const QDomDocument* document, bool merge) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase) {
        vkpartspartbase->setDOMDocument(*document, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::PartBase::setDOMDocument called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartBase_SuperSetDOMDocument(KParts__PartBase* self, const QDomDocument* document, bool merge) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->KParts::PartBase::setDOMDocument(*document, merge);
    } else
        qFatal("Error: Protected virtual method KParts::PartBase::setDOMDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetDOMDocument(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self))
        vkpartspartbase->kparts__partbase_setdomdocument_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetDOMDocument_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartBase_StateChanged(KParts__PartBase* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase) {
        vkpartspartbase->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        qFatal("Error: Protected virtual method KParts::PartBase::stateChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartBase_SuperStateChanged(KParts__PartBase* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->KParts::PartBase::stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else
        qFatal("Error: Protected virtual method KParts::PartBase::stateChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnStateChanged(KParts__PartBase* self, intptr_t slot) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self))
        vkpartspartbase->kparts__partbase_statechanged_callback = reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_StateChanged_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string KParts__PartBase_StandardsXmlFileLocation(KParts__PartBase* self) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        auto _ret = vkpartspartbase->VirtualKPartsPartBase::standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::PartBase::standardsXmlFileLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__PartBase_LoadStandardsXmlFile(KParts__PartBase* self) {
    if (auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self)) {
        vkpartspartbase->VirtualKPartsPartBase::loadStandardsXmlFile();
    } else
        qFatal("Error: Protected method KParts::PartBase::loadStandardsXmlFile called without a directly constructed type");
}

void KParts__PartBase_Delete(KParts__PartBase* self) {
    delete self;
}
