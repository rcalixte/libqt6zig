#pragma once
#ifndef EXTRAS_KPARTS_LIBPARTBASE_HXX
#define EXTRAS_KPARTS_LIBPARTBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::PartBase
class VirtualKPartsPartBase final : public KParts::PartBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__PartBase_Action2_Callback = QAction* (*)(const KParts__PartBase*, QDomElement*);
    using KParts__PartBase_ActionCollection_Callback = KActionCollection* (*)(const KParts__PartBase*);
    using KParts__PartBase_ComponentName_Callback = const char* (*)(const KParts__PartBase*);
    using KParts__PartBase_DomDocument_Callback = QDomDocument* (*)(const KParts__PartBase*);
    using KParts__PartBase_XmlFile_Callback = const char* (*)(const KParts__PartBase*);
    using KParts__PartBase_LocalXMLFile_Callback = const char* (*)(const KParts__PartBase*);
    using KParts__PartBase_SetComponentName_Callback = void (*)(KParts__PartBase*, const char*, const char*);
    using KParts__PartBase_SetXMLFile_Callback = void (*)(KParts__PartBase*, const char*, bool, bool);
    using KParts__PartBase_SetLocalXMLFile_Callback = void (*)(KParts__PartBase*, const char*);
    using KParts__PartBase_SetXML_Callback = void (*)(KParts__PartBase*, const char*, bool);
    using KParts__PartBase_SetDOMDocument_Callback = void (*)(KParts__PartBase*, QDomDocument*, bool);
    using KParts__PartBase_StateChanged_Callback = void (*)(KParts__PartBase*, const char*, int);
    using KParts::PartBase::loadStandardsXmlFile;
    using KParts::PartBase::standardsXmlFileLocation;

    // Instance callback storage
    KParts__PartBase_Action2_Callback kparts__partbase_action2_callback = nullptr;
    KParts__PartBase_ActionCollection_Callback kparts__partbase_actioncollection_callback = nullptr;
    KParts__PartBase_ComponentName_Callback kparts__partbase_componentname_callback = nullptr;
    KParts__PartBase_DomDocument_Callback kparts__partbase_domdocument_callback = nullptr;
    KParts__PartBase_XmlFile_Callback kparts__partbase_xmlfile_callback = nullptr;
    KParts__PartBase_LocalXMLFile_Callback kparts__partbase_localxmlfile_callback = nullptr;
    KParts__PartBase_SetComponentName_Callback kparts__partbase_setcomponentname_callback = nullptr;
    KParts__PartBase_SetXMLFile_Callback kparts__partbase_setxmlfile_callback = nullptr;
    KParts__PartBase_SetLocalXMLFile_Callback kparts__partbase_setlocalxmlfile_callback = nullptr;
    KParts__PartBase_SetXML_Callback kparts__partbase_setxml_callback = nullptr;
    KParts__PartBase_SetDOMDocument_Callback kparts__partbase_setdomdocument_callback = nullptr;
    KParts__PartBase_StateChanged_Callback kparts__partbase_statechanged_callback = nullptr;

    // Access struct
    struct Base : KParts::PartBase {
        using KParts::PartBase::setComponentName;
        using KParts::PartBase::setDOMDocument;
        using KParts::PartBase::setLocalXMLFile;
        using KParts::PartBase::setXML;
        using KParts::PartBase::setXMLFile;
        using KParts::PartBase::stateChanged;
    };

    VirtualKPartsPartBase() : KParts::PartBase() {};

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__partbase_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kparts__partbase_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__PartBase::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__partbase_actioncollection_callback) {
            KActionCollection* callback_ret = kparts__partbase_actioncollection_callback(this);
            return callback_ret;
        }
        return KParts__PartBase::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__partbase_componentname_callback) {
            const char* callback_ret = kparts__partbase_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__PartBase::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__partbase_domdocument_callback) {
            QDomDocument* callback_ret = kparts__partbase_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__PartBase::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__partbase_xmlfile_callback) {
            const char* callback_ret = kparts__partbase_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__PartBase::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__partbase_localxmlfile_callback) {
            const char* callback_ret = kparts__partbase_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__PartBase::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__partbase_setcomponentname_callback) {
            const auto componentName_ret = componentName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray componentName_b = componentName_ret.toUtf8();
            auto componentName_str_len = componentName_b.length();
            const char* componentName_str = static_cast<const char*>(malloc(componentName_str_len + 1));
            memcpy((void*)componentName_str, componentName_b.data(), componentName_str_len);
            ((char*)componentName_str)[componentName_str_len] = '\0';
            const char* cbval1 = componentName_str;
            const auto componentDisplayName_ret = componentDisplayName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray componentDisplayName_b = componentDisplayName_ret.toUtf8();
            auto componentDisplayName_str_len = componentDisplayName_b.length();
            const char* componentDisplayName_str = static_cast<const char*>(malloc(componentDisplayName_str_len + 1));
            memcpy((void*)componentDisplayName_str, componentDisplayName_b.data(), componentDisplayName_str_len);
            ((char*)componentDisplayName_str)[componentDisplayName_str_len] = '\0';
            const char* cbval2 = componentDisplayName_str;
            kparts__partbase_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KParts__PartBase::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__partbase_setxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            bool cbval2 = merge;
            bool cbval3 = setXMLDoc;
            kparts__partbase_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KParts__PartBase::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__partbase_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kparts__partbase_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KParts__PartBase::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__partbase_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kparts__partbase_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KParts__PartBase::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__partbase_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kparts__partbase_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KParts__PartBase::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__partbase_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kparts__partbase_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KParts__PartBase::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend void KParts__PartBase_SuperSetComponentName(KParts::PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__PartBase_SuperSetXMLFile(KParts::PartBase* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__PartBase_SuperSetLocalXMLFile(KParts::PartBase* self, const libqt_string file);
    friend void KParts__PartBase_SuperSetXML(KParts::PartBase* self, const libqt_string document, bool merge);
    friend void KParts__PartBase_SuperSetDOMDocument(KParts::PartBase* self, const QDomDocument* document, bool merge);
    friend void KParts__PartBase_SuperStateChanged(KParts::PartBase* self, const libqt_string newstate, int reverse);
};

#endif
