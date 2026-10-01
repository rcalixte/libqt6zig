#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <partmanager.h>
#include "libpartmanager.h"
#include "libpartmanager.hxx"

KParts__PartManager* KParts__PartManager_new(QWidget* parent) {
    return new VirtualKPartsPartManager(parent);
}

KParts__PartManager* KParts__PartManager_new2(QWidget* topLevel, QObject* parent) {
    return new VirtualKPartsPartManager(topLevel, parent);
}

QMetaObject* KParts__PartManager_MetaObject(const KParts__PartManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__PartManager_Metacast(KParts__PartManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__PartManager_Metacall(KParts__PartManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__PartManager_Tr(const char* s) {
    auto _ret = KParts::PartManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__PartManager_SetSelectionPolicy(KParts__PartManager* self, int policy) {
    self->setSelectionPolicy(static_cast<KParts::PartManager::SelectionPolicy>(policy));
}

int KParts__PartManager_SelectionPolicy(const KParts__PartManager* self) {
    return static_cast<int>(self->selectionPolicy());
}

void KParts__PartManager_SetAllowNestedParts(KParts__PartManager* self, bool allow) {
    self->setAllowNestedParts(allow);
}

bool KParts__PartManager_AllowNestedParts(const KParts__PartManager* self) {
    return self->allowNestedParts();
}

void KParts__PartManager_SetIgnoreScrollBars(KParts__PartManager* self, bool ignore) {
    self->setIgnoreScrollBars(ignore);
}

bool KParts__PartManager_IgnoreScrollBars(const KParts__PartManager* self) {
    return self->ignoreScrollBars();
}

void KParts__PartManager_SetActivationButtonMask(KParts__PartManager* self, int16_t buttonMask) {
    self->setActivationButtonMask(static_cast<short>(buttonMask));
}

int16_t KParts__PartManager_ActivationButtonMask(const KParts__PartManager* self) {
    return self->activationButtonMask();
}

bool KParts__PartManager_EventFilter(KParts__PartManager* self, QObject* obj, QEvent* ev) {
    return self->eventFilter(obj, ev);
}

void KParts__PartManager_AddPart(KParts__PartManager* self, KParts__Part* part, bool setActive) {
    self->addPart(part, setActive);
}

void KParts__PartManager_RemovePart(KParts__PartManager* self, KParts__Part* part) {
    self->removePart(part);
}

void KParts__PartManager_ReplacePart(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive) {
    self->replacePart(oldPart, newPart, setActive);
}

void KParts__PartManager_SetActivePart(KParts__PartManager* self, KParts__Part* part, QWidget* widget) {
    self->setActivePart(part, widget);
}

KParts__Part* KParts__PartManager_ActivePart(const KParts__PartManager* self) {
    return self->activePart();
}

QWidget* KParts__PartManager_ActiveWidget(const KParts__PartManager* self) {
    return self->activeWidget();
}

libqt_list /* of KParts__Part* */ KParts__PartManager_Parts(const KParts__PartManager* self) {
    const QList<KParts::Part*> _ret = self->parts();
    // Convert QList<> from C++ memory to manually-managed C memory
    KParts__Part** _arr = static_cast<KParts__Part**>(malloc(sizeof(KParts__Part*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KParts__PartManager_AddManagedTopLevelWidget(KParts__PartManager* self, const QWidget* topLevel) {
    self->addManagedTopLevelWidget(topLevel);
}

void KParts__PartManager_RemoveManagedTopLevelWidget(KParts__PartManager* self, const QWidget* topLevel) {
    self->removeManagedTopLevelWidget(topLevel);
}

int KParts__PartManager_Reason(const KParts__PartManager* self) {
    return self->reason();
}

void KParts__PartManager_PartAdded(KParts__PartManager* self, KParts__Part* part) {
    self->partAdded(part);
}

void KParts__PartManager_Connect_PartAdded(KParts__PartManager* self, intptr_t slot) {
    void (*slotFunc)(KParts__PartManager*, KParts__Part*) = reinterpret_cast<void (*)(KParts__PartManager*, KParts__Part*)>(slot);
    KParts::PartManager::connect(self,
                                 static_cast<void (KParts::PartManager::*)(KParts::Part*)>(&KParts::PartManager::partAdded),
                                 [self, slotFunc](KParts::Part* part) {
                                     KParts__Part* sigval1 = part;
                                     slotFunc(self, sigval1);
                                 });
}

void KParts__PartManager_PartRemoved(KParts__PartManager* self, KParts__Part* part) {
    self->partRemoved(part);
}

void KParts__PartManager_Connect_PartRemoved(KParts__PartManager* self, intptr_t slot) {
    void (*slotFunc)(KParts__PartManager*, KParts__Part*) = reinterpret_cast<void (*)(KParts__PartManager*, KParts__Part*)>(slot);
    KParts::PartManager::connect(self,
                                 static_cast<void (KParts::PartManager::*)(KParts::Part*)>(&KParts::PartManager::partRemoved),
                                 [self, slotFunc](KParts::Part* part) {
                                     KParts__Part* sigval1 = part;
                                     slotFunc(self, sigval1);
                                 });
}

void KParts__PartManager_ActivePartChanged(KParts__PartManager* self, KParts__Part* newPart) {
    self->activePartChanged(newPart);
}

void KParts__PartManager_Connect_ActivePartChanged(KParts__PartManager* self, intptr_t slot) {
    void (*slotFunc)(KParts__PartManager*, KParts__Part*) = reinterpret_cast<void (*)(KParts__PartManager*, KParts__Part*)>(slot);
    KParts::PartManager::connect(self,
                                 static_cast<void (KParts::PartManager::*)(KParts::Part*)>(&KParts::PartManager::activePartChanged),
                                 [self, slotFunc](KParts::Part* newPart) {
                                     KParts__Part* sigval1 = newPart;
                                     slotFunc(self, sigval1);
                                 });
}

libqt_string KParts__PartManager_Tr2(const char* s, const char* c) {
    auto _ret = KParts::PartManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__PartManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::PartManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__PartManager_SuperMetaObject(const KParts__PartManager* self) {
    return (QMetaObject*)self->KParts::PartManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnMetaObject(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self)))
        vkpartspartmanager->kparts__partmanager_metaobject_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__PartManager_SuperMetacast(KParts__PartManager* self, const char* param1) {
    return self->KParts::PartManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnMetacast(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_metacast_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__PartManager_SuperMetacall(KParts__PartManager* self, int param1, int param2, void** param3) {
    return self->KParts::PartManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnMetacall(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_metacall_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KParts__PartManager_SuperEventFilter(KParts__PartManager* self, QObject* obj, QEvent* ev) {
    return self->KParts::PartManager::eventFilter(obj, ev);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnEventFilter(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_eventfilter_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KParts__PartManager_SuperAddPart(KParts__PartManager* self, KParts__Part* part, bool setActive) {
    self->KParts::PartManager::addPart(part, setActive);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnAddPart(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_addpart_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_AddPart_Callback>(slot);
}

// Base class handler implementation
void KParts__PartManager_SuperRemovePart(KParts__PartManager* self, KParts__Part* part) {
    self->KParts::PartManager::removePart(part);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnRemovePart(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_removepart_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_RemovePart_Callback>(slot);
}

// Base class handler implementation
void KParts__PartManager_SuperReplacePart(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive) {
    self->KParts::PartManager::replacePart(oldPart, newPart, setActive);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnReplacePart(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_replacepart_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ReplacePart_Callback>(slot);
}

// Base class handler implementation
void KParts__PartManager_SuperSetActivePart(KParts__PartManager* self, KParts__Part* part, QWidget* widget) {
    self->KParts::PartManager::setActivePart(part, widget);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSetActivePart(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_setactivepart_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SetActivePart_Callback>(slot);
}

// Base class handler implementation
KParts__Part* KParts__PartManager_SuperActivePart(const KParts__PartManager* self) {
    return self->KParts::PartManager::activePart();
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnActivePart(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self)))
        vkpartspartmanager->kparts__partmanager_activepart_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ActivePart_Callback>(slot);
}

// Base class handler implementation
QWidget* KParts__PartManager_SuperActiveWidget(const KParts__PartManager* self) {
    return self->KParts::PartManager::activeWidget();
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnActiveWidget(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self)))
        vkpartspartmanager->kparts__partmanager_activewidget_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ActiveWidget_Callback>(slot);
}

// Derived class handler implementation
bool KParts__PartManager_Event(KParts__PartManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__PartManager_SuperEvent(KParts__PartManager* self, QEvent* event) {
    return self->KParts::PartManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnEvent(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_event_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Event_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartManager_TimerEvent(KParts__PartManager* self, QTimerEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager) {
        vkpartspartmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::PartManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartManager_SuperTimerEvent(KParts__PartManager* self, QTimerEvent* event) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->KParts::PartManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::PartManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnTimerEvent(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_timerevent_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartManager_ChildEvent(KParts__PartManager* self, QChildEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager) {
        vkpartspartmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::PartManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartManager_SuperChildEvent(KParts__PartManager* self, QChildEvent* event) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->KParts::PartManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::PartManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnChildEvent(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_childevent_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartManager_CustomEvent(KParts__PartManager* self, QEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager) {
        vkpartspartmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::PartManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartManager_SuperCustomEvent(KParts__PartManager* self, QEvent* event) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->KParts::PartManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::PartManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnCustomEvent(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_customevent_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartManager_ConnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager) {
        vkpartspartmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::PartManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartManager_SuperConnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->KParts::PartManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::PartManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnConnectNotify(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_connectnotify_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__PartManager_DisconnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager) {
        vkpartspartmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::PartManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__PartManager_SuperDisconnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->KParts::PartManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::PartManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnDisconnectNotify(KParts__PartManager* self, intptr_t slot) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self))
        vkpartspartmanager->kparts__partmanager_disconnectnotify_callback = reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KParts__PartManager_SetIgnoreExplictFocusRequests(KParts__PartManager* self, bool ignoreExplictFocusRequests) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->VirtualKPartsPartManager::setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
    } else
        qFatal("Error: Protected method KParts::PartManager::setIgnoreExplictFocusRequests called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__PartManager_SlotObjectDestroyed(KParts__PartManager* self) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->VirtualKPartsPartManager::slotObjectDestroyed();
    } else
        qFatal("Error: Protected method KParts::PartManager::slotObjectDestroyed called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__PartManager_SlotWidgetDestroyed(KParts__PartManager* self) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->VirtualKPartsPartManager::slotWidgetDestroyed();
    } else
        qFatal("Error: Protected method KParts::PartManager::slotWidgetDestroyed called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self) {
    if (auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self)) {
        vkpartspartmanager->VirtualKPartsPartManager::slotManagedTopLevelWidgetDestroyed();
    } else
        qFatal("Error: Protected method KParts::PartManager::slotManagedTopLevelWidgetDestroyed called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KParts__PartManager_Sender(const KParts__PartManager* self) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self))) {
        return vkpartspartmanager->VirtualKPartsPartManager::sender();
    } else
        qFatal("Error: Protected method KParts::PartManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__PartManager_SenderSignalIndex(const KParts__PartManager* self) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self))) {
        return vkpartspartmanager->VirtualKPartsPartManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::PartManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__PartManager_Receivers(const KParts__PartManager* self, const char* signal) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self))) {
        return vkpartspartmanager->VirtualKPartsPartManager::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::PartManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__PartManager_IsSignalConnected(const KParts__PartManager* self, const QMetaMethod* signal) {
    if (auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self))) {
        return vkpartspartmanager->VirtualKPartsPartManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::PartManager::isSignalConnected called without a directly constructed type");
}

void KParts__PartManager_Delete(KParts__PartManager* self) {
    delete self;
}
