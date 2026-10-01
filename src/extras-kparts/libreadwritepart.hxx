#pragma once
#ifndef EXTRAS_KPARTS_LIBREADWRITEPART_HXX
#define EXTRAS_KPARTS_LIBREADWRITEPART_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ReadWritePart
class VirtualKPartsReadWritePart : public KParts::ReadWritePart {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__ReadWritePart_MetaObject_Callback = QMetaObject* (*)(const KParts__ReadWritePart*);
    using KParts__ReadWritePart_Metacast_Callback = void* (*)(KParts__ReadWritePart*, const char*);
    using KParts__ReadWritePart_Metacall_Callback = int (*)(KParts__ReadWritePart*, int, int, void**);
    using KParts__ReadWritePart_SetReadWrite_Callback = void (*)(KParts__ReadWritePart*, bool);
    using KParts__ReadWritePart_QueryClose_Callback = bool (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_CloseUrl_Callback = bool (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_CloseUrl2_Callback = bool (*)(KParts__ReadWritePart*, bool);
    using KParts__ReadWritePart_SaveAs_Callback = bool (*)(KParts__ReadWritePart*, QUrl*);
    using KParts__ReadWritePart_SetModified_Callback = void (*)(KParts__ReadWritePart*, bool);
    using KParts__ReadWritePart_Save_Callback = bool (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_SaveFile_Callback = bool (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_SaveToUrl_Callback = bool (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_OpenUrl_Callback = bool (*)(KParts__ReadWritePart*, QUrl*);
    using KParts__ReadWritePart_OpenFile_Callback = bool (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_GuiActivateEvent_Callback = void (*)(KParts__ReadWritePart*, KParts__GUIActivateEvent*);
    using KParts__ReadWritePart_Widget_Callback = QWidget* (*)(KParts__ReadWritePart*);
    using KParts__ReadWritePart_SetManager_Callback = void (*)(KParts__ReadWritePart*, KParts__PartManager*);
    using KParts__ReadWritePart_HitTest_Callback = KParts__Part* (*)(KParts__ReadWritePart*, QWidget*, QPoint*);
    using KParts__ReadWritePart_SetWidget_Callback = void (*)(KParts__ReadWritePart*, QWidget*);
    using KParts__ReadWritePart_CustomEvent_Callback = void (*)(KParts__ReadWritePart*, QEvent*);
    using KParts__ReadWritePart_PartActivateEvent_Callback = void (*)(KParts__ReadWritePart*, KParts__PartActivateEvent*);
    using KParts__ReadWritePart_Event_Callback = bool (*)(KParts__ReadWritePart*, QEvent*);
    using KParts__ReadWritePart_EventFilter_Callback = bool (*)(KParts__ReadWritePart*, QObject*, QEvent*);
    using KParts__ReadWritePart_TimerEvent_Callback = void (*)(KParts__ReadWritePart*, QTimerEvent*);
    using KParts__ReadWritePart_ChildEvent_Callback = void (*)(KParts__ReadWritePart*, QChildEvent*);
    using KParts__ReadWritePart_ConnectNotify_Callback = void (*)(KParts__ReadWritePart*, QMetaMethod*);
    using KParts__ReadWritePart_DisconnectNotify_Callback = void (*)(KParts__ReadWritePart*, QMetaMethod*);
    using KParts__ReadWritePart_Action2_Callback = QAction* (*)(const KParts__ReadWritePart*, QDomElement*);
    using KParts__ReadWritePart_ActionCollection_Callback = KActionCollection* (*)(const KParts__ReadWritePart*);
    using KParts__ReadWritePart_ComponentName_Callback = const char* (*)(const KParts__ReadWritePart*);
    using KParts__ReadWritePart_DomDocument_Callback = QDomDocument* (*)(const KParts__ReadWritePart*);
    using KParts__ReadWritePart_XmlFile_Callback = const char* (*)(const KParts__ReadWritePart*);
    using KParts__ReadWritePart_LocalXMLFile_Callback = const char* (*)(const KParts__ReadWritePart*);
    using KParts__ReadWritePart_SetComponentName_Callback = void (*)(KParts__ReadWritePart*, const char*, const char*);
    using KParts__ReadWritePart_SetXMLFile_Callback = void (*)(KParts__ReadWritePart*, const char*, bool, bool);
    using KParts__ReadWritePart_SetLocalXMLFile_Callback = void (*)(KParts__ReadWritePart*, const char*);
    using KParts__ReadWritePart_SetXML_Callback = void (*)(KParts__ReadWritePart*, const char*, bool);
    using KParts__ReadWritePart_SetDOMDocument_Callback = void (*)(KParts__ReadWritePart*, QDomDocument*, bool);
    using KParts__ReadWritePart_StateChanged_Callback = void (*)(KParts__ReadWritePart*, const char*, int);
    using KParts::ReadWritePart::abortLoad;
    using KParts::ReadWritePart::hostContainer;
    using KParts::ReadWritePart::isSignalConnected;
    using KParts::ReadWritePart::loadStandardsXmlFile;
    using KParts::ReadWritePart::localFilePath;
    using KParts::ReadWritePart::receivers;
    using KParts::ReadWritePart::sender;
    using KParts::ReadWritePart::senderSignalIndex;
    using KParts::ReadWritePart::setLocalFilePath;
    using KParts::ReadWritePart::setUrl;
    using KParts::ReadWritePart::slotWidgetDestroyed;
    using KParts::ReadWritePart::standardsXmlFileLocation;

    // Instance callback storage
    KParts__ReadWritePart_MetaObject_Callback kparts__readwritepart_metaobject_callback = nullptr;
    KParts__ReadWritePart_Metacast_Callback kparts__readwritepart_metacast_callback = nullptr;
    KParts__ReadWritePart_Metacall_Callback kparts__readwritepart_metacall_callback = nullptr;
    KParts__ReadWritePart_SetReadWrite_Callback kparts__readwritepart_setreadwrite_callback = nullptr;
    KParts__ReadWritePart_QueryClose_Callback kparts__readwritepart_queryclose_callback = nullptr;
    KParts__ReadWritePart_CloseUrl_Callback kparts__readwritepart_closeurl_callback = nullptr;
    KParts__ReadWritePart_CloseUrl2_Callback kparts__readwritepart_closeurl2_callback = nullptr;
    KParts__ReadWritePart_SaveAs_Callback kparts__readwritepart_saveas_callback = nullptr;
    KParts__ReadWritePart_SetModified_Callback kparts__readwritepart_setmodified_callback = nullptr;
    KParts__ReadWritePart_Save_Callback kparts__readwritepart_save_callback = nullptr;
    KParts__ReadWritePart_SaveFile_Callback kparts__readwritepart_savefile_callback = nullptr;
    KParts__ReadWritePart_SaveToUrl_Callback kparts__readwritepart_savetourl_callback = nullptr;
    KParts__ReadWritePart_OpenUrl_Callback kparts__readwritepart_openurl_callback = nullptr;
    KParts__ReadWritePart_OpenFile_Callback kparts__readwritepart_openfile_callback = nullptr;
    KParts__ReadWritePart_GuiActivateEvent_Callback kparts__readwritepart_guiactivateevent_callback = nullptr;
    KParts__ReadWritePart_Widget_Callback kparts__readwritepart_widget_callback = nullptr;
    KParts__ReadWritePart_SetManager_Callback kparts__readwritepart_setmanager_callback = nullptr;
    KParts__ReadWritePart_HitTest_Callback kparts__readwritepart_hittest_callback = nullptr;
    KParts__ReadWritePart_SetWidget_Callback kparts__readwritepart_setwidget_callback = nullptr;
    KParts__ReadWritePart_CustomEvent_Callback kparts__readwritepart_customevent_callback = nullptr;
    KParts__ReadWritePart_PartActivateEvent_Callback kparts__readwritepart_partactivateevent_callback = nullptr;
    KParts__ReadWritePart_Event_Callback kparts__readwritepart_event_callback = nullptr;
    KParts__ReadWritePart_EventFilter_Callback kparts__readwritepart_eventfilter_callback = nullptr;
    KParts__ReadWritePart_TimerEvent_Callback kparts__readwritepart_timerevent_callback = nullptr;
    KParts__ReadWritePart_ChildEvent_Callback kparts__readwritepart_childevent_callback = nullptr;
    KParts__ReadWritePart_ConnectNotify_Callback kparts__readwritepart_connectnotify_callback = nullptr;
    KParts__ReadWritePart_DisconnectNotify_Callback kparts__readwritepart_disconnectnotify_callback = nullptr;
    KParts__ReadWritePart_Action2_Callback kparts__readwritepart_action2_callback = nullptr;
    KParts__ReadWritePart_ActionCollection_Callback kparts__readwritepart_actioncollection_callback = nullptr;
    KParts__ReadWritePart_ComponentName_Callback kparts__readwritepart_componentname_callback = nullptr;
    KParts__ReadWritePart_DomDocument_Callback kparts__readwritepart_domdocument_callback = nullptr;
    KParts__ReadWritePart_XmlFile_Callback kparts__readwritepart_xmlfile_callback = nullptr;
    KParts__ReadWritePart_LocalXMLFile_Callback kparts__readwritepart_localxmlfile_callback = nullptr;
    KParts__ReadWritePart_SetComponentName_Callback kparts__readwritepart_setcomponentname_callback = nullptr;
    KParts__ReadWritePart_SetXMLFile_Callback kparts__readwritepart_setxmlfile_callback = nullptr;
    KParts__ReadWritePart_SetLocalXMLFile_Callback kparts__readwritepart_setlocalxmlfile_callback = nullptr;
    KParts__ReadWritePart_SetXML_Callback kparts__readwritepart_setxml_callback = nullptr;
    KParts__ReadWritePart_SetDOMDocument_Callback kparts__readwritepart_setdomdocument_callback = nullptr;
    KParts__ReadWritePart_StateChanged_Callback kparts__readwritepart_statechanged_callback = nullptr;

    // Access struct
    struct Base : KParts::ReadWritePart {
        using KParts::ReadWritePart::childEvent;
        using KParts::ReadWritePart::connectNotify;
        using KParts::ReadWritePart::customEvent;
        using KParts::ReadWritePart::disconnectNotify;
        using KParts::ReadWritePart::guiActivateEvent;
        using KParts::ReadWritePart::openFile;
        using KParts::ReadWritePart::partActivateEvent;
        using KParts::ReadWritePart::saveFile;
        using KParts::ReadWritePart::saveToUrl;
        using KParts::ReadWritePart::setComponentName;
        using KParts::ReadWritePart::setDOMDocument;
        using KParts::ReadWritePart::setLocalXMLFile;
        using KParts::ReadWritePart::setWidget;
        using KParts::ReadWritePart::setXML;
        using KParts::ReadWritePart::setXMLFile;
        using KParts::ReadWritePart::stateChanged;
        using KParts::ReadWritePart::timerEvent;
    };

    VirtualKPartsReadWritePart() : KParts::ReadWritePart() {};
    VirtualKPartsReadWritePart(QObject* parent) : KParts::ReadWritePart(parent) {};
    VirtualKPartsReadWritePart(QObject* parent, const KPluginMetaData& data) : KParts::ReadWritePart(parent, data) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__readwritepart_metaobject_callback) {
            QMetaObject* callback_ret = kparts__readwritepart_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__readwritepart_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__readwritepart_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadWritePart::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__readwritepart_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__readwritepart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__ReadWritePart::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadWrite(bool readwrite) override {
        if (kparts__readwritepart_setreadwrite_callback) {
            bool cbval1 = readwrite;
            kparts__readwritepart_setreadwrite_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::setReadWrite(readwrite);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kparts__readwritepart_queryclose_callback) {
            bool callback_ret = kparts__readwritepart_queryclose_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::queryClose();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeUrl() override {
        if (kparts__readwritepart_closeurl_callback) {
            bool callback_ret = kparts__readwritepart_closeurl_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::closeUrl();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeUrl(bool promptToSave) override {
        if (kparts__readwritepart_closeurl2_callback) {
            bool cbval1 = promptToSave;
            bool callback_ret = kparts__readwritepart_closeurl2_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadWritePart::closeUrl(promptToSave);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool saveAs(const QUrl& url) override {
        if (kparts__readwritepart_saveas_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool callback_ret = kparts__readwritepart_saveas_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadWritePart::saveAs(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModified(bool modified) override {
        if (kparts__readwritepart_setmodified_callback) {
            bool cbval1 = modified;
            kparts__readwritepart_setmodified_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::setModified(modified);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool save() override {
        if (kparts__readwritepart_save_callback) {
            bool callback_ret = kparts__readwritepart_save_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::save();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool saveFile() override {
        if (kparts__readwritepart_savefile_callback) {
            bool callback_ret = kparts__readwritepart_savefile_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KParts::ReadWritePart::saveFile called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool saveToUrl() override {
        if (kparts__readwritepart_savetourl_callback) {
            bool callback_ret = kparts__readwritepart_savetourl_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::saveToUrl();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openUrl(const QUrl& url) override {
        if (kparts__readwritepart_openurl_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool callback_ret = kparts__readwritepart_openurl_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadWritePart::openUrl(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openFile() override {
        if (kparts__readwritepart_openfile_callback) {
            bool callback_ret = kparts__readwritepart_openfile_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::openFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void guiActivateEvent(KParts::GUIActivateEvent* event) override {
        if (kparts__readwritepart_guiactivateevent_callback) {
            KParts__GUIActivateEvent* cbval1 = event;
            kparts__readwritepart_guiactivateevent_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::guiActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() override {
        if (kparts__readwritepart_widget_callback) {
            QWidget* callback_ret = kparts__readwritepart_widget_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setManager(KParts::PartManager* manager) override {
        if (kparts__readwritepart_setmanager_callback) {
            KParts__PartManager* cbval1 = manager;
            kparts__readwritepart_setmanager_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::setManager(manager);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* hitTest(QWidget* widget, const QPoint& globalPos) override {
        if (kparts__readwritepart_hittest_callback) {
            QWidget* cbval1 = widget;
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);
            KParts__Part* callback_ret = kparts__readwritepart_hittest_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__ReadWritePart::hitTest(widget, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidget(QWidget* widget) override {
        if (kparts__readwritepart_setwidget_callback) {
            QWidget* cbval1 = widget;
            kparts__readwritepart_setwidget_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::setWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__readwritepart_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__readwritepart_customevent_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void partActivateEvent(KParts::PartActivateEvent* event) override {
        if (kparts__readwritepart_partactivateevent_callback) {
            KParts__PartActivateEvent* cbval1 = event;
            kparts__readwritepart_partactivateevent_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::partActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__readwritepart_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__readwritepart_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadWritePart::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__readwritepart_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__readwritepart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__ReadWritePart::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__readwritepart_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__readwritepart_timerevent_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__readwritepart_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__readwritepart_childevent_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__readwritepart_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__readwritepart_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__readwritepart_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__readwritepart_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__ReadWritePart::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__readwritepart_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kparts__readwritepart_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ReadWritePart::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__readwritepart_actioncollection_callback) {
            KActionCollection* callback_ret = kparts__readwritepart_actioncollection_callback(this);
            return callback_ret;
        }
        return KParts__ReadWritePart::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__readwritepart_componentname_callback) {
            const char* callback_ret = kparts__readwritepart_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__ReadWritePart::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__readwritepart_domdocument_callback) {
            QDomDocument* callback_ret = kparts__readwritepart_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__ReadWritePart::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__readwritepart_xmlfile_callback) {
            const char* callback_ret = kparts__readwritepart_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__ReadWritePart::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__readwritepart_localxmlfile_callback) {
            const char* callback_ret = kparts__readwritepart_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__ReadWritePart::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__readwritepart_setcomponentname_callback) {
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
            kparts__readwritepart_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KParts__ReadWritePart::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__readwritepart_setxmlfile_callback) {
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
            kparts__readwritepart_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KParts__ReadWritePart::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__readwritepart_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kparts__readwritepart_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KParts__ReadWritePart::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__readwritepart_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kparts__readwritepart_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KParts__ReadWritePart::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__readwritepart_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kparts__readwritepart_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KParts__ReadWritePart::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__readwritepart_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kparts__readwritepart_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KParts__ReadWritePart::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend bool KParts__ReadWritePart_SuperSaveToUrl(KParts::ReadWritePart* self);
    friend bool KParts__ReadWritePart_SuperOpenFile(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_SuperGuiActivateEvent(KParts::ReadWritePart* self, KParts__GUIActivateEvent* event);
    friend void KParts__ReadWritePart_SuperSetWidget(KParts::ReadWritePart* self, QWidget* widget);
    friend void KParts__ReadWritePart_SuperCustomEvent(KParts::ReadWritePart* self, QEvent* event);
    friend void KParts__ReadWritePart_SuperPartActivateEvent(KParts::ReadWritePart* self, KParts__PartActivateEvent* event);
    friend void KParts__ReadWritePart_SuperTimerEvent(KParts::ReadWritePart* self, QTimerEvent* event);
    friend void KParts__ReadWritePart_SuperChildEvent(KParts::ReadWritePart* self, QChildEvent* event);
    friend void KParts__ReadWritePart_SuperConnectNotify(KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend void KParts__ReadWritePart_SuperDisconnectNotify(KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend void KParts__ReadWritePart_SuperSetComponentName(KParts::ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__ReadWritePart_SuperSetXMLFile(KParts::ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__ReadWritePart_SuperSetLocalXMLFile(KParts::ReadWritePart* self, const libqt_string file);
    friend void KParts__ReadWritePart_SuperSetXML(KParts::ReadWritePart* self, const libqt_string document, bool merge);
    friend void KParts__ReadWritePart_SuperSetDOMDocument(KParts::ReadWritePart* self, const QDomDocument* document, bool merge);
    friend void KParts__ReadWritePart_SuperStateChanged(KParts::ReadWritePart* self, const libqt_string newstate, int reverse);
};

#endif
