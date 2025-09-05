#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUICLIENT_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUICLIENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMLGUIClient so that we can call protected methods
class VirtualKXMLGUIClient final : public KXMLGUIClient {

  public:
    // Virtual class boolean flag
    bool isVirtualKXMLGUIClient = true;

    // Virtual class public types (including callbacks)
    using KXMLGUIClient_Action2_Callback = QAction* (*)(const KXMLGUIClient*, QDomElement*);
    using KXMLGUIClient_ActionCollection_Callback = KActionCollection* (*)();
    using KXMLGUIClient_ComponentName_Callback = const char* (*)();
    using KXMLGUIClient_DomDocument_Callback = QDomDocument* (*)();
    using KXMLGUIClient_XmlFile_Callback = const char* (*)();
    using KXMLGUIClient_LocalXMLFile_Callback = const char* (*)();
    using KXMLGUIClient_SetComponentName_Callback = void (*)(KXMLGUIClient*, libqt_string, libqt_string);
    using KXMLGUIClient_SetXMLFile_Callback = void (*)(KXMLGUIClient*, libqt_string, bool, bool);
    using KXMLGUIClient_SetLocalXMLFile_Callback = void (*)(KXMLGUIClient*, libqt_string);
    using KXMLGUIClient_SetXML_Callback = void (*)(KXMLGUIClient*, libqt_string, bool);
    using KXMLGUIClient_SetDOMDocument_Callback = void (*)(KXMLGUIClient*, QDomDocument*, bool);
    using KXMLGUIClient_StateChanged_Callback = void (*)(KXMLGUIClient*, libqt_string, int);
    using KXMLGUIClient_VirtualHook_Callback = void (*)(KXMLGUIClient*, int, void*);
    using KXMLGUIClient_StandardsXmlFileLocation_Callback = const char* (*)();
    using KXMLGUIClient_LoadStandardsXmlFile_Callback = void (*)();

  protected:
    // Instance callback storage
    KXMLGUIClient_Action2_Callback kxmlguiclient_action2_callback = nullptr;
    KXMLGUIClient_ActionCollection_Callback kxmlguiclient_actioncollection_callback = nullptr;
    KXMLGUIClient_ComponentName_Callback kxmlguiclient_componentname_callback = nullptr;
    KXMLGUIClient_DomDocument_Callback kxmlguiclient_domdocument_callback = nullptr;
    KXMLGUIClient_XmlFile_Callback kxmlguiclient_xmlfile_callback = nullptr;
    KXMLGUIClient_LocalXMLFile_Callback kxmlguiclient_localxmlfile_callback = nullptr;
    KXMLGUIClient_SetComponentName_Callback kxmlguiclient_setcomponentname_callback = nullptr;
    KXMLGUIClient_SetXMLFile_Callback kxmlguiclient_setxmlfile_callback = nullptr;
    KXMLGUIClient_SetLocalXMLFile_Callback kxmlguiclient_setlocalxmlfile_callback = nullptr;
    KXMLGUIClient_SetXML_Callback kxmlguiclient_setxml_callback = nullptr;
    KXMLGUIClient_SetDOMDocument_Callback kxmlguiclient_setdomdocument_callback = nullptr;
    KXMLGUIClient_StateChanged_Callback kxmlguiclient_statechanged_callback = nullptr;
    KXMLGUIClient_VirtualHook_Callback kxmlguiclient_virtualhook_callback = nullptr;
    KXMLGUIClient_StandardsXmlFileLocation_Callback kxmlguiclient_standardsxmlfilelocation_callback = nullptr;
    KXMLGUIClient_LoadStandardsXmlFile_Callback kxmlguiclient_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kxmlguiclient_action2_isbase = false;
    mutable bool kxmlguiclient_actioncollection_isbase = false;
    mutable bool kxmlguiclient_componentname_isbase = false;
    mutable bool kxmlguiclient_domdocument_isbase = false;
    mutable bool kxmlguiclient_xmlfile_isbase = false;
    mutable bool kxmlguiclient_localxmlfile_isbase = false;
    mutable bool kxmlguiclient_setcomponentname_isbase = false;
    mutable bool kxmlguiclient_setxmlfile_isbase = false;
    mutable bool kxmlguiclient_setlocalxmlfile_isbase = false;
    mutable bool kxmlguiclient_setxml_isbase = false;
    mutable bool kxmlguiclient_setdomdocument_isbase = false;
    mutable bool kxmlguiclient_statechanged_isbase = false;
    mutable bool kxmlguiclient_virtualhook_isbase = false;
    mutable bool kxmlguiclient_standardsxmlfilelocation_isbase = false;
    mutable bool kxmlguiclient_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKXMLGUIClient() : KXMLGUIClient() {};
    VirtualKXMLGUIClient(KXMLGUIClient* parent) : KXMLGUIClient(parent) {};

