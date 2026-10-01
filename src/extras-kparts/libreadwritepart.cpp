#include <KActionCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadWritePart
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
#include <QUrl>
#include <QWidget>
#include <readwritepart.h>
#include "libreadwritepart.h"
#include "libreadwritepart.hxx"

KParts__ReadWritePart* KParts__ReadWritePart_new() {
    return new VirtualKPartsReadWritePart();
}

KParts__ReadWritePart* KParts__ReadWritePart_new2(QObject* parent) {
    return new VirtualKPartsReadWritePart(parent);
}

KParts__ReadWritePart* KParts__ReadWritePart_new3(QObject* parent, const KPluginMetaData* data) {
    return new VirtualKPartsReadWritePart(parent, *data);
}

QMetaObject* KParts__ReadWritePart_MetaObject(const KParts__ReadWritePart* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__ReadWritePart_Metacast(KParts__ReadWritePart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__ReadWritePart_Metacall(KParts__ReadWritePart* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__ReadWritePart_Tr(const char* s) {
    auto _ret = KParts::ReadWritePart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KParts__ReadWritePart_IsReadWrite(const KParts__ReadWritePart* self) {
    return self->isReadWrite();
}

void KParts__ReadWritePart_SetReadWrite(KParts__ReadWritePart* self, bool readwrite) {
    self->setReadWrite(readwrite);
}

bool KParts__ReadWritePart_IsModified(const KParts__ReadWritePart* self) {
    return self->isModified();
}

bool KParts__ReadWritePart_QueryClose(KParts__ReadWritePart* self) {
    return self->queryClose();
}

bool KParts__ReadWritePart_CloseUrl(KParts__ReadWritePart* self) {
    return self->closeUrl();
}

bool KParts__ReadWritePart_CloseUrl2(KParts__ReadWritePart* self, bool promptToSave) {
    return self->closeUrl(promptToSave);
}

bool KParts__ReadWritePart_SaveAs(KParts__ReadWritePart* self, const QUrl* url) {
    return self->saveAs(*url);
}

void KParts__ReadWritePart_SetModified(KParts__ReadWritePart* self, bool modified) {
    self->setModified(modified);
}

void KParts__ReadWritePart_SigQueryClose(KParts__ReadWritePart* self, bool* handled, bool* abortClosing) {
    self->sigQueryClose(handled, abortClosing);
}

void KParts__ReadWritePart_Connect_SigQueryClose(KParts__ReadWritePart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadWritePart*, bool*, bool*) = reinterpret_cast<void (*)(KParts__ReadWritePart*, bool*, bool*)>(slot);
    KParts::ReadWritePart::connect(self,
                                   static_cast<void (KParts::ReadWritePart::*)(bool*, bool*)>(&KParts::ReadWritePart::sigQueryClose),
                                   [self, slotFunc](bool* handled, bool* abortClosing) {
                                       bool* sigval1 = handled;
                                       bool* sigval2 = abortClosing;
                                       slotFunc(self, sigval1, sigval2);
                                   });
}

void KParts__ReadWritePart_SetModified2(KParts__ReadWritePart* self) {
    self->setModified();
}

bool KParts__ReadWritePart_Save(KParts__ReadWritePart* self) {
    return self->save();
}

bool KParts__ReadWritePart_WaitSaveComplete(KParts__ReadWritePart* self) {
    return self->waitSaveComplete();
}

bool KParts__ReadWritePart_SaveFile(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart) {
        return vkparts__readwritepart->saveFile();
    }
    qFatal("Error: Protected method KParts::ReadWritePart::saveFile called without a directly constructed type");
}

bool KParts__ReadWritePart_SaveToUrl(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart) {
        return vkparts__readwritepart->saveToUrl();
    }
    qFatal("Error: Protected method KParts::ReadWritePart::saveToUrl called without a directly constructed type");
}

libqt_string KParts__ReadWritePart_Tr2(const char* s, const char* c) {
    auto _ret = KParts::ReadWritePart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__ReadWritePart_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::ReadWritePart::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__ReadWritePart_SuperMetaObject(const KParts__ReadWritePart* self) {
    return (QMetaObject*)self->KParts::ReadWritePart::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnMetaObject(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_metaobject_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__ReadWritePart_SuperMetacast(KParts__ReadWritePart* self, const char* param1) {
    return self->KParts::ReadWritePart::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnMetacast(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_metacast_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__ReadWritePart_SuperMetacall(KParts__ReadWritePart* self, int param1, int param2, void** param3) {
    return self->KParts::ReadWritePart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnMetacall(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_metacall_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Metacall_Callback>(slot);
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetReadWrite(KParts__ReadWritePart* self, bool readwrite) {
    self->KParts::ReadWritePart::setReadWrite(readwrite);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetReadWrite(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setreadwrite_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetReadWrite_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperQueryClose(KParts__ReadWritePart* self) {
    return self->KParts::ReadWritePart::queryClose();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnQueryClose(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_queryclose_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_QueryClose_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperCloseUrl(KParts__ReadWritePart* self) {
    return self->KParts::ReadWritePart::closeUrl();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnCloseUrl(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_closeurl_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_CloseUrl_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperCloseUrl2(KParts__ReadWritePart* self, bool promptToSave) {
    return self->KParts::ReadWritePart::closeUrl(promptToSave);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnCloseUrl2(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_closeurl2_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_CloseUrl2_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperSaveAs(KParts__ReadWritePart* self, const QUrl* url) {
    return self->KParts::ReadWritePart::saveAs(*url);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSaveAs(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_saveas_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SaveAs_Callback>(slot);
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetModified(KParts__ReadWritePart* self, bool modified) {
    self->KParts::ReadWritePart::setModified(modified);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetModified(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setmodified_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetModified_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperSave(KParts__ReadWritePart* self) {
    return self->KParts::ReadWritePart::save();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSave(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_save_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Save_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSaveFile(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_savefile_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SaveFile_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperSaveToUrl(KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        return vkpartsreadwritepart->KParts::ReadWritePart::saveToUrl();
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::saveToUrl called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSaveToUrl(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_savetourl_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SaveToUrl_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ReadWritePart_OpenUrl(KParts__ReadWritePart* self, const QUrl* url) {
    return self->openUrl(*url);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperOpenUrl(KParts__ReadWritePart* self, const QUrl* url) {
    return self->KParts::ReadWritePart::openUrl(*url);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnOpenUrl(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_openurl_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_OpenUrl_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ReadWritePart_OpenFile(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        return vkpartsreadwritepart->openFile();
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::openFile called without a directly constructed type");
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperOpenFile(KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        return vkpartsreadwritepart->KParts::ReadWritePart::openFile();
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::openFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnOpenFile(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_openfile_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_OpenFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_GuiActivateEvent(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->guiActivateEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::guiActivateEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperGuiActivateEvent(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::guiActivateEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::guiActivateEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnGuiActivateEvent(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_guiactivateevent_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_GuiActivateEvent_Callback>(slot);
}

// Derived class handler implementation
QWidget* KParts__ReadWritePart_Widget(KParts__ReadWritePart* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* KParts__ReadWritePart_SuperWidget(KParts__ReadWritePart* self) {
    return self->KParts::ReadWritePart::widget();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnWidget(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_widget_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Widget_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetManager(KParts__ReadWritePart* self, KParts__PartManager* manager) {
    self->setManager(manager);
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetManager(KParts__ReadWritePart* self, KParts__PartManager* manager) {
    self->KParts::ReadWritePart::setManager(manager);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetManager(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setmanager_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetManager_Callback>(slot);
}

// Derived class handler implementation
KParts__Part* KParts__ReadWritePart_HitTest(KParts__ReadWritePart* self, QWidget* widget, const QPoint* globalPos) {
    return self->hitTest(widget, *globalPos);
}

// Base class handler implementation
KParts__Part* KParts__ReadWritePart_SuperHitTest(KParts__ReadWritePart* self, QWidget* widget, const QPoint* globalPos) {
    return self->KParts::ReadWritePart::hitTest(widget, *globalPos);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnHitTest(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_hittest_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_HitTest_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetWidget(KParts__ReadWritePart* self, QWidget* widget) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->setWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetWidget(KParts__ReadWritePart* self, QWidget* widget) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::setWidget(widget);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetWidget(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setwidget_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetWidget_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_CustomEvent(KParts__ReadWritePart* self, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperCustomEvent(KParts__ReadWritePart* self, QEvent* event) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnCustomEvent(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_customevent_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_PartActivateEvent(KParts__ReadWritePart* self, KParts__PartActivateEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->partActivateEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::partActivateEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperPartActivateEvent(KParts__ReadWritePart* self, KParts__PartActivateEvent* event) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::partActivateEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::partActivateEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnPartActivateEvent(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_partactivateevent_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_PartActivateEvent_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ReadWritePart_Event(KParts__ReadWritePart* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperEvent(KParts__ReadWritePart* self, QEvent* event) {
    return self->KParts::ReadWritePart::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnEvent(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_event_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Event_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ReadWritePart_EventFilter(KParts__ReadWritePart* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__ReadWritePart_SuperEventFilter(KParts__ReadWritePart* self, QObject* watched, QEvent* event) {
    return self->KParts::ReadWritePart::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnEventFilter(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_eventfilter_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_TimerEvent(KParts__ReadWritePart* self, QTimerEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperTimerEvent(KParts__ReadWritePart* self, QTimerEvent* event) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnTimerEvent(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_timerevent_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_ChildEvent(KParts__ReadWritePart* self, QChildEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperChildEvent(KParts__ReadWritePart* self, QChildEvent* event) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnChildEvent(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_childevent_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_ConnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperConnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnConnectNotify(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_connectnotify_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_DisconnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperDisconnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnDisconnectNotify(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_disconnectnotify_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QAction* KParts__ReadWritePart_Action2(const KParts__ReadWritePart* self, const QDomElement* element) {
    return self->action(*element);
}

// Base class handler implementation
QAction* KParts__ReadWritePart_SuperAction2(const KParts__ReadWritePart* self, const QDomElement* element) {
    return self->KParts::ReadWritePart::action(*element);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnAction2(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_action2_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Action2_Callback>(slot);
}

// Derived class handler implementation
KActionCollection* KParts__ReadWritePart_ActionCollection(const KParts__ReadWritePart* self) {
    return self->actionCollection();
}

// Base class handler implementation
KActionCollection* KParts__ReadWritePart_SuperActionCollection(const KParts__ReadWritePart* self) {
    return self->KParts::ReadWritePart::actionCollection();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnActionCollection(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_actioncollection_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ActionCollection_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_ComponentName(const KParts__ReadWritePart* self) {
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
libqt_string KParts__ReadWritePart_SuperComponentName(const KParts__ReadWritePart* self) {
    auto _ret = self->KParts::ReadWritePart::componentName();
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
void KParts__ReadWritePart_OnComponentName(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_componentname_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ComponentName_Callback>(slot);
}

// Derived class handler implementation
QDomDocument* KParts__ReadWritePart_DomDocument(const KParts__ReadWritePart* self) {
    return new QDomDocument(self->domDocument());
}

// Base class handler implementation
QDomDocument* KParts__ReadWritePart_SuperDomDocument(const KParts__ReadWritePart* self) {
    return new QDomDocument(self->KParts::ReadWritePart::domDocument());
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnDomDocument(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_domdocument_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_DomDocument_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_XmlFile(const KParts__ReadWritePart* self) {
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
libqt_string KParts__ReadWritePart_SuperXmlFile(const KParts__ReadWritePart* self) {
    auto _ret = self->KParts::ReadWritePart::xmlFile();
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
void KParts__ReadWritePart_OnXmlFile(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_xmlfile_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_XmlFile_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_LocalXMLFile(const KParts__ReadWritePart* self) {
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
libqt_string KParts__ReadWritePart_SuperLocalXMLFile(const KParts__ReadWritePart* self) {
    auto _ret = self->KParts::ReadWritePart::localXMLFile();
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
void KParts__ReadWritePart_OnLocalXMLFile(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self)))
        vkpartsreadwritepart->kparts__readwritepart_localxmlfile_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_LocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetComponentName(KParts__ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setComponentName called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetComponentName(KParts__ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::setComponentName(componentName_QString, componentDisplayName_QString);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setComponentName called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetComponentName(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setcomponentname_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetComponentName_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetXMLFile(KParts__ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetXMLFile(KParts__ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::setXMLFile(file_QString, merge, setXMLDoc);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetXMLFile(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setxmlfile_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetLocalXMLFile(KParts__ReadWritePart* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->setLocalXMLFile(file_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setLocalXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetLocalXMLFile(KParts__ReadWritePart* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::setLocalXMLFile(file_QString);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setLocalXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetLocalXMLFile(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setlocalxmlfile_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetLocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetXML(KParts__ReadWritePart* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->setXML(document_QString, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setXML called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetXML(KParts__ReadWritePart* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::setXML(document_QString, merge);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setXML called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetXML(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setxml_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetXML_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_SetDOMDocument(KParts__ReadWritePart* self, const QDomDocument* document, bool merge) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->setDOMDocument(*document, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setDOMDocument called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperSetDOMDocument(KParts__ReadWritePart* self, const QDomDocument* document, bool merge) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::setDOMDocument(*document, merge);
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::setDOMDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetDOMDocument(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_setdomdocument_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetDOMDocument_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadWritePart_StateChanged(KParts__ReadWritePart* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart) {
        vkpartsreadwritepart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        qFatal("Error: Protected virtual method KParts::ReadWritePart::stateChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadWritePart_SuperStateChanged(KParts__ReadWritePart* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->KParts::ReadWritePart::stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else
        qFatal("Error: Protected virtual method KParts::ReadWritePart::stateChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnStateChanged(KParts__ReadWritePart* self, intptr_t slot) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self))
        vkpartsreadwritepart->kparts__readwritepart_statechanged_callback = reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_StateChanged_Callback>(slot);
}

// Derived class protected handler implementation
void KParts__ReadWritePart_AbortLoad(KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->VirtualKPartsReadWritePart::abortLoad();
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::abortLoad called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadWritePart_SetUrl(KParts__ReadWritePart* self, const QUrl* url) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->VirtualKPartsReadWritePart::setUrl(*url);
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::setUrl called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KParts__ReadWritePart_LocalFilePath(const KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self))) {
        auto _ret = vkpartsreadwritepart->VirtualKPartsReadWritePart::localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::localFilePath called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadWritePart_SetLocalFilePath(KParts__ReadWritePart* self, const libqt_string localFilePath) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        QString localFilePath_QString = QString::fromUtf8(localFilePath.data, localFilePath.len);
        vkpartsreadwritepart->VirtualKPartsReadWritePart::setLocalFilePath(localFilePath_QString);
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::setLocalFilePath called without a directly constructed type");
}

// Derived class protected handler implementation
QWidget* KParts__ReadWritePart_HostContainer(KParts__ReadWritePart* self, const libqt_string containerName) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
        return vkpartsreadwritepart->VirtualKPartsReadWritePart::hostContainer(containerName_QString);
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::hostContainer called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadWritePart_SlotWidgetDestroyed(KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->VirtualKPartsReadWritePart::slotWidgetDestroyed();
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::slotWidgetDestroyed called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KParts__ReadWritePart_Sender(const KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self))) {
        return vkpartsreadwritepart->VirtualKPartsReadWritePart::sender();
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ReadWritePart_SenderSignalIndex(const KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self))) {
        return vkpartsreadwritepart->VirtualKPartsReadWritePart::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ReadWritePart_Receivers(const KParts__ReadWritePart* self, const char* signal) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self))) {
        return vkpartsreadwritepart->VirtualKPartsReadWritePart::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__ReadWritePart_IsSignalConnected(const KParts__ReadWritePart* self, const QMetaMethod* signal) {
    if (auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self))) {
        return vkpartsreadwritepart->VirtualKPartsReadWritePart::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KParts__ReadWritePart_StandardsXmlFileLocation(KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        auto _ret = vkpartsreadwritepart->VirtualKPartsReadWritePart::standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::standardsXmlFileLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadWritePart_LoadStandardsXmlFile(KParts__ReadWritePart* self) {
    if (auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self)) {
        vkpartsreadwritepart->VirtualKPartsReadWritePart::loadStandardsXmlFile();
    } else
        qFatal("Error: Protected method KParts::ReadWritePart::loadStandardsXmlFile called without a directly constructed type");
}

void KParts__ReadWritePart_Delete(KParts__ReadWritePart* self) {
    delete self;
}
