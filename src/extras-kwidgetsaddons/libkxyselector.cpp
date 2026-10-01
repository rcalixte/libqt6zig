#include <KXYSelector>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <kxyselector.h>
#include "libkxyselector.h"
#include "libkxyselector.hxx"

KXYSelector* KXYSelector_new(QWidget* parent) {
    return new VirtualKXYSelector(parent);
}

KXYSelector* KXYSelector_new2() {
    return new VirtualKXYSelector();
}

QMetaObject* KXYSelector_MetaObject(const KXYSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* KXYSelector_Metacast(KXYSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KXYSelector_Metacall(KXYSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KXYSelector_Tr(const char* s) {
    auto _ret = KXYSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXYSelector_SetValues(KXYSelector* self, int xPos, int yPos) {
    self->setValues(static_cast<int>(xPos), static_cast<int>(yPos));
}

void KXYSelector_SetXValue(KXYSelector* self, int xPos) {
    self->setXValue(static_cast<int>(xPos));
}

void KXYSelector_SetYValue(KXYSelector* self, int yPos) {
    self->setYValue(static_cast<int>(yPos));
}

void KXYSelector_SetRange(KXYSelector* self, int minX, int minY, int maxX, int maxY) {
    self->setRange(static_cast<int>(minX), static_cast<int>(minY), static_cast<int>(maxX), static_cast<int>(maxY));
}

void KXYSelector_SetMarkerColor(KXYSelector* self, const QColor* col) {
    self->setMarkerColor(*col);
}

int KXYSelector_XValue(const KXYSelector* self) {
    return self->xValue();
}

int KXYSelector_YValue(const KXYSelector* self) {
    return self->yValue();
}

QRect* KXYSelector_ContentsRect(const KXYSelector* self) {
    return new QRect(self->contentsRect());
}

QSize* KXYSelector_MinimumSizeHint(const KXYSelector* self) {
    return new QSize(self->minimumSizeHint());
}

void KXYSelector_ValueChanged(KXYSelector* self, int x, int y) {
    self->valueChanged(static_cast<int>(x), static_cast<int>(y));
}

void KXYSelector_Connect_ValueChanged(KXYSelector* self, intptr_t slot) {
    void (*slotFunc)(KXYSelector*, int, int) = reinterpret_cast<void (*)(KXYSelector*, int, int)>(slot);
    KXYSelector::connect(self,
                         static_cast<void (KXYSelector::*)(int, int)>(&KXYSelector::valueChanged),
                         [self, slotFunc](int x, int y) {
                             int sigval1 = x;
                             int sigval2 = y;
                             slotFunc(self, sigval1, sigval2);
                         });
}

void KXYSelector_DrawContents(KXYSelector* self, QPainter* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->drawContents(param1);
    }
}

void KXYSelector_DrawMarker(KXYSelector* self, QPainter* p, int xp, int yp) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->drawMarker(p, static_cast<int>(xp), static_cast<int>(yp));
    }
}

void KXYSelector_PaintEvent(KXYSelector* self, QPaintEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->paintEvent(e);
    }
}

void KXYSelector_MousePressEvent(KXYSelector* self, QMouseEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->mousePressEvent(e);
    }
}

void KXYSelector_MouseMoveEvent(KXYSelector* self, QMouseEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->mouseMoveEvent(e);
    }
}

void KXYSelector_WheelEvent(KXYSelector* self, QWheelEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->wheelEvent(param1);
    }
}

