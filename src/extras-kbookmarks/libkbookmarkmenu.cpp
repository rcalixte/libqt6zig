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
#include <QByteArray>
#include <cstring>
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
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBookmarkMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBookmarkMenu_Tr(const char* s) {
    QString _ret = KBookmarkMenu::tr(s);
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
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->clear();
    }
}

void KBookmarkMenu_Refill(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->refill();
    }
}

QAction* KBookmarkMenu_ActionForBookmark(KBookmarkMenu* self, const KBookmark* bm) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->actionForBookmark(*bm);
    }
    return {};
}

QMenu* KBookmarkMenu_ContextMenu(KBookmarkMenu* self, QAction* action) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->contextMenu(action);
    }
    return {};
}

libqt_string KBookmarkMenu_Tr2(const char* s, const char* c) {
    QString _ret = KBookmarkMenu::tr(s, c);
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
    QString _ret = KBookmarkMenu::tr(s, c, static_cast<int>(n));
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
int KBookmarkMenu_QBaseMetacall(KBookmarkMenu* self, int param1, int param2, void** param3) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Metacall_IsBase(true);
        return vkbookmarkmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBookmarkMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnMetacall(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Metacall_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseClear(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Clear_IsBase(true);
        vkbookmarkmenu->clear();
    } else {
        ((VirtualKBookmarkMenu*)self)->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnClear(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Clear_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Clear_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseRefill(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Refill_IsBase(true);
        vkbookmarkmenu->refill();
    } else {
        ((VirtualKBookmarkMenu*)self)->refill();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnRefill(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Refill_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Refill_Callback>(slot));
    }
}

// Base class handler implementation
QAction* KBookmarkMenu_QBaseActionForBookmark(KBookmarkMenu* self, const KBookmark* bm) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ActionForBookmark_IsBase(true);
        return vkbookmarkmenu->actionForBookmark(*bm);
    } else {
        return ((VirtualKBookmarkMenu*)self)->actionForBookmark(*bm);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnActionForBookmark(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ActionForBookmark_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ActionForBookmark_Callback>(slot));
    }
}

// Base class handler implementation
QMenu* KBookmarkMenu_QBaseContextMenu(KBookmarkMenu* self, QAction* action) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ContextMenu_IsBase(true);
        return vkbookmarkmenu->contextMenu(action);
    } else {
        return ((VirtualKBookmarkMenu*)self)->contextMenu(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnContextMenu(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ContextMenu_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ContextMenu_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkMenu_Event(KBookmarkMenu* self, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->event(event);
    } else {
        return self->KBookmarkMenu::event(event);
    }
}

// Base class handler implementation
bool KBookmarkMenu_QBaseEvent(KBookmarkMenu* self, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Event_IsBase(true);
        return vkbookmarkmenu->event(event);
    } else {
        return self->KBookmarkMenu::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnEvent(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Event_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkMenu_EventFilter(KBookmarkMenu* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->eventFilter(watched, event);
    } else {
        return self->KBookmarkMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KBookmarkMenu_QBaseEventFilter(KBookmarkMenu* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_EventFilter_IsBase(true);
        return vkbookmarkmenu->eventFilter(watched, event);
    } else {
        return self->KBookmarkMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnEventFilter(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_EventFilter_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_TimerEvent(KBookmarkMenu* self, QTimerEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->timerEvent(event);
    } else {
        ((VirtualKBookmarkMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseTimerEvent(KBookmarkMenu* self, QTimerEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_TimerEvent_IsBase(true);
        vkbookmarkmenu->timerEvent(event);
    } else {
        ((VirtualKBookmarkMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnTimerEvent(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_TimerEvent_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_ChildEvent(KBookmarkMenu* self, QChildEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->childEvent(event);
    } else {
        ((VirtualKBookmarkMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseChildEvent(KBookmarkMenu* self, QChildEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ChildEvent_IsBase(true);
        vkbookmarkmenu->childEvent(event);
    } else {
        ((VirtualKBookmarkMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnChildEvent(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ChildEvent_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_CustomEvent(KBookmarkMenu* self, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->customEvent(event);
    } else {
        ((VirtualKBookmarkMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseCustomEvent(KBookmarkMenu* self, QEvent* event) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_CustomEvent_IsBase(true);
        vkbookmarkmenu->customEvent(event);
    } else {
        ((VirtualKBookmarkMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnCustomEvent(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_CustomEvent_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_ConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ConnectNotify_IsBase(true);
        vkbookmarkmenu->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnConnectNotify(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_DisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseDisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_DisconnectNotify_IsBase(true);
        vkbookmarkmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnDisconnectNotify(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_SlotAboutToShow(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->slotAboutToShow();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotAboutToShow();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseSlotAboutToShow(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotAboutToShow_IsBase(true);
        vkbookmarkmenu->slotAboutToShow();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotAboutToShow();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSlotAboutToShow(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotAboutToShow_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_SlotAboutToShow_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_SlotAddBookmarksList(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->slotAddBookmarksList();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotAddBookmarksList();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseSlotAddBookmarksList(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotAddBookmarksList_IsBase(true);
        vkbookmarkmenu->slotAddBookmarksList();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotAddBookmarksList();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSlotAddBookmarksList(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotAddBookmarksList_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_SlotAddBookmarksList_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_SlotAddBookmark(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->slotAddBookmark();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotAddBookmark();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseSlotAddBookmark(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotAddBookmark_IsBase(true);
        vkbookmarkmenu->slotAddBookmark();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotAddBookmark();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSlotAddBookmark(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotAddBookmark_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_SlotAddBookmark_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_SlotNewFolder(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->slotNewFolder();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotNewFolder();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseSlotNewFolder(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotNewFolder_IsBase(true);
        vkbookmarkmenu->slotNewFolder();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotNewFolder();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSlotNewFolder(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotNewFolder_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_SlotNewFolder_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_SlotOpenFolderInTabs(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->slotOpenFolderInTabs();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotOpenFolderInTabs();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseSlotOpenFolderInTabs(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotOpenFolderInTabs_IsBase(true);
        vkbookmarkmenu->slotOpenFolderInTabs();
    } else {
        ((VirtualKBookmarkMenu*)self)->slotOpenFolderInTabs();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSlotOpenFolderInTabs(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SlotOpenFolderInTabs_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_SlotOpenFolderInTabs_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_AddActions(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->addActions();
    } else {
        ((VirtualKBookmarkMenu*)self)->addActions();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseAddActions(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddActions_IsBase(true);
        vkbookmarkmenu->addActions();
    } else {
        ((VirtualKBookmarkMenu*)self)->addActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnAddActions(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddActions_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_AddActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_FillBookmarks(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->fillBookmarks();
    } else {
        ((VirtualKBookmarkMenu*)self)->fillBookmarks();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseFillBookmarks(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_FillBookmarks_IsBase(true);
        vkbookmarkmenu->fillBookmarks();
    } else {
        ((VirtualKBookmarkMenu*)self)->fillBookmarks();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnFillBookmarks(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_FillBookmarks_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_FillBookmarks_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_AddAddBookmark(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->addAddBookmark();
    } else {
        ((VirtualKBookmarkMenu*)self)->addAddBookmark();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseAddAddBookmark(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddAddBookmark_IsBase(true);
        vkbookmarkmenu->addAddBookmark();
    } else {
        ((VirtualKBookmarkMenu*)self)->addAddBookmark();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnAddAddBookmark(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddAddBookmark_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_AddAddBookmark_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_AddAddBookmarksList(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->addAddBookmarksList();
    } else {
        ((VirtualKBookmarkMenu*)self)->addAddBookmarksList();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseAddAddBookmarksList(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddAddBookmarksList_IsBase(true);
        vkbookmarkmenu->addAddBookmarksList();
    } else {
        ((VirtualKBookmarkMenu*)self)->addAddBookmarksList();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnAddAddBookmarksList(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddAddBookmarksList_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_AddAddBookmarksList_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_AddEditBookmarks(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->addEditBookmarks();
    } else {
        ((VirtualKBookmarkMenu*)self)->addEditBookmarks();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseAddEditBookmarks(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddEditBookmarks_IsBase(true);
        vkbookmarkmenu->addEditBookmarks();
    } else {
        ((VirtualKBookmarkMenu*)self)->addEditBookmarks();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnAddEditBookmarks(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddEditBookmarks_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_AddEditBookmarks_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_AddNewFolder(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->addNewFolder();
    } else {
        ((VirtualKBookmarkMenu*)self)->addNewFolder();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseAddNewFolder(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddNewFolder_IsBase(true);
        vkbookmarkmenu->addNewFolder();
    } else {
        ((VirtualKBookmarkMenu*)self)->addNewFolder();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnAddNewFolder(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddNewFolder_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_AddNewFolder_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkMenu_AddOpenInTabs(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->addOpenInTabs();
    } else {
        ((VirtualKBookmarkMenu*)self)->addOpenInTabs();
    }
}

// Base class handler implementation
void KBookmarkMenu_QBaseAddOpenInTabs(KBookmarkMenu* self) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddOpenInTabs_IsBase(true);
        vkbookmarkmenu->addOpenInTabs();
    } else {
        ((VirtualKBookmarkMenu*)self)->addOpenInTabs();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnAddOpenInTabs(KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = dynamic_cast<VirtualKBookmarkMenu*>(self);
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_AddOpenInTabs_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_AddOpenInTabs_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkMenu_IsRoot(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->isRoot();
    } else {
        return ((VirtualKBookmarkMenu*)self)->isRoot();
    }
}

// Base class handler implementation
bool KBookmarkMenu_QBaseIsRoot(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_IsRoot_IsBase(true);
        return vkbookmarkmenu->isRoot();
    } else {
        return ((VirtualKBookmarkMenu*)self)->isRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnIsRoot(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_IsRoot_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_IsRoot_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkMenu_IsDirty(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->isDirty();
    } else {
        return ((VirtualKBookmarkMenu*)self)->isDirty();
    }
}

// Base class handler implementation
bool KBookmarkMenu_QBaseIsDirty(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_IsDirty_IsBase(true);
        return vkbookmarkmenu->isDirty();
    } else {
        return ((VirtualKBookmarkMenu*)self)->isDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnIsDirty(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_IsDirty_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_IsDirty_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KBookmarkMenu_ParentAddress(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        QString _ret = vkbookmarkmenu->parentAddress();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKBookmarkMenu*)self)->parentAddress();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KBookmarkMenu_QBaseParentAddress(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ParentAddress_IsBase(true);
        QString _ret = vkbookmarkmenu->parentAddress();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKBookmarkMenu*)self)->parentAddress();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnParentAddress(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ParentAddress_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ParentAddress_Callback>(slot));
    }
}

// Derived class handler implementation
KBookmarkManager* KBookmarkMenu_Manager(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->manager();
    } else {
        return ((VirtualKBookmarkMenu*)self)->manager();
    }
}

// Base class handler implementation
KBookmarkManager* KBookmarkMenu_QBaseManager(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Manager_IsBase(true);
        return vkbookmarkmenu->manager();
    } else {
        return ((VirtualKBookmarkMenu*)self)->manager();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnManager(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Manager_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Manager_Callback>(slot));
    }
}

// Derived class handler implementation
KBookmarkOwner* KBookmarkMenu_Owner(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->owner();
    } else {
        return ((VirtualKBookmarkMenu*)self)->owner();
    }
}

// Base class handler implementation
KBookmarkOwner* KBookmarkMenu_QBaseOwner(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Owner_IsBase(true);
        return vkbookmarkmenu->owner();
    } else {
        return ((VirtualKBookmarkMenu*)self)->owner();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnOwner(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Owner_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Owner_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KBookmarkMenu_ParentMenu(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->parentMenu();
    } else {
        return ((VirtualKBookmarkMenu*)self)->parentMenu();
    }
}

// Base class handler implementation
QMenu* KBookmarkMenu_QBaseParentMenu(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ParentMenu_IsBase(true);
        return vkbookmarkmenu->parentMenu();
    } else {
        return ((VirtualKBookmarkMenu*)self)->parentMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnParentMenu(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_ParentMenu_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_ParentMenu_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBookmarkMenu_Sender(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->sender();
    } else {
        return ((VirtualKBookmarkMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBookmarkMenu_QBaseSender(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Sender_IsBase(true);
        return vkbookmarkmenu->sender();
    } else {
        return ((VirtualKBookmarkMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSender(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Sender_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkMenu_SenderSignalIndex(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBookmarkMenu_QBaseSenderSignalIndex(const KBookmarkMenu* self) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SenderSignalIndex_IsBase(true);
        return vkbookmarkmenu->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnSenderSignalIndex(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkMenu_Receivers(const KBookmarkMenu* self, const char* signal) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->receivers(signal);
    } else {
        return ((VirtualKBookmarkMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBookmarkMenu_QBaseReceivers(const KBookmarkMenu* self, const char* signal) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Receivers_IsBase(true);
        return vkbookmarkmenu->receivers(signal);
    } else {
        return ((VirtualKBookmarkMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnReceivers(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_Receivers_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkMenu_IsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        return vkbookmarkmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBookmarkMenu_QBaseIsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_IsSignalConnected_IsBase(true);
        return vkbookmarkmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkMenu_OnIsSignalConnected(const KBookmarkMenu* self, intptr_t slot) {
    auto* vkbookmarkmenu = const_cast<VirtualKBookmarkMenu*>(dynamic_cast<const VirtualKBookmarkMenu*>(self));
    if (vkbookmarkmenu && vkbookmarkmenu->isVirtualKBookmarkMenu) {
        vkbookmarkmenu->setKBookmarkMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKBookmarkMenu::KBookmarkMenu_IsSignalConnected_Callback>(slot));
    }
}

void KBookmarkMenu_Delete(KBookmarkMenu* self) {
    delete self;
}
