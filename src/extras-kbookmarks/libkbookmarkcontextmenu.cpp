#include <KBookmark>
#include <KBookmarkContextMenu>
#include <KBookmarkManager>
#include <KBookmarkOwner>
#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kbookmarkcontextmenu.h>
#include "libkbookmarkcontextmenu.h"
#include "libkbookmarkcontextmenu.hxx"

KBookmarkContextMenu* KBookmarkContextMenu_new(const KBookmark* bm, KBookmarkManager* manager, KBookmarkOwner* owner) {
    return new VirtualKBookmarkContextMenu(*bm, manager, owner);
}

KBookmarkContextMenu* KBookmarkContextMenu_new2(const KBookmark* bm, KBookmarkManager* manager, KBookmarkOwner* owner, QWidget* parent) {
    return new VirtualKBookmarkContextMenu(*bm, manager, owner, parent);
}

QMetaObject* KBookmarkContextMenu_MetaObject(const KBookmarkContextMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkContextMenu_Metacast(KBookmarkContextMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkContextMenu_Metacall(KBookmarkContextMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBookmarkContextMenu_Tr(const char* s) {
    auto _ret = KBookmarkContextMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmarkContextMenu_AddActions(KBookmarkContextMenu* self) {
    self->addActions();
}

void KBookmarkContextMenu_SetBrowserMode(KBookmarkContextMenu* self, bool browserMode) {
    self->setBrowserMode(browserMode);
}

bool KBookmarkContextMenu_BrowserMode(const KBookmarkContextMenu* self) {
    return self->browserMode();
}

void KBookmarkContextMenu_SlotEditAt(KBookmarkContextMenu* self) {
    self->slotEditAt();
}

void KBookmarkContextMenu_SlotProperties(KBookmarkContextMenu* self) {
    self->slotProperties();
}

void KBookmarkContextMenu_SlotInsert(KBookmarkContextMenu* self) {
    self->slotInsert();
}

void KBookmarkContextMenu_SlotRemove(KBookmarkContextMenu* self) {
    self->slotRemove();
}

void KBookmarkContextMenu_SlotCopyLocation(KBookmarkContextMenu* self) {
    self->slotCopyLocation();
}

void KBookmarkContextMenu_SlotOpenFolderInTabs(KBookmarkContextMenu* self) {
    self->slotOpenFolderInTabs();
}

libqt_string KBookmarkContextMenu_Tr2(const char* s, const char* c) {
    auto _ret = KBookmarkContextMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkContextMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBookmarkContextMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBookmarkContextMenu_SuperMetaObject(const KBookmarkContextMenu* self) {
    return (QMetaObject*)self->KBookmarkContextMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMetaObject(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_metaobject_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBookmarkContextMenu_SuperMetacast(KBookmarkContextMenu* self, const char* param1) {
    return self->KBookmarkContextMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMetacast(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_metacast_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBookmarkContextMenu_SuperMetacall(KBookmarkContextMenu* self, int param1, int param2, void** param3) {
    return self->KBookmarkContextMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMetacall(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_metacall_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Metacall_Callback>(slot);
}

// Base class handler implementation
void KBookmarkContextMenu_SuperAddActions(KBookmarkContextMenu* self) {
    self->KBookmarkContextMenu::addActions();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddActions(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_addactions_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddActions_Callback>(slot);
}

// Derived class handler implementation
QSize* KBookmarkContextMenu_SizeHint(const KBookmarkContextMenu* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KBookmarkContextMenu_SuperSizeHint(const KBookmarkContextMenu* self) {
    return new QSize(self->KBookmarkContextMenu::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSizeHint(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_sizehint_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ChangeEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperChangeEvent(KBookmarkContextMenu* self, QEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnChangeEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_changeevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_KeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperKeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnKeyPressEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_keypressevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_MouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperMouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMouseReleaseEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_mousereleaseevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_MousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperMousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMousePressEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_mousepressevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_MouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperMouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMouseMoveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_mousemoveevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_WheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperWheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnWheelEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_wheelevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_EnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->enterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperEnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnEnterEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_enterevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_LeaveEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->leaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperLeaveEvent(KBookmarkContextMenu* self, QEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnLeaveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_leaveevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_HideEvent(KBookmarkContextMenu* self, QHideEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperHideEvent(KBookmarkContextMenu* self, QHideEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnHideEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_hideevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_PaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperPaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnPaintEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_paintevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ActionEvent(KBookmarkContextMenu* self, QActionEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->actionEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperActionEvent(KBookmarkContextMenu* self, QActionEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnActionEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_actionevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_TimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperTimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnTimerEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_timerevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkContextMenu_Event(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        return vkbookmarkcontextmenu->event(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_SuperEvent(KBookmarkContextMenu* self, QEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        return vkbookmarkcontextmenu->KBookmarkContextMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_event_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkContextMenu_FocusNextPrevChild(KBookmarkContextMenu* self, bool next) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        return vkbookmarkcontextmenu->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_SuperFocusNextPrevChild(KBookmarkContextMenu* self, bool next) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        return vkbookmarkcontextmenu->KBookmarkContextMenu::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusNextPrevChild(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_focusnextprevchild_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_InitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->initStyleOption(option, action);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperInitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::initStyleOption(option, action);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInitStyleOption(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_initstyleoption_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkContextMenu_DevType(const KBookmarkContextMenu* self) {
    return self->devType();
}

// Base class handler implementation
int KBookmarkContextMenu_SuperDevType(const KBookmarkContextMenu* self) {
    return self->KBookmarkContextMenu::devType();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDevType(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_devtype_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DevType_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_SetVisible(KBookmarkContextMenu* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KBookmarkContextMenu_SuperSetVisible(KBookmarkContextMenu* self, bool visible) {
    self->KBookmarkContextMenu::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSetVisible(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_setvisible_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KBookmarkContextMenu_MinimumSizeHint(const KBookmarkContextMenu* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KBookmarkContextMenu_SuperMinimumSizeHint(const KBookmarkContextMenu* self) {
    return new QSize(self->KBookmarkContextMenu::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMinimumSizeHint(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_minimumsizehint_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkContextMenu_HeightForWidth(const KBookmarkContextMenu* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KBookmarkContextMenu_SuperHeightForWidth(const KBookmarkContextMenu* self, int param1) {
    return self->KBookmarkContextMenu::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnHeightForWidth(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_heightforwidth_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkContextMenu_HasHeightForWidth(const KBookmarkContextMenu* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KBookmarkContextMenu_SuperHasHeightForWidth(const KBookmarkContextMenu* self) {
    return self->KBookmarkContextMenu::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnHasHeightForWidth(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_hasheightforwidth_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KBookmarkContextMenu_PaintEngine(const KBookmarkContextMenu* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KBookmarkContextMenu_SuperPaintEngine(const KBookmarkContextMenu* self) {
    return self->KBookmarkContextMenu::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnPaintEngine(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_paintengine_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_MouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperMouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMouseDoubleClickEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_mousedoubleclickevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_KeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperKeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnKeyReleaseEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_keyreleaseevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_FocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperFocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusInEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_focusinevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_FocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperFocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusOutEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_focusoutevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_MoveEvent(KBookmarkContextMenu* self, QMoveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperMoveEvent(KBookmarkContextMenu* self, QMoveEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMoveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_moveevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnResizeEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_resizeevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_CloseEvent(KBookmarkContextMenu* self, QCloseEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperCloseEvent(KBookmarkContextMenu* self, QCloseEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnCloseEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_closeevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnContextMenuEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_contextmenuevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_TabletEvent(KBookmarkContextMenu* self, QTabletEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperTabletEvent(KBookmarkContextMenu* self, QTabletEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnTabletEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_tabletevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_DragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperDragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDragEnterEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_dragenterevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_DragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperDragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDragMoveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_dragmoveevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_DragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperDragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDragLeaveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_dragleaveevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_DropEvent(KBookmarkContextMenu* self, QDropEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperDropEvent(KBookmarkContextMenu* self, QDropEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDropEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_dropevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ShowEvent(KBookmarkContextMenu* self, QShowEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperShowEvent(KBookmarkContextMenu* self, QShowEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnShowEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_showevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkContextMenu_NativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        return vkbookmarkcontextmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_SuperNativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        return vkbookmarkcontextmenu->KBookmarkContextMenu::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnNativeEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_nativeevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkContextMenu_Metric(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu) {
        return vkbookmarkcontextmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KBookmarkContextMenu_SuperMetric(const KBookmarkContextMenu* self, int param1) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->KBookmarkContextMenu::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMetric(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_metric_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Metric_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_InitPainter(const KBookmarkContextMenu* self, QPainter* painter) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperInitPainter(const KBookmarkContextMenu* self, QPainter* painter) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInitPainter(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_initpainter_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KBookmarkContextMenu_Redirected(const KBookmarkContextMenu* self, QPoint* offset) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu) {
        return vkbookmarkcontextmenu->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KBookmarkContextMenu_SuperRedirected(const KBookmarkContextMenu* self, QPoint* offset) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->KBookmarkContextMenu::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnRedirected(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_redirected_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KBookmarkContextMenu_SharedPainter(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu) {
        return vkbookmarkcontextmenu->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KBookmarkContextMenu_SuperSharedPainter(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->KBookmarkContextMenu::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSharedPainter(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_sharedpainter_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_InputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperInputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInputMethodEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_inputmethodevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KBookmarkContextMenu_InputMethodQuery(const KBookmarkContextMenu* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KBookmarkContextMenu_SuperInputMethodQuery(const KBookmarkContextMenu* self, int param1) {
    return new QVariant(self->KBookmarkContextMenu::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInputMethodQuery(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_inputmethodquery_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkContextMenu_EventFilter(KBookmarkContextMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KBookmarkContextMenu_SuperEventFilter(KBookmarkContextMenu* self, QObject* watched, QEvent* event) {
    return self->KBookmarkContextMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnEventFilter(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_eventfilter_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ChildEvent(KBookmarkContextMenu* self, QChildEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperChildEvent(KBookmarkContextMenu* self, QChildEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnChildEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_childevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_CustomEvent(KBookmarkContextMenu* self, QEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperCustomEvent(KBookmarkContextMenu* self, QEvent* event) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnCustomEvent(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_customevent_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_ConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnConnectNotify(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_connectnotify_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkContextMenu_DisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu) {
        vkbookmarkcontextmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkContextMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkContextMenu_SuperDisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->KBookmarkContextMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkContextMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDisconnectNotify(KBookmarkContextMenu* self, intptr_t slot) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self))
        vkbookmarkcontextmenu->kbookmarkcontextmenu_disconnectnotify_callback = reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KBookmarkContextMenu_AddBookmark(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::addBookmark();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::addBookmark called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_AddFolderActions(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::addFolderActions();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::addFolderActions called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_AddProperties(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::addProperties();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::addProperties called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_AddBookmarkActions(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::addBookmarkActions();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::addBookmarkActions called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_AddOpenFolderInTabs(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::addOpenFolderInTabs();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::addOpenFolderInTabs called without a directly constructed type");
}

// Derived class protected handler implementation
KBookmarkManager* KBookmarkContextMenu_Manager(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::manager();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::manager called without a directly constructed type");
}

// Derived class protected handler implementation
KBookmarkOwner* KBookmarkContextMenu_Owner(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::owner();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::owner called without a directly constructed type");
}

// Derived class handler implementation
KBookmark* KBookmarkContextMenu_Bookmark(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self)))
        return new KBookmark(vkbookmarkcontextmenu->bookmark());
    qFatal("Error: Protected method KBookmarkContextMenu::bookmark called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkContextMenu_ColumnCount(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::columnCount();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::columnCount called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_UpdateMicroFocus(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::updateMicroFocus();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_Create(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::create();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkContextMenu_Destroy(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::destroy();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkContextMenu_FocusNextChild(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::focusNextChild();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkContextMenu_FocusPreviousChild(KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self)) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::focusPreviousChild();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBookmarkContextMenu_Sender(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::sender();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkContextMenu_SenderSignalIndex(const KBookmarkContextMenu* self) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkContextMenu_Receivers(const KBookmarkContextMenu* self, const char* signal) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkContextMenu_IsSignalConnected(const KBookmarkContextMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KBookmarkContextMenu_GetDecodedMetricF(const KBookmarkContextMenu* self, int metricA, int metricB) {
    if (auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self))) {
        return vkbookmarkcontextmenu->VirtualKBookmarkContextMenu::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KBookmarkContextMenu::getDecodedMetricF called without a directly constructed type");
}

void KBookmarkContextMenu_Delete(KBookmarkContextMenu* self) {
    delete self;
}
