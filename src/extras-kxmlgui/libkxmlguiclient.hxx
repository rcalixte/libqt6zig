#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKXMLGUICLIENT_HXX
#define EXTRAS_KXMLGUI_LIBKXMLGUICLIENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMLGUIClient
class VirtualKXMLGUIClient final : public KXMLGUIClient {
  public:
    // Virtual class public types (including callbacks and access types)
    using KXMLGUIClient_Action2_Callback = QAction* (*)(const KXMLGUIClient*, QDomElement*);
    using KXMLGUIClient_ActionCollection_Callback = KActionCollection* (*)(const KXMLGUIClient*);
    using KXMLGUIClient_ComponentName_Callback = const char* (*)(const KXMLGUIClient*);
    using KXMLGUIClient_DomDocument_Callback = QDomDocument* (*)(const KXMLGUIClient*);
    using KXMLGUIClient_XmlFile_Callback = const char* (*)(const KXMLGUIClient*);
    using KXMLGUIClient_LocalXMLFile_Callback = const char* (*)(const KXMLGUIClient*);
    using KXMLGUIClient_SetComponentName_Callback = void (*)(KXMLGUIClient*, const char*, const char*);
    using KXMLGUIClient_SetXMLFile_Callback = void (*)(KXMLGUIClient*, const char*, bool, bool);
    using KXMLGUIClient_SetLocalXMLFile_Callback = void (*)(KXMLGUIClient*, const char*);
    using KXMLGUIClient_SetXML_Callback = void (*)(KXMLGUIClient*, const char*, bool);
    using KXMLGUIClient_SetDOMDocument_Callback = void (*)(KXMLGUIClient*, QDomDocument*, bool);
    using KXMLGUIClient_StateChanged_Callback = void (*)(KXMLGUIClient*, const char*, int);
    using KXMLGUIClient::loadStandardsXmlFile;
    using KXMLGUIClient::standardsXmlFileLocation;

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

    // Access struct
    struct Base : KXMLGUIClient {
        using KXMLGUIClient::setComponentName;
        using KXMLGUIClient::setDOMDocument;
        using KXMLGUIClient::setLocalXMLFile;
        using KXMLGUIClient::setXML;
        using KXMLGUIClient::setXMLFile;
        using KXMLGUIClient::stateChanged;
    };

    VirtualKXMLGUIClient() : KXMLGUIClient() {};
    VirtualKXMLGUIClient(KXMLGUIClient* parent) : KXMLGUIClient(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kxmlguiclient_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kxmlguiclient_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KXMLGUIClient::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kxmlguiclient_actioncollection_callback) {
            KActionCollection* callback_ret = kxmlguiclient_actioncollection_callback(this);
            return callback_ret;
        }
        return KXMLGUIClient::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kxmlguiclient_componentname_callback) {
            const char* callback_ret = kxmlguiclient_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KXMLGUIClient::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kxmlguiclient_domdocument_callback) {
            QDomDocument* callback_ret = kxmlguiclient_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXMLGUIClient::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kxmlguiclient_xmlfile_callback) {
            const char* callback_ret = kxmlguiclient_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KXMLGUIClient::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kxmlguiclient_localxmlfile_callback) {
            const char* callback_ret = kxmlguiclient_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KXMLGUIClient::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kxmlguiclient_setcomponentname_callback) {
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
            kxmlguiclient_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KXMLGUIClient::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kxmlguiclient_setxmlfile_callback) {
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
            kxmlguiclient_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KXMLGUIClient::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kxmlguiclient_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kxmlguiclient_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KXMLGUIClient::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kxmlguiclient_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kxmlguiclient_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KXMLGUIClient::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kxmlguiclient_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kxmlguiclient_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KXMLGUIClient::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kxmlguiclient_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kxmlguiclient_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KXMLGUIClient::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend void KXMLGUIClient_SuperSetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KXMLGUIClient_SuperSetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KXMLGUIClient_SuperSetLocalXMLFile(KXMLGUIClient* self, const libqt_string file);
    friend void KXMLGUIClient_SuperSetXML(KXMLGUIClient* self, const libqt_string document, bool merge);
    friend void KXMLGUIClient_SuperSetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge);
    friend void KXMLGUIClient_SuperStateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse);
};

#endif
