#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALPARTBASE_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALPARTBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::PartBase so that we can call protected methods
class VirtualKPartsPartBase final : public KParts::PartBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsPartBase = true;

    // Virtual class public types (including callbacks)
    using KParts__PartBase_Action2_Callback = QAction* (*)(const KParts__PartBase*, QDomElement*);
    using KParts__PartBase_ActionCollection_Callback = KActionCollection* (*)();
    using KParts__PartBase_ComponentName_Callback = const char* (*)();
    using KParts__PartBase_DomDocument_Callback = QDomDocument* (*)();
    using KParts__PartBase_XmlFile_Callback = const char* (*)();
    using KParts__PartBase_LocalXMLFile_Callback = const char* (*)();
    using KParts__PartBase_SetComponentName_Callback = void (*)(KParts__PartBase*, libqt_string, libqt_string);
    using KParts__PartBase_SetXMLFile_Callback = void (*)(KParts__PartBase*, libqt_string, bool, bool);
    using KParts__PartBase_SetLocalXMLFile_Callback = void (*)(KParts__PartBase*, libqt_string);
    using KParts__PartBase_SetXML_Callback = void (*)(KParts__PartBase*, libqt_string, bool);
    using KParts__PartBase_SetDOMDocument_Callback = void (*)(KParts__PartBase*, QDomDocument*, bool);
    using KParts__PartBase_StateChanged_Callback = void (*)(KParts__PartBase*, libqt_string, int);
    using KParts__PartBase_StandardsXmlFileLocation_Callback = const char* (*)();
    using KParts__PartBase_LoadStandardsXmlFile_Callback = void (*)();

  protected:
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
    KParts__PartBase_StandardsXmlFileLocation_Callback kparts__partbase_standardsxmlfilelocation_callback = nullptr;
    KParts__PartBase_LoadStandardsXmlFile_Callback kparts__partbase_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kparts__partbase_action2_isbase = false;
    mutable bool kparts__partbase_actioncollection_isbase = false;
    mutable bool kparts__partbase_componentname_isbase = false;
    mutable bool kparts__partbase_domdocument_isbase = false;
    mutable bool kparts__partbase_xmlfile_isbase = false;
    mutable bool kparts__partbase_localxmlfile_isbase = false;
    mutable bool kparts__partbase_setcomponentname_isbase = false;
    mutable bool kparts__partbase_setxmlfile_isbase = false;
    mutable bool kparts__partbase_setlocalxmlfile_isbase = false;
    mutable bool kparts__partbase_setxml_isbase = false;
    mutable bool kparts__partbase_setdomdocument_isbase = false;
    mutable bool kparts__partbase_statechanged_isbase = false;
    mutable bool kparts__partbase_standardsxmlfilelocation_isbase = false;
    mutable bool kparts__partbase_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKPartsPartBase() : KParts::PartBase() {};

    ~VirtualKPartsPartBase() {
        kparts__partbase_action2_callback = nullptr;
        kparts__partbase_actioncollection_callback = nullptr;
        kparts__partbase_componentname_callback = nullptr;
        kparts__partbase_domdocument_callback = nullptr;
        kparts__partbase_xmlfile_callback = nullptr;
        kparts__partbase_localxmlfile_callback = nullptr;
        kparts__partbase_setcomponentname_callback = nullptr;
        kparts__partbase_setxmlfile_callback = nullptr;
        kparts__partbase_setlocalxmlfile_callback = nullptr;
        kparts__partbase_setxml_callback = nullptr;
        kparts__partbase_setdomdocument_callback = nullptr;
        kparts__partbase_statechanged_callback = nullptr;
        kparts__partbase_standardsxmlfilelocation_callback = nullptr;
        kparts__partbase_loadstandardsxmlfile_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__PartBase_Action2_Callback(KParts__PartBase_Action2_Callback cb) { kparts__partbase_action2_callback = cb; }
    inline void setKParts__PartBase_ActionCollection_Callback(KParts__PartBase_ActionCollection_Callback cb) { kparts__partbase_actioncollection_callback = cb; }
    inline void setKParts__PartBase_ComponentName_Callback(KParts__PartBase_ComponentName_Callback cb) { kparts__partbase_componentname_callback = cb; }
    inline void setKParts__PartBase_DomDocument_Callback(KParts__PartBase_DomDocument_Callback cb) { kparts__partbase_domdocument_callback = cb; }
    inline void setKParts__PartBase_XmlFile_Callback(KParts__PartBase_XmlFile_Callback cb) { kparts__partbase_xmlfile_callback = cb; }
    inline void setKParts__PartBase_LocalXMLFile_Callback(KParts__PartBase_LocalXMLFile_Callback cb) { kparts__partbase_localxmlfile_callback = cb; }
    inline void setKParts__PartBase_SetComponentName_Callback(KParts__PartBase_SetComponentName_Callback cb) { kparts__partbase_setcomponentname_callback = cb; }
    inline void setKParts__PartBase_SetXMLFile_Callback(KParts__PartBase_SetXMLFile_Callback cb) { kparts__partbase_setxmlfile_callback = cb; }
    inline void setKParts__PartBase_SetLocalXMLFile_Callback(KParts__PartBase_SetLocalXMLFile_Callback cb) { kparts__partbase_setlocalxmlfile_callback = cb; }
    inline void setKParts__PartBase_SetXML_Callback(KParts__PartBase_SetXML_Callback cb) { kparts__partbase_setxml_callback = cb; }
    inline void setKParts__PartBase_SetDOMDocument_Callback(KParts__PartBase_SetDOMDocument_Callback cb) { kparts__partbase_setdomdocument_callback = cb; }
    inline void setKParts__PartBase_StateChanged_Callback(KParts__PartBase_StateChanged_Callback cb) { kparts__partbase_statechanged_callback = cb; }
    inline void setKParts__PartBase_StandardsXmlFileLocation_Callback(KParts__PartBase_StandardsXmlFileLocation_Callback cb) { kparts__partbase_standardsxmlfilelocation_callback = cb; }
    inline void setKParts__PartBase_LoadStandardsXmlFile_Callback(KParts__PartBase_LoadStandardsXmlFile_Callback cb) { kparts__partbase_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKParts__PartBase_Action2_IsBase(bool value) const { kparts__partbase_action2_isbase = value; }
    inline void setKParts__PartBase_ActionCollection_IsBase(bool value) const { kparts__partbase_actioncollection_isbase = value; }
    inline void setKParts__PartBase_ComponentName_IsBase(bool value) const { kparts__partbase_componentname_isbase = value; }
    inline void setKParts__PartBase_DomDocument_IsBase(bool value) const { kparts__partbase_domdocument_isbase = value; }
    inline void setKParts__PartBase_XmlFile_IsBase(bool value) const { kparts__partbase_xmlfile_isbase = value; }
    inline void setKParts__PartBase_LocalXMLFile_IsBase(bool value) const { kparts__partbase_localxmlfile_isbase = value; }
    inline void setKParts__PartBase_SetComponentName_IsBase(bool value) const { kparts__partbase_setcomponentname_isbase = value; }
    inline void setKParts__PartBase_SetXMLFile_IsBase(bool value) const { kparts__partbase_setxmlfile_isbase = value; }
    inline void setKParts__PartBase_SetLocalXMLFile_IsBase(bool value) const { kparts__partbase_setlocalxmlfile_isbase = value; }
    inline void setKParts__PartBase_SetXML_IsBase(bool value) const { kparts__partbase_setxml_isbase = value; }
    inline void setKParts__PartBase_SetDOMDocument_IsBase(bool value) const { kparts__partbase_setdomdocument_isbase = value; }
    inline void setKParts__PartBase_StateChanged_IsBase(bool value) const { kparts__partbase_statechanged_isbase = value; }
    inline void setKParts__PartBase_StandardsXmlFileLocation_IsBase(bool value) const { kparts__partbase_standardsxmlfilelocation_isbase = value; }
    inline void setKParts__PartBase_LoadStandardsXmlFile_IsBase(bool value) const { kparts__partbase_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__partbase_action2_isbase) {
            kparts__partbase_action2_isbase = false;
            return KParts__PartBase::action(element);
        } else if (kparts__partbase_action2_callback != nullptr) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kparts__partbase_action2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__PartBase::action(element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__partbase_actioncollection_isbase) {
            kparts__partbase_actioncollection_isbase = false;
            return KParts__PartBase::actionCollection();
        } else if (kparts__partbase_actioncollection_callback != nullptr) {
            KActionCollection* callback_ret = kparts__partbase_actioncollection_callback();
            return callback_ret;
        } else {
            return KParts__PartBase::actionCollection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__partbase_componentname_isbase) {
            kparts__partbase_componentname_isbase = false;
            return KParts__PartBase::componentName();
        } else if (kparts__partbase_componentname_callback != nullptr) {
            const char* callback_ret = kparts__partbase_componentname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__PartBase::componentName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__partbase_domdocument_isbase) {
            kparts__partbase_domdocument_isbase = false;
            return KParts__PartBase::domDocument();
        } else if (kparts__partbase_domdocument_callback != nullptr) {
            QDomDocument* callback_ret = kparts__partbase_domdocument_callback();
            return *callback_ret;
        } else {
            return KParts__PartBase::domDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__partbase_xmlfile_isbase) {
            kparts__partbase_xmlfile_isbase = false;
            return KParts__PartBase::xmlFile();
        } else if (kparts__partbase_xmlfile_callback != nullptr) {
            const char* callback_ret = kparts__partbase_xmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__PartBase::xmlFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__partbase_localxmlfile_isbase) {
            kparts__partbase_localxmlfile_isbase = false;
            return KParts__PartBase::localXMLFile();
        } else if (kparts__partbase_localxmlfile_callback != nullptr) {
            const char* callback_ret = kparts__partbase_localxmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__PartBase::localXMLFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__partbase_setcomponentname_isbase) {
            kparts__partbase_setcomponentname_isbase = false;
            KParts__PartBase::setComponentName(componentName, componentDisplayName);
        } else if (kparts__partbase_setcomponentname_callback != nullptr) {
            const QString componentName_ret = componentName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray componentName_b = componentName_ret.toUtf8();
            libqt_string componentName_str;
            componentName_str.len = componentName_b.length();
            componentName_str.data = static_cast<const char*>(malloc(componentName_str.len + 1));
            memcpy((void*)componentName_str.data, componentName_b.data(), componentName_str.len);
            ((char*)componentName_str.data)[componentName_str.len] = '\0';
            libqt_string cbval1 = componentName_str;
            const QString componentDisplayName_ret = componentDisplayName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray componentDisplayName_b = componentDisplayName_ret.toUtf8();
            libqt_string componentDisplayName_str;
            componentDisplayName_str.len = componentDisplayName_b.length();
            componentDisplayName_str.data = static_cast<const char*>(malloc(componentDisplayName_str.len + 1));
            memcpy((void*)componentDisplayName_str.data, componentDisplayName_b.data(), componentDisplayName_str.len);
            ((char*)componentDisplayName_str.data)[componentDisplayName_str.len] = '\0';
            libqt_string cbval2 = componentDisplayName_str;

            kparts__partbase_setcomponentname_callback(this, cbval1, cbval2);
        } else {
            KParts__PartBase::setComponentName(componentName, componentDisplayName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__partbase_setxmlfile_isbase) {
            kparts__partbase_setxmlfile_isbase = false;
            KParts__PartBase::setXMLFile(file, merge, setXMLDoc);
        } else if (kparts__partbase_setxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;
            bool cbval2 = merge;
            bool cbval3 = setXMLDoc;

            kparts__partbase_setxmlfile_callback(this, cbval1, cbval2, cbval3);
        } else {
            KParts__PartBase::setXMLFile(file, merge, setXMLDoc);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__partbase_setlocalxmlfile_isbase) {
            kparts__partbase_setlocalxmlfile_isbase = false;
            KParts__PartBase::setLocalXMLFile(file);
        } else if (kparts__partbase_setlocalxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;

            kparts__partbase_setlocalxmlfile_callback(this, cbval1);
        } else {
            KParts__PartBase::setLocalXMLFile(file);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__partbase_setxml_isbase) {
            kparts__partbase_setxml_isbase = false;
            KParts__PartBase::setXML(document, merge);
        } else if (kparts__partbase_setxml_callback != nullptr) {
            const QString document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            libqt_string document_str;
            document_str.len = document_b.length();
            document_str.data = static_cast<const char*>(malloc(document_str.len + 1));
            memcpy((void*)document_str.data, document_b.data(), document_str.len);
            ((char*)document_str.data)[document_str.len] = '\0';
            libqt_string cbval1 = document_str;
            bool cbval2 = merge;

            kparts__partbase_setxml_callback(this, cbval1, cbval2);
        } else {
            KParts__PartBase::setXML(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__partbase_setdomdocument_isbase) {
            kparts__partbase_setdomdocument_isbase = false;
            KParts__PartBase::setDOMDocument(document, merge);
        } else if (kparts__partbase_setdomdocument_callback != nullptr) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            kparts__partbase_setdomdocument_callback(this, cbval1, cbval2);
        } else {
            KParts__PartBase::setDOMDocument(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__partbase_statechanged_isbase) {
            kparts__partbase_statechanged_isbase = false;
            KParts__PartBase::stateChanged(newstate, reverse);
        } else if (kparts__partbase_statechanged_callback != nullptr) {
            const QString newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            libqt_string newstate_str;
            newstate_str.len = newstate_b.length();
            newstate_str.data = static_cast<const char*>(malloc(newstate_str.len + 1));
            memcpy((void*)newstate_str.data, newstate_b.data(), newstate_str.len);
            ((char*)newstate_str.data)[newstate_str.len] = '\0';
            libqt_string cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);

            kparts__partbase_statechanged_callback(this, cbval1, cbval2);
        } else {
            KParts__PartBase::stateChanged(newstate, reverse);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kparts__partbase_standardsxmlfilelocation_isbase) {
            kparts__partbase_standardsxmlfilelocation_isbase = false;
            return KParts__PartBase::standardsXmlFileLocation();
        } else if (kparts__partbase_standardsxmlfilelocation_callback != nullptr) {
            const char* callback_ret = kparts__partbase_standardsxmlfilelocation_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__PartBase::standardsXmlFileLocation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kparts__partbase_loadstandardsxmlfile_isbase) {
            kparts__partbase_loadstandardsxmlfile_isbase = false;
            KParts__PartBase::loadStandardsXmlFile();
        } else if (kparts__partbase_loadstandardsxmlfile_callback != nullptr) {
            kparts__partbase_loadstandardsxmlfile_callback();
        } else {
            KParts__PartBase::loadStandardsXmlFile();
        }
    }

    // Friend functions
    friend void KParts__PartBase_SetComponentName(KParts::PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__PartBase_QBaseSetComponentName(KParts::PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__PartBase_SetXMLFile(KParts::PartBase* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__PartBase_QBaseSetXMLFile(KParts::PartBase* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__PartBase_SetLocalXMLFile(KParts::PartBase* self, const libqt_string file);
    friend void KParts__PartBase_QBaseSetLocalXMLFile(KParts::PartBase* self, const libqt_string file);
    friend void KParts__PartBase_SetXML(KParts::PartBase* self, const libqt_string document, bool merge);
    friend void KParts__PartBase_QBaseSetXML(KParts::PartBase* self, const libqt_string document, bool merge);
    friend void KParts__PartBase_SetDOMDocument(KParts::PartBase* self, const QDomDocument* document, bool merge);
    friend void KParts__PartBase_QBaseSetDOMDocument(KParts::PartBase* self, const QDomDocument* document, bool merge);
    friend void KParts__PartBase_StateChanged(KParts::PartBase* self, const libqt_string newstate, int reverse);
    friend void KParts__PartBase_QBaseStateChanged(KParts::PartBase* self, const libqt_string newstate, int reverse);
    friend libqt_string KParts__PartBase_StandardsXmlFileLocation(KParts::PartBase* self);
    friend libqt_string KParts__PartBase_QBaseStandardsXmlFileLocation(KParts::PartBase* self);
    friend void KParts__PartBase_LoadStandardsXmlFile(KParts::PartBase* self);
    friend void KParts__PartBase_QBaseLoadStandardsXmlFile(KParts::PartBase* self);
};

#endif
