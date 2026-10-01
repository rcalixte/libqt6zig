#pragma once
#ifndef EXTRAS_KPARTS_LIBPART_HXX
#define EXTRAS_KPARTS_LIBPART_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::Part
class VirtualKPartsPart final : public KParts::Part {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__Part_MetaObject_Callback = QMetaObject* (*)(const KParts__Part*);
    using KParts__Part_Metacast_Callback = void* (*)(KParts__Part*, const char*);
    using KParts__Part_Metacall_Callback = int (*)(KParts__Part*, int, int, void**);
    using KParts__Part_Widget_Callback = QWidget* (*)(KParts__Part*);
    using KParts__Part_SetManager_Callback = void (*)(KParts__Part*, KParts__PartManager*);
    using KParts__Part_HitTest_Callback = KParts__Part* (*)(KParts__Part*, QWidget*, QPoint*);
    using KParts__Part_SetWidget_Callback = void (*)(KParts__Part*, QWidget*);
    using KParts__Part_CustomEvent_Callback = void (*)(KParts__Part*, QEvent*);
    using KParts__Part_PartActivateEvent_Callback = void (*)(KParts__Part*, KParts__PartActivateEvent*);
    using KParts__Part_GuiActivateEvent_Callback = void (*)(KParts__Part*, KParts__GUIActivateEvent*);
    using KParts__Part_Event_Callback = bool (*)(KParts__Part*, QEvent*);
    using KParts__Part_EventFilter_Callback = bool (*)(KParts__Part*, QObject*, QEvent*);
    using KParts__Part_TimerEvent_Callback = void (*)(KParts__Part*, QTimerEvent*);
    using KParts__Part_ChildEvent_Callback = void (*)(KParts__Part*, QChildEvent*);
    using KParts__Part_ConnectNotify_Callback = void (*)(KParts__Part*, QMetaMethod*);
    using KParts__Part_DisconnectNotify_Callback = void (*)(KParts__Part*, QMetaMethod*);
    using KParts__Part_Action2_Callback = QAction* (*)(const KParts__Part*, QDomElement*);
    using KParts__Part_ActionCollection_Callback = KActionCollection* (*)(const KParts__Part*);
    using KParts__Part_ComponentName_Callback = const char* (*)(const KParts__Part*);
    using KParts__Part_DomDocument_Callback = QDomDocument* (*)(const KParts__Part*);
    using KParts__Part_XmlFile_Callback = const char* (*)(const KParts__Part*);
    using KParts__Part_LocalXMLFile_Callback = const char* (*)(const KParts__Part*);
    using KParts__Part_SetComponentName_Callback = void (*)(KParts__Part*, const char*, const char*);
    using KParts__Part_SetXMLFile_Callback = void (*)(KParts__Part*, const char*, bool, bool);
    using KParts__Part_SetLocalXMLFile_Callback = void (*)(KParts__Part*, const char*);
    using KParts__Part_SetXML_Callback = void (*)(KParts__Part*, const char*, bool);
    using KParts__Part_SetDOMDocument_Callback = void (*)(KParts__Part*, QDomDocument*, bool);
    using KParts__Part_StateChanged_Callback = void (*)(KParts__Part*, const char*, int);
    using KParts::Part::hostContainer;
    using KParts::Part::isSignalConnected;
    using KParts::Part::loadStandardsXmlFile;
    using KParts::Part::receivers;
    using KParts::Part::sender;
    using KParts::Part::senderSignalIndex;
    using KParts::Part::slotWidgetDestroyed;
    using KParts::Part::standardsXmlFileLocation;

    // Instance callback storage
    KParts__Part_MetaObject_Callback kparts__part_metaobject_callback = nullptr;
    KParts__Part_Metacast_Callback kparts__part_metacast_callback = nullptr;
    KParts__Part_Metacall_Callback kparts__part_metacall_callback = nullptr;
    KParts__Part_Widget_Callback kparts__part_widget_callback = nullptr;
    KParts__Part_SetManager_Callback kparts__part_setmanager_callback = nullptr;
    KParts__Part_HitTest_Callback kparts__part_hittest_callback = nullptr;
    KParts__Part_SetWidget_Callback kparts__part_setwidget_callback = nullptr;
    KParts__Part_CustomEvent_Callback kparts__part_customevent_callback = nullptr;
    KParts__Part_PartActivateEvent_Callback kparts__part_partactivateevent_callback = nullptr;
    KParts__Part_GuiActivateEvent_Callback kparts__part_guiactivateevent_callback = nullptr;
    KParts__Part_Event_Callback kparts__part_event_callback = nullptr;
    KParts__Part_EventFilter_Callback kparts__part_eventfilter_callback = nullptr;
    KParts__Part_TimerEvent_Callback kparts__part_timerevent_callback = nullptr;
    KParts__Part_ChildEvent_Callback kparts__part_childevent_callback = nullptr;
    KParts__Part_ConnectNotify_Callback kparts__part_connectnotify_callback = nullptr;
    KParts__Part_DisconnectNotify_Callback kparts__part_disconnectnotify_callback = nullptr;
    KParts__Part_Action2_Callback kparts__part_action2_callback = nullptr;
    KParts__Part_ActionCollection_Callback kparts__part_actioncollection_callback = nullptr;
    KParts__Part_ComponentName_Callback kparts__part_componentname_callback = nullptr;
    KParts__Part_DomDocument_Callback kparts__part_domdocument_callback = nullptr;
    KParts__Part_XmlFile_Callback kparts__part_xmlfile_callback = nullptr;
    KParts__Part_LocalXMLFile_Callback kparts__part_localxmlfile_callback = nullptr;
    KParts__Part_SetComponentName_Callback kparts__part_setcomponentname_callback = nullptr;
    KParts__Part_SetXMLFile_Callback kparts__part_setxmlfile_callback = nullptr;
    KParts__Part_SetLocalXMLFile_Callback kparts__part_setlocalxmlfile_callback = nullptr;
    KParts__Part_SetXML_Callback kparts__part_setxml_callback = nullptr;
    KParts__Part_SetDOMDocument_Callback kparts__part_setdomdocument_callback = nullptr;
    KParts__Part_StateChanged_Callback kparts__part_statechanged_callback = nullptr;

