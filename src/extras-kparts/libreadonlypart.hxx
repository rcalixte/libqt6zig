#pragma once
#ifndef EXTRAS_KPARTS_LIBREADONLYPART_HXX
#define EXTRAS_KPARTS_LIBREADONLYPART_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ReadOnlyPart
class VirtualKPartsReadOnlyPart final : public KParts::ReadOnlyPart {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__ReadOnlyPart_MetaObject_Callback = QMetaObject* (*)(const KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_Metacast_Callback = void* (*)(KParts__ReadOnlyPart*, const char*);
    using KParts__ReadOnlyPart_Metacall_Callback = int (*)(KParts__ReadOnlyPart*, int, int, void**);
    using KParts__ReadOnlyPart_OpenUrl_Callback = bool (*)(KParts__ReadOnlyPart*, QUrl*);
    using KParts__ReadOnlyPart_CloseUrl_Callback = bool (*)(KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_OpenFile_Callback = bool (*)(KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_GuiActivateEvent_Callback = void (*)(KParts__ReadOnlyPart*, KParts__GUIActivateEvent*);
    using KParts__ReadOnlyPart_Widget_Callback = QWidget* (*)(KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_SetManager_Callback = void (*)(KParts__ReadOnlyPart*, KParts__PartManager*);
    using KParts__ReadOnlyPart_HitTest_Callback = KParts__Part* (*)(KParts__ReadOnlyPart*, QWidget*, QPoint*);
    using KParts__ReadOnlyPart_SetWidget_Callback = void (*)(KParts__ReadOnlyPart*, QWidget*);
    using KParts__ReadOnlyPart_CustomEvent_Callback = void (*)(KParts__ReadOnlyPart*, QEvent*);
    using KParts__ReadOnlyPart_PartActivateEvent_Callback = void (*)(KParts__ReadOnlyPart*, KParts__PartActivateEvent*);
    using KParts__ReadOnlyPart_Event_Callback = bool (*)(KParts__ReadOnlyPart*, QEvent*);
    using KParts__ReadOnlyPart_EventFilter_Callback = bool (*)(KParts__ReadOnlyPart*, QObject*, QEvent*);
    using KParts__ReadOnlyPart_TimerEvent_Callback = void (*)(KParts__ReadOnlyPart*, QTimerEvent*);
    using KParts__ReadOnlyPart_ChildEvent_Callback = void (*)(KParts__ReadOnlyPart*, QChildEvent*);
    using KParts__ReadOnlyPart_ConnectNotify_Callback = void (*)(KParts__ReadOnlyPart*, QMetaMethod*);
    using KParts__ReadOnlyPart_DisconnectNotify_Callback = void (*)(KParts__ReadOnlyPart*, QMetaMethod*);
    using KParts__ReadOnlyPart_Action2_Callback = QAction* (*)(const KParts__ReadOnlyPart*, QDomElement*);
    using KParts__ReadOnlyPart_ActionCollection_Callback = KActionCollection* (*)(const KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_ComponentName_Callback = const char* (*)(const KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_DomDocument_Callback = QDomDocument* (*)(const KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_XmlFile_Callback = const char* (*)(const KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_LocalXMLFile_Callback = const char* (*)(const KParts__ReadOnlyPart*);
    using KParts__ReadOnlyPart_SetComponentName_Callback = void (*)(KParts__ReadOnlyPart*, const char*, const char*);
    using KParts__ReadOnlyPart_SetXMLFile_Callback = void (*)(KParts__ReadOnlyPart*, const char*, bool, bool);
    using KParts__ReadOnlyPart_SetLocalXMLFile_Callback = void (*)(KParts__ReadOnlyPart*, const char*);
    using KParts__ReadOnlyPart_SetXML_Callback = void (*)(KParts__ReadOnlyPart*, const char*, bool);
    using KParts__ReadOnlyPart_SetDOMDocument_Callback = void (*)(KParts__ReadOnlyPart*, QDomDocument*, bool);
    using KParts__ReadOnlyPart_StateChanged_Callback = void (*)(KParts__ReadOnlyPart*, const char*, int);
    using KParts::ReadOnlyPart::abortLoad;
    using KParts::ReadOnlyPart::hostContainer;
    using KParts::ReadOnlyPart::isSignalConnected;
    using KParts::ReadOnlyPart::loadStandardsXmlFile;
    using KParts::ReadOnlyPart::localFilePath;
    using KParts::ReadOnlyPart::receivers;
    using KParts::ReadOnlyPart::sender;
    using KParts::ReadOnlyPart::senderSignalIndex;
    using KParts::ReadOnlyPart::setLocalFilePath;
    using KParts::ReadOnlyPart::setUrl;
    using KParts::ReadOnlyPart::slotWidgetDestroyed;
    using KParts::ReadOnlyPart::standardsXmlFileLocation;

    // Instance callback storage
    KParts__ReadOnlyPart_MetaObject_Callback kparts__readonlypart_metaobject_callback = nullptr;
    KParts__ReadOnlyPart_Metacast_Callback kparts__readonlypart_metacast_callback = nullptr;
    KParts__ReadOnlyPart_Metacall_Callback kparts__readonlypart_metacall_callback = nullptr;
    KParts__ReadOnlyPart_OpenUrl_Callback kparts__readonlypart_openurl_callback = nullptr;
    KParts__ReadOnlyPart_CloseUrl_Callback kparts__readonlypart_closeurl_callback = nullptr;
    KParts__ReadOnlyPart_OpenFile_Callback kparts__readonlypart_openfile_callback = nullptr;
    KParts__ReadOnlyPart_GuiActivateEvent_Callback kparts__readonlypart_guiactivateevent_callback = nullptr;
    KParts__ReadOnlyPart_Widget_Callback kparts__readonlypart_widget_callback = nullptr;
    KParts__ReadOnlyPart_SetManager_Callback kparts__readonlypart_setmanager_callback = nullptr;
    KParts__ReadOnlyPart_HitTest_Callback kparts__readonlypart_hittest_callback = nullptr;
    KParts__ReadOnlyPart_SetWidget_Callback kparts__readonlypart_setwidget_callback = nullptr;
    KParts__ReadOnlyPart_CustomEvent_Callback kparts__readonlypart_customevent_callback = nullptr;
    KParts__ReadOnlyPart_PartActivateEvent_Callback kparts__readonlypart_partactivateevent_callback = nullptr;
    KParts__ReadOnlyPart_Event_Callback kparts__readonlypart_event_callback = nullptr;
    KParts__ReadOnlyPart_EventFilter_Callback kparts__readonlypart_eventfilter_callback = nullptr;
    KParts__ReadOnlyPart_TimerEvent_Callback kparts__readonlypart_timerevent_callback = nullptr;
    KParts__ReadOnlyPart_ChildEvent_Callback kparts__readonlypart_childevent_callback = nullptr;
    KParts__ReadOnlyPart_ConnectNotify_Callback kparts__readonlypart_connectnotify_callback = nullptr;
    KParts__ReadOnlyPart_DisconnectNotify_Callback kparts__readonlypart_disconnectnotify_callback = nullptr;
    KParts__ReadOnlyPart_Action2_Callback kparts__readonlypart_action2_callback = nullptr;
    KParts__ReadOnlyPart_ActionCollection_Callback kparts__readonlypart_actioncollection_callback = nullptr;
    KParts__ReadOnlyPart_ComponentName_Callback kparts__readonlypart_componentname_callback = nullptr;
    KParts__ReadOnlyPart_DomDocument_Callback kparts__readonlypart_domdocument_callback = nullptr;
    KParts__ReadOnlyPart_XmlFile_Callback kparts__readonlypart_xmlfile_callback = nullptr;
    KParts__ReadOnlyPart_LocalXMLFile_Callback kparts__readonlypart_localxmlfile_callback = nullptr;
    KParts__ReadOnlyPart_SetComponentName_Callback kparts__readonlypart_setcomponentname_callback = nullptr;
    KParts__ReadOnlyPart_SetXMLFile_Callback kparts__readonlypart_setxmlfile_callback = nullptr;
    KParts__ReadOnlyPart_SetLocalXMLFile_Callback kparts__readonlypart_setlocalxmlfile_callback = nullptr;
    KParts__ReadOnlyPart_SetXML_Callback kparts__readonlypart_setxml_callback = nullptr;
    KParts__ReadOnlyPart_SetDOMDocument_Callback kparts__readonlypart_setdomdocument_callback = nullptr;
    KParts__ReadOnlyPart_StateChanged_Callback kparts__readonlypart_statechanged_callback = nullptr;

    // Access struct
    struct Base : KParts::ReadOnlyPart {
        using KParts::ReadOnlyPart::childEvent;
        using KParts::ReadOnlyPart::connectNotify;
        using KParts::ReadOnlyPart::customEvent;
        using KParts::ReadOnlyPart::disconnectNotify;
        using KParts::ReadOnlyPart::guiActivateEvent;
        using KParts::ReadOnlyPart::openFile;
        using KParts::ReadOnlyPart::partActivateEvent;
        using KParts::ReadOnlyPart::setComponentName;
        using KParts::ReadOnlyPart::setDOMDocument;
        using KParts::ReadOnlyPart::setLocalXMLFile;
        using KParts::ReadOnlyPart::setWidget;
        using KParts::ReadOnlyPart::setXML;
        using KParts::ReadOnlyPart::setXMLFile;
        using KParts::ReadOnlyPart::stateChanged;
        using KParts::ReadOnlyPart::timerEvent;
    };

    VirtualKPartsReadOnlyPart() : KParts::ReadOnlyPart() {};
    VirtualKPartsReadOnlyPart(QObject* parent) : KParts::ReadOnlyPart(parent) {};
    VirtualKPartsReadOnlyPart(QObject* parent, const KPluginMetaData& data) : KParts::ReadOnlyPart(parent, data) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__readonlypart_metaobject_callback) {
            QMetaObject* callback_ret = kparts__readonlypart_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__readonlypart_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__readonlypart_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__readonlypart_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__readonlypart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__ReadOnlyPart::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openUrl(const QUrl& url) override {
        if (kparts__readonlypart_openurl_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool callback_ret = kparts__readonlypart_openurl_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::openUrl(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeUrl() override {
        if (kparts__readonlypart_closeurl_callback) {
            bool callback_ret = kparts__readonlypart_closeurl_callback(this);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::closeUrl();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openFile() override {
        if (kparts__readonlypart_openfile_callback) {
            bool callback_ret = kparts__readonlypart_openfile_callback(this);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::openFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void guiActivateEvent(KParts::GUIActivateEvent* event) override {
        if (kparts__readonlypart_guiactivateevent_callback) {
            KParts__GUIActivateEvent* cbval1 = event;
            kparts__readonlypart_guiactivateevent_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::guiActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() override {
        if (kparts__readonlypart_widget_callback) {
            QWidget* callback_ret = kparts__readonlypart_widget_callback(this);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setManager(KParts::PartManager* manager) override {
        if (kparts__readonlypart_setmanager_callback) {
            KParts__PartManager* cbval1 = manager;
            kparts__readonlypart_setmanager_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::setManager(manager);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* hitTest(QWidget* widget, const QPoint& globalPos) override {
        if (kparts__readonlypart_hittest_callback) {
            QWidget* cbval1 = widget;
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);
            KParts__Part* callback_ret = kparts__readonlypart_hittest_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::hitTest(widget, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidget(QWidget* widget) override {
        if (kparts__readonlypart_setwidget_callback) {
            QWidget* cbval1 = widget;
            kparts__readonlypart_setwidget_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::setWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__readonlypart_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__readonlypart_customevent_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void partActivateEvent(KParts::PartActivateEvent* event) override {
        if (kparts__readonlypart_partactivateevent_callback) {
            KParts__PartActivateEvent* cbval1 = event;
            kparts__readonlypart_partactivateevent_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::partActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__readonlypart_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__readonlypart_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__readonlypart_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__readonlypart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__readonlypart_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__readonlypart_timerevent_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__readonlypart_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__readonlypart_childevent_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__readonlypart_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__readonlypart_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__readonlypart_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__readonlypart_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__ReadOnlyPart::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__readonlypart_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kparts__readonlypart_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__readonlypart_actioncollection_callback) {
            KActionCollection* callback_ret = kparts__readonlypart_actioncollection_callback(this);
            return callback_ret;
        }
        return KParts__ReadOnlyPart::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__readonlypart_componentname_callback) {
            const char* callback_ret = kparts__readonlypart_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__ReadOnlyPart::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__readonlypart_domdocument_callback) {
            QDomDocument* callback_ret = kparts__readonlypart_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__ReadOnlyPart::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__readonlypart_xmlfile_callback) {
            const char* callback_ret = kparts__readonlypart_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__ReadOnlyPart::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__readonlypart_localxmlfile_callback) {
            const char* callback_ret = kparts__readonlypart_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__ReadOnlyPart::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__readonlypart_setcomponentname_callback) {
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
            kparts__readonlypart_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KParts__ReadOnlyPart::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__readonlypart_setxmlfile_callback) {
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
            kparts__readonlypart_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KParts__ReadOnlyPart::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__readonlypart_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kparts__readonlypart_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KParts__ReadOnlyPart::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__readonlypart_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kparts__readonlypart_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KParts__ReadOnlyPart::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__readonlypart_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kparts__readonlypart_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KParts__ReadOnlyPart::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__readonlypart_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kparts__readonlypart_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KParts__ReadOnlyPart::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend bool KParts__ReadOnlyPart_SuperOpenFile(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_SuperGuiActivateEvent(KParts::ReadOnlyPart* self, KParts__GUIActivateEvent* event);
    friend void KParts__ReadOnlyPart_SuperSetWidget(KParts::ReadOnlyPart* self, QWidget* widget);
    friend void KParts__ReadOnlyPart_SuperCustomEvent(KParts::ReadOnlyPart* self, QEvent* event);
    friend void KParts__ReadOnlyPart_SuperPartActivateEvent(KParts::ReadOnlyPart* self, KParts__PartActivateEvent* event);
    friend void KParts__ReadOnlyPart_SuperTimerEvent(KParts::ReadOnlyPart* self, QTimerEvent* event);
    friend void KParts__ReadOnlyPart_SuperChildEvent(KParts::ReadOnlyPart* self, QChildEvent* event);
    friend void KParts__ReadOnlyPart_SuperConnectNotify(KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend void KParts__ReadOnlyPart_SuperDisconnectNotify(KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend void KParts__ReadOnlyPart_SuperSetComponentName(KParts::ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__ReadOnlyPart_SuperSetXMLFile(KParts::ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__ReadOnlyPart_SuperSetLocalXMLFile(KParts::ReadOnlyPart* self, const libqt_string file);
    friend void KParts__ReadOnlyPart_SuperSetXML(KParts::ReadOnlyPart* self, const libqt_string document, bool merge);
    friend void KParts__ReadOnlyPart_SuperSetDOMDocument(KParts::ReadOnlyPart* self, const QDomDocument* document, bool merge);
    friend void KParts__ReadOnlyPart_SuperStateChanged(KParts::ReadOnlyPart* self, const libqt_string newstate, int reverse);
};

#endif