libqt_string KXYSelector_Tr2(const char* s, const char* c) {
    auto _ret = KXYSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KXYSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = KXYSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* KXYSelector_SuperMetaObject(const KXYSelector* self) {
    return (QMetaObject*)self->KXYSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMetaObject(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_metaobject_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KXYSelector_SuperMetacast(KXYSelector* self, const char* param1) {
    return self->KXYSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMetacast(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_metacast_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int KXYSelector_SuperMetacall(KXYSelector* self, int param1, int param2, void** param3) {
    return self->KXYSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMetacall(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_metacall_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KXYSelector_SuperMinimumSizeHint(const KXYSelector* self) {
    return new QSize(self->KXYSelector::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMinimumSizeHint(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_minimumsizehint_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KXYSelector_SuperDrawContents(KXYSelector* self, QPainter* param1) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::drawContents(param1);
    } else
        qFatal("Error: Protected virtual method KXYSelector::drawContents called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDrawContents(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_drawcontents_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DrawContents_Callback>(slot);
}

// Base class handler implementation
void KXYSelector_SuperDrawMarker(KXYSelector* self, QPainter* p, int xp, int yp) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::drawMarker(p, static_cast<int>(xp), static_cast<int>(yp));
    } else
        qFatal("Error: Protected virtual method KXYSelector::drawMarker called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDrawMarker(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_drawmarker_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DrawMarker_Callback>(slot);
}

// Base class handler implementation
void KXYSelector_SuperPaintEvent(KXYSelector* self, QPaintEvent* e) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KXYSelector::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnPaintEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_paintevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KXYSelector_SuperMousePressEvent(KXYSelector* self, QMouseEvent* e) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KXYSelector::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMousePressEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_mousepressevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KXYSelector_SuperMouseMoveEvent(KXYSelector* self, QMouseEvent* e) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KXYSelector::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMouseMoveEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_mousemoveevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KXYSelector_SuperWheelEvent(KXYSelector* self, QWheelEvent* param1) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KXYSelector::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnWheelEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_wheelevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
int KXYSelector_DevType(const KXYSelector* self) {
    return self->devType();
}

// Base class handler implementation
int KXYSelector_SuperDevType(const KXYSelector* self) {
    return self->KXYSelector::devType();
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDevType(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_devtype_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DevType_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_SetVisible(KXYSelector* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KXYSelector_SuperSetVisible(KXYSelector* self, bool visible) {
    self->KXYSelector::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSetVisible(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_setvisible_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KXYSelector_SizeHint(const KXYSelector* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KXYSelector_SuperSizeHint(const KXYSelector* self) {
    return new QSize(self->KXYSelector::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSizeHint(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_sizehint_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int KXYSelector_HeightForWidth(const KXYSelector* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KXYSelector_SuperHeightForWidth(const KXYSelector* self, int param1) {
    return self->KXYSelector::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnHeightForWidth(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_heightforwidth_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KXYSelector_HasHeightForWidth(const KXYSelector* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KXYSelector_SuperHasHeightForWidth(const KXYSelector* self) {
    return self->KXYSelector::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnHasHeightForWidth(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_hasheightforwidth_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KXYSelector_PaintEngine(const KXYSelector* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KXYSelector_SuperPaintEngine(const KXYSelector* self) {
    return self->KXYSelector::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnPaintEngine(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_paintengine_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KXYSelector_Event(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        return vkxyselector->event(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KXYSelector_SuperEvent(KXYSelector* self, QEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        return vkxyselector->KXYSelector::event(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_event_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_Event_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_MouseReleaseEvent(KXYSelector* self, QMouseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperMouseReleaseEvent(KXYSelector* self, QMouseEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMouseReleaseEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_mousereleaseevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_MouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperMouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMouseDoubleClickEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_mousedoubleclickevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_KeyPressEvent(KXYSelector* self, QKeyEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperKeyPressEvent(KXYSelector* self, QKeyEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnKeyPressEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_keypressevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_KeyReleaseEvent(KXYSelector* self, QKeyEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperKeyReleaseEvent(KXYSelector* self, QKeyEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnKeyReleaseEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_keyreleaseevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_FocusInEvent(KXYSelector* self, QFocusEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperFocusInEvent(KXYSelector* self, QFocusEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusInEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_focusinevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_FocusOutEvent(KXYSelector* self, QFocusEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperFocusOutEvent(KXYSelector* self, QFocusEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusOutEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_focusoutevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_EnterEvent(KXYSelector* self, QEnterEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperEnterEvent(KXYSelector* self, QEnterEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnEnterEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_enterevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_LeaveEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperLeaveEvent(KXYSelector* self, QEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnLeaveEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_leaveevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_MoveEvent(KXYSelector* self, QMoveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperMoveEvent(KXYSelector* self, QMoveEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMoveEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_moveevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ResizeEvent(KXYSelector* self, QResizeEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperResizeEvent(KXYSelector* self, QResizeEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnResizeEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_resizeevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_CloseEvent(KXYSelector* self, QCloseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperCloseEvent(KXYSelector* self, QCloseEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnCloseEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_closeevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ContextMenuEvent(KXYSelector* self, QContextMenuEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperContextMenuEvent(KXYSelector* self, QContextMenuEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnContextMenuEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_contextmenuevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_TabletEvent(KXYSelector* self, QTabletEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperTabletEvent(KXYSelector* self, QTabletEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnTabletEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_tabletevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ActionEvent(KXYSelector* self, QActionEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperActionEvent(KXYSelector* self, QActionEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnActionEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_actionevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_DragEnterEvent(KXYSelector* self, QDragEnterEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperDragEnterEvent(KXYSelector* self, QDragEnterEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDragEnterEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_dragenterevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_DragMoveEvent(KXYSelector* self, QDragMoveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperDragMoveEvent(KXYSelector* self, QDragMoveEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDragMoveEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_dragmoveevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_DragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperDragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDragLeaveEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_dragleaveevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_DropEvent(KXYSelector* self, QDropEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperDropEvent(KXYSelector* self, QDropEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDropEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_dropevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ShowEvent(KXYSelector* self, QShowEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperShowEvent(KXYSelector* self, QShowEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnShowEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_showevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_HideEvent(KXYSelector* self, QHideEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperHideEvent(KXYSelector* self, QHideEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnHideEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_hideevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KXYSelector_NativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        return vkxyselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KXYSelector::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KXYSelector_SuperNativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        return vkxyselector->KXYSelector::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KXYSelector::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnNativeEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_nativeevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ChangeEvent(KXYSelector* self, QEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperChangeEvent(KXYSelector* self, QEvent* param1) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KXYSelector::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnChangeEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_changeevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KXYSelector_Metric(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector) {
        return vkxyselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KXYSelector::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KXYSelector_SuperMetric(const KXYSelector* self, int param1) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->KXYSelector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KXYSelector::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMetric(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_metric_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_Metric_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_InitPainter(const KXYSelector* self, QPainter* painter) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector) {
        vkxyselector->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperInitPainter(const KXYSelector* self, QPainter* painter) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        vkxyselector->KXYSelector::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KXYSelector::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnInitPainter(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_initpainter_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KXYSelector_Redirected(const KXYSelector* self, QPoint* offset) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector) {
        return vkxyselector->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KXYSelector_SuperRedirected(const KXYSelector* self, QPoint* offset) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->KXYSelector::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KXYSelector::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnRedirected(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_redirected_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KXYSelector_SharedPainter(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector) {
        return vkxyselector->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KXYSelector::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KXYSelector_SuperSharedPainter(const KXYSelector* self) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->KXYSelector::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KXYSelector::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSharedPainter(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_sharedpainter_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_InputMethodEvent(KXYSelector* self, QInputMethodEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperInputMethodEvent(KXYSelector* self, QInputMethodEvent* param1) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KXYSelector::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnInputMethodEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_inputmethodevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KXYSelector_InputMethodQuery(const KXYSelector* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KXYSelector_SuperInputMethodQuery(const KXYSelector* self, int param1) {
    return new QVariant(self->KXYSelector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnInputMethodQuery(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self)))
        vkxyselector->kxyselector_inputmethodquery_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KXYSelector_FocusNextPrevChild(KXYSelector* self, bool next) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        return vkxyselector->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KXYSelector_SuperFocusNextPrevChild(KXYSelector* self, bool next) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        return vkxyselector->KXYSelector::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KXYSelector::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusNextPrevChild(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_focusnextprevchild_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KXYSelector_EventFilter(KXYSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KXYSelector_SuperEventFilter(KXYSelector* self, QObject* watched, QEvent* event) {
    return self->KXYSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnEventFilter(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_eventfilter_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_TimerEvent(KXYSelector* self, QTimerEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperTimerEvent(KXYSelector* self, QTimerEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnTimerEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_timerevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ChildEvent(KXYSelector* self, QChildEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperChildEvent(KXYSelector* self, QChildEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnChildEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_childevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_CustomEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperCustomEvent(KXYSelector* self, QEvent* event) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KXYSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnCustomEvent(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_customevent_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_ConnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperConnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXYSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnConnectNotify(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_connectnotify_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KXYSelector_DisconnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector) {
        vkxyselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXYSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXYSelector_SuperDisconnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->KXYSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXYSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDisconnectNotify(KXYSelector* self, intptr_t slot) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self))
        vkxyselector->kxyselector_disconnectnotify_callback = reinterpret_cast<VirtualKXYSelector::KXYSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KXYSelector_ValuesFromPosition(const KXYSelector* self, int x, int y, int* xVal, int* yVal) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        vkxyselector->VirtualKXYSelector::valuesFromPosition(static_cast<int>(x), static_cast<int>(y), static_cast<int&>(*xVal), static_cast<int&>(*yVal));
    } else
        qFatal("Error: Protected method KXYSelector::valuesFromPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KXYSelector_UpdateMicroFocus(KXYSelector* self) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->VirtualKXYSelector::updateMicroFocus();
    } else
        qFatal("Error: Protected method KXYSelector::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KXYSelector_Create(KXYSelector* self) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->VirtualKXYSelector::create();
    } else
        qFatal("Error: Protected method KXYSelector::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KXYSelector_Destroy(KXYSelector* self) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        vkxyselector->VirtualKXYSelector::destroy();
    } else
        qFatal("Error: Protected method KXYSelector::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXYSelector_FocusNextChild(KXYSelector* self) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        return vkxyselector->VirtualKXYSelector::focusNextChild();
    } else
        qFatal("Error: Protected method KXYSelector::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXYSelector_FocusPreviousChild(KXYSelector* self) {
    if (auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self)) {
        return vkxyselector->VirtualKXYSelector::focusPreviousChild();
    } else
        qFatal("Error: Protected method KXYSelector::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KXYSelector_Sender(const KXYSelector* self) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->VirtualKXYSelector::sender();
    } else
        qFatal("Error: Protected method KXYSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KXYSelector_SenderSignalIndex(const KXYSelector* self) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->VirtualKXYSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method KXYSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KXYSelector_Receivers(const KXYSelector* self, const char* signal) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->VirtualKXYSelector::receivers(signal);
    } else
        qFatal("Error: Protected method KXYSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXYSelector_IsSignalConnected(const KXYSelector* self, const QMetaMethod* signal) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->VirtualKXYSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KXYSelector::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KXYSelector_GetDecodedMetricF(const KXYSelector* self, int metricA, int metricB) {
    if (auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self))) {
        return vkxyselector->VirtualKXYSelector::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KXYSelector::getDecodedMetricF called without a directly constructed type");
}

void KXYSelector_Delete(KXYSelector* self) {
    delete self;
}