    // Access struct
    struct Base : KParts::Part {
        using KParts::Part::childEvent;
        using KParts::Part::connectNotify;
        using KParts::Part::customEvent;
        using KParts::Part::disconnectNotify;
        using KParts::Part::guiActivateEvent;
        using KParts::Part::partActivateEvent;
        using KParts::Part::setComponentName;
        using KParts::Part::setDOMDocument;
        using KParts::Part::setLocalXMLFile;
        using KParts::Part::setWidget;
        using KParts::Part::setXML;
        using KParts::Part::setXMLFile;
        using KParts::Part::stateChanged;
        using KParts::Part::timerEvent;
    };

    VirtualKPartsPart() : KParts::Part() {};
    VirtualKPartsPart(QObject* parent) : KParts::Part(parent) {};
    VirtualKPartsPart(QObject* parent, const KPluginMetaData& data) : KParts::Part(parent, data) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__part_metaobject_callback) {
            QMetaObject* callback_ret = kparts__part_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__Part::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__part_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__part_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__part_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__part_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__Part::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() override {
        if (kparts__part_widget_callback) {
            QWidget* callback_ret = kparts__part_widget_callback(this);
            return callback_ret;
        }
        return KParts__Part::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setManager(KParts::PartManager* manager) override {
        if (kparts__part_setmanager_callback) {
            KParts__PartManager* cbval1 = manager;
            kparts__part_setmanager_callback(this, cbval1);
            return;
        }
        KParts__Part::setManager(manager);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* hitTest(QWidget* widget, const QPoint& globalPos) override {
        if (kparts__part_hittest_callback) {
            QWidget* cbval1 = widget;
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);
            KParts__Part* callback_ret = kparts__part_hittest_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__Part::hitTest(widget, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidget(QWidget* widget) override {
        if (kparts__part_setwidget_callback) {
            QWidget* cbval1 = widget;
            kparts__part_setwidget_callback(this, cbval1);
            return;
        }
        KParts__Part::setWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__part_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__part_customevent_callback(this, cbval1);
            return;
        }
        KParts__Part::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void partActivateEvent(KParts::PartActivateEvent* event) override {
        if (kparts__part_partactivateevent_callback) {
            KParts__PartActivateEvent* cbval1 = event;
            kparts__part_partactivateevent_callback(this, cbval1);
            return;
        }
        KParts__Part::partActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void guiActivateEvent(KParts::GUIActivateEvent* event) override {
        if (kparts__part_guiactivateevent_callback) {
            KParts__GUIActivateEvent* cbval1 = event;
            kparts__part_guiactivateevent_callback(this, cbval1);
            return;
        }
        KParts__Part::guiActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__part_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__part_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__part_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__part_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__Part::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__part_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__part_timerevent_callback(this, cbval1);
            return;
        }
        KParts__Part::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__part_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__part_childevent_callback(this, cbval1);
            return;
        }
        KParts__Part::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__part_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__part_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__Part::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__part_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__part_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__Part::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__part_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kparts__part_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__part_actioncollection_callback) {
            KActionCollection* callback_ret = kparts__part_actioncollection_callback(this);
            return callback_ret;
        }
        return KParts__Part::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__part_componentname_callback) {
            const char* callback_ret = kparts__part_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__part_domdocument_callback) {
            QDomDocument* callback_ret = kparts__part_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__Part::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__part_xmlfile_callback) {
            const char* callback_ret = kparts__part_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__part_localxmlfile_callback) {
            const char* callback_ret = kparts__part_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__part_setcomponentname_callback) {
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
            kparts__part_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KParts__Part::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__part_setxmlfile_callback) {
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
            kparts__part_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KParts__Part::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__part_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kparts__part_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KParts__Part::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__part_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kparts__part_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KParts__Part::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__part_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kparts__part_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KParts__Part::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__part_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kparts__part_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KParts__Part::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend void KParts__Part_SuperSetWidget(KParts::Part* self, QWidget* widget);
    friend void KParts__Part_SuperCustomEvent(KParts::Part* self, QEvent* event);
    friend void KParts__Part_SuperPartActivateEvent(KParts::Part* self, KParts__PartActivateEvent* event);
    friend void KParts__Part_SuperGuiActivateEvent(KParts::Part* self, KParts__GUIActivateEvent* event);
    friend void KParts__Part_SuperTimerEvent(KParts::Part* self, QTimerEvent* event);
    friend void KParts__Part_SuperChildEvent(KParts::Part* self, QChildEvent* event);
    friend void KParts__Part_SuperConnectNotify(KParts::Part* self, const QMetaMethod* signal);
    friend void KParts__Part_SuperDisconnectNotify(KParts::Part* self, const QMetaMethod* signal);
    friend void KParts__Part_SuperSetComponentName(KParts::Part* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__Part_SuperSetXMLFile(KParts::Part* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__Part_SuperSetLocalXMLFile(KParts::Part* self, const libqt_string file);
    friend void KParts__Part_SuperSetXML(KParts::Part* self, const libqt_string document, bool merge);
    friend void KParts__Part_SuperSetDOMDocument(KParts::Part* self, const QDomDocument* document, bool merge);
    friend void KParts__Part_SuperStateChanged(KParts::Part* self, const libqt_string newstate, int reverse);
};

#endif
