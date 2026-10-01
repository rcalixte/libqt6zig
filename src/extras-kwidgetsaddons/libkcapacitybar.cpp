#include <KCapacityBar>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcapacitybar.h>
#include "libkcapacitybar.h"
#include "libkcapacitybar.hxx"

KCapacityBar* KCapacityBar_new(QWidget* parent) {
    return new VirtualKCapacityBar(parent);
}

KCapacityBar* KCapacityBar_new2() {
    return new VirtualKCapacityBar();
}

KCapacityBar* KCapacityBar_new3(int drawTextMode) {
    return new VirtualKCapacityBar(static_cast<KCapacityBar::DrawTextMode>(drawTextMode));
}

KCapacityBar* KCapacityBar_new4(int drawTextMode, QWidget* parent) {
    return new VirtualKCapacityBar(static_cast<KCapacityBar::DrawTextMode>(drawTextMode), parent);
}

QMetaObject* KCapacityBar_MetaObject(const KCapacityBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCapacityBar_Metacast(KCapacityBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCapacityBar_Metacall(KCapacityBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCapacityBar_Tr(const char* s) {
    auto _ret = KCapacityBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCapacityBar_SetValue(KCapacityBar* self, int value) {
    self->setValue(static_cast<int>(value));
}

int KCapacityBar_Value(const KCapacityBar* self) {
    return self->value();
}

void KCapacityBar_SetText(KCapacityBar* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string KCapacityBar_Text(const KCapacityBar* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCapacityBar_SetFillFullBlocks(KCapacityBar* self, bool fillFullBlocks) {
    self->setFillFullBlocks(fillFullBlocks);
}

bool KCapacityBar_FillFullBlocks(const KCapacityBar* self) {
    return self->fillFullBlocks();
}

void KCapacityBar_SetContinuous(KCapacityBar* self, bool continuous) {
    self->setContinuous(continuous);
}

bool KCapacityBar_Continuous(const KCapacityBar* self) {
    return self->continuous();
}

void KCapacityBar_SetBarHeight(KCapacityBar* self, int barHeight) {
    self->setBarHeight(static_cast<int>(barHeight));
}

int KCapacityBar_BarHeight(const KCapacityBar* self) {
    return self->barHeight();
}

void KCapacityBar_SetHorizontalTextAlignment(KCapacityBar* self, int textAlignment) {
    self->setHorizontalTextAlignment(static_cast<Qt::Alignment>(textAlignment));
}

int KCapacityBar_HorizontalTextAlignment(const KCapacityBar* self) {
    return static_cast<int>(self->horizontalTextAlignment());
}

void KCapacityBar_SetDrawTextMode(KCapacityBar* self, int mode) {
    self->setDrawTextMode(static_cast<KCapacityBar::DrawTextMode>(mode));
}

int KCapacityBar_DrawTextMode(const KCapacityBar* self) {
    return static_cast<int>(self->drawTextMode());
}

void KCapacityBar_DrawCapacityBar(const KCapacityBar* self, QPainter* p, const QRect* rect) {
    self->drawCapacityBar(p, *rect);
}

void KCapacityBar_DrawCapacityBar2(const KCapacityBar* self, QPainter* p, const QRect* rect, int state) {
    self->drawCapacityBar(p, *rect, static_cast<QStyle::State>(state));
}

QSize* KCapacityBar_MinimumSizeHint(const KCapacityBar* self) {
    return new QSize(self->minimumSizeHint());
}

void KCapacityBar_PaintEvent(KCapacityBar* self, QPaintEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->paintEvent(event);
    }
}

void KCapacityBar_ChangeEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->changeEvent(event);
    }
}

libqt_string KCapacityBar_Tr2(const char* s, const char* c) {
    auto _ret = KCapacityBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCapacityBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCapacityBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCapacityBar_SuperMetaObject(const KCapacityBar* self) {
    return (QMetaObject*)self->KCapacityBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMetaObject(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_metaobject_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCapacityBar_SuperMetacast(KCapacityBar* self, const char* param1) {
    return self->KCapacityBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMetacast(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_metacast_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCapacityBar_SuperMetacall(KCapacityBar* self, int param1, int param2, void** param3) {
    return self->KCapacityBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMetacall(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_metacall_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KCapacityBar_SuperMinimumSizeHint(const KCapacityBar* self) {
    return new QSize(self->KCapacityBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMinimumSizeHint(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_minimumsizehint_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KCapacityBar_SuperPaintEvent(KCapacityBar* self, QPaintEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnPaintEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_paintevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KCapacityBar_SuperChangeEvent(KCapacityBar* self, QEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnChangeEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_changeevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCapacityBar_DevType(const KCapacityBar* self) {
    return self->devType();
}

// Base class handler implementation
int KCapacityBar_SuperDevType(const KCapacityBar* self) {
    return self->KCapacityBar::devType();
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDevType(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_devtype_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_SetVisible(KCapacityBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KCapacityBar_SuperSetVisible(KCapacityBar* self, bool visible) {
    self->KCapacityBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSetVisible(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_setvisible_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KCapacityBar_SizeHint(const KCapacityBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KCapacityBar_SuperSizeHint(const KCapacityBar* self) {
    return new QSize(self->KCapacityBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSizeHint(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_sizehint_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int KCapacityBar_HeightForWidth(const KCapacityBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KCapacityBar_SuperHeightForWidth(const KCapacityBar* self, int param1) {
    return self->KCapacityBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnHeightForWidth(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_heightforwidth_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KCapacityBar_HasHeightForWidth(const KCapacityBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KCapacityBar_SuperHasHeightForWidth(const KCapacityBar* self) {
    return self->KCapacityBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnHasHeightForWidth(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_hasheightforwidth_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KCapacityBar_PaintEngine(const KCapacityBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KCapacityBar_SuperPaintEngine(const KCapacityBar* self) {
    return self->KCapacityBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnPaintEngine(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_paintengine_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KCapacityBar_Event(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        return vkcapacitybar->event(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCapacityBar_SuperEvent(KCapacityBar* self, QEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        return vkcapacitybar->KCapacityBar::event(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_event_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Event_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_MousePressEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperMousePressEvent(KCapacityBar* self, QMouseEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMousePressEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_mousepressevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_MouseReleaseEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperMouseReleaseEvent(KCapacityBar* self, QMouseEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMouseReleaseEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_mousereleaseevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_MouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperMouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMouseDoubleClickEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_mousedoubleclickevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_MouseMoveEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperMouseMoveEvent(KCapacityBar* self, QMouseEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMouseMoveEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_mousemoveevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_WheelEvent(KCapacityBar* self, QWheelEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperWheelEvent(KCapacityBar* self, QWheelEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnWheelEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_wheelevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_KeyPressEvent(KCapacityBar* self, QKeyEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperKeyPressEvent(KCapacityBar* self, QKeyEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnKeyPressEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_keypressevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_KeyReleaseEvent(KCapacityBar* self, QKeyEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperKeyReleaseEvent(KCapacityBar* self, QKeyEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnKeyReleaseEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_keyreleaseevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_FocusInEvent(KCapacityBar* self, QFocusEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperFocusInEvent(KCapacityBar* self, QFocusEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusInEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_focusinevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_FocusOutEvent(KCapacityBar* self, QFocusEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperFocusOutEvent(KCapacityBar* self, QFocusEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusOutEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_focusoutevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_EnterEvent(KCapacityBar* self, QEnterEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperEnterEvent(KCapacityBar* self, QEnterEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnEnterEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_enterevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_LeaveEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperLeaveEvent(KCapacityBar* self, QEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnLeaveEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_leaveevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_MoveEvent(KCapacityBar* self, QMoveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperMoveEvent(KCapacityBar* self, QMoveEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMoveEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_moveevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_ResizeEvent(KCapacityBar* self, QResizeEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperResizeEvent(KCapacityBar* self, QResizeEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnResizeEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_resizeevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_CloseEvent(KCapacityBar* self, QCloseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperCloseEvent(KCapacityBar* self, QCloseEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnCloseEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_closeevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_ContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnContextMenuEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_contextmenuevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_TabletEvent(KCapacityBar* self, QTabletEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperTabletEvent(KCapacityBar* self, QTabletEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnTabletEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_tabletevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_ActionEvent(KCapacityBar* self, QActionEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperActionEvent(KCapacityBar* self, QActionEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnActionEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_actionevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_DragEnterEvent(KCapacityBar* self, QDragEnterEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperDragEnterEvent(KCapacityBar* self, QDragEnterEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDragEnterEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_dragenterevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_DragMoveEvent(KCapacityBar* self, QDragMoveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperDragMoveEvent(KCapacityBar* self, QDragMoveEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDragMoveEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_dragmoveevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_DragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperDragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDragLeaveEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_dragleaveevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_DropEvent(KCapacityBar* self, QDropEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperDropEvent(KCapacityBar* self, QDropEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDropEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_dropevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_ShowEvent(KCapacityBar* self, QShowEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperShowEvent(KCapacityBar* self, QShowEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnShowEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_showevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_HideEvent(KCapacityBar* self, QHideEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperHideEvent(KCapacityBar* self, QHideEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnHideEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_hideevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCapacityBar_NativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        return vkcapacitybar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCapacityBar_SuperNativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        return vkcapacitybar->KCapacityBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KCapacityBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnNativeEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_nativeevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCapacityBar_Metric(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar) {
        return vkcapacitybar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KCapacityBar_SuperMetric(const KCapacityBar* self, int param1) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->KCapacityBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KCapacityBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMetric(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_metric_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_InitPainter(const KCapacityBar* self, QPainter* painter) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar) {
        vkcapacitybar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperInitPainter(const KCapacityBar* self, QPainter* painter) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        vkcapacitybar->KCapacityBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnInitPainter(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_initpainter_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KCapacityBar_Redirected(const KCapacityBar* self, QPoint* offset) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar) {
        return vkcapacitybar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KCapacityBar_SuperRedirected(const KCapacityBar* self, QPoint* offset) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->KCapacityBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnRedirected(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_redirected_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KCapacityBar_SharedPainter(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar) {
        return vkcapacitybar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KCapacityBar_SuperSharedPainter(const KCapacityBar* self) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->KCapacityBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KCapacityBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSharedPainter(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_sharedpainter_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_InputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperInputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnInputMethodEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_inputmethodevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCapacityBar_InputMethodQuery(const KCapacityBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KCapacityBar_SuperInputMethodQuery(const KCapacityBar* self, int param1) {
    return new QVariant(self->KCapacityBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnInputMethodQuery(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self)))
        vkcapacitybar->kcapacitybar_inputmethodquery_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KCapacityBar_FocusNextPrevChild(KCapacityBar* self, bool next) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        return vkcapacitybar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCapacityBar_SuperFocusNextPrevChild(KCapacityBar* self, bool next) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        return vkcapacitybar->KCapacityBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusNextPrevChild(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_focusnextprevchild_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KCapacityBar_EventFilter(KCapacityBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCapacityBar_SuperEventFilter(KCapacityBar* self, QObject* watched, QEvent* event) {
    return self->KCapacityBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnEventFilter(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_eventfilter_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_TimerEvent(KCapacityBar* self, QTimerEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperTimerEvent(KCapacityBar* self, QTimerEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnTimerEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_timerevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_ChildEvent(KCapacityBar* self, QChildEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperChildEvent(KCapacityBar* self, QChildEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnChildEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_childevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_CustomEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperCustomEvent(KCapacityBar* self, QEvent* event) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnCustomEvent(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_customevent_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_ConnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperConnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnConnectNotify(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_connectnotify_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCapacityBar_DisconnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar) {
        vkcapacitybar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCapacityBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCapacityBar_SuperDisconnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->KCapacityBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCapacityBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDisconnectNotify(KCapacityBar* self, intptr_t slot) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self))
        vkcapacitybar->kcapacitybar_disconnectnotify_callback = reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCapacityBar_UpdateMicroFocus(KCapacityBar* self) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->VirtualKCapacityBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method KCapacityBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KCapacityBar_Create(KCapacityBar* self) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->VirtualKCapacityBar::create();
    } else
        qFatal("Error: Protected method KCapacityBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KCapacityBar_Destroy(KCapacityBar* self) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        vkcapacitybar->VirtualKCapacityBar::destroy();
    } else
        qFatal("Error: Protected method KCapacityBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCapacityBar_FocusNextChild(KCapacityBar* self) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        return vkcapacitybar->VirtualKCapacityBar::focusNextChild();
    } else
        qFatal("Error: Protected method KCapacityBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCapacityBar_FocusPreviousChild(KCapacityBar* self) {
    if (auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self)) {
        return vkcapacitybar->VirtualKCapacityBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method KCapacityBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCapacityBar_Sender(const KCapacityBar* self) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->VirtualKCapacityBar::sender();
    } else
        qFatal("Error: Protected method KCapacityBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCapacityBar_SenderSignalIndex(const KCapacityBar* self) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->VirtualKCapacityBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCapacityBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCapacityBar_Receivers(const KCapacityBar* self, const char* signal) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->VirtualKCapacityBar::receivers(signal);
    } else
        qFatal("Error: Protected method KCapacityBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCapacityBar_IsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->VirtualKCapacityBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCapacityBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KCapacityBar_GetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB) {
    if (auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self))) {
        return vkcapacitybar->VirtualKCapacityBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KCapacityBar::getDecodedMetricF called without a directly constructed type");
}

void KCapacityBar_Delete(KCapacityBar* self) {
    delete self;
}
