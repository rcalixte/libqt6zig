#include <KBookmark>
#include <KBookmarkManager>
#include <KBookmarkMenu>
#include <KBookmarkOwner>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kbookmarkmenu.h>
#include "libkbookmarkmenu.h"
#include "libkbookmarkmenu.hxx"

KBookmarkMenu* KBookmarkMenu_new(KBookmarkManager* manager, KBookmarkOwner* owner, QMenu* parentMenu) {
    return new VirtualKBookmarkMenu(manager, owner, parentMenu);
}

KBookmarkMenu* KBookmarkMenu_new2(KBookmarkManager* mgr, KBookmarkOwner* owner, QMenu* parentMenu, const libqt_string parentAddress) {
    QString parentAddress_QString = QString::fromUtf8(parentAddress.data, parentAddress.len);
    return new VirtualKBookmarkMenu(mgr, owner, parentMenu, parentAddress_QString);
}

QMetaObject* KBookmarkMenu_MetaObject(const KBookmarkMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkMenu_Metacast(KBookmarkMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkMenu_Metacall(KBookmarkMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBookmarkMenu_Tr(const char* s) {
    auto _ret = KBookmarkMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmarkMenu_EnsureUpToDate(KBookmarkMenu* self) {
    self->ensureUpToDate();
}

QAction* KBookmarkMenu_AddBookmarkAction(const KBookmarkMenu* self) {
    return self->addBookmarkAction();
}

QAction* KBookmarkMenu_BookmarkTabsAsFolderAction(const KBookmarkMenu* self) {
    return self->bookmarkTabsAsFolderAction();
}

QAction* KBookmarkMenu_NewBookmarkFolderAction(const KBookmarkMenu* self) {
    return self->newBookmarkFolderAction();
}

QAction* KBookmarkMenu_EditBookmarksAction(const KBookmarkMenu* self) {
    return self->editBookmarksAction();
}

void KBookmarkMenu_SetBrowserMode(KBookmarkMenu* self, bool browserMode) {
    self->setBrowserMode(browserMode);
}

bool KBookmarkMenu_BrowserMode(const KBookmarkMenu* self) {
    return self->browserMode();
}

void KBookmarkMenu_SlotBookmarksChanged(KBookmarkMenu* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->slotBookmarksChanged(param1_QString);
}

void KBookmarkMenu_Clear(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->clear();
    }
}

void KBookmarkMenu_Refill(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->refill();
    }
}

QAction* KBookmarkMenu_ActionForBookmark(KBookmarkMenu* self, const KBookmark* bm) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        return vkbookmarkmenu->actionForBookmark(*bm);
    }
    qFatal("Error: Protected method KBookmarkMenu::actionForBookmark called without a directly constructed type");
}

QMenu* KBookmarkMenu_ContextMenu(KBookmarkMenu* self, QAction* action) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        return vkbookmarkmenu->contextMenu(action);
    }
    qFatal("Error: Protected method KBookmarkMenu::contextMenu called without a directly constructed type");
}

