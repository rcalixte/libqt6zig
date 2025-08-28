#include <KMultiTabBar>
#include <KMultiTabBarButton>
#include <KMultiTabBarTab>
#include <QAbstractButton>
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
#include <QFont>
#include <QHideEvent>
#include <QIcon>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kmultitabbar.h>
#include "libkmultitabbar.h"
#include "libkmultitabbar.hxx"

KMultiTabBar* KMultiTabBar_new(QWidget* parent) {
    return new VirtualKMultiTabBar(parent);
}

KMultiTabBar* KMultiTabBar_new2() {
    return new VirtualKMultiTabBar();
}

KMultiTabBar* KMultiTabBar_new3(int pos) {
    return new VirtualKMultiTabBar(static_cast<KMultiTabBar::KMultiTabBarPosition>(pos));
}

KMultiTabBar* KMultiTabBar_new4(int pos, QWidget* parent) {
    return new VirtualKMultiTabBar(static_cast<KMultiTabBar::KMultiTabBarPosition>(pos), parent);
}

QMetaObject* KMultiTabBar_MetaObject(const KMultiTabBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* KMultiTabBar_Metacast(KMultiTabBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMultiTabBar_Metacall(KMultiTabBar* self, int param1, int param2, void** param3) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMultiTabBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMultiTabBar_OnMetacall(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Metacall_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KMultiTabBar_QBaseMetacall(KMultiTabBar* self, int param1, int param2, void** param3) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Metacall_IsBase(true);
        return vkmultitabbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMultiTabBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KMultiTabBar_Tr(const char* s) {
    QString _ret = KMultiTabBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KMultiTabBar_AppendButton(KMultiTabBar* self, const QIcon* icon) {
    return self->appendButton(*icon);
}

void KMultiTabBar_RemoveButton(KMultiTabBar* self, int id) {
    self->removeButton(static_cast<int>(id));
}

int KMultiTabBar_AppendTab(KMultiTabBar* self, const QIcon* icon) {
    return self->appendTab(*icon);
}

void KMultiTabBar_RemoveTab(KMultiTabBar* self, int id) {
    self->removeTab(static_cast<int>(id));
}

void KMultiTabBar_SetTab(KMultiTabBar* self, int id, bool state) {
    self->setTab(static_cast<int>(id), state);
}

bool KMultiTabBar_IsTabRaised(const KMultiTabBar* self, int id) {
    return self->isTabRaised(static_cast<int>(id));
}

KMultiTabBarButton* KMultiTabBar_Button(const KMultiTabBar* self, int id) {
    return self->button(static_cast<int>(id));
}

KMultiTabBarTab* KMultiTabBar_Tab(const KMultiTabBar* self, int id) {
    return self->tab(static_cast<int>(id));
}

void KMultiTabBar_SetPosition(KMultiTabBar* self, int pos) {
    self->setPosition(static_cast<KMultiTabBar::KMultiTabBarPosition>(pos));
}

int KMultiTabBar_Position(const KMultiTabBar* self) {
    return static_cast<int>(self->position());
}

void KMultiTabBar_SetStyle(KMultiTabBar* self, int style) {
    self->setStyle(static_cast<KMultiTabBar::KMultiTabBarStyle>(style));
}

int KMultiTabBar_TabStyle(const KMultiTabBar* self) {
    return static_cast<int>(self->tabStyle());
}

void KMultiTabBar_FontChange(KMultiTabBar* self, const QFont* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->fontChange(*param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMultiTabBar_OnFontChange(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FontChange_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FontChange_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KMultiTabBar_QBaseFontChange(KMultiTabBar* self, const QFont* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FontChange_IsBase(true);
        vkmultitabbar->fontChange(*param1);
    }
}

void KMultiTabBar_PaintEvent(KMultiTabBar* self, QPaintEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMultiTabBar_OnPaintEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_PaintEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KMultiTabBar_QBasePaintEvent(KMultiTabBar* self, QPaintEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_PaintEvent_IsBase(true);
        vkmultitabbar->paintEvent(param1);
    }
}

libqt_string KMultiTabBar_Tr2(const char* s, const char* c) {
    QString _ret = KMultiTabBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMultiTabBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = KMultiTabBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KMultiTabBar_AppendButton2(KMultiTabBar* self, const QIcon* icon, int id) {
    return self->appendButton(*icon, static_cast<int>(id));
}

int KMultiTabBar_AppendButton3(KMultiTabBar* self, const QIcon* icon, int id, QMenu* popup) {
    return self->appendButton(*icon, static_cast<int>(id), popup);
}

int KMultiTabBar_AppendButton4(KMultiTabBar* self, const QIcon* icon, int id, QMenu* popup, const libqt_string not_used_yet) {
    QString not_used_yet_QString = QString::fromUtf8(not_used_yet.data, not_used_yet.len);
    return self->appendButton(*icon, static_cast<int>(id), popup, not_used_yet_QString);
}

int KMultiTabBar_AppendTab2(KMultiTabBar* self, const QIcon* icon, int id) {
    return self->appendTab(*icon, static_cast<int>(id));
}

int KMultiTabBar_AppendTab3(KMultiTabBar* self, const QIcon* icon, int id, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->appendTab(*icon, static_cast<int>(id), text_QString);
}

// Derived class handler implementation
int KMultiTabBar_DevType(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->devType();
    } else {
        return self->KMultiTabBar::devType();
    }
}

// Base class handler implementation
int KMultiTabBar_QBaseDevType(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DevType_IsBase(true);
        return vkmultitabbar->devType();
    } else {
        return self->KMultiTabBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDevType(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DevType_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_SetVisible(KMultiTabBar* self, bool visible) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setVisible(visible);
    } else {
        self->KMultiTabBar::setVisible(visible);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseSetVisible(KMultiTabBar* self, bool visible) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SetVisible_IsBase(true);
        vkmultitabbar->setVisible(visible);
    } else {
        self->KMultiTabBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSetVisible(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SetVisible_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMultiTabBar_SizeHint(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return new QSize(vkmultitabbar->sizeHint());
    } else {
        return new QSize(((VirtualKMultiTabBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KMultiTabBar_QBaseSizeHint(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SizeHint_IsBase(true);
        return new QSize(vkmultitabbar->sizeHint());
    } else {
        return new QSize(((VirtualKMultiTabBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSizeHint(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SizeHint_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMultiTabBar_MinimumSizeHint(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return new QSize(vkmultitabbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMultiTabBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KMultiTabBar_QBaseMinimumSizeHint(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MinimumSizeHint_IsBase(true);
        return new QSize(vkmultitabbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMultiTabBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMinimumSizeHint(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KMultiTabBar_HeightForWidth(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMultiTabBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KMultiTabBar_QBaseHeightForWidth(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_HeightForWidth_IsBase(true);
        return vkmultitabbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMultiTabBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnHeightForWidth(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_HeightForWidth_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_HasHeightForWidth(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->hasHeightForWidth();
    } else {
        return self->KMultiTabBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseHasHeightForWidth(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_HasHeightForWidth_IsBase(true);
        return vkmultitabbar->hasHeightForWidth();
    } else {
        return self->KMultiTabBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnHasHeightForWidth(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KMultiTabBar_PaintEngine(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->paintEngine();
    } else {
        return self->KMultiTabBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KMultiTabBar_QBasePaintEngine(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_PaintEngine_IsBase(true);
        return vkmultitabbar->paintEngine();
    } else {
        return self->KMultiTabBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnPaintEngine(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_PaintEngine_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_Event(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->event(event);
    } else {
        return ((VirtualKMultiTabBar*)self)->event(event);
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Event_IsBase(true);
        return vkmultitabbar->event(event);
    } else {
        return ((VirtualKMultiTabBar*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Event_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_MousePressEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->mousePressEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseMousePressEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MousePressEvent_IsBase(true);
        vkmultitabbar->mousePressEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMousePressEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MousePressEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_MouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->mouseReleaseEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseMouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MouseReleaseEvent_IsBase(true);
        vkmultitabbar->mouseReleaseEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMouseReleaseEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_MouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseMouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MouseDoubleClickEvent_IsBase(true);
        vkmultitabbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMouseDoubleClickEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_MouseMoveEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->mouseMoveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseMouseMoveEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MouseMoveEvent_IsBase(true);
        vkmultitabbar->mouseMoveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMouseMoveEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_WheelEvent(KMultiTabBar* self, QWheelEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->wheelEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseWheelEvent(KMultiTabBar* self, QWheelEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_WheelEvent_IsBase(true);
        vkmultitabbar->wheelEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnWheelEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_WheelEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_KeyPressEvent(KMultiTabBar* self, QKeyEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->keyPressEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseKeyPressEvent(KMultiTabBar* self, QKeyEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_KeyPressEvent_IsBase(true);
        vkmultitabbar->keyPressEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnKeyPressEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_KeyPressEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_KeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->keyReleaseEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseKeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_KeyReleaseEvent_IsBase(true);
        vkmultitabbar->keyReleaseEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnKeyReleaseEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_FocusInEvent(KMultiTabBar* self, QFocusEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->focusInEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseFocusInEvent(KMultiTabBar* self, QFocusEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusInEvent_IsBase(true);
        vkmultitabbar->focusInEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusInEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusInEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_FocusOutEvent(KMultiTabBar* self, QFocusEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->focusOutEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseFocusOutEvent(KMultiTabBar* self, QFocusEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusOutEvent_IsBase(true);
        vkmultitabbar->focusOutEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusOutEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusOutEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_EnterEvent(KMultiTabBar* self, QEnterEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->enterEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseEnterEvent(KMultiTabBar* self, QEnterEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_EnterEvent_IsBase(true);
        vkmultitabbar->enterEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnEnterEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_EnterEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_LeaveEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->leaveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseLeaveEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_LeaveEvent_IsBase(true);
        vkmultitabbar->leaveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnLeaveEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_LeaveEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_MoveEvent(KMultiTabBar* self, QMoveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->moveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseMoveEvent(KMultiTabBar* self, QMoveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MoveEvent_IsBase(true);
        vkmultitabbar->moveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMoveEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_MoveEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ResizeEvent(KMultiTabBar* self, QResizeEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->resizeEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseResizeEvent(KMultiTabBar* self, QResizeEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ResizeEvent_IsBase(true);
        vkmultitabbar->resizeEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnResizeEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ResizeEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_CloseEvent(KMultiTabBar* self, QCloseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->closeEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseCloseEvent(KMultiTabBar* self, QCloseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_CloseEvent_IsBase(true);
        vkmultitabbar->closeEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnCloseEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_CloseEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->contextMenuEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ContextMenuEvent_IsBase(true);
        vkmultitabbar->contextMenuEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnContextMenuEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_TabletEvent(KMultiTabBar* self, QTabletEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->tabletEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseTabletEvent(KMultiTabBar* self, QTabletEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_TabletEvent_IsBase(true);
        vkmultitabbar->tabletEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnTabletEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_TabletEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ActionEvent(KMultiTabBar* self, QActionEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->actionEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseActionEvent(KMultiTabBar* self, QActionEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ActionEvent_IsBase(true);
        vkmultitabbar->actionEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnActionEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ActionEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_DragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->dragEnterEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseDragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DragEnterEvent_IsBase(true);
        vkmultitabbar->dragEnterEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDragEnterEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DragEnterEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_DragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->dragMoveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseDragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DragMoveEvent_IsBase(true);
        vkmultitabbar->dragMoveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDragMoveEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DragMoveEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_DragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->dragLeaveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseDragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DragLeaveEvent_IsBase(true);
        vkmultitabbar->dragLeaveEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDragLeaveEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_DropEvent(KMultiTabBar* self, QDropEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->dropEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseDropEvent(KMultiTabBar* self, QDropEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DropEvent_IsBase(true);
        vkmultitabbar->dropEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDropEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DropEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ShowEvent(KMultiTabBar* self, QShowEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->showEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseShowEvent(KMultiTabBar* self, QShowEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ShowEvent_IsBase(true);
        vkmultitabbar->showEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnShowEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ShowEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_HideEvent(KMultiTabBar* self, QHideEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->hideEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseHideEvent(KMultiTabBar* self, QHideEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_HideEvent_IsBase(true);
        vkmultitabbar->hideEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnHideEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_HideEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_NativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMultiTabBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseNativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_NativeEvent_IsBase(true);
        return vkmultitabbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMultiTabBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnNativeEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_NativeEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ChangeEvent(KMultiTabBar* self, QEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->changeEvent(param1);
    } else {
        ((VirtualKMultiTabBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseChangeEvent(KMultiTabBar* self, QEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ChangeEvent_IsBase(true);
        vkmultitabbar->changeEvent(param1);
    } else {
        ((VirtualKMultiTabBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnChangeEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ChangeEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMultiTabBar_Metric(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMultiTabBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KMultiTabBar_QBaseMetric(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Metric_IsBase(true);
        return vkmultitabbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMultiTabBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMetric(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Metric_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_InitPainter(const KMultiTabBar* self, QPainter* painter) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->initPainter(painter);
    } else {
        ((VirtualKMultiTabBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseInitPainter(const KMultiTabBar* self, QPainter* painter) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_InitPainter_IsBase(true);
        vkmultitabbar->initPainter(painter);
    } else {
        ((VirtualKMultiTabBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnInitPainter(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_InitPainter_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KMultiTabBar_Redirected(const KMultiTabBar* self, QPoint* offset) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->redirected(offset);
    } else {
        return ((VirtualKMultiTabBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KMultiTabBar_QBaseRedirected(const KMultiTabBar* self, QPoint* offset) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Redirected_IsBase(true);
        return vkmultitabbar->redirected(offset);
    } else {
        return ((VirtualKMultiTabBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnRedirected(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Redirected_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KMultiTabBar_SharedPainter(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->sharedPainter();
    } else {
        return ((VirtualKMultiTabBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KMultiTabBar_QBaseSharedPainter(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SharedPainter_IsBase(true);
        return vkmultitabbar->sharedPainter();
    } else {
        return ((VirtualKMultiTabBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSharedPainter(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SharedPainter_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_InputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->inputMethodEvent(param1);
    } else {
        ((VirtualKMultiTabBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseInputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_InputMethodEvent_IsBase(true);
        vkmultitabbar->inputMethodEvent(param1);
    } else {
        ((VirtualKMultiTabBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnInputMethodEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_InputMethodEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KMultiTabBar_InputMethodQuery(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return new QVariant(vkmultitabbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMultiTabBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KMultiTabBar_QBaseInputMethodQuery(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_InputMethodQuery_IsBase(true);
        return new QVariant(vkmultitabbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMultiTabBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnInputMethodQuery(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_InputMethodQuery_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_FocusNextPrevChild(KMultiTabBar* self, bool next) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKMultiTabBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseFocusNextPrevChild(KMultiTabBar* self, bool next) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusNextPrevChild_IsBase(true);
        return vkmultitabbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKMultiTabBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusNextPrevChild(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_EventFilter(KMultiTabBar* self, QObject* watched, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->eventFilter(watched, event);
    } else {
        return self->KMultiTabBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseEventFilter(KMultiTabBar* self, QObject* watched, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_EventFilter_IsBase(true);
        return vkmultitabbar->eventFilter(watched, event);
    } else {
        return self->KMultiTabBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnEventFilter(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_EventFilter_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_TimerEvent(KMultiTabBar* self, QTimerEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->timerEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseTimerEvent(KMultiTabBar* self, QTimerEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_TimerEvent_IsBase(true);
        vkmultitabbar->timerEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnTimerEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_TimerEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ChildEvent(KMultiTabBar* self, QChildEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->childEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseChildEvent(KMultiTabBar* self, QChildEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ChildEvent_IsBase(true);
        vkmultitabbar->childEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnChildEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ChildEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_CustomEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->customEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseCustomEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_CustomEvent_IsBase(true);
        vkmultitabbar->customEvent(event);
    } else {
        ((VirtualKMultiTabBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnCustomEvent(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_CustomEvent_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_ConnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->connectNotify(*signal);
    } else {
        ((VirtualKMultiTabBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseConnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ConnectNotify_IsBase(true);
        vkmultitabbar->connectNotify(*signal);
    } else {
        ((VirtualKMultiTabBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnConnectNotify(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_ConnectNotify_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_DisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->disconnectNotify(*signal);
    } else {
        ((VirtualKMultiTabBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseDisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DisconnectNotify_IsBase(true);
        vkmultitabbar->disconnectNotify(*signal);
    } else {
        ((VirtualKMultiTabBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDisconnectNotify(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_DisconnectNotify_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_UpdateSeparator(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->updateSeparator();
    } else {
        ((VirtualKMultiTabBar*)self)->updateSeparator();
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseUpdateSeparator(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_UpdateSeparator_IsBase(true);
        vkmultitabbar->updateSeparator();
    } else {
        ((VirtualKMultiTabBar*)self)->updateSeparator();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnUpdateSeparator(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_UpdateSeparator_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_UpdateSeparator_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_UpdateMicroFocus(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->updateMicroFocus();
    } else {
        ((VirtualKMultiTabBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseUpdateMicroFocus(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_UpdateMicroFocus_IsBase(true);
        vkmultitabbar->updateMicroFocus();
    } else {
        ((VirtualKMultiTabBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnUpdateMicroFocus(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_Create(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->create();
    } else {
        ((VirtualKMultiTabBar*)self)->create();
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseCreate(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Create_IsBase(true);
        vkmultitabbar->create();
    } else {
        ((VirtualKMultiTabBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnCreate(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Create_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KMultiTabBar_Destroy(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->destroy();
    } else {
        ((VirtualKMultiTabBar*)self)->destroy();
    }
}

// Base class handler implementation
void KMultiTabBar_QBaseDestroy(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Destroy_IsBase(true);
        vkmultitabbar->destroy();
    } else {
        ((VirtualKMultiTabBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDestroy(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Destroy_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_FocusNextChild(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->focusNextChild();
    } else {
        return ((VirtualKMultiTabBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseFocusNextChild(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusNextChild_IsBase(true);
        return vkmultitabbar->focusNextChild();
    } else {
        return ((VirtualKMultiTabBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusNextChild(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusNextChild_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_FocusPreviousChild(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->focusPreviousChild();
    } else {
        return ((VirtualKMultiTabBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseFocusPreviousChild(KMultiTabBar* self) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusPreviousChild_IsBase(true);
        return vkmultitabbar->focusPreviousChild();
    } else {
        return ((VirtualKMultiTabBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusPreviousChild(KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KMultiTabBar_Sender(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->sender();
    } else {
        return ((VirtualKMultiTabBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* KMultiTabBar_QBaseSender(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Sender_IsBase(true);
        return vkmultitabbar->sender();
    } else {
        return ((VirtualKMultiTabBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSender(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Sender_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KMultiTabBar_SenderSignalIndex(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->senderSignalIndex();
    } else {
        return ((VirtualKMultiTabBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KMultiTabBar_QBaseSenderSignalIndex(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SenderSignalIndex_IsBase(true);
        return vkmultitabbar->senderSignalIndex();
    } else {
        return ((VirtualKMultiTabBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSenderSignalIndex(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KMultiTabBar_Receivers(const KMultiTabBar* self, const char* signal) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->receivers(signal);
    } else {
        return ((VirtualKMultiTabBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KMultiTabBar_QBaseReceivers(const KMultiTabBar* self, const char* signal) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Receivers_IsBase(true);
        return vkmultitabbar->receivers(signal);
    } else {
        return ((VirtualKMultiTabBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnReceivers(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_Receivers_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMultiTabBar_IsSignalConnected(const KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKMultiTabBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KMultiTabBar_QBaseIsSignalConnected(const KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_IsSignalConnected_IsBase(true);
        return vkmultitabbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKMultiTabBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnIsSignalConnected(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_IsSignalConnected_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KMultiTabBar_GetDecodedMetricF(const KMultiTabBar* self, int metricA, int metricB) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        return vkmultitabbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMultiTabBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KMultiTabBar_QBaseGetDecodedMetricF(const KMultiTabBar* self, int metricA, int metricB) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_GetDecodedMetricF_IsBase(true);
        return vkmultitabbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMultiTabBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnGetDecodedMetricF(const KMultiTabBar* self, intptr_t slot) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar && vkmultitabbar->isVirtualKMultiTabBar) {
        vkmultitabbar->setKMultiTabBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_GetDecodedMetricF_Callback>(slot));
    }
}

void KMultiTabBar_Delete(KMultiTabBar* self) {
    delete self;
}

QMetaObject* KMultiTabBarButton_MetaObject(const KMultiTabBarButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KMultiTabBarButton_Metacast(KMultiTabBarButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMultiTabBarButton_Metacall(KMultiTabBarButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMultiTabBarButton_Tr(const char* s) {
    QString _ret = KMultiTabBarButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KMultiTabBarButton_Id(const KMultiTabBarButton* self) {
    return self->id();
}

void KMultiTabBarButton_SetText(KMultiTabBarButton* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KMultiTabBarButton_Clicked(KMultiTabBarButton* self, int id) {
    self->clicked(static_cast<int>(id));
}

void KMultiTabBarButton_Connect_Clicked(KMultiTabBarButton* self, intptr_t slot) {
    void (*slotFunc)(KMultiTabBarButton*, int) = reinterpret_cast<void (*)(KMultiTabBarButton*, int)>(slot);
    KMultiTabBarButton::connect(self, &KMultiTabBarButton::clicked, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

libqt_string KMultiTabBarButton_Tr2(const char* s, const char* c) {
    QString _ret = KMultiTabBarButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMultiTabBarButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = KMultiTabBarButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KMultiTabBarButton_Delete(KMultiTabBarButton* self) {
    delete self;
}

QMetaObject* KMultiTabBarTab_MetaObject(const KMultiTabBarTab* self) {
    return (QMetaObject*)self->metaObject();
}

void* KMultiTabBarTab_Metacast(KMultiTabBarTab* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMultiTabBarTab_Metacall(KMultiTabBarTab* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMultiTabBarTab_Tr(const char* s) {
    QString _ret = KMultiTabBarTab::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KMultiTabBarTab_SizeHint(const KMultiTabBarTab* self) {
    return new QSize(self->sizeHint());
}

QSize* KMultiTabBarTab_MinimumSizeHint(const KMultiTabBarTab* self) {
    return new QSize(self->minimumSizeHint());
}

void KMultiTabBarTab_SetPosition(KMultiTabBarTab* self, int position) {
    self->setPosition(static_cast<KMultiTabBar::KMultiTabBarPosition>(position));
}

void KMultiTabBarTab_SetStyle(KMultiTabBarTab* self, int style) {
    self->setStyle(static_cast<KMultiTabBar::KMultiTabBarStyle>(style));
}

void KMultiTabBarTab_SetState(KMultiTabBarTab* self, bool state) {
    self->setState(state);
}

libqt_string KMultiTabBarTab_Tr2(const char* s, const char* c) {
    QString _ret = KMultiTabBarTab::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMultiTabBarTab_Tr3(const char* s, const char* c, int n) {
    QString _ret = KMultiTabBarTab::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KMultiTabBarTab_Delete(KMultiTabBarTab* self) {
    delete self;
}
