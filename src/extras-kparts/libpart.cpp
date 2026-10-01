#include <KActionCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#include <KPluginMetaData>
#include <KXMLGUIClient>
#include <QAction>
#include <QChildEvent>
#include <QDomDocument>
#include <QDomElement>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <part.h>
#include "libpart.h"
#include "libpart.hxx"

KParts__Part* KParts__Part_new() {
    return new VirtualKPartsPart();
}

KParts__Part* KParts__Part_new2(QObject* parent) {
    return new VirtualKPartsPart(parent);
}

KParts__Part* KParts__Part_new3(QObject* parent, const KPluginMetaData* data) {
    return new VirtualKPartsPart(parent, *data);
}

KParts__PartBase* KParts__Part_AsKParts__PartBase(const KParts__Part* self) {
    return const_cast<KParts::Part*>(self);
}

KParts__Part* KParts__Part_FromKParts__PartBase(const KParts::PartBase* _kparts__partbase) {
    return dynamic_cast<KParts::Part*>(const_cast<KParts::PartBase*>(_kparts__partbase));
}

QMetaObject* KParts__Part_MetaObject(const KParts__Part* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__Part_Metacast(KParts__Part* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__Part_Metacall(KParts__Part* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__Part_Tr(const char* s) {
    auto _ret = KParts::Part::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KParts__Part_Widget(KParts__Part* self) {
    return self->widget();
}

void KParts__Part_SetManager(KParts__Part* self, KParts__PartManager* manager) {
    self->setManager(manager);
}

KParts__PartManager* KParts__Part_Manager(const KParts__Part* self) {
    return self->manager();
}

void KParts__Part_SetAutoDeleteWidget(KParts__Part* self, bool autoDeleteWidget) {
    self->setAutoDeleteWidget(autoDeleteWidget);
}

void KParts__Part_SetAutoDeletePart(KParts__Part* self, bool autoDeletePart) {
    self->setAutoDeletePart(autoDeletePart);
}

KParts__Part* KParts__Part_HitTest(KParts__Part* self, QWidget* widget, const QPoint* globalPos) {
    return self->hitTest(widget, *globalPos);
}

KPluginMetaData* KParts__Part_MetaData(const KParts__Part* self) {
    return new KPluginMetaData(self->metaData());
}

void KParts__Part_SetWindowCaption(KParts__Part* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setWindowCaption(caption_QString);
}

void KParts__Part_Connect_SetWindowCaption(KParts__Part* self, intptr_t slot) {
    void (*slotFunc)(KParts__Part*, const char*) = reinterpret_cast<void (*)(KParts__Part*, const char*)>(slot);
    KParts::Part::connect(self,
                          static_cast<void (KParts::Part::*)(const QString&)>(&KParts::Part::setWindowCaption),
                          [self, slotFunc](const QString& caption) {
                              const auto caption_ret = caption;
                              // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                              QByteArray caption_b = caption_ret.toUtf8();
                              auto caption_str_len = caption_b.length();
                              const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
                              memcpy((void*)caption_str, caption_b.data(), caption_str_len);
                              ((char*)caption_str)[caption_str_len] = '\0';
                              const char* sigval1 = caption_str;
                              slotFunc(self, sigval1);
                              libqt_free(caption_str);
                          });
}

void KParts__Part_SetStatusBarText(KParts__Part* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setStatusBarText(text_QString);
}

void KParts__Part_Connect_SetStatusBarText(KParts__Part* self, intptr_t slot) {
    void (*slotFunc)(KParts__Part*, const char*) = reinterpret_cast<void (*)(KParts__Part*, const char*)>(slot);
    KParts::Part::connect(self,
                          static_cast<void (KParts::Part::*)(const QString&)>(&KParts::Part::setStatusBarText),
                          [self, slotFunc](const QString& text) {
                              const auto text_ret = text;
                              // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                              QByteArray text_b = text_ret.toUtf8();
                              auto text_str_len = text_b.length();
                              const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                              memcpy((void*)text_str, text_b.data(), text_str_len);
                              ((char*)text_str)[text_str_len] = '\0';
                              const char* sigval1 = text_str;
                              slotFunc(self, sigval1);
                              libqt_free(text_str);
                          });
}

void KParts__Part_SetWidget(KParts__Part* self, QWidget* widget) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part) {
        vkparts__part->setWidget(widget);
    }
}

void KParts__Part_CustomEvent(KParts__Part* self, QEvent* event) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part) {
        vkparts__part->customEvent(event);
    }
}

void KParts__Part_PartActivateEvent(KParts__Part* self, KParts__PartActivateEvent* event) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part) {
        vkparts__part->partActivateEvent(event);
    }
}