libqt_string KBookmarkMenu_Tr2(const char* s, const char* c) {
    auto _ret = KBookmarkMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBookmarkMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBookmarkMenu_SuperMetaObject(const KBookmarkMenu* self) {
    return (QMetaObject*)self->KBookmarkMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnMetaObject(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self)))
        vkbookmarkmenu->kbookmarkmenu_metaobject_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBookmarkMenu_SuperMetacast(KBookmarkMenu* self, const char* param1) {
    return self->KBookmarkMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnMetacast(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_metacast_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBookmarkMenu_SuperMetacall(KBookmarkMenu* self, int param1, int param2, void** param3) {
    return self->KBookmarkMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnMetacall(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_metacall_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Metacall_Callback>(slot);
}

// Base class handler implementation
void KBookmarkMenu_SuperClear(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::clear();
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::clear called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnClear(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_clear_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Clear_Callback>(slot);
}

// Base class handler implementation
void KBookmarkMenu_SuperRefill(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::refill();
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::refill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnRefill(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_refill_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Refill_Callback>(slot);
}

// Base class handler implementation
QAction* KBookmarkMenu_SuperActionForBookmark(KBookmarkMenu* self, const KBookmark* bm) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        return vkbookmarkmenu->KBookmarkMenu::actionForBookmark(*bm);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::actionForBookmark called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnActionForBookmark(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_actionforbookmark_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ActionForBookmark_Callback>(slot);
}

// Base class handler implementation
QMenu* KBookmarkMenu_SuperContextMenu(KBookmarkMenu* self, QAction* action) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        return vkbookmarkmenu->KBookmarkMenu::contextMenu(action);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::contextMenu called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnContextMenu(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_contextmenu_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ContextMenu_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkMenu_Event(KBookmarkMenu* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KBookmarkMenu_SuperEvent(KBookmarkMenu* self, QEvent* event) {
    return self->KBookmarkMenu::event(event);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnEvent(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_event_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkMenu_EventFilter(KBookmarkMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KBookmarkMenu_SuperEventFilter(KBookmarkMenu* self, QObject* watched, QEvent* event) {
    return self->KBookmarkMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnEventFilter(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_eventfilter_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkMenu_TimerEvent(KBookmarkMenu* self, QTimerEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkMenu_SuperTimerEvent(KBookmarkMenu* self, QTimerEvent* event) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnTimerEvent(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_timerevent_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkMenu_ChildEvent(KBookmarkMenu* self, QChildEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkMenu_SuperChildEvent(KBookmarkMenu* self, QChildEvent* event) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnChildEvent(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_childevent_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkMenu_CustomEvent(KBookmarkMenu* self, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkMenu_SuperCustomEvent(KBookmarkMenu* self, QEvent* event) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnCustomEvent(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_customevent_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkMenu_ConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkMenu_SuperConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnConnectNotify(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_connectnotify_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkMenu_DisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu) {
        vkbookmarkmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkMenu_SuperDisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->KBookmarkMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnDisconnectNotify(KBookmarkMenu* self, intptr_t slot) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self))
        vkbookmarkmenu->kbookmarkmenu_disconnectnotify_callback = reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KBookmarkMenu_SlotAboutToShow(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::slotAboutToShow();
    } else
        qFatal("Error: Protected method KBookmarkMenu::slotAboutToShow called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_SlotAddBookmarksList(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::slotAddBookmarksList();
    } else
        qFatal("Error: Protected method KBookmarkMenu::slotAddBookmarksList called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_SlotAddBookmark(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::slotAddBookmark();
    } else
        qFatal("Error: Protected method KBookmarkMenu::slotAddBookmark called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_SlotNewFolder(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::slotNewFolder();
    } else
        qFatal("Error: Protected method KBookmarkMenu::slotNewFolder called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_SlotOpenFolderInTabs(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::slotOpenFolderInTabs();
    } else
        qFatal("Error: Protected method KBookmarkMenu::slotOpenFolderInTabs called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_AddActions(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::addActions();
    } else
        qFatal("Error: Protected method KBookmarkMenu::addActions called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_FillBookmarks(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::fillBookmarks();
    } else
        qFatal("Error: Protected method KBookmarkMenu::fillBookmarks called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_AddAddBookmark(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::addAddBookmark();
    } else
        qFatal("Error: Protected method KBookmarkMenu::addAddBookmark called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_AddAddBookmarksList(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::addAddBookmarksList();
    } else
        qFatal("Error: Protected method KBookmarkMenu::addAddBookmarksList called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_AddEditBookmarks(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::addEditBookmarks();
    } else
        qFatal("Error: Protected method KBookmarkMenu::addEditBookmarks called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_AddNewFolder(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::addNewFolder();
    } else
        qFatal("Error: Protected method KBookmarkMenu::addNewFolder called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkMenu_AddOpenInTabs(KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self)) {
        vkbookmarkmenu->VirtualKBookmarkMenu::addOpenInTabs();
    } else
        qFatal("Error: Protected method KBookmarkMenu::addOpenInTabs called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkMenu_IsRoot(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::isRoot();
    } else
        qFatal("Error: Protected method KBookmarkMenu::isRoot called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkMenu_IsDirty(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::isDirty();
    } else
        qFatal("Error: Protected method KBookmarkMenu::isDirty called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KBookmarkMenu_ParentAddress(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        auto _ret = vkbookmarkmenu->VirtualKBookmarkMenu::parentAddress();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KBookmarkMenu::parentAddress called without a directly constructed type");
}

// Derived class protected handler implementation
KBookmarkManager* KBookmarkMenu_Manager(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::manager();
    } else
        qFatal("Error: Protected method KBookmarkMenu::manager called without a directly constructed type");
}

// Derived class protected handler implementation
KBookmarkOwner* KBookmarkMenu_Owner(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::owner();
    } else
        qFatal("Error: Protected method KBookmarkMenu::owner called without a directly constructed type");
}

// Derived class protected handler implementation
QMenu* KBookmarkMenu_ParentMenu(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::parentMenu();
    } else
        qFatal("Error: Protected method KBookmarkMenu::parentMenu called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBookmarkMenu_Sender(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::sender();
    } else
        qFatal("Error: Protected method KBookmarkMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkMenu_SenderSignalIndex(const KBookmarkMenu* self) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBookmarkMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkMenu_Receivers(const KBookmarkMenu* self, const char* signal) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KBookmarkMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkMenu_IsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self))) {
        return vkbookmarkmenu->VirtualKBookmarkMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBookmarkMenu::isSignalConnected called without a directly constructed type");
}

void KBookmarkMenu_Delete(KBookmarkMenu* self) {
    delete self;
}
