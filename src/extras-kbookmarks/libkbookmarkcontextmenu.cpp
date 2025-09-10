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
#include <QByteArray>
#include <cstring>
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
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBookmarkContextMenu_Tr(const char* s) {
    QString _ret = KBookmarkContextMenu::tr(s);
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
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        self->addActions();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addActions();
    }
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
    QString _ret = KBookmarkContextMenu::tr(s, c);
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
    QString _ret = KBookmarkContextMenu::tr(s, c, static_cast<int>(n));
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
int KBookmarkContextMenu_QBaseMetacall(KBookmarkContextMenu* self, int param1, int param2, void** param3) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Metacall_IsBase(true);
        return vkbookmarkcontextmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBookmarkContextMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMetacall(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Metacall_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseAddActions(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddActions_IsBase(true);
        vkbookmarkcontextmenu->addActions();
    } else {
        self->KBookmarkContextMenu::addActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddActions(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddActions_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddActions_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBookmarkContextMenu_SizeHint(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return new QSize(vkbookmarkcontextmenu->sizeHint());
    } else {
        return new QSize(((VirtualKBookmarkContextMenu*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KBookmarkContextMenu_QBaseSizeHint(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SizeHint_IsBase(true);
        return new QSize(vkbookmarkcontextmenu->sizeHint());
    } else {
        return new QSize(((VirtualKBookmarkContextMenu*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSizeHint(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SizeHint_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ChangeEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->changeEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseChangeEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ChangeEvent_IsBase(true);
        vkbookmarkcontextmenu->changeEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnChangeEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ChangeEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_KeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->keyPressEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseKeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_KeyPressEvent_IsBase(true);
        vkbookmarkcontextmenu->keyPressEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnKeyPressEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_KeyPressEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_MouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->mouseReleaseEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseMouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MouseReleaseEvent_IsBase(true);
        vkbookmarkcontextmenu->mouseReleaseEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMouseReleaseEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_MousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->mousePressEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseMousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MousePressEvent_IsBase(true);
        vkbookmarkcontextmenu->mousePressEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMousePressEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MousePressEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_MouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->mouseMoveEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseMouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MouseMoveEvent_IsBase(true);
        vkbookmarkcontextmenu->mouseMoveEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMouseMoveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MouseMoveEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_WheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->wheelEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseWheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_WheelEvent_IsBase(true);
        vkbookmarkcontextmenu->wheelEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnWheelEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_WheelEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_EnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->enterEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseEnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_EnterEvent_IsBase(true);
        vkbookmarkcontextmenu->enterEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnEnterEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_EnterEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_LeaveEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->leaveEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseLeaveEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_LeaveEvent_IsBase(true);
        vkbookmarkcontextmenu->leaveEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnLeaveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_LeaveEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_HideEvent(KBookmarkContextMenu* self, QHideEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->hideEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseHideEvent(KBookmarkContextMenu* self, QHideEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_HideEvent_IsBase(true);
        vkbookmarkcontextmenu->hideEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnHideEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_HideEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_PaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->paintEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBasePaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_PaintEvent_IsBase(true);
        vkbookmarkcontextmenu->paintEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnPaintEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_PaintEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ActionEvent(KBookmarkContextMenu* self, QActionEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->actionEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseActionEvent(KBookmarkContextMenu* self, QActionEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ActionEvent_IsBase(true);
        vkbookmarkcontextmenu->actionEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnActionEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ActionEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_TimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->timerEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseTimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_TimerEvent_IsBase(true);
        vkbookmarkcontextmenu->timerEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnTimerEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_TimerEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_Event(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->event(param1);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseEvent(KBookmarkContextMenu* self, QEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Event_IsBase(true);
        return vkbookmarkcontextmenu->event(param1);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Event_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_FocusNextPrevChild(KBookmarkContextMenu* self, bool next) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->focusNextPrevChild(next);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseFocusNextPrevChild(KBookmarkContextMenu* self, bool next) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusNextPrevChild_IsBase(true);
        return vkbookmarkcontextmenu->focusNextPrevChild(next);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusNextPrevChild(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_InitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->initStyleOption(option, action);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->initStyleOption(option, action);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseInitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InitStyleOption_IsBase(true);
        vkbookmarkcontextmenu->initStyleOption(option, action);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->initStyleOption(option, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInitStyleOption(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InitStyleOption_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkContextMenu_DevType(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->devType();
    } else {
        return self->KBookmarkContextMenu::devType();
    }
}

// Base class handler implementation
int KBookmarkContextMenu_QBaseDevType(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DevType_IsBase(true);
        return vkbookmarkcontextmenu->devType();
    } else {
        return self->KBookmarkContextMenu::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDevType(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DevType_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_SetVisible(KBookmarkContextMenu* self, bool visible) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setVisible(visible);
    } else {
        self->KBookmarkContextMenu::setVisible(visible);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseSetVisible(KBookmarkContextMenu* self, bool visible) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SetVisible_IsBase(true);
        vkbookmarkcontextmenu->setVisible(visible);
    } else {
        self->KBookmarkContextMenu::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSetVisible(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SetVisible_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBookmarkContextMenu_MinimumSizeHint(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return new QSize(vkbookmarkcontextmenu->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBookmarkContextMenu*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KBookmarkContextMenu_QBaseMinimumSizeHint(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MinimumSizeHint_IsBase(true);
        return new QSize(vkbookmarkcontextmenu->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBookmarkContextMenu*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMinimumSizeHint(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MinimumSizeHint_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkContextMenu_HeightForWidth(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBookmarkContextMenu::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KBookmarkContextMenu_QBaseHeightForWidth(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_HeightForWidth_IsBase(true);
        return vkbookmarkcontextmenu->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBookmarkContextMenu::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnHeightForWidth(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_HeightForWidth_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_HasHeightForWidth(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->hasHeightForWidth();
    } else {
        return self->KBookmarkContextMenu::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseHasHeightForWidth(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_HasHeightForWidth_IsBase(true);
        return vkbookmarkcontextmenu->hasHeightForWidth();
    } else {
        return self->KBookmarkContextMenu::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnHasHeightForWidth(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_HasHeightForWidth_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KBookmarkContextMenu_PaintEngine(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->paintEngine();
    } else {
        return self->KBookmarkContextMenu::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KBookmarkContextMenu_QBasePaintEngine(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_PaintEngine_IsBase(true);
        return vkbookmarkcontextmenu->paintEngine();
    } else {
        return self->KBookmarkContextMenu::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnPaintEngine(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_PaintEngine_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_MouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseMouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MouseDoubleClickEvent_IsBase(true);
        vkbookmarkcontextmenu->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMouseDoubleClickEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_KeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->keyReleaseEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseKeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_KeyReleaseEvent_IsBase(true);
        vkbookmarkcontextmenu->keyReleaseEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnKeyReleaseEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_FocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->focusInEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseFocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusInEvent_IsBase(true);
        vkbookmarkcontextmenu->focusInEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusInEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusInEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_FocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->focusOutEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseFocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusOutEvent_IsBase(true);
        vkbookmarkcontextmenu->focusOutEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusOutEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusOutEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_MoveEvent(KBookmarkContextMenu* self, QMoveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->moveEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseMoveEvent(KBookmarkContextMenu* self, QMoveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MoveEvent_IsBase(true);
        vkbookmarkcontextmenu->moveEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMoveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_MoveEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->resizeEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ResizeEvent_IsBase(true);
        vkbookmarkcontextmenu->resizeEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnResizeEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ResizeEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_CloseEvent(KBookmarkContextMenu* self, QCloseEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->closeEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseCloseEvent(KBookmarkContextMenu* self, QCloseEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_CloseEvent_IsBase(true);
        vkbookmarkcontextmenu->closeEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnCloseEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_CloseEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->contextMenuEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ContextMenuEvent_IsBase(true);
        vkbookmarkcontextmenu->contextMenuEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnContextMenuEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ContextMenuEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_TabletEvent(KBookmarkContextMenu* self, QTabletEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->tabletEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseTabletEvent(KBookmarkContextMenu* self, QTabletEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_TabletEvent_IsBase(true);
        vkbookmarkcontextmenu->tabletEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnTabletEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_TabletEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_DragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->dragEnterEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseDragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DragEnterEvent_IsBase(true);
        vkbookmarkcontextmenu->dragEnterEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDragEnterEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DragEnterEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_DragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->dragMoveEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseDragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DragMoveEvent_IsBase(true);
        vkbookmarkcontextmenu->dragMoveEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDragMoveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DragMoveEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_DragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->dragLeaveEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseDragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DragLeaveEvent_IsBase(true);
        vkbookmarkcontextmenu->dragLeaveEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDragLeaveEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DragLeaveEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_DropEvent(KBookmarkContextMenu* self, QDropEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->dropEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseDropEvent(KBookmarkContextMenu* self, QDropEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DropEvent_IsBase(true);
        vkbookmarkcontextmenu->dropEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDropEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DropEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ShowEvent(KBookmarkContextMenu* self, QShowEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->showEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseShowEvent(KBookmarkContextMenu* self, QShowEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ShowEvent_IsBase(true);
        vkbookmarkcontextmenu->showEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnShowEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ShowEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_NativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseNativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_NativeEvent_IsBase(true);
        return vkbookmarkcontextmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnNativeEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_NativeEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkContextMenu_Metric(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KBookmarkContextMenu_QBaseMetric(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Metric_IsBase(true);
        return vkbookmarkcontextmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnMetric(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Metric_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_InitPainter(const KBookmarkContextMenu* self, QPainter* painter) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->initPainter(painter);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseInitPainter(const KBookmarkContextMenu* self, QPainter* painter) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InitPainter_IsBase(true);
        vkbookmarkcontextmenu->initPainter(painter);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInitPainter(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InitPainter_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KBookmarkContextMenu_Redirected(const KBookmarkContextMenu* self, QPoint* offset) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->redirected(offset);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KBookmarkContextMenu_QBaseRedirected(const KBookmarkContextMenu* self, QPoint* offset) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Redirected_IsBase(true);
        return vkbookmarkcontextmenu->redirected(offset);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnRedirected(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Redirected_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KBookmarkContextMenu_SharedPainter(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->sharedPainter();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KBookmarkContextMenu_QBaseSharedPainter(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SharedPainter_IsBase(true);
        return vkbookmarkcontextmenu->sharedPainter();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSharedPainter(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SharedPainter_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_InputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->inputMethodEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseInputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InputMethodEvent_IsBase(true);
        vkbookmarkcontextmenu->inputMethodEvent(param1);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInputMethodEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InputMethodEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KBookmarkContextMenu_InputMethodQuery(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return new QVariant(vkbookmarkcontextmenu->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBookmarkContextMenu*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KBookmarkContextMenu_QBaseInputMethodQuery(const KBookmarkContextMenu* self, int param1) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InputMethodQuery_IsBase(true);
        return new QVariant(vkbookmarkcontextmenu->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBookmarkContextMenu*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnInputMethodQuery(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_InputMethodQuery_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_EventFilter(KBookmarkContextMenu* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->eventFilter(watched, event);
    } else {
        return self->KBookmarkContextMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseEventFilter(KBookmarkContextMenu* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_EventFilter_IsBase(true);
        return vkbookmarkcontextmenu->eventFilter(watched, event);
    } else {
        return self->KBookmarkContextMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnEventFilter(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_EventFilter_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ChildEvent(KBookmarkContextMenu* self, QChildEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->childEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseChildEvent(KBookmarkContextMenu* self, QChildEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ChildEvent_IsBase(true);
        vkbookmarkcontextmenu->childEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnChildEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ChildEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_CustomEvent(KBookmarkContextMenu* self, QEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->customEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseCustomEvent(KBookmarkContextMenu* self, QEvent* event) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_CustomEvent_IsBase(true);
        vkbookmarkcontextmenu->customEvent(event);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnCustomEvent(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_CustomEvent_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_ConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ConnectNotify_IsBase(true);
        vkbookmarkcontextmenu->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnConnectNotify(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_DisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseDisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DisconnectNotify_IsBase(true);
        vkbookmarkcontextmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkContextMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDisconnectNotify(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_AddBookmark(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->addBookmark();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addBookmark();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseAddBookmark(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddBookmark_IsBase(true);
        vkbookmarkcontextmenu->addBookmark();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addBookmark();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddBookmark(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddBookmark_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddBookmark_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_AddFolderActions(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->addFolderActions();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addFolderActions();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseAddFolderActions(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddFolderActions_IsBase(true);
        vkbookmarkcontextmenu->addFolderActions();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addFolderActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddFolderActions(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddFolderActions_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddFolderActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_AddProperties(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->addProperties();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addProperties();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseAddProperties(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddProperties_IsBase(true);
        vkbookmarkcontextmenu->addProperties();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddProperties(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddProperties_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_AddBookmarkActions(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->addBookmarkActions();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addBookmarkActions();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseAddBookmarkActions(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddBookmarkActions_IsBase(true);
        vkbookmarkcontextmenu->addBookmarkActions();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addBookmarkActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddBookmarkActions(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddBookmarkActions_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddBookmarkActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_AddOpenFolderInTabs(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->addOpenFolderInTabs();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addOpenFolderInTabs();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseAddOpenFolderInTabs(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddOpenFolderInTabs_IsBase(true);
        vkbookmarkcontextmenu->addOpenFolderInTabs();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->addOpenFolderInTabs();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnAddOpenFolderInTabs(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_AddOpenFolderInTabs_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_AddOpenFolderInTabs_Callback>(slot));
    }
}

// Derived class handler implementation
KBookmarkManager* KBookmarkContextMenu_Manager(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->manager();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->manager();
    }
}

// Base class handler implementation
KBookmarkManager* KBookmarkContextMenu_QBaseManager(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Manager_IsBase(true);
        return vkbookmarkcontextmenu->manager();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->manager();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnManager(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Manager_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Manager_Callback>(slot));
    }
}

// Derived class handler implementation
KBookmarkOwner* KBookmarkContextMenu_Owner(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->owner();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->owner();
    }
}

// Base class handler implementation
KBookmarkOwner* KBookmarkContextMenu_QBaseOwner(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Owner_IsBase(true);
        return vkbookmarkcontextmenu->owner();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->owner();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnOwner(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Owner_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Owner_Callback>(slot));
    }
}

// Derived class handler implementation
KBookmark* KBookmarkContextMenu_Bookmark(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return new KBookmark(vkbookmarkcontextmenu->bookmark());
    }
    return {};
}

// Base class handler implementation
KBookmark* KBookmarkContextMenu_QBaseBookmark(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Bookmark_IsBase(true);
        return new KBookmark(vkbookmarkcontextmenu->bookmark());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnBookmark(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Bookmark_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Bookmark_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkContextMenu_ColumnCount(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->columnCount();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->columnCount();
    }
}

// Base class handler implementation
int KBookmarkContextMenu_QBaseColumnCount(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ColumnCount_IsBase(true);
        return vkbookmarkcontextmenu->columnCount();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->columnCount();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnColumnCount(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_ColumnCount_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_UpdateMicroFocus(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->updateMicroFocus();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseUpdateMicroFocus(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_UpdateMicroFocus_IsBase(true);
        vkbookmarkcontextmenu->updateMicroFocus();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnUpdateMicroFocus(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_Create(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->create();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->create();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseCreate(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Create_IsBase(true);
        vkbookmarkcontextmenu->create();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnCreate(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Create_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkContextMenu_Destroy(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->destroy();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->destroy();
    }
}

// Base class handler implementation
void KBookmarkContextMenu_QBaseDestroy(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Destroy_IsBase(true);
        vkbookmarkcontextmenu->destroy();
    } else {
        ((VirtualKBookmarkContextMenu*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnDestroy(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Destroy_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_FocusNextChild(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->focusNextChild();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseFocusNextChild(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusNextChild_IsBase(true);
        return vkbookmarkcontextmenu->focusNextChild();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusNextChild(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusNextChild_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_FocusPreviousChild(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->focusPreviousChild();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseFocusPreviousChild(KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusPreviousChild_IsBase(true);
        return vkbookmarkcontextmenu->focusPreviousChild();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnFocusPreviousChild(KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = dynamic_cast<VirtualKBookmarkContextMenu*>(self);
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_FocusPreviousChild_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBookmarkContextMenu_Sender(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->sender();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBookmarkContextMenu_QBaseSender(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Sender_IsBase(true);
        return vkbookmarkcontextmenu->sender();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSender(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Sender_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkContextMenu_SenderSignalIndex(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBookmarkContextMenu_QBaseSenderSignalIndex(const KBookmarkContextMenu* self) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SenderSignalIndex_IsBase(true);
        return vkbookmarkcontextmenu->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnSenderSignalIndex(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkContextMenu_Receivers(const KBookmarkContextMenu* self, const char* signal) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->receivers(signal);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBookmarkContextMenu_QBaseReceivers(const KBookmarkContextMenu* self, const char* signal) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Receivers_IsBase(true);
        return vkbookmarkcontextmenu->receivers(signal);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnReceivers(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_Receivers_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkContextMenu_IsSignalConnected(const KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBookmarkContextMenu_QBaseIsSignalConnected(const KBookmarkContextMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_IsSignalConnected_IsBase(true);
        return vkbookmarkcontextmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnIsSignalConnected(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KBookmarkContextMenu_GetDecodedMetricF(const KBookmarkContextMenu* self, int metricA, int metricB) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        return vkbookmarkcontextmenu->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KBookmarkContextMenu_QBaseGetDecodedMetricF(const KBookmarkContextMenu* self, int metricA, int metricB) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_GetDecodedMetricF_IsBase(true);
        return vkbookmarkcontextmenu->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBookmarkContextMenu*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkContextMenu_OnGetDecodedMetricF(const KBookmarkContextMenu* self, intptr_t slot) {
    auto* vkbookmarkcontextmenu = const_cast<VirtualKBookmarkContextMenu*>(dynamic_cast<const VirtualKBookmarkContextMenu*>(self));
    if (vkbookmarkcontextmenu && vkbookmarkcontextmenu->isVirtualKBookmarkContextMenu) {
        vkbookmarkcontextmenu->setKBookmarkContextMenu_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKBookmarkContextMenu::KBookmarkContextMenu_GetDecodedMetricF_Callback>(slot));
    }
}

void KBookmarkContextMenu_Delete(KBookmarkContextMenu* self) {
    delete self;
}