void KParts__Part_GuiActivateEvent(KParts__Part* self, KParts__GUIActivateEvent* event) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part) {
        vkparts__part->guiActivateEvent(event);
    }
}

libqt_string KParts__Part_Tr2(const char* s, const char* c) {
    auto _ret = KParts::Part::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__Part_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::Part::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__Part_SuperMetaObject(const KParts__Part* self) {
    return (QMetaObject*)self->KParts::Part::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnMetaObject(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_metaobject_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__Part_SuperMetacast(KParts__Part* self, const char* param1) {
    return self->KParts::Part::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnMetacast(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_metacast_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__Part_SuperMetacall(KParts__Part* self, int param1, int param2, void** param3) {
    return self->KParts::Part::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnMetacall(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_metacall_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KParts__Part_SuperWidget(KParts__Part* self) {
    return self->KParts::Part::widget();
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnWidget(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_widget_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_Widget_Callback>(slot);
}

// Base class handler implementation
void KParts__Part_SuperSetManager(KParts__Part* self, KParts__PartManager* manager) {
    self->KParts::Part::setManager(manager);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetManager(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setmanager_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetManager_Callback>(slot);
}

// Base class handler implementation
KParts__Part* KParts__Part_SuperHitTest(KParts__Part* self, QWidget* widget, const QPoint* globalPos) {
    return self->KParts::Part::hitTest(widget, *globalPos);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnHitTest(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_hittest_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_HitTest_Callback>(slot);
}

// Base class handler implementation
void KParts__Part_SuperSetWidget(KParts__Part* self, QWidget* widget) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::setWidget(widget);
    } else
        qFatal("Error: Protected virtual method KParts::Part::setWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetWidget(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setwidget_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetWidget_Callback>(slot);
}

// Base class handler implementation
void KParts__Part_SuperCustomEvent(KParts__Part* self, QEvent* event) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::Part::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnCustomEvent(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_customevent_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_CustomEvent_Callback>(slot);
}

// Base class handler implementation
void KParts__Part_SuperPartActivateEvent(KParts__Part* self, KParts__PartActivateEvent* event) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::partActivateEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::Part::partActivateEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnPartActivateEvent(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_partactivateevent_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_PartActivateEvent_Callback>(slot);
}

// Base class handler implementation
void KParts__Part_SuperGuiActivateEvent(KParts__Part* self, KParts__GUIActivateEvent* event) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::guiActivateEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::Part::guiActivateEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnGuiActivateEvent(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_guiactivateevent_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_GuiActivateEvent_Callback>(slot);
}

// Derived class handler implementation
bool KParts__Part_Event(KParts__Part* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__Part_SuperEvent(KParts__Part* self, QEvent* event) {
    return self->KParts::Part::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnEvent(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_event_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_Event_Callback>(slot);
}

// Derived class handler implementation
bool KParts__Part_EventFilter(KParts__Part* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__Part_SuperEventFilter(KParts__Part* self, QObject* watched, QEvent* event) {
    return self->KParts::Part::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnEventFilter(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_eventfilter_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_TimerEvent(KParts__Part* self, QTimerEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperTimerEvent(KParts__Part* self, QTimerEvent* event) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::Part::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnTimerEvent(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_timerevent_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_ChildEvent(KParts__Part* self, QChildEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperChildEvent(KParts__Part* self, QChildEvent* event) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::Part::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnChildEvent(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_childevent_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_ConnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperConnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::Part::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnConnectNotify(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_connectnotify_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_DisconnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperDisconnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::Part::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnDisconnectNotify(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_disconnectnotify_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QAction* KParts__Part_Action2(const KParts__Part* self, const QDomElement* element) {
    return self->action(*element);
}

// Base class handler implementation
QAction* KParts__Part_SuperAction2(const KParts__Part* self, const QDomElement* element) {
    return self->KParts::Part::action(*element);
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnAction2(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_action2_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_Action2_Callback>(slot);
}

// Derived class handler implementation
KActionCollection* KParts__Part_ActionCollection(const KParts__Part* self) {
    return self->actionCollection();
}

// Base class handler implementation
KActionCollection* KParts__Part_SuperActionCollection(const KParts__Part* self) {
    return self->KParts::Part::actionCollection();
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnActionCollection(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_actioncollection_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_ActionCollection_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__Part_ComponentName(const KParts__Part* self) {
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
libqt_string KParts__Part_SuperComponentName(const KParts__Part* self) {
    auto _ret = self->KParts::Part::componentName();
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
void KParts__Part_OnComponentName(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_componentname_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_ComponentName_Callback>(slot);
}

// Derived class handler implementation
QDomDocument* KParts__Part_DomDocument(const KParts__Part* self) {
    return new QDomDocument(self->domDocument());
}

// Base class handler implementation
QDomDocument* KParts__Part_SuperDomDocument(const KParts__Part* self) {
    return new QDomDocument(self->KParts::Part::domDocument());
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnDomDocument(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_domdocument_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_DomDocument_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__Part_XmlFile(const KParts__Part* self) {
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
libqt_string KParts__Part_SuperXmlFile(const KParts__Part* self) {
    auto _ret = self->KParts::Part::xmlFile();
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
void KParts__Part_OnXmlFile(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_xmlfile_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_XmlFile_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__Part_LocalXMLFile(const KParts__Part* self) {
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
libqt_string KParts__Part_SuperLocalXMLFile(const KParts__Part* self) {
    auto _ret = self->KParts::Part::localXMLFile();
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
void KParts__Part_OnLocalXMLFile(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self)))
        vkpartspart->kparts__part_localxmlfile_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_LocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_SetComponentName(KParts__Part* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::setComponentName called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperSetComponentName(KParts__Part* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::setComponentName(componentName_QString, componentDisplayName_QString);
    } else
        qFatal("Error: Protected virtual method KParts::Part::setComponentName called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetComponentName(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setcomponentname_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetComponentName_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_SetXMLFile(KParts__Part* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::setXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperSetXMLFile(KParts__Part* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::setXMLFile(file_QString, merge, setXMLDoc);
    } else
        qFatal("Error: Protected virtual method KParts::Part::setXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetXMLFile(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setxmlfile_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_SetLocalXMLFile(KParts__Part* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->setLocalXMLFile(file_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::setLocalXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperSetLocalXMLFile(KParts__Part* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::setLocalXMLFile(file_QString);
    } else
        qFatal("Error: Protected virtual method KParts::Part::setLocalXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetLocalXMLFile(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setlocalxmlfile_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetLocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_SetXML(KParts__Part* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->setXML(document_QString, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::setXML called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperSetXML(KParts__Part* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::setXML(document_QString, merge);
    } else
        qFatal("Error: Protected virtual method KParts::Part::setXML called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetXML(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setxml_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetXML_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_SetDOMDocument(KParts__Part* self, const QDomDocument* document, bool merge) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->setDOMDocument(*document, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::Part::setDOMDocument called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperSetDOMDocument(KParts__Part* self, const QDomDocument* document, bool merge) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::setDOMDocument(*document, merge);
    } else
        qFatal("Error: Protected virtual method KParts::Part::setDOMDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetDOMDocument(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_setdomdocument_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_SetDOMDocument_Callback>(slot);
}

// Derived class handler implementation
void KParts__Part_StateChanged(KParts__Part* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart) {
        vkpartspart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        qFatal("Error: Protected virtual method KParts::Part::stateChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__Part_SuperStateChanged(KParts__Part* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->KParts::Part::stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else
        qFatal("Error: Protected virtual method KParts::Part::stateChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnStateChanged(KParts__Part* self, intptr_t slot) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self))
        vkpartspart->kparts__part_statechanged_callback = reinterpret_cast<VirtualKPartsPart::KParts__Part_StateChanged_Callback>(slot);
}

// Derived class protected handler implementation
QWidget* KParts__Part_HostContainer(KParts__Part* self, const libqt_string containerName) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
        return vkpartspart->VirtualKPartsPart::hostContainer(containerName_QString);
    } else
        qFatal("Error: Protected method KParts::Part::hostContainer called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__Part_SlotWidgetDestroyed(KParts__Part* self) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->VirtualKPartsPart::slotWidgetDestroyed();
    } else
        qFatal("Error: Protected method KParts::Part::slotWidgetDestroyed called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KParts__Part_Sender(const KParts__Part* self) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self))) {
        return vkpartspart->VirtualKPartsPart::sender();
    } else
        qFatal("Error: Protected method KParts::Part::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__Part_SenderSignalIndex(const KParts__Part* self) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self))) {
        return vkpartspart->VirtualKPartsPart::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::Part::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__Part_Receivers(const KParts__Part* self, const char* signal) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self))) {
        return vkpartspart->VirtualKPartsPart::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::Part::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__Part_IsSignalConnected(const KParts__Part* self, const QMetaMethod* signal) {
    if (auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self))) {
        return vkpartspart->VirtualKPartsPart::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::Part::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KParts__Part_StandardsXmlFileLocation(KParts__Part* self) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        auto _ret = vkpartspart->VirtualKPartsPart::standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::Part::standardsXmlFileLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__Part_LoadStandardsXmlFile(KParts__Part* self) {
    if (auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self)) {
        vkpartspart->VirtualKPartsPart::loadStandardsXmlFile();
    } else
        qFatal("Error: Protected method KParts::Part::loadStandardsXmlFile called without a directly constructed type");
}

void KParts__Part_Delete(KParts__Part* self) {
    delete self;
}