    ~VirtualKXMLGUIClient() {
        kxmlguiclient_action2_callback = nullptr;
        kxmlguiclient_actioncollection_callback = nullptr;
        kxmlguiclient_componentname_callback = nullptr;
        kxmlguiclient_domdocument_callback = nullptr;
        kxmlguiclient_xmlfile_callback = nullptr;
        kxmlguiclient_localxmlfile_callback = nullptr;
        kxmlguiclient_setcomponentname_callback = nullptr;
        kxmlguiclient_setxmlfile_callback = nullptr;
        kxmlguiclient_setlocalxmlfile_callback = nullptr;
        kxmlguiclient_setxml_callback = nullptr;
        kxmlguiclient_setdomdocument_callback = nullptr;
        kxmlguiclient_statechanged_callback = nullptr;
        kxmlguiclient_virtualhook_callback = nullptr;
        kxmlguiclient_standardsxmlfilelocation_callback = nullptr;
        kxmlguiclient_loadstandardsxmlfile_callback = nullptr;
    }

    // Callback setters
    inline void setKXMLGUIClient_Action2_Callback(KXMLGUIClient_Action2_Callback cb) { kxmlguiclient_action2_callback = cb; }
    inline void setKXMLGUIClient_ActionCollection_Callback(KXMLGUIClient_ActionCollection_Callback cb) { kxmlguiclient_actioncollection_callback = cb; }
    inline void setKXMLGUIClient_ComponentName_Callback(KXMLGUIClient_ComponentName_Callback cb) { kxmlguiclient_componentname_callback = cb; }
    inline void setKXMLGUIClient_DomDocument_Callback(KXMLGUIClient_DomDocument_Callback cb) { kxmlguiclient_domdocument_callback = cb; }
    inline void setKXMLGUIClient_XmlFile_Callback(KXMLGUIClient_XmlFile_Callback cb) { kxmlguiclient_xmlfile_callback = cb; }
    inline void setKXMLGUIClient_LocalXMLFile_Callback(KXMLGUIClient_LocalXMLFile_Callback cb) { kxmlguiclient_localxmlfile_callback = cb; }
    inline void setKXMLGUIClient_SetComponentName_Callback(KXMLGUIClient_SetComponentName_Callback cb) { kxmlguiclient_setcomponentname_callback = cb; }
    inline void setKXMLGUIClient_SetXMLFile_Callback(KXMLGUIClient_SetXMLFile_Callback cb) { kxmlguiclient_setxmlfile_callback = cb; }
    inline void setKXMLGUIClient_SetLocalXMLFile_Callback(KXMLGUIClient_SetLocalXMLFile_Callback cb) { kxmlguiclient_setlocalxmlfile_callback = cb; }
    inline void setKXMLGUIClient_SetXML_Callback(KXMLGUIClient_SetXML_Callback cb) { kxmlguiclient_setxml_callback = cb; }
    inline void setKXMLGUIClient_SetDOMDocument_Callback(KXMLGUIClient_SetDOMDocument_Callback cb) { kxmlguiclient_setdomdocument_callback = cb; }
    inline void setKXMLGUIClient_StateChanged_Callback(KXMLGUIClient_StateChanged_Callback cb) { kxmlguiclient_statechanged_callback = cb; }
    inline void setKXMLGUIClient_VirtualHook_Callback(KXMLGUIClient_VirtualHook_Callback cb) { kxmlguiclient_virtualhook_callback = cb; }
    inline void setKXMLGUIClient_StandardsXmlFileLocation_Callback(KXMLGUIClient_StandardsXmlFileLocation_Callback cb) { kxmlguiclient_standardsxmlfilelocation_callback = cb; }
    inline void setKXMLGUIClient_LoadStandardsXmlFile_Callback(KXMLGUIClient_LoadStandardsXmlFile_Callback cb) { kxmlguiclient_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKXMLGUIClient_Action2_IsBase(bool value) const { kxmlguiclient_action2_isbase = value; }
    inline void setKXMLGUIClient_ActionCollection_IsBase(bool value) const { kxmlguiclient_actioncollection_isbase = value; }
    inline void setKXMLGUIClient_ComponentName_IsBase(bool value) const { kxmlguiclient_componentname_isbase = value; }
    inline void setKXMLGUIClient_DomDocument_IsBase(bool value) const { kxmlguiclient_domdocument_isbase = value; }
    inline void setKXMLGUIClient_XmlFile_IsBase(bool value) const { kxmlguiclient_xmlfile_isbase = value; }
    inline void setKXMLGUIClient_LocalXMLFile_IsBase(bool value) const { kxmlguiclient_localxmlfile_isbase = value; }
    inline void setKXMLGUIClient_SetComponentName_IsBase(bool value) const { kxmlguiclient_setcomponentname_isbase = value; }
    inline void setKXMLGUIClient_SetXMLFile_IsBase(bool value) const { kxmlguiclient_setxmlfile_isbase = value; }
    inline void setKXMLGUIClient_SetLocalXMLFile_IsBase(bool value) const { kxmlguiclient_setlocalxmlfile_isbase = value; }
    inline void setKXMLGUIClient_SetXML_IsBase(bool value) const { kxmlguiclient_setxml_isbase = value; }
    inline void setKXMLGUIClient_SetDOMDocument_IsBase(bool value) const { kxmlguiclient_setdomdocument_isbase = value; }
    inline void setKXMLGUIClient_StateChanged_IsBase(bool value) const { kxmlguiclient_statechanged_isbase = value; }
    inline void setKXMLGUIClient_VirtualHook_IsBase(bool value) const { kxmlguiclient_virtualhook_isbase = value; }
    inline void setKXMLGUIClient_StandardsXmlFileLocation_IsBase(bool value) const { kxmlguiclient_standardsxmlfilelocation_isbase = value; }
    inline void setKXMLGUIClient_LoadStandardsXmlFile_IsBase(bool value) const { kxmlguiclient_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kxmlguiclient_action2_isbase) {
            kxmlguiclient_action2_isbase = false;
            return KXMLGUIClient::action(element);
        } else if (kxmlguiclient_action2_callback != nullptr) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kxmlguiclient_action2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXMLGUIClient::action(element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kxmlguiclient_actioncollection_isbase) {
            kxmlguiclient_actioncollection_isbase = false;
            return KXMLGUIClient::actionCollection();
        } else if (kxmlguiclient_actioncollection_callback != nullptr) {
            KActionCollection* callback_ret = kxmlguiclient_actioncollection_callback();
            return callback_ret;
        } else {
            return KXMLGUIClient::actionCollection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kxmlguiclient_componentname_isbase) {
            kxmlguiclient_componentname_isbase = false;
            return KXMLGUIClient::componentName();
        } else if (kxmlguiclient_componentname_callback != nullptr) {
            const char* callback_ret = kxmlguiclient_componentname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXMLGUIClient::componentName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kxmlguiclient_domdocument_isbase) {
            kxmlguiclient_domdocument_isbase = false;
            return KXMLGUIClient::domDocument();
        } else if (kxmlguiclient_domdocument_callback != nullptr) {
            QDomDocument* callback_ret = kxmlguiclient_domdocument_callback();
            return *callback_ret;
        } else {
            return KXMLGUIClient::domDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kxmlguiclient_xmlfile_isbase) {
            kxmlguiclient_xmlfile_isbase = false;
            return KXMLGUIClient::xmlFile();
        } else if (kxmlguiclient_xmlfile_callback != nullptr) {
            const char* callback_ret = kxmlguiclient_xmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXMLGUIClient::xmlFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kxmlguiclient_localxmlfile_isbase) {
            kxmlguiclient_localxmlfile_isbase = false;
            return KXMLGUIClient::localXMLFile();
        } else if (kxmlguiclient_localxmlfile_callback != nullptr) {
            const char* callback_ret = kxmlguiclient_localxmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXMLGUIClient::localXMLFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kxmlguiclient_setcomponentname_isbase) {
            kxmlguiclient_setcomponentname_isbase = false;
            KXMLGUIClient::setComponentName(componentName, componentDisplayName);
        } else if (kxmlguiclient_setcomponentname_callback != nullptr) {
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

            kxmlguiclient_setcomponentname_callback(this, cbval1, cbval2);
        } else {
            KXMLGUIClient::setComponentName(componentName, componentDisplayName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kxmlguiclient_setxmlfile_isbase) {
            kxmlguiclient_setxmlfile_isbase = false;
            KXMLGUIClient::setXMLFile(file, merge, setXMLDoc);
        } else if (kxmlguiclient_setxmlfile_callback != nullptr) {
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

            kxmlguiclient_setxmlfile_callback(this, cbval1, cbval2, cbval3);
        } else {
            KXMLGUIClient::setXMLFile(file, merge, setXMLDoc);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kxmlguiclient_setlocalxmlfile_isbase) {
            kxmlguiclient_setlocalxmlfile_isbase = false;
            KXMLGUIClient::setLocalXMLFile(file);
        } else if (kxmlguiclient_setlocalxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;

            kxmlguiclient_setlocalxmlfile_callback(this, cbval1);
        } else {
            KXMLGUIClient::setLocalXMLFile(file);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kxmlguiclient_setxml_isbase) {
            kxmlguiclient_setxml_isbase = false;
            KXMLGUIClient::setXML(document, merge);
        } else if (kxmlguiclient_setxml_callback != nullptr) {
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

            kxmlguiclient_setxml_callback(this, cbval1, cbval2);
        } else {
            KXMLGUIClient::setXML(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kxmlguiclient_setdomdocument_isbase) {
            kxmlguiclient_setdomdocument_isbase = false;
            KXMLGUIClient::setDOMDocument(document, merge);
        } else if (kxmlguiclient_setdomdocument_callback != nullptr) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            kxmlguiclient_setdomdocument_callback(this, cbval1, cbval2);
        } else {
            KXMLGUIClient::setDOMDocument(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kxmlguiclient_statechanged_isbase) {
            kxmlguiclient_statechanged_isbase = false;
            KXMLGUIClient::stateChanged(newstate, reverse);
        } else if (kxmlguiclient_statechanged_callback != nullptr) {
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

            kxmlguiclient_statechanged_callback(this, cbval1, cbval2);
        } else {
            KXMLGUIClient::stateChanged(newstate, reverse);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kxmlguiclient_virtualhook_isbase) {
            kxmlguiclient_virtualhook_isbase = false;
            KXMLGUIClient::virtual_hook(id, data);
        } else if (kxmlguiclient_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kxmlguiclient_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KXMLGUIClient::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kxmlguiclient_standardsxmlfilelocation_isbase) {
            kxmlguiclient_standardsxmlfilelocation_isbase = false;
            return KXMLGUIClient::standardsXmlFileLocation();
        } else if (kxmlguiclient_standardsxmlfilelocation_callback != nullptr) {
            const char* callback_ret = kxmlguiclient_standardsxmlfilelocation_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXMLGUIClient::standardsXmlFileLocation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kxmlguiclient_loadstandardsxmlfile_isbase) {
            kxmlguiclient_loadstandardsxmlfile_isbase = false;
            KXMLGUIClient::loadStandardsXmlFile();
        } else if (kxmlguiclient_loadstandardsxmlfile_callback != nullptr) {
            kxmlguiclient_loadstandardsxmlfile_callback();
        } else {
            KXMLGUIClient::loadStandardsXmlFile();
        }
    }

    // Friend functions
    friend void KXMLGUIClient_SetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KXMLGUIClient_QBaseSetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KXMLGUIClient_SetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KXMLGUIClient_QBaseSetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KXMLGUIClient_SetLocalXMLFile(KXMLGUIClient* self, const libqt_string file);
    friend void KXMLGUIClient_QBaseSetLocalXMLFile(KXMLGUIClient* self, const libqt_string file);
    friend void KXMLGUIClient_SetXML(KXMLGUIClient* self, const libqt_string document, bool merge);
    friend void KXMLGUIClient_QBaseSetXML(KXMLGUIClient* self, const libqt_string document, bool merge);
    friend void KXMLGUIClient_SetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge);
    friend void KXMLGUIClient_QBaseSetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge);
    friend void KXMLGUIClient_StateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse);
    friend void KXMLGUIClient_QBaseStateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse);
    friend void KXMLGUIClient_VirtualHook(KXMLGUIClient* self, int id, void* data);
    friend void KXMLGUIClient_QBaseVirtualHook(KXMLGUIClient* self, int id, void* data);
    friend libqt_string KXMLGUIClient_StandardsXmlFileLocation(KXMLGUIClient* self);
    friend libqt_string KXMLGUIClient_QBaseStandardsXmlFileLocation(KXMLGUIClient* self);
    friend void KXMLGUIClient_LoadStandardsXmlFile(KXMLGUIClient* self);
    friend void KXMLGUIClient_QBaseLoadStandardsXmlFile(KXMLGUIClient* self);
};

#endif
