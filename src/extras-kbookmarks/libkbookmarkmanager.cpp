#include <KBookmark>
#include <KBookmarkManager>
#include <QChildEvent>
#include <QDomDocument>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kbookmarkmanager.h>
#include "libkbookmarkmanager.h"
#include "libkbookmarkmanager.hxx"

KBookmarkManager* KBookmarkManager_new(const libqt_string bookmarksFile) {
    QString bookmarksFile_QString = QString::fromUtf8(bookmarksFile.data, bookmarksFile.len);
    return new VirtualKBookmarkManager(bookmarksFile_QString);
}

KBookmarkManager* KBookmarkManager_new2(const libqt_string bookmarksFile, QObject* parent) {
    QString bookmarksFile_QString = QString::fromUtf8(bookmarksFile.data, bookmarksFile.len);
    return new VirtualKBookmarkManager(bookmarksFile_QString, parent);
}

QMetaObject* KBookmarkManager_MetaObject(const KBookmarkManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkManager_Metacast(KBookmarkManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkManager_Metacall(KBookmarkManager* self, int param1, int param2, void** param3) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBookmarkManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBookmarkManager_Tr(const char* s) {
    QString _ret = KBookmarkManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KBookmarkManager_SaveAs(const KBookmarkManager* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->saveAs(filename_QString);
}

bool KBookmarkManager_UpdateAccessMetadata(KBookmarkManager* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return self->updateAccessMetadata(url_QString);
}

libqt_string KBookmarkManager_Path(const KBookmarkManager* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KBookmarkGroup* KBookmarkManager_Root(const KBookmarkManager* self) {
    return new KBookmarkGroup(self->root());
}

KBookmarkGroup* KBookmarkManager_Toolbar(KBookmarkManager* self) {
    return new KBookmarkGroup(self->toolbar());
}

KBookmark* KBookmarkManager_FindByAddress(KBookmarkManager* self, const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return new KBookmark(self->findByAddress(address_QString));
}

void KBookmarkManager_EmitChanged(KBookmarkManager* self) {
    self->emitChanged();
}

void KBookmarkManager_EmitChanged2(KBookmarkManager* self, const KBookmarkGroup* group) {
    self->emitChanged(*group);
}

bool KBookmarkManager_Save(const KBookmarkManager* self) {
    return self->save();
}

QDomDocument* KBookmarkManager_InternalDocument(const KBookmarkManager* self) {
    return new QDomDocument(self->internalDocument());
}

void KBookmarkManager_Changed(KBookmarkManager* self, const libqt_string groupAddress) {
    QString groupAddress_QString = QString::fromUtf8(groupAddress.data, groupAddress.len);
    self->changed(groupAddress_QString);
}

void KBookmarkManager_Connect_Changed(KBookmarkManager* self, intptr_t slot) {
    void (*slotFunc)(KBookmarkManager*, const char*) = reinterpret_cast<void (*)(KBookmarkManager*, const char*)>(slot);
    KBookmarkManager::connect(self, &KBookmarkManager::changed, [self, slotFunc](const QString& groupAddress) {
        const QString groupAddress_ret = groupAddress;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray groupAddress_b = groupAddress_ret.toUtf8();
        const char* groupAddress_str = static_cast<const char*>(malloc(groupAddress_b.length() + 1));
        memcpy((void*)groupAddress_str, groupAddress_b.data(), groupAddress_b.length());
        ((char*)groupAddress_str)[groupAddress_b.length()] = '\0';
        const char* sigval1 = groupAddress_str;
        slotFunc(self, sigval1);
        libqt_free(groupAddress_str);
    });
}

void KBookmarkManager_Error(KBookmarkManager* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->error(errorMessage_QString);
}

void KBookmarkManager_Connect_Error(KBookmarkManager* self, intptr_t slot) {
    void (*slotFunc)(KBookmarkManager*, const char*) = reinterpret_cast<void (*)(KBookmarkManager*, const char*)>(slot);
    KBookmarkManager::connect(self, &KBookmarkManager::error, [self, slotFunc](const QString& errorMessage) {
        const QString errorMessage_ret = errorMessage;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorMessage_b = errorMessage_ret.toUtf8();
        const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_b.length() + 1));
        memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_b.length());
        ((char*)errorMessage_str)[errorMessage_b.length()] = '\0';
        const char* sigval1 = errorMessage_str;
        slotFunc(self, sigval1);
        libqt_free(errorMessage_str);
    });
}

libqt_string KBookmarkManager_Tr2(const char* s, const char* c) {
    QString _ret = KBookmarkManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = KBookmarkManager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KBookmarkManager_SaveAs2(const KBookmarkManager* self, const libqt_string filename, bool toolbarCache) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->saveAs(filename_QString, toolbarCache);
}

bool KBookmarkManager_Save1(const KBookmarkManager* self, bool toolbarCache) {
    return self->save(toolbarCache);
}

// Base class handler implementation
int KBookmarkManager_QBaseMetacall(KBookmarkManager* self, int param1, int param2, void** param3) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Metacall_IsBase(true);
        return vkbookmarkmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBookmarkManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnMetacall(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Metacall_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkManager_Event(KBookmarkManager* self, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return vkbookmarkmanager->event(event);
    } else {
        return self->KBookmarkManager::event(event);
    }
}

// Base class handler implementation
bool KBookmarkManager_QBaseEvent(KBookmarkManager* self, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Event_IsBase(true);
        return vkbookmarkmanager->event(event);
    } else {
        return self->KBookmarkManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnEvent(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Event_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkManager_EventFilter(KBookmarkManager* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return vkbookmarkmanager->eventFilter(watched, event);
    } else {
        return self->KBookmarkManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KBookmarkManager_QBaseEventFilter(KBookmarkManager* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_EventFilter_IsBase(true);
        return vkbookmarkmanager->eventFilter(watched, event);
    } else {
        return self->KBookmarkManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnEventFilter(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_EventFilter_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkManager_TimerEvent(KBookmarkManager* self, QTimerEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->timerEvent(event);
    } else {
        ((VirtualKBookmarkManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBookmarkManager_QBaseTimerEvent(KBookmarkManager* self, QTimerEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_TimerEvent_IsBase(true);
        vkbookmarkmanager->timerEvent(event);
    } else {
        ((VirtualKBookmarkManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnTimerEvent(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_TimerEvent_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkManager_ChildEvent(KBookmarkManager* self, QChildEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->childEvent(event);
    } else {
        ((VirtualKBookmarkManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBookmarkManager_QBaseChildEvent(KBookmarkManager* self, QChildEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_ChildEvent_IsBase(true);
        vkbookmarkmanager->childEvent(event);
    } else {
        ((VirtualKBookmarkManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnChildEvent(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_ChildEvent_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkManager_CustomEvent(KBookmarkManager* self, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->customEvent(event);
    } else {
        ((VirtualKBookmarkManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBookmarkManager_QBaseCustomEvent(KBookmarkManager* self, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_CustomEvent_IsBase(true);
        vkbookmarkmanager->customEvent(event);
    } else {
        ((VirtualKBookmarkManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnCustomEvent(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_CustomEvent_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkManager_ConnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkManager_QBaseConnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_ConnectNotify_IsBase(true);
        vkbookmarkmanager->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnConnectNotify(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_ConnectNotify_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkManager_DisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkManager_QBaseDisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_DisconnectNotify_IsBase(true);
        vkbookmarkmanager->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnDisconnectNotify(KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_DisconnectNotify_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBookmarkManager_Sender(const KBookmarkManager* self) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return vkbookmarkmanager->sender();
    } else {
        return ((VirtualKBookmarkManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBookmarkManager_QBaseSender(const KBookmarkManager* self) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Sender_IsBase(true);
        return vkbookmarkmanager->sender();
    } else {
        return ((VirtualKBookmarkManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnSender(const KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Sender_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkManager_SenderSignalIndex(const KBookmarkManager* self) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return vkbookmarkmanager->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBookmarkManager_QBaseSenderSignalIndex(const KBookmarkManager* self) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_SenderSignalIndex_IsBase(true);
        return vkbookmarkmanager->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnSenderSignalIndex(const KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkManager_Receivers(const KBookmarkManager* self, const char* signal) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return vkbookmarkmanager->receivers(signal);
    } else {
        return ((VirtualKBookmarkManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBookmarkManager_QBaseReceivers(const KBookmarkManager* self, const char* signal) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Receivers_IsBase(true);
        return vkbookmarkmanager->receivers(signal);
    } else {
        return ((VirtualKBookmarkManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnReceivers(const KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_Receivers_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkManager_IsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        return vkbookmarkmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBookmarkManager_QBaseIsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_IsSignalConnected_IsBase(true);
        return vkbookmarkmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnIsSignalConnected(const KBookmarkManager* self, intptr_t slot) {
    auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self));
    if (vkbookmarkmanager && vkbookmarkmanager->isVirtualKBookmarkManager) {
        vkbookmarkmanager->setKBookmarkManager_IsSignalConnected_Callback(reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_IsSignalConnected_Callback>(slot));
    }
}

void KBookmarkManager_Delete(KBookmarkManager* self) {
    delete self;
}
