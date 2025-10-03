#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkparts__partmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsPartManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__PartManager_Tr(const char* s) {
    QString _ret = KParts::PartManager::tr(s);
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
    auto* vkparts__partmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        return self->eventFilter(obj, ev);
    } else {
        return ((VirtualKPartsPartManager*)self)->eventFilter(obj, ev);
    }
}

void KParts__PartManager_AddPart(KParts__PartManager* self, KParts__Part* part, bool setActive) {
    auto* vkparts__partmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        self->addPart(part, setActive);
    } else {
        ((VirtualKPartsPartManager*)self)->addPart(part, setActive);
    }
}

void KParts__PartManager_RemovePart(KParts__PartManager* self, KParts__Part* part) {
    auto* vkparts__partmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        self->removePart(part);
    } else {
        ((VirtualKPartsPartManager*)self)->removePart(part);
    }
}

void KParts__PartManager_ReplacePart(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive) {
    auto* vkparts__partmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        self->replacePart(oldPart, newPart, setActive);
    } else {
        ((VirtualKPartsPartManager*)self)->replacePart(oldPart, newPart, setActive);
    }
}

void KParts__PartManager_SetActivePart(KParts__PartManager* self, KParts__Part* part, QWidget* widget) {
    auto* vkparts__partmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        self->setActivePart(part, widget);
    } else {
        ((VirtualKPartsPartManager*)self)->setActivePart(part, widget);
    }
}

KParts__Part* KParts__PartManager_ActivePart(const KParts__PartManager* self) {
    auto* vkparts__partmanager = dynamic_cast<const VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        return self->activePart();
    } else {
        return ((VirtualKPartsPartManager*)self)->activePart();
    }
}

QWidget* KParts__PartManager_ActiveWidget(const KParts__PartManager* self) {
    auto* vkparts__partmanager = dynamic_cast<const VirtualKPartsPartManager*>(self);
    if (vkparts__partmanager && vkparts__partmanager->isVirtualKPartsPartManager) {
        return self->activeWidget();
    } else {
        return ((VirtualKPartsPartManager*)self)->activeWidget();
    }
}

libqt_list /* of KParts__Part* */ KParts__PartManager_Parts(const KParts__PartManager* self) {
    const QList<KParts::Part*> _ret = self->parts();
    // Convert QList<> from C++ memory to manually-managed C memory
    KParts__Part** _arr = static_cast<KParts__Part**>(malloc(sizeof(KParts__Part*) * (_ret.size() + 1)));
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
    KParts::PartManager::connect(self, &KParts::PartManager::partAdded, [self, slotFunc](KParts::Part* part) {
        KParts__Part* sigval1 = part;
        slotFunc(self, sigval1);
    });
}

void KParts__PartManager_PartRemoved(KParts__PartManager* self, KParts__Part* part) {
    self->partRemoved(part);
}

void KParts__PartManager_Connect_PartRemoved(KParts__PartManager* self, intptr_t slot) {
    void (*slotFunc)(KParts__PartManager*, KParts__Part*) = reinterpret_cast<void (*)(KParts__PartManager*, KParts__Part*)>(slot);
    KParts::PartManager::connect(self, &KParts::PartManager::partRemoved, [self, slotFunc](KParts::Part* part) {
        KParts__Part* sigval1 = part;
        slotFunc(self, sigval1);
    });
}

void KParts__PartManager_ActivePartChanged(KParts__PartManager* self, KParts__Part* newPart) {
    self->activePartChanged(newPart);
}

void KParts__PartManager_Connect_ActivePartChanged(KParts__PartManager* self, intptr_t slot) {
    void (*slotFunc)(KParts__PartManager*, KParts__Part*) = reinterpret_cast<void (*)(KParts__PartManager*, KParts__Part*)>(slot);
    KParts::PartManager::connect(self, &KParts::PartManager::activePartChanged, [self, slotFunc](KParts::Part* newPart) {
        KParts__Part* sigval1 = newPart;
        slotFunc(self, sigval1);
    });
}

