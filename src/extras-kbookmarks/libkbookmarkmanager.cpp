#include <KBookmark>
#include <KBookmarkManager>
#include <QChildEvent>
#include <QDomDocument>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBookmarkManager_Tr(const char* s) {
    auto _ret = KBookmarkManager::tr(s);
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
    auto _ret = self->path();
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
    KBookmarkManager::connect(self,
                              static_cast<void (KBookmarkManager::*)(const QString&)>(&KBookmarkManager::changed),
                              [self, slotFunc](const QString& groupAddress) {
                                  const auto groupAddress_ret = groupAddress;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray groupAddress_b = groupAddress_ret.toUtf8();
                                  auto groupAddress_str_len = groupAddress_b.length();
                                  const char* groupAddress_str = static_cast<const char*>(malloc(groupAddress_str_len + 1));
                                  memcpy((void*)groupAddress_str, groupAddress_b.data(), groupAddress_str_len);
                                  ((char*)groupAddress_str)[groupAddress_str_len] = '\0';
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
    KBookmarkManager::connect(self,
                              static_cast<void (KBookmarkManager::*)(const QString&)>(&KBookmarkManager::error),
                              [self, slotFunc](const QString& errorMessage) {
                                  const auto errorMessage_ret = errorMessage;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray errorMessage_b = errorMessage_ret.toUtf8();
                                  auto errorMessage_str_len = errorMessage_b.length();
                                  const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_str_len + 1));
                                  memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_str_len);
                                  ((char*)errorMessage_str)[errorMessage_str_len] = '\0';
                                  const char* sigval1 = errorMessage_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(errorMessage_str);
                              });
}

libqt_string KBookmarkManager_Tr2(const char* s, const char* c) {
    auto _ret = KBookmarkManager::tr(s, c);
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
    auto _ret = KBookmarkManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBookmarkManager_SuperMetaObject(const KBookmarkManager* self) {
    return (QMetaObject*)self->KBookmarkManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnMetaObject(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self)))
        vkbookmarkmanager->kbookmarkmanager_metaobject_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBookmarkManager_SuperMetacast(KBookmarkManager* self, const char* param1) {
    return self->KBookmarkManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnMetacast(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_metacast_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBookmarkManager_SuperMetacall(KBookmarkManager* self, int param1, int param2, void** param3) {
    return self->KBookmarkManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnMetacall(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_metacall_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkManager_Event(KBookmarkManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KBookmarkManager_SuperEvent(KBookmarkManager* self, QEvent* event) {
    return self->KBookmarkManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnEvent(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_event_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkManager_EventFilter(KBookmarkManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KBookmarkManager_SuperEventFilter(KBookmarkManager* self, QObject* watched, QEvent* event) {
    return self->KBookmarkManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnEventFilter(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_eventfilter_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkManager_TimerEvent(KBookmarkManager* self, QTimerEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager) {
        vkbookmarkmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkManager_SuperTimerEvent(KBookmarkManager* self, QTimerEvent* event) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self)) {
        vkbookmarkmanager->KBookmarkManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnTimerEvent(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_timerevent_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkManager_ChildEvent(KBookmarkManager* self, QChildEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager) {
        vkbookmarkmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkManager_SuperChildEvent(KBookmarkManager* self, QChildEvent* event) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self)) {
        vkbookmarkmanager->KBookmarkManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnChildEvent(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_childevent_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkManager_CustomEvent(KBookmarkManager* self, QEvent* event) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager) {
        vkbookmarkmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkManager_SuperCustomEvent(KBookmarkManager* self, QEvent* event) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self)) {
        vkbookmarkmanager->KBookmarkManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnCustomEvent(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_customevent_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkManager_ConnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager) {
        vkbookmarkmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkManager_SuperConnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self)) {
        vkbookmarkmanager->KBookmarkManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnConnectNotify(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_connectnotify_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkManager_DisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self);
    if (vkbookmarkmanager) {
        vkbookmarkmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkManager_SuperDisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self)) {
        vkbookmarkmanager->KBookmarkManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkManager_OnDisconnectNotify(KBookmarkManager* self, intptr_t slot) {
    if (auto* vkbookmarkmanager = dynamic_cast<VirtualKBookmarkManager*>(self))
        vkbookmarkmanager->kbookmarkmanager_disconnectnotify_callback = reinterpret_cast<VirtualKBookmarkManager::KBookmarkManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KBookmarkManager_Sender(const KBookmarkManager* self) {
    if (auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self))) {
        return vkbookmarkmanager->VirtualKBookmarkManager::sender();
    } else
        qFatal("Error: Protected method KBookmarkManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkManager_SenderSignalIndex(const KBookmarkManager* self) {
    if (auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self))) {
        return vkbookmarkmanager->VirtualKBookmarkManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBookmarkManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkManager_Receivers(const KBookmarkManager* self, const char* signal) {
    if (auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self))) {
        return vkbookmarkmanager->VirtualKBookmarkManager::receivers(signal);
    } else
        qFatal("Error: Protected method KBookmarkManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkManager_IsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkmanager = const_cast<VirtualKBookmarkManager*>(dynamic_cast<const VirtualKBookmarkManager*>(self))) {
        return vkbookmarkmanager->VirtualKBookmarkManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBookmarkManager::isSignalConnected called without a directly constructed type");
}

void KBookmarkManager_Delete(KBookmarkManager* self) {
    delete self;
}
