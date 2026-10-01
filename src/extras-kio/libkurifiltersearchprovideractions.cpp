#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__KUriFilterSearchProviderActions
#include <QChildEvent>
#include <QEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kurifiltersearchprovideractions.h>
#include "libkurifiltersearchprovideractions.h"
#include "libkurifiltersearchprovideractions.hxx"

KIO__KUriFilterSearchProviderActions* KIO__KUriFilterSearchProviderActions_new() {
    return new VirtualKIOKUriFilterSearchProviderActions();
}

KIO__KUriFilterSearchProviderActions* KIO__KUriFilterSearchProviderActions_new2(QObject* parent) {
    return new VirtualKIOKUriFilterSearchProviderActions(parent);
}

QMetaObject* KIO__KUriFilterSearchProviderActions_MetaObject(const KIO__KUriFilterSearchProviderActions* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__KUriFilterSearchProviderActions_Metacast(KIO__KUriFilterSearchProviderActions* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__KUriFilterSearchProviderActions_Metacall(KIO__KUriFilterSearchProviderActions* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__KUriFilterSearchProviderActions_Tr(const char* s) {
    auto _ret = KIO::KUriFilterSearchProviderActions::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__KUriFilterSearchProviderActions_SelectedText(const KIO__KUriFilterSearchProviderActions* self) {
    auto _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__KUriFilterSearchProviderActions_SetSelectedText(KIO__KUriFilterSearchProviderActions* self, const libqt_string selectedText) {
    QString selectedText_QString = QString::fromUtf8(selectedText.data, selectedText.len);
    self->setSelectedText(selectedText_QString);
}

void KIO__KUriFilterSearchProviderActions_AddWebShortcutsToMenu(KIO__KUriFilterSearchProviderActions* self, QMenu* menu) {
    self->addWebShortcutsToMenu(menu);
}

libqt_string KIO__KUriFilterSearchProviderActions_Tr2(const char* s, const char* c) {
    auto _ret = KIO::KUriFilterSearchProviderActions::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__KUriFilterSearchProviderActions_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::KUriFilterSearchProviderActions::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__KUriFilterSearchProviderActions_SuperMetaObject(const KIO__KUriFilterSearchProviderActions* self) {
    return (QMetaObject*)self->KIO::KUriFilterSearchProviderActions::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnMetaObject(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self)))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_metaobject_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__KUriFilterSearchProviderActions_SuperMetacast(KIO__KUriFilterSearchProviderActions* self, const char* param1) {
    return self->KIO::KUriFilterSearchProviderActions::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnMetacast(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_metacast_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__KUriFilterSearchProviderActions_SuperMetacall(KIO__KUriFilterSearchProviderActions* self, int param1, int param2, void** param3) {
    return self->KIO::KUriFilterSearchProviderActions::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnMetacall(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_metacall_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KIO__KUriFilterSearchProviderActions_Event(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__KUriFilterSearchProviderActions_SuperEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    return self->KIO::KUriFilterSearchProviderActions::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_event_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__KUriFilterSearchProviderActions_EventFilter(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__KUriFilterSearchProviderActions_SuperEventFilter(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event) {
    return self->KIO::KUriFilterSearchProviderActions::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnEventFilter(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_eventfilter_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_TimerEvent(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions) {
        vkiokurifiltersearchprovideractions->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_SuperTimerEvent(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self)) {
        vkiokurifiltersearchprovideractions->KIO::KUriFilterSearchProviderActions::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnTimerEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_timerevent_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_ChildEvent(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions) {
        vkiokurifiltersearchprovideractions->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_SuperChildEvent(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self)) {
        vkiokurifiltersearchprovideractions->KIO::KUriFilterSearchProviderActions::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnChildEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_childevent_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_CustomEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions) {
        vkiokurifiltersearchprovideractions->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_SuperCustomEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self)) {
        vkiokurifiltersearchprovideractions->KIO::KUriFilterSearchProviderActions::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnCustomEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_customevent_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_ConnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions) {
        vkiokurifiltersearchprovideractions->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_SuperConnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self)) {
        vkiokurifiltersearchprovideractions->KIO::KUriFilterSearchProviderActions::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnConnectNotify(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_connectnotify_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_DisconnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions) {
        vkiokurifiltersearchprovideractions->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_SuperDisconnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self)) {
        vkiokurifiltersearchprovideractions->KIO::KUriFilterSearchProviderActions::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::KUriFilterSearchProviderActions::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnDisconnectNotify(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    if (auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self))
        vkiokurifiltersearchprovideractions->kio__kurifiltersearchprovideractions_disconnectnotify_callback = reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KIO__KUriFilterSearchProviderActions_Sender(const KIO__KUriFilterSearchProviderActions* self) {
    if (auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self))) {
        return vkiokurifiltersearchprovideractions->VirtualKIOKUriFilterSearchProviderActions::sender();
    } else
        qFatal("Error: Protected method KIO::KUriFilterSearchProviderActions::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__KUriFilterSearchProviderActions_SenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self) {
    if (auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self))) {
        return vkiokurifiltersearchprovideractions->VirtualKIOKUriFilterSearchProviderActions::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::KUriFilterSearchProviderActions::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__KUriFilterSearchProviderActions_Receivers(const KIO__KUriFilterSearchProviderActions* self, const char* signal) {
    if (auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self))) {
        return vkiokurifiltersearchprovideractions->VirtualKIOKUriFilterSearchProviderActions::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::KUriFilterSearchProviderActions::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__KUriFilterSearchProviderActions_IsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    if (auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self))) {
        return vkiokurifiltersearchprovideractions->VirtualKIOKUriFilterSearchProviderActions::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::KUriFilterSearchProviderActions::isSignalConnected called without a directly constructed type");
}

void KIO__KUriFilterSearchProviderActions_Delete(KIO__KUriFilterSearchProviderActions* self) {
    delete self;
}