libqt_string KParts__PartManager_Tr2(const char* s, const char* c) {
    QString _ret = KParts::PartManager::tr(s, c);
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
    QString _ret = KParts::PartManager::tr(s, c, static_cast<int>(n));
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
int KParts__PartManager_QBaseMetacall(KParts__PartManager* self, int param1, int param2, void** param3) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Metacall_IsBase(true);
        return vkpartspartmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::PartManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnMetacall(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Metacall_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__PartManager_QBaseEventFilter(KParts__PartManager* self, QObject* obj, QEvent* ev) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_EventFilter_IsBase(true);
        return vkpartspartmanager->eventFilter(obj, ev);
    } else {
        return self->KParts::PartManager::eventFilter(obj, ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnEventFilter(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_EventFilter_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseAddPart(KParts__PartManager* self, KParts__Part* part, bool setActive) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_AddPart_IsBase(true);
        vkpartspartmanager->addPart(part, setActive);
    } else {
        self->KParts::PartManager::addPart(part, setActive);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnAddPart(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_AddPart_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_AddPart_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseRemovePart(KParts__PartManager* self, KParts__Part* part) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_RemovePart_IsBase(true);
        vkpartspartmanager->removePart(part);
    } else {
        self->KParts::PartManager::removePart(part);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnRemovePart(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_RemovePart_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_RemovePart_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseReplacePart(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ReplacePart_IsBase(true);
        vkpartspartmanager->replacePart(oldPart, newPart, setActive);
    } else {
        self->KParts::PartManager::replacePart(oldPart, newPart, setActive);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnReplacePart(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ReplacePart_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ReplacePart_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseSetActivePart(KParts__PartManager* self, KParts__Part* part, QWidget* widget) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SetActivePart_IsBase(true);
        vkpartspartmanager->setActivePart(part, widget);
    } else {
        self->KParts::PartManager::setActivePart(part, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSetActivePart(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SetActivePart_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SetActivePart_Callback>(slot));
    }
}

// Base class handler implementation
KParts__Part* KParts__PartManager_QBaseActivePart(const KParts__PartManager* self) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ActivePart_IsBase(true);
        return vkpartspartmanager->activePart();
    } else {
        return self->KParts::PartManager::activePart();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnActivePart(const KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ActivePart_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ActivePart_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KParts__PartManager_QBaseActiveWidget(const KParts__PartManager* self) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ActiveWidget_IsBase(true);
        return vkpartspartmanager->activeWidget();
    } else {
        return self->KParts::PartManager::activeWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnActiveWidget(const KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ActiveWidget_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ActiveWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__PartManager_Event(KParts__PartManager* self, QEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        return vkpartspartmanager->event(event);
    } else {
        return self->KParts::PartManager::event(event);
    }
}

// Base class handler implementation
bool KParts__PartManager_QBaseEvent(KParts__PartManager* self, QEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Event_IsBase(true);
        return vkpartspartmanager->event(event);
    } else {
        return self->KParts::PartManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnEvent(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Event_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_TimerEvent(KParts__PartManager* self, QTimerEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->timerEvent(event);
    } else {
        ((VirtualKPartsPartManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseTimerEvent(KParts__PartManager* self, QTimerEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_TimerEvent_IsBase(true);
        vkpartspartmanager->timerEvent(event);
    } else {
        ((VirtualKPartsPartManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnTimerEvent(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_TimerEvent_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_ChildEvent(KParts__PartManager* self, QChildEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->childEvent(event);
    } else {
        ((VirtualKPartsPartManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseChildEvent(KParts__PartManager* self, QChildEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ChildEvent_IsBase(true);
        vkpartspartmanager->childEvent(event);
    } else {
        ((VirtualKPartsPartManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnChildEvent(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ChildEvent_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_CustomEvent(KParts__PartManager* self, QEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->customEvent(event);
    } else {
        ((VirtualKPartsPartManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseCustomEvent(KParts__PartManager* self, QEvent* event) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_CustomEvent_IsBase(true);
        vkpartspartmanager->customEvent(event);
    } else {
        ((VirtualKPartsPartManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnCustomEvent(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_CustomEvent_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_ConnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->connectNotify(*signal);
    } else {
        ((VirtualKPartsPartManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseConnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ConnectNotify_IsBase(true);
        vkpartspartmanager->connectNotify(*signal);
    } else {
        ((VirtualKPartsPartManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnConnectNotify(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_DisconnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsPartManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseDisconnectNotify(KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_DisconnectNotify_IsBase(true);
        vkpartspartmanager->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsPartManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnDisconnectNotify(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_SetIgnoreExplictFocusRequests(KParts__PartManager* self, bool ignoreExplictFocusRequests) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
    } else {
        ((VirtualKPartsPartManager*)self)->setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseSetIgnoreExplictFocusRequests(KParts__PartManager* self, bool ignoreExplictFocusRequests) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SetIgnoreExplictFocusRequests_IsBase(true);
        vkpartspartmanager->setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
    } else {
        ((VirtualKPartsPartManager*)self)->setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSetIgnoreExplictFocusRequests(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SetIgnoreExplictFocusRequests_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SetIgnoreExplictFocusRequests_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_SlotObjectDestroyed(KParts__PartManager* self) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->slotObjectDestroyed();
    } else {
        ((VirtualKPartsPartManager*)self)->slotObjectDestroyed();
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseSlotObjectDestroyed(KParts__PartManager* self) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SlotObjectDestroyed_IsBase(true);
        vkpartspartmanager->slotObjectDestroyed();
    } else {
        ((VirtualKPartsPartManager*)self)->slotObjectDestroyed();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSlotObjectDestroyed(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SlotObjectDestroyed_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SlotObjectDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_SlotWidgetDestroyed(KParts__PartManager* self) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsPartManager*)self)->slotWidgetDestroyed();
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseSlotWidgetDestroyed(KParts__PartManager* self) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SlotWidgetDestroyed_IsBase(true);
        vkpartspartmanager->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsPartManager*)self)->slotWidgetDestroyed();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSlotWidgetDestroyed(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SlotWidgetDestroyed_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SlotWidgetDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->slotManagedTopLevelWidgetDestroyed();
    } else {
        ((VirtualKPartsPartManager*)self)->slotManagedTopLevelWidgetDestroyed();
    }
}

// Base class handler implementation
void KParts__PartManager_QBaseSlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SlotManagedTopLevelWidgetDestroyed_IsBase(true);
        vkpartspartmanager->slotManagedTopLevelWidgetDestroyed();
    } else {
        ((VirtualKPartsPartManager*)self)->slotManagedTopLevelWidgetDestroyed();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = dynamic_cast<VirtualKPartsPartManager*>(self);
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SlotManagedTopLevelWidgetDestroyed_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SlotManagedTopLevelWidgetDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__PartManager_Sender(const KParts__PartManager* self) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        return vkpartspartmanager->sender();
    } else {
        return ((VirtualKPartsPartManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__PartManager_QBaseSender(const KParts__PartManager* self) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Sender_IsBase(true);
        return vkpartspartmanager->sender();
    } else {
        return ((VirtualKPartsPartManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSender(const KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Sender_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__PartManager_SenderSignalIndex(const KParts__PartManager* self) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        return vkpartspartmanager->senderSignalIndex();
    } else {
        return ((VirtualKPartsPartManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__PartManager_QBaseSenderSignalIndex(const KParts__PartManager* self) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SenderSignalIndex_IsBase(true);
        return vkpartspartmanager->senderSignalIndex();
    } else {
        return ((VirtualKPartsPartManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnSenderSignalIndex(const KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__PartManager_Receivers(const KParts__PartManager* self, const char* signal) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        return vkpartspartmanager->receivers(signal);
    } else {
        return ((VirtualKPartsPartManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__PartManager_QBaseReceivers(const KParts__PartManager* self, const char* signal) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Receivers_IsBase(true);
        return vkpartspartmanager->receivers(signal);
    } else {
        return ((VirtualKPartsPartManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnReceivers(const KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_Receivers_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__PartManager_IsSignalConnected(const KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        return vkpartspartmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsPartManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__PartManager_QBaseIsSignalConnected(const KParts__PartManager* self, const QMetaMethod* signal) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_IsSignalConnected_IsBase(true);
        return vkpartspartmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsPartManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartManager_OnIsSignalConnected(const KParts__PartManager* self, intptr_t slot) {
    auto* vkpartspartmanager = const_cast<VirtualKPartsPartManager*>(dynamic_cast<const VirtualKPartsPartManager*>(self));
    if (vkpartspartmanager && vkpartspartmanager->isVirtualKPartsPartManager) {
        vkpartspartmanager->setKParts__PartManager_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsPartManager::KParts__PartManager_IsSignalConnected_Callback>(slot));
    }
}

void KParts__PartManager_Delete(KParts__PartManager* self) {
    delete self;
}
