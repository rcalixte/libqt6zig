#include <KActionCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#include <KXMLGUIClient>
#include <QAction>
#include <QDomDocument>
#include <QDomElement>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        return vkpartspartbase->action(*element);
    } else {
        return self->KParts::PartBase::action(*element);
    }
}

// Base class handler implementation
QAction* KParts__PartBase_QBaseAction2(const KParts__PartBase* self, const QDomElement* element) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_Action2_IsBase(true);
        return vkpartspartbase->action(*element);
    } else {
        return self->KParts::PartBase::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnAction2(const KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_Action2_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_Action2_Callback>(slot));
    }
}

// Derived class handler implementation
KActionCollection* KParts__PartBase_ActionCollection(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        return vkpartspartbase->actionCollection();
    } else {
        return self->KParts::PartBase::actionCollection();
    }
}

// Base class handler implementation
KActionCollection* KParts__PartBase_QBaseActionCollection(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_ActionCollection_IsBase(true);
        return vkpartspartbase->actionCollection();
    } else {
        return self->KParts::PartBase::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnActionCollection(const KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_ActionCollection_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_ActionCollection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__PartBase_ComponentName(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        QString _ret = vkpartspartbase->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::PartBase::componentName();
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
libqt_string KParts__PartBase_QBaseComponentName(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_ComponentName_IsBase(true);
        QString _ret = vkpartspartbase->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::PartBase::componentName();
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
void KParts__PartBase_OnComponentName(const KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_ComponentName_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_ComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
QDomDocument* KParts__PartBase_DomDocument(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        return new QDomDocument(vkpartspartbase->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsPartBase*)self)->domDocument());
    }
}

// Base class handler implementation
QDomDocument* KParts__PartBase_QBaseDomDocument(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_DomDocument_IsBase(true);
        return new QDomDocument(vkpartspartbase->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsPartBase*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnDomDocument(const KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_DomDocument_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_DomDocument_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__PartBase_XmlFile(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        QString _ret = vkpartspartbase->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::PartBase::xmlFile();
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
libqt_string KParts__PartBase_QBaseXmlFile(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_XmlFile_IsBase(true);
        QString _ret = vkpartspartbase->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::PartBase::xmlFile();
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
void KParts__PartBase_OnXmlFile(const KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_XmlFile_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_XmlFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__PartBase_LocalXMLFile(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        QString _ret = vkpartspartbase->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::PartBase::localXMLFile();
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
libqt_string KParts__PartBase_QBaseLocalXMLFile(const KParts__PartBase* self) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_LocalXMLFile_IsBase(true);
        QString _ret = vkpartspartbase->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::PartBase::localXMLFile();
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
void KParts__PartBase_OnLocalXMLFile(const KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = const_cast<VirtualKPartsPartBase*>(dynamic_cast<const VirtualKPartsPartBase*>(self));
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_LocalXMLFile_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_LocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_SetComponentName(KParts__PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsPartBase*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseSetComponentName(KParts__PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetComponentName_IsBase(true);
        vkpartspartbase->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsPartBase*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetComponentName(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetComponentName_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_SetXMLFile(KParts__PartBase* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsPartBase*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseSetXMLFile(KParts__PartBase* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetXMLFile_IsBase(true);
        vkpartspartbase->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsPartBase*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetXMLFile(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetXMLFile_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_SetLocalXMLFile(KParts__PartBase* self, const libqt_string file) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsPartBase*)self)->setLocalXMLFile(file_QString);
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseSetLocalXMLFile(KParts__PartBase* self, const libqt_string file) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetLocalXMLFile_IsBase(true);
        vkpartspartbase->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsPartBase*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetLocalXMLFile(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetLocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_SetXML(KParts__PartBase* self, const libqt_string document, bool merge) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsPartBase*)self)->setXML(document_QString, merge);
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseSetXML(KParts__PartBase* self, const libqt_string document, bool merge) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetXML_IsBase(true);
        vkpartspartbase->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsPartBase*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetXML(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetXML_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetXML_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_SetDOMDocument(KParts__PartBase* self, const QDomDocument* document, bool merge) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsPartBase*)self)->setDOMDocument(*document, merge);
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseSetDOMDocument(KParts__PartBase* self, const QDomDocument* document, bool merge) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetDOMDocument_IsBase(true);
        vkpartspartbase->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsPartBase*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnSetDOMDocument(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_SetDOMDocument_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_SetDOMDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_StateChanged(KParts__PartBase* self, const libqt_string newstate, int reverse) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsPartBase*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseStateChanged(KParts__PartBase* self, const libqt_string newstate, int reverse) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_StateChanged_IsBase(true);
        vkpartspartbase->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsPartBase*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnStateChanged(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_StateChanged_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__PartBase_StandardsXmlFileLocation(KParts__PartBase* self) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        QString _ret = vkpartspartbase->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsPartBase*)self)->standardsXmlFileLocation();
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
libqt_string KParts__PartBase_QBaseStandardsXmlFileLocation(KParts__PartBase* self) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkpartspartbase->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsPartBase*)self)->standardsXmlFileLocation();
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
void KParts__PartBase_OnStandardsXmlFileLocation(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartBase_LoadStandardsXmlFile(KParts__PartBase* self) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsPartBase*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KParts__PartBase_QBaseLoadStandardsXmlFile(KParts__PartBase* self) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_LoadStandardsXmlFile_IsBase(true);
        vkpartspartbase->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsPartBase*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartBase_OnLoadStandardsXmlFile(KParts__PartBase* self, intptr_t slot) {
    auto* vkpartspartbase = dynamic_cast<VirtualKPartsPartBase*>(self);
    if (vkpartspartbase && vkpartspartbase->isVirtualKPartsPartBase) {
        vkpartspartbase->setKParts__PartBase_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKPartsPartBase::KParts__PartBase_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KParts__PartBase_Delete(KParts__PartBase* self) {
    delete self;
}
