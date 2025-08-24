#include <KRecentFilesMenu>
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
#include <QList>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <krecentfilesmenu.h>
#include "libkrecentfilesmenu.h"
#include "libkrecentfilesmenu.hxx"

KRecentFilesMenu* KRecentFilesMenu_new(QWidget* parent) {
    return new VirtualKRecentFilesMenu(parent);
}

KRecentFilesMenu* KRecentFilesMenu_new2(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKRecentFilesMenu(title_QString);
}

KRecentFilesMenu* KRecentFilesMenu_new3() {
    return new VirtualKRecentFilesMenu();
}

KRecentFilesMenu* KRecentFilesMenu_new4(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKRecentFilesMenu(title_QString, parent);
}

QMetaObject* KRecentFilesMenu_MetaObject(const KRecentFilesMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRecentFilesMenu_Metacast(KRecentFilesMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRecentFilesMenu_Metacall(KRecentFilesMenu* self, int param1, int param2, void** param3) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRecentFilesMenu_OnMetacall(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Metacall_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KRecentFilesMenu_QBaseMetacall(KRecentFilesMenu* self, int param1, int param2, void** param3) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Metacall_IsBase(true);
        return vkrecentfilesmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRecentFilesMenu_Tr(const char* s) {
    QString _ret = KRecentFilesMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRecentFilesMenu_Group(const KRecentFilesMenu* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRecentFilesMenu_SetGroup(KRecentFilesMenu* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setGroup(group_QString);
}

void KRecentFilesMenu_AddUrl(KRecentFilesMenu* self, const QUrl* url) {
    self->addUrl(*url);
}

void KRecentFilesMenu_RemoveUrl(KRecentFilesMenu* self, const QUrl* url) {
    self->removeUrl(*url);
}

int KRecentFilesMenu_MaximumItems(const KRecentFilesMenu* self) {
    return self->maximumItems();
}

void KRecentFilesMenu_SetMaximumItems(KRecentFilesMenu* self, size_t maximumItems) {
    self->setMaximumItems(static_cast<size_t>(maximumItems));
}

libqt_list /* of QUrl* */ KRecentFilesMenu_RecentFiles(const KRecentFilesMenu* self) {
    QList<QUrl> _ret = self->recentFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KRecentFilesMenu_ClearRecentFiles(KRecentFilesMenu* self) {
    self->clearRecentFiles();
}

void KRecentFilesMenu_UrlTriggered(KRecentFilesMenu* self, const QUrl* url) {
    self->urlTriggered(*url);
}

void KRecentFilesMenu_Connect_UrlTriggered(KRecentFilesMenu* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesMenu*, QUrl*) = reinterpret_cast<void (*)(KRecentFilesMenu*, QUrl*)>(slot);
    KRecentFilesMenu::connect(self, &KRecentFilesMenu::urlTriggered, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KRecentFilesMenu_RecentFilesChanged(KRecentFilesMenu* self) {
    self->recentFilesChanged();
}

void KRecentFilesMenu_Connect_RecentFilesChanged(KRecentFilesMenu* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesMenu*) = reinterpret_cast<void (*)(KRecentFilesMenu*)>(slot);
    KRecentFilesMenu::connect(self, &KRecentFilesMenu::recentFilesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KRecentFilesMenu_Tr2(const char* s, const char* c) {
    QString _ret = KRecentFilesMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRecentFilesMenu_Tr3(const char* s, const char* c, int n) {
    QString _ret = KRecentFilesMenu::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRecentFilesMenu_AddUrl2(KRecentFilesMenu* self, const QUrl* url, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addUrl(*url, name_QString);
}

// Derived class handler implementation
QSize* KRecentFilesMenu_SizeHint(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return new QSize(vkrecentfilesmenu->sizeHint());
    } else {
        return new QSize(((VirtualKRecentFilesMenu*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KRecentFilesMenu_QBaseSizeHint(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SizeHint_IsBase(true);
        return new QSize(vkrecentfilesmenu->sizeHint());
    } else {
        return new QSize(((VirtualKRecentFilesMenu*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSizeHint(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SizeHint_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ChangeEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->changeEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseChangeEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ChangeEvent_IsBase(true);
        vkrecentfilesmenu->changeEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnChangeEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ChangeEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_KeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->keyPressEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseKeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_KeyPressEvent_IsBase(true);
        vkrecentfilesmenu->keyPressEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnKeyPressEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_KeyPressEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_MouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->mouseReleaseEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseMouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MouseReleaseEvent_IsBase(true);
        vkrecentfilesmenu->mouseReleaseEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMouseReleaseEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_MousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->mousePressEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseMousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MousePressEvent_IsBase(true);
        vkrecentfilesmenu->mousePressEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMousePressEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MousePressEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_MouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->mouseMoveEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseMouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MouseMoveEvent_IsBase(true);
        vkrecentfilesmenu->mouseMoveEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMouseMoveEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MouseMoveEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_WheelEvent(KRecentFilesMenu* self, QWheelEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->wheelEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseWheelEvent(KRecentFilesMenu* self, QWheelEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_WheelEvent_IsBase(true);
        vkrecentfilesmenu->wheelEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnWheelEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_WheelEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_EnterEvent(KRecentFilesMenu* self, QEnterEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->enterEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseEnterEvent(KRecentFilesMenu* self, QEnterEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_EnterEvent_IsBase(true);
        vkrecentfilesmenu->enterEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnEnterEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_EnterEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_LeaveEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->leaveEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseLeaveEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_LeaveEvent_IsBase(true);
        vkrecentfilesmenu->leaveEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnLeaveEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_LeaveEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_HideEvent(KRecentFilesMenu* self, QHideEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->hideEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseHideEvent(KRecentFilesMenu* self, QHideEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_HideEvent_IsBase(true);
        vkrecentfilesmenu->hideEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnHideEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_HideEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_PaintEvent(KRecentFilesMenu* self, QPaintEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->paintEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBasePaintEvent(KRecentFilesMenu* self, QPaintEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_PaintEvent_IsBase(true);
        vkrecentfilesmenu->paintEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnPaintEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_PaintEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ActionEvent(KRecentFilesMenu* self, QActionEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->actionEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseActionEvent(KRecentFilesMenu* self, QActionEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ActionEvent_IsBase(true);
        vkrecentfilesmenu->actionEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnActionEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ActionEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_TimerEvent(KRecentFilesMenu* self, QTimerEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->timerEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseTimerEvent(KRecentFilesMenu* self, QTimerEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_TimerEvent_IsBase(true);
        vkrecentfilesmenu->timerEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnTimerEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_TimerEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_Event(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->event(param1);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Event_IsBase(true);
        return vkrecentfilesmenu->event(param1);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Event_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_FocusNextPrevChild(KRecentFilesMenu* self, bool next) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->focusNextPrevChild(next);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseFocusNextPrevChild(KRecentFilesMenu* self, bool next) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusNextPrevChild_IsBase(true);
        return vkrecentfilesmenu->focusNextPrevChild(next);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusNextPrevChild(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_InitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->initStyleOption(option, action);
    } else {
        ((VirtualKRecentFilesMenu*)self)->initStyleOption(option, action);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseInitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InitStyleOption_IsBase(true);
        vkrecentfilesmenu->initStyleOption(option, action);
    } else {
        ((VirtualKRecentFilesMenu*)self)->initStyleOption(option, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInitStyleOption(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InitStyleOption_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesMenu_DevType(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->devType();
    } else {
        return self->KRecentFilesMenu::devType();
    }
}

// Base class handler implementation
int KRecentFilesMenu_QBaseDevType(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DevType_IsBase(true);
        return vkrecentfilesmenu->devType();
    } else {
        return self->KRecentFilesMenu::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDevType(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DevType_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_SetVisible(KRecentFilesMenu* self, bool visible) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setVisible(visible);
    } else {
        self->KRecentFilesMenu::setVisible(visible);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseSetVisible(KRecentFilesMenu* self, bool visible) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SetVisible_IsBase(true);
        vkrecentfilesmenu->setVisible(visible);
    } else {
        self->KRecentFilesMenu::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSetVisible(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SetVisible_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRecentFilesMenu_MinimumSizeHint(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return new QSize(vkrecentfilesmenu->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRecentFilesMenu*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KRecentFilesMenu_QBaseMinimumSizeHint(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MinimumSizeHint_IsBase(true);
        return new QSize(vkrecentfilesmenu->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRecentFilesMenu*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMinimumSizeHint(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MinimumSizeHint_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesMenu_HeightForWidth(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRecentFilesMenu::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KRecentFilesMenu_QBaseHeightForWidth(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_HeightForWidth_IsBase(true);
        return vkrecentfilesmenu->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRecentFilesMenu::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnHeightForWidth(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_HeightForWidth_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_HasHeightForWidth(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->hasHeightForWidth();
    } else {
        return self->KRecentFilesMenu::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseHasHeightForWidth(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_HasHeightForWidth_IsBase(true);
        return vkrecentfilesmenu->hasHeightForWidth();
    } else {
        return self->KRecentFilesMenu::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnHasHeightForWidth(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_HasHeightForWidth_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KRecentFilesMenu_PaintEngine(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->paintEngine();
    } else {
        return self->KRecentFilesMenu::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KRecentFilesMenu_QBasePaintEngine(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_PaintEngine_IsBase(true);
        return vkrecentfilesmenu->paintEngine();
    } else {
        return self->KRecentFilesMenu::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnPaintEngine(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_PaintEngine_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_MouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseMouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MouseDoubleClickEvent_IsBase(true);
        vkrecentfilesmenu->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMouseDoubleClickEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_KeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->keyReleaseEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseKeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_KeyReleaseEvent_IsBase(true);
        vkrecentfilesmenu->keyReleaseEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnKeyReleaseEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_FocusInEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->focusInEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseFocusInEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusInEvent_IsBase(true);
        vkrecentfilesmenu->focusInEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusInEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusInEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_FocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->focusOutEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseFocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusOutEvent_IsBase(true);
        vkrecentfilesmenu->focusOutEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusOutEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusOutEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_MoveEvent(KRecentFilesMenu* self, QMoveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->moveEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseMoveEvent(KRecentFilesMenu* self, QMoveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MoveEvent_IsBase(true);
        vkrecentfilesmenu->moveEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMoveEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_MoveEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ResizeEvent(KRecentFilesMenu* self, QResizeEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->resizeEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseResizeEvent(KRecentFilesMenu* self, QResizeEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ResizeEvent_IsBase(true);
        vkrecentfilesmenu->resizeEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnResizeEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ResizeEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_CloseEvent(KRecentFilesMenu* self, QCloseEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->closeEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseCloseEvent(KRecentFilesMenu* self, QCloseEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_CloseEvent_IsBase(true);
        vkrecentfilesmenu->closeEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnCloseEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_CloseEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->contextMenuEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ContextMenuEvent_IsBase(true);
        vkrecentfilesmenu->contextMenuEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnContextMenuEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ContextMenuEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_TabletEvent(KRecentFilesMenu* self, QTabletEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->tabletEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseTabletEvent(KRecentFilesMenu* self, QTabletEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_TabletEvent_IsBase(true);
        vkrecentfilesmenu->tabletEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnTabletEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_TabletEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_DragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->dragEnterEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseDragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DragEnterEvent_IsBase(true);
        vkrecentfilesmenu->dragEnterEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDragEnterEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DragEnterEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_DragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->dragMoveEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseDragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DragMoveEvent_IsBase(true);
        vkrecentfilesmenu->dragMoveEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDragMoveEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DragMoveEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_DragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->dragLeaveEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseDragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DragLeaveEvent_IsBase(true);
        vkrecentfilesmenu->dragLeaveEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDragLeaveEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DragLeaveEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_DropEvent(KRecentFilesMenu* self, QDropEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->dropEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseDropEvent(KRecentFilesMenu* self, QDropEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DropEvent_IsBase(true);
        vkrecentfilesmenu->dropEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDropEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DropEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ShowEvent(KRecentFilesMenu* self, QShowEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->showEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseShowEvent(KRecentFilesMenu* self, QShowEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ShowEvent_IsBase(true);
        vkrecentfilesmenu->showEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnShowEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ShowEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_NativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRecentFilesMenu*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseNativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_NativeEvent_IsBase(true);
        return vkrecentfilesmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRecentFilesMenu*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnNativeEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_NativeEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesMenu_Metric(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRecentFilesMenu*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KRecentFilesMenu_QBaseMetric(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Metric_IsBase(true);
        return vkrecentfilesmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRecentFilesMenu*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMetric(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Metric_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_InitPainter(const KRecentFilesMenu* self, QPainter* painter) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->initPainter(painter);
    } else {
        ((VirtualKRecentFilesMenu*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseInitPainter(const KRecentFilesMenu* self, QPainter* painter) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InitPainter_IsBase(true);
        vkrecentfilesmenu->initPainter(painter);
    } else {
        ((VirtualKRecentFilesMenu*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInitPainter(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InitPainter_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KRecentFilesMenu_Redirected(const KRecentFilesMenu* self, QPoint* offset) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->redirected(offset);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KRecentFilesMenu_QBaseRedirected(const KRecentFilesMenu* self, QPoint* offset) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Redirected_IsBase(true);
        return vkrecentfilesmenu->redirected(offset);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnRedirected(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Redirected_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KRecentFilesMenu_SharedPainter(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->sharedPainter();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KRecentFilesMenu_QBaseSharedPainter(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SharedPainter_IsBase(true);
        return vkrecentfilesmenu->sharedPainter();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSharedPainter(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SharedPainter_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_InputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->inputMethodEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseInputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InputMethodEvent_IsBase(true);
        vkrecentfilesmenu->inputMethodEvent(param1);
    } else {
        ((VirtualKRecentFilesMenu*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInputMethodEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InputMethodEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRecentFilesMenu_InputMethodQuery(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return new QVariant(vkrecentfilesmenu->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKRecentFilesMenu*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KRecentFilesMenu_QBaseInputMethodQuery(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InputMethodQuery_IsBase(true);
        return new QVariant(vkrecentfilesmenu->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKRecentFilesMenu*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInputMethodQuery(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_InputMethodQuery_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_EventFilter(KRecentFilesMenu* self, QObject* watched, QEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->eventFilter(watched, event);
    } else {
        return self->KRecentFilesMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseEventFilter(KRecentFilesMenu* self, QObject* watched, QEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_EventFilter_IsBase(true);
        return vkrecentfilesmenu->eventFilter(watched, event);
    } else {
        return self->KRecentFilesMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnEventFilter(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_EventFilter_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ChildEvent(KRecentFilesMenu* self, QChildEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->childEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseChildEvent(KRecentFilesMenu* self, QChildEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ChildEvent_IsBase(true);
        vkrecentfilesmenu->childEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnChildEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ChildEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_CustomEvent(KRecentFilesMenu* self, QEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->customEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseCustomEvent(KRecentFilesMenu* self, QEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_CustomEvent_IsBase(true);
        vkrecentfilesmenu->customEvent(event);
    } else {
        ((VirtualKRecentFilesMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnCustomEvent(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_CustomEvent_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_ConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->connectNotify(*signal);
    } else {
        ((VirtualKRecentFilesMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ConnectNotify_IsBase(true);
        vkrecentfilesmenu->connectNotify(*signal);
    } else {
        ((VirtualKRecentFilesMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnConnectNotify(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_DisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKRecentFilesMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseDisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DisconnectNotify_IsBase(true);
        vkrecentfilesmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKRecentFilesMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDisconnectNotify(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesMenu_ColumnCount(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->columnCount();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->columnCount();
    }
}

// Base class handler implementation
int KRecentFilesMenu_QBaseColumnCount(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ColumnCount_IsBase(true);
        return vkrecentfilesmenu->columnCount();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->columnCount();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnColumnCount(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_ColumnCount_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_UpdateMicroFocus(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->updateMicroFocus();
    } else {
        ((VirtualKRecentFilesMenu*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseUpdateMicroFocus(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_UpdateMicroFocus_IsBase(true);
        vkrecentfilesmenu->updateMicroFocus();
    } else {
        ((VirtualKRecentFilesMenu*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnUpdateMicroFocus(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_Create(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->create();
    } else {
        ((VirtualKRecentFilesMenu*)self)->create();
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseCreate(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Create_IsBase(true);
        vkrecentfilesmenu->create();
    } else {
        ((VirtualKRecentFilesMenu*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnCreate(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Create_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesMenu_Destroy(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->destroy();
    } else {
        ((VirtualKRecentFilesMenu*)self)->destroy();
    }
}

// Base class handler implementation
void KRecentFilesMenu_QBaseDestroy(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Destroy_IsBase(true);
        vkrecentfilesmenu->destroy();
    } else {
        ((VirtualKRecentFilesMenu*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDestroy(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Destroy_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_FocusNextChild(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->focusNextChild();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseFocusNextChild(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusNextChild_IsBase(true);
        return vkrecentfilesmenu->focusNextChild();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusNextChild(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusNextChild_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_FocusPreviousChild(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->focusPreviousChild();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseFocusPreviousChild(KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusPreviousChild_IsBase(true);
        return vkrecentfilesmenu->focusPreviousChild();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusPreviousChild(KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_FocusPreviousChild_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRecentFilesMenu_Sender(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->sender();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRecentFilesMenu_QBaseSender(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Sender_IsBase(true);
        return vkrecentfilesmenu->sender();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSender(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Sender_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesMenu_SenderSignalIndex(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->senderSignalIndex();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRecentFilesMenu_QBaseSenderSignalIndex(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SenderSignalIndex_IsBase(true);
        return vkrecentfilesmenu->senderSignalIndex();
    } else {
        return ((VirtualKRecentFilesMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSenderSignalIndex(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesMenu_Receivers(const KRecentFilesMenu* self, const char* signal) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->receivers(signal);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRecentFilesMenu_QBaseReceivers(const KRecentFilesMenu* self, const char* signal) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Receivers_IsBase(true);
        return vkrecentfilesmenu->receivers(signal);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnReceivers(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_Receivers_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesMenu_IsSignalConnected(const KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRecentFilesMenu_QBaseIsSignalConnected(const KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_IsSignalConnected_IsBase(true);
        return vkrecentfilesmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKRecentFilesMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnIsSignalConnected(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KRecentFilesMenu_GetDecodedMetricF(const KRecentFilesMenu* self, int metricA, int metricB) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        return vkrecentfilesmenu->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRecentFilesMenu*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KRecentFilesMenu_QBaseGetDecodedMetricF(const KRecentFilesMenu* self, int metricA, int metricB) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_GetDecodedMetricF_IsBase(true);
        return vkrecentfilesmenu->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRecentFilesMenu*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnGetDecodedMetricF(const KRecentFilesMenu* self, intptr_t slot) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu && vkrecentfilesmenu->isVirtualKRecentFilesMenu) {
        vkrecentfilesmenu->setKRecentFilesMenu_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_GetDecodedMetricF_Callback>(slot));
    }
}

void KRecentFilesMenu_Delete(KRecentFilesMenu* self) {
    delete self;
}
