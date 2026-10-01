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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMultiTabBar_Tr(const char* s) {
    auto _ret = KMultiTabBar::tr(s);
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
    if (vkmultitabbar) {
        vkmultitabbar->fontChange(*param1);
    }
}

void KMultiTabBar_PaintEvent(KMultiTabBar* self, QPaintEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->paintEvent(param1);
    }
}

libqt_string KMultiTabBar_Tr2(const char* s, const char* c) {
    auto _ret = KMultiTabBar::tr(s, c);
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
    auto _ret = KMultiTabBar::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KMultiTabBar_SuperMetaObject(const KMultiTabBar* self) {
    return (QMetaObject*)self->KMultiTabBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMetaObject(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_metaobject_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KMultiTabBar_SuperMetacast(KMultiTabBar* self, const char* param1) {
    return self->KMultiTabBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMetacast(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_metacast_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int KMultiTabBar_SuperMetacall(KMultiTabBar* self, int param1, int param2, void** param3) {
    return self->KMultiTabBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMetacall(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_metacall_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Metacall_Callback>(slot);
}

// Base class handler implementation
void KMultiTabBar_SuperFontChange(KMultiTabBar* self, const QFont* param1) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::fontChange(*param1);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::fontChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFontChange(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_fontchange_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FontChange_Callback>(slot);
}

// Base class handler implementation
void KMultiTabBar_SuperPaintEvent(KMultiTabBar* self, QPaintEvent* param1) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnPaintEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_paintevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int KMultiTabBar_DevType(const KMultiTabBar* self) {
    return self->devType();
}

// Base class handler implementation
int KMultiTabBar_SuperDevType(const KMultiTabBar* self) {
    return self->KMultiTabBar::devType();
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDevType(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_devtype_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_SetVisible(KMultiTabBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KMultiTabBar_SuperSetVisible(KMultiTabBar* self, bool visible) {
    self->KMultiTabBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSetVisible(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_setvisible_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KMultiTabBar_SizeHint(const KMultiTabBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KMultiTabBar_SuperSizeHint(const KMultiTabBar* self) {
    return new QSize(self->KMultiTabBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSizeHint(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_sizehint_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KMultiTabBar_MinimumSizeHint(const KMultiTabBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KMultiTabBar_SuperMinimumSizeHint(const KMultiTabBar* self) {
    return new QSize(self->KMultiTabBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMinimumSizeHint(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_minimumsizehint_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KMultiTabBar_HeightForWidth(const KMultiTabBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KMultiTabBar_SuperHeightForWidth(const KMultiTabBar* self, int param1) {
    return self->KMultiTabBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnHeightForWidth(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_heightforwidth_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KMultiTabBar_HasHeightForWidth(const KMultiTabBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KMultiTabBar_SuperHasHeightForWidth(const KMultiTabBar* self) {
    return self->KMultiTabBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnHasHeightForWidth(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_hasheightforwidth_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KMultiTabBar_PaintEngine(const KMultiTabBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KMultiTabBar_SuperPaintEngine(const KMultiTabBar* self) {
    return self->KMultiTabBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnPaintEngine(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_paintengine_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KMultiTabBar_Event(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        return vkmultitabbar->event(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMultiTabBar_SuperEvent(KMultiTabBar* self, QEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        return vkmultitabbar->KMultiTabBar::event(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_event_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Event_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_MousePressEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperMousePressEvent(KMultiTabBar* self, QMouseEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMousePressEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_mousepressevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_MouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperMouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMouseReleaseEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_mousereleaseevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_MouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperMouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMouseDoubleClickEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_MouseMoveEvent(KMultiTabBar* self, QMouseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperMouseMoveEvent(KMultiTabBar* self, QMouseEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMouseMoveEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_mousemoveevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_WheelEvent(KMultiTabBar* self, QWheelEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperWheelEvent(KMultiTabBar* self, QWheelEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnWheelEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_wheelevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_KeyPressEvent(KMultiTabBar* self, QKeyEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperKeyPressEvent(KMultiTabBar* self, QKeyEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnKeyPressEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_keypressevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_KeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperKeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnKeyReleaseEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_keyreleaseevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_FocusInEvent(KMultiTabBar* self, QFocusEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperFocusInEvent(KMultiTabBar* self, QFocusEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusInEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_focusinevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_FocusOutEvent(KMultiTabBar* self, QFocusEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperFocusOutEvent(KMultiTabBar* self, QFocusEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusOutEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_focusoutevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_EnterEvent(KMultiTabBar* self, QEnterEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperEnterEvent(KMultiTabBar* self, QEnterEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnEnterEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_enterevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_LeaveEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperLeaveEvent(KMultiTabBar* self, QEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnLeaveEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_leaveevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_MoveEvent(KMultiTabBar* self, QMoveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperMoveEvent(KMultiTabBar* self, QMoveEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMoveEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_moveevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ResizeEvent(KMultiTabBar* self, QResizeEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperResizeEvent(KMultiTabBar* self, QResizeEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnResizeEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_resizeevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_CloseEvent(KMultiTabBar* self, QCloseEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperCloseEvent(KMultiTabBar* self, QCloseEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnCloseEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_closeevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnContextMenuEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_contextmenuevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_TabletEvent(KMultiTabBar* self, QTabletEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperTabletEvent(KMultiTabBar* self, QTabletEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnTabletEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_tabletevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ActionEvent(KMultiTabBar* self, QActionEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperActionEvent(KMultiTabBar* self, QActionEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnActionEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_actionevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_DragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperDragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDragEnterEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_dragenterevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_DragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperDragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDragMoveEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_dragmoveevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_DragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperDragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDragLeaveEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_dragleaveevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_DropEvent(KMultiTabBar* self, QDropEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperDropEvent(KMultiTabBar* self, QDropEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDropEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_dropevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ShowEvent(KMultiTabBar* self, QShowEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperShowEvent(KMultiTabBar* self, QShowEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnShowEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_showevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_HideEvent(KMultiTabBar* self, QHideEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperHideEvent(KMultiTabBar* self, QHideEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnHideEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_hideevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMultiTabBar_NativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        return vkmultitabbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMultiTabBar_SuperNativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        return vkmultitabbar->KMultiTabBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnNativeEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_nativeevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ChangeEvent(KMultiTabBar* self, QEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperChangeEvent(KMultiTabBar* self, QEvent* param1) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnChangeEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_changeevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KMultiTabBar_Metric(const KMultiTabBar* self, int param1) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar) {
        return vkmultitabbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KMultiTabBar_SuperMetric(const KMultiTabBar* self, int param1) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->KMultiTabBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnMetric(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_metric_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_InitPainter(const KMultiTabBar* self, QPainter* painter) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar) {
        vkmultitabbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperInitPainter(const KMultiTabBar* self, QPainter* painter) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        vkmultitabbar->KMultiTabBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnInitPainter(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_initpainter_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KMultiTabBar_Redirected(const KMultiTabBar* self, QPoint* offset) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar) {
        return vkmultitabbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KMultiTabBar_SuperRedirected(const KMultiTabBar* self, QPoint* offset) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->KMultiTabBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnRedirected(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_redirected_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KMultiTabBar_SharedPainter(const KMultiTabBar* self) {
    auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self));
    if (vkmultitabbar) {
        return vkmultitabbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KMultiTabBar_SuperSharedPainter(const KMultiTabBar* self) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->KMultiTabBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnSharedPainter(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_sharedpainter_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_InputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperInputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnInputMethodEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_inputmethodevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KMultiTabBar_InputMethodQuery(const KMultiTabBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KMultiTabBar_SuperInputMethodQuery(const KMultiTabBar* self, int param1) {
    return new QVariant(self->KMultiTabBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnInputMethodQuery(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self)))
        vkmultitabbar->kmultitabbar_inputmethodquery_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KMultiTabBar_FocusNextPrevChild(KMultiTabBar* self, bool next) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        return vkmultitabbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMultiTabBar_SuperFocusNextPrevChild(KMultiTabBar* self, bool next) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        return vkmultitabbar->KMultiTabBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnFocusNextPrevChild(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_focusnextprevchild_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KMultiTabBar_EventFilter(KMultiTabBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KMultiTabBar_SuperEventFilter(KMultiTabBar* self, QObject* watched, QEvent* event) {
    return self->KMultiTabBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnEventFilter(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_eventfilter_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_TimerEvent(KMultiTabBar* self, QTimerEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperTimerEvent(KMultiTabBar* self, QTimerEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnTimerEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_timerevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ChildEvent(KMultiTabBar* self, QChildEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperChildEvent(KMultiTabBar* self, QChildEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnChildEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_childevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_CustomEvent(KMultiTabBar* self, QEvent* event) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperCustomEvent(KMultiTabBar* self, QEvent* event) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnCustomEvent(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_customevent_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_ConnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperConnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnConnectNotify(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_connectnotify_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KMultiTabBar_DisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self);
    if (vkmultitabbar) {
        vkmultitabbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMultiTabBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMultiTabBar_SuperDisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->KMultiTabBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMultiTabBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMultiTabBar_OnDisconnectNotify(KMultiTabBar* self, intptr_t slot) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self))
        vkmultitabbar->kmultitabbar_disconnectnotify_callback = reinterpret_cast<VirtualKMultiTabBar::KMultiTabBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KMultiTabBar_UpdateSeparator(KMultiTabBar* self) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->VirtualKMultiTabBar::updateSeparator();
    } else
        qFatal("Error: Protected method KMultiTabBar::updateSeparator called without a directly constructed type");
}

// Derived class protected handler implementation
void KMultiTabBar_UpdateMicroFocus(KMultiTabBar* self) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->VirtualKMultiTabBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method KMultiTabBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KMultiTabBar_Create(KMultiTabBar* self) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->VirtualKMultiTabBar::create();
    } else
        qFatal("Error: Protected method KMultiTabBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KMultiTabBar_Destroy(KMultiTabBar* self) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        vkmultitabbar->VirtualKMultiTabBar::destroy();
    } else
        qFatal("Error: Protected method KMultiTabBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMultiTabBar_FocusNextChild(KMultiTabBar* self) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        return vkmultitabbar->VirtualKMultiTabBar::focusNextChild();
    } else
        qFatal("Error: Protected method KMultiTabBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMultiTabBar_FocusPreviousChild(KMultiTabBar* self) {
    if (auto* vkmultitabbar = dynamic_cast<VirtualKMultiTabBar*>(self)) {
        return vkmultitabbar->VirtualKMultiTabBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method KMultiTabBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KMultiTabBar_Sender(const KMultiTabBar* self) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->VirtualKMultiTabBar::sender();
    } else
        qFatal("Error: Protected method KMultiTabBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KMultiTabBar_SenderSignalIndex(const KMultiTabBar* self) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->VirtualKMultiTabBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method KMultiTabBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KMultiTabBar_Receivers(const KMultiTabBar* self, const char* signal) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->VirtualKMultiTabBar::receivers(signal);
    } else
        qFatal("Error: Protected method KMultiTabBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMultiTabBar_IsSignalConnected(const KMultiTabBar* self, const QMetaMethod* signal) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->VirtualKMultiTabBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KMultiTabBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KMultiTabBar_GetDecodedMetricF(const KMultiTabBar* self, int metricA, int metricB) {
    if (auto* vkmultitabbar = const_cast<VirtualKMultiTabBar*>(dynamic_cast<const VirtualKMultiTabBar*>(self))) {
        return vkmultitabbar->VirtualKMultiTabBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KMultiTabBar::getDecodedMetricF called without a directly constructed type");
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
    auto _ret = KMultiTabBarButton::tr(s);
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
    KMultiTabBarButton::connect(self,
                                static_cast<void (KMultiTabBarButton::*)(int)>(&KMultiTabBarButton::clicked),
                                [self, slotFunc](int id) {
                                    int sigval1 = id;
                                    slotFunc(self, sigval1);
                                });
}

libqt_string KMultiTabBarButton_Tr2(const char* s, const char* c) {
    auto _ret = KMultiTabBarButton::tr(s, c);
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
    auto _ret = KMultiTabBarButton::tr(s, c, static_cast<int>(n));
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
    auto _ret = KMultiTabBarTab::tr(s);
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
    auto _ret = KMultiTabBarTab::tr(s, c);
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
    auto _ret = KMultiTabBarTab::tr(s, c, static_cast<int>(n));
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
