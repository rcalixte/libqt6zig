#include <KLed>
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
#include <kled.h>
#include "libkled.h"
#include "libkled.hxx"

KLed* KLed_new(QWidget* parent) {
    return new VirtualKLed(parent);
}

KLed* KLed_new2() {
    return new VirtualKLed();
}

KLed* KLed_new3(const QColor* color) {
    return new VirtualKLed(*color);
}

KLed* KLed_new4(const QColor* color, int state, int look, int shape) {
    return new VirtualKLed(*color, static_cast<KLed::State>(state), static_cast<KLed::Look>(look), static_cast<KLed::Shape>(shape));
}

KLed* KLed_new5(const QColor* color, QWidget* parent) {
    return new VirtualKLed(*color, parent);
}

KLed* KLed_new6(const QColor* color, int state, int look, int shape, QWidget* parent) {
    return new VirtualKLed(*color, static_cast<KLed::State>(state), static_cast<KLed::Look>(look), static_cast<KLed::Shape>(shape), parent);
}

QMetaObject* KLed_MetaObject(const KLed* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLed_Metacast(KLed* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLed_Metacall(KLed* self, int param1, int param2, void** param3) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLed*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLed_Tr(const char* s) {
    QString _ret = KLed::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* KLed_Color(const KLed* self) {
    return new QColor(self->color());
}

int KLed_State(const KLed* self) {
    return static_cast<int>(self->state());
}

int KLed_Look(const KLed* self) {
    return static_cast<int>(self->look());
}

int KLed_Shape(const KLed* self) {
    return static_cast<int>(self->shape());
}

int KLed_DarkFactor(const KLed* self) {
    return self->darkFactor();
}

void KLed_SetColor(KLed* self, const QColor* color) {
    self->setColor(*color);
}

void KLed_SetState(KLed* self, int state) {
    self->setState(static_cast<KLed::State>(state));
}

void KLed_SetLook(KLed* self, int look) {
    self->setLook(static_cast<KLed::Look>(look));
}

void KLed_SetShape(KLed* self, int shape) {
    self->setShape(static_cast<KLed::Shape>(shape));
}

void KLed_SetDarkFactor(KLed* self, int darkFactor) {
    self->setDarkFactor(static_cast<int>(darkFactor));
}

QSize* KLed_SizeHint(const KLed* self) {
    auto* vkled = dynamic_cast<const VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKLed*)self)->sizeHint());
    }
}

QSize* KLed_MinimumSizeHint(const KLed* self) {
    auto* vkled = dynamic_cast<const VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKLed*)self)->minimumSizeHint());
    }
}

void KLed_Toggle(KLed* self) {
    self->toggle();
}

void KLed_On(KLed* self) {
    self->on();
}

void KLed_Off(KLed* self) {
    self->off();
}

void KLed_PaintEvent(KLed* self, QPaintEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->paintEvent(param1);
    }
}

void KLed_ResizeEvent(KLed* self, QResizeEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->resizeEvent(param1);
    }
}

libqt_string KLed_Tr2(const char* s, const char* c) {
    QString _ret = KLed::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLed_Tr3(const char* s, const char* c, int n) {
    QString _ret = KLed::tr(s, c, static_cast<int>(n));
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
int KLed_QBaseMetacall(KLed* self, int param1, int param2, void** param3) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Metacall_IsBase(true);
        return vkled->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KLed::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMetacall(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Metacall_Callback(reinterpret_cast<VirtualKLed::KLed_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KLed_QBaseSizeHint(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SizeHint_IsBase(true);
        return new QSize(vkled->sizeHint());
    } else {
        return new QSize(((VirtualKLed*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSizeHint(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SizeHint_Callback(reinterpret_cast<VirtualKLed::KLed_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KLed_QBaseMinimumSizeHint(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MinimumSizeHint_IsBase(true);
        return new QSize(vkled->minimumSizeHint());
    } else {
        return new QSize(((VirtualKLed*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMinimumSizeHint(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MinimumSizeHint_Callback(reinterpret_cast<VirtualKLed::KLed_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KLed_QBasePaintEvent(KLed* self, QPaintEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_PaintEvent_IsBase(true);
        vkled->paintEvent(param1);
    } else {
        ((VirtualKLed*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnPaintEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_PaintEvent_Callback(reinterpret_cast<VirtualKLed::KLed_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLed_QBaseResizeEvent(KLed* self, QResizeEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ResizeEvent_IsBase(true);
        vkled->resizeEvent(param1);
    } else {
        ((VirtualKLed*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnResizeEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ResizeEvent_Callback(reinterpret_cast<VirtualKLed::KLed_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KLed_DevType(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->devType();
    } else {
        return self->KLed::devType();
    }
}

// Base class handler implementation
int KLed_QBaseDevType(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DevType_IsBase(true);
        return vkled->devType();
    } else {
        return self->KLed::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDevType(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DevType_Callback(reinterpret_cast<VirtualKLed::KLed_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_SetVisible(KLed* self, bool visible) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setVisible(visible);
    } else {
        self->KLed::setVisible(visible);
    }
}

// Base class handler implementation
void KLed_QBaseSetVisible(KLed* self, bool visible) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SetVisible_IsBase(true);
        vkled->setVisible(visible);
    } else {
        self->KLed::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSetVisible(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SetVisible_Callback(reinterpret_cast<VirtualKLed::KLed_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KLed_HeightForWidth(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KLed::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KLed_QBaseHeightForWidth(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_HeightForWidth_IsBase(true);
        return vkled->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KLed::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnHeightForWidth(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_HeightForWidth_Callback(reinterpret_cast<VirtualKLed::KLed_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_HasHeightForWidth(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->hasHeightForWidth();
    } else {
        return self->KLed::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KLed_QBaseHasHeightForWidth(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_HasHeightForWidth_IsBase(true);
        return vkled->hasHeightForWidth();
    } else {
        return self->KLed::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnHasHeightForWidth(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_HasHeightForWidth_Callback(reinterpret_cast<VirtualKLed::KLed_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KLed_PaintEngine(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->paintEngine();
    } else {
        return self->KLed::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KLed_QBasePaintEngine(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_PaintEngine_IsBase(true);
        return vkled->paintEngine();
    } else {
        return self->KLed::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnPaintEngine(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_PaintEngine_Callback(reinterpret_cast<VirtualKLed::KLed_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_Event(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return vkled->event(event);
    } else {
        return ((VirtualKLed*)self)->event(event);
    }
}

// Base class handler implementation
bool KLed_QBaseEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Event_IsBase(true);
        return vkled->event(event);
    } else {
        return ((VirtualKLed*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Event_Callback(reinterpret_cast<VirtualKLed::KLed_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_MousePressEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->mousePressEvent(event);
    } else {
        ((VirtualKLed*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseMousePressEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MousePressEvent_IsBase(true);
        vkled->mousePressEvent(event);
    } else {
        ((VirtualKLed*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMousePressEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MousePressEvent_Callback(reinterpret_cast<VirtualKLed::KLed_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_MouseReleaseEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->mouseReleaseEvent(event);
    } else {
        ((VirtualKLed*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseMouseReleaseEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MouseReleaseEvent_IsBase(true);
        vkled->mouseReleaseEvent(event);
    } else {
        ((VirtualKLed*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMouseReleaseEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKLed::KLed_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_MouseDoubleClickEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKLed*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseMouseDoubleClickEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MouseDoubleClickEvent_IsBase(true);
        vkled->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKLed*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMouseDoubleClickEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKLed::KLed_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_MouseMoveEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->mouseMoveEvent(event);
    } else {
        ((VirtualKLed*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseMouseMoveEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MouseMoveEvent_IsBase(true);
        vkled->mouseMoveEvent(event);
    } else {
        ((VirtualKLed*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMouseMoveEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MouseMoveEvent_Callback(reinterpret_cast<VirtualKLed::KLed_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_WheelEvent(KLed* self, QWheelEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->wheelEvent(event);
    } else {
        ((VirtualKLed*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseWheelEvent(KLed* self, QWheelEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_WheelEvent_IsBase(true);
        vkled->wheelEvent(event);
    } else {
        ((VirtualKLed*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnWheelEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_WheelEvent_Callback(reinterpret_cast<VirtualKLed::KLed_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_KeyPressEvent(KLed* self, QKeyEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->keyPressEvent(event);
    } else {
        ((VirtualKLed*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseKeyPressEvent(KLed* self, QKeyEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_KeyPressEvent_IsBase(true);
        vkled->keyPressEvent(event);
    } else {
        ((VirtualKLed*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnKeyPressEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_KeyPressEvent_Callback(reinterpret_cast<VirtualKLed::KLed_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_KeyReleaseEvent(KLed* self, QKeyEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->keyReleaseEvent(event);
    } else {
        ((VirtualKLed*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseKeyReleaseEvent(KLed* self, QKeyEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_KeyReleaseEvent_IsBase(true);
        vkled->keyReleaseEvent(event);
    } else {
        ((VirtualKLed*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnKeyReleaseEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKLed::KLed_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_FocusInEvent(KLed* self, QFocusEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->focusInEvent(event);
    } else {
        ((VirtualKLed*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseFocusInEvent(KLed* self, QFocusEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusInEvent_IsBase(true);
        vkled->focusInEvent(event);
    } else {
        ((VirtualKLed*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusInEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusInEvent_Callback(reinterpret_cast<VirtualKLed::KLed_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_FocusOutEvent(KLed* self, QFocusEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->focusOutEvent(event);
    } else {
        ((VirtualKLed*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseFocusOutEvent(KLed* self, QFocusEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusOutEvent_IsBase(true);
        vkled->focusOutEvent(event);
    } else {
        ((VirtualKLed*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusOutEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusOutEvent_Callback(reinterpret_cast<VirtualKLed::KLed_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_EnterEvent(KLed* self, QEnterEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->enterEvent(event);
    } else {
        ((VirtualKLed*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseEnterEvent(KLed* self, QEnterEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_EnterEvent_IsBase(true);
        vkled->enterEvent(event);
    } else {
        ((VirtualKLed*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnEnterEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_EnterEvent_Callback(reinterpret_cast<VirtualKLed::KLed_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_LeaveEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->leaveEvent(event);
    } else {
        ((VirtualKLed*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseLeaveEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_LeaveEvent_IsBase(true);
        vkled->leaveEvent(event);
    } else {
        ((VirtualKLed*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnLeaveEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_LeaveEvent_Callback(reinterpret_cast<VirtualKLed::KLed_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_MoveEvent(KLed* self, QMoveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->moveEvent(event);
    } else {
        ((VirtualKLed*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseMoveEvent(KLed* self, QMoveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MoveEvent_IsBase(true);
        vkled->moveEvent(event);
    } else {
        ((VirtualKLed*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMoveEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_MoveEvent_Callback(reinterpret_cast<VirtualKLed::KLed_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_CloseEvent(KLed* self, QCloseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->closeEvent(event);
    } else {
        ((VirtualKLed*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseCloseEvent(KLed* self, QCloseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_CloseEvent_IsBase(true);
        vkled->closeEvent(event);
    } else {
        ((VirtualKLed*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnCloseEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_CloseEvent_Callback(reinterpret_cast<VirtualKLed::KLed_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_ContextMenuEvent(KLed* self, QContextMenuEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->contextMenuEvent(event);
    } else {
        ((VirtualKLed*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseContextMenuEvent(KLed* self, QContextMenuEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ContextMenuEvent_IsBase(true);
        vkled->contextMenuEvent(event);
    } else {
        ((VirtualKLed*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnContextMenuEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ContextMenuEvent_Callback(reinterpret_cast<VirtualKLed::KLed_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_TabletEvent(KLed* self, QTabletEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->tabletEvent(event);
    } else {
        ((VirtualKLed*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseTabletEvent(KLed* self, QTabletEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_TabletEvent_IsBase(true);
        vkled->tabletEvent(event);
    } else {
        ((VirtualKLed*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnTabletEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_TabletEvent_Callback(reinterpret_cast<VirtualKLed::KLed_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_ActionEvent(KLed* self, QActionEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->actionEvent(event);
    } else {
        ((VirtualKLed*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseActionEvent(KLed* self, QActionEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ActionEvent_IsBase(true);
        vkled->actionEvent(event);
    } else {
        ((VirtualKLed*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnActionEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ActionEvent_Callback(reinterpret_cast<VirtualKLed::KLed_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_DragEnterEvent(KLed* self, QDragEnterEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->dragEnterEvent(event);
    } else {
        ((VirtualKLed*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseDragEnterEvent(KLed* self, QDragEnterEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DragEnterEvent_IsBase(true);
        vkled->dragEnterEvent(event);
    } else {
        ((VirtualKLed*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDragEnterEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DragEnterEvent_Callback(reinterpret_cast<VirtualKLed::KLed_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_DragMoveEvent(KLed* self, QDragMoveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->dragMoveEvent(event);
    } else {
        ((VirtualKLed*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseDragMoveEvent(KLed* self, QDragMoveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DragMoveEvent_IsBase(true);
        vkled->dragMoveEvent(event);
    } else {
        ((VirtualKLed*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDragMoveEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DragMoveEvent_Callback(reinterpret_cast<VirtualKLed::KLed_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_DragLeaveEvent(KLed* self, QDragLeaveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->dragLeaveEvent(event);
    } else {
        ((VirtualKLed*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseDragLeaveEvent(KLed* self, QDragLeaveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DragLeaveEvent_IsBase(true);
        vkled->dragLeaveEvent(event);
    } else {
        ((VirtualKLed*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDragLeaveEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DragLeaveEvent_Callback(reinterpret_cast<VirtualKLed::KLed_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_DropEvent(KLed* self, QDropEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->dropEvent(event);
    } else {
        ((VirtualKLed*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseDropEvent(KLed* self, QDropEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DropEvent_IsBase(true);
        vkled->dropEvent(event);
    } else {
        ((VirtualKLed*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDropEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DropEvent_Callback(reinterpret_cast<VirtualKLed::KLed_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_ShowEvent(KLed* self, QShowEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->showEvent(event);
    } else {
        ((VirtualKLed*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseShowEvent(KLed* self, QShowEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ShowEvent_IsBase(true);
        vkled->showEvent(event);
    } else {
        ((VirtualKLed*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnShowEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ShowEvent_Callback(reinterpret_cast<VirtualKLed::KLed_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_HideEvent(KLed* self, QHideEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->hideEvent(event);
    } else {
        ((VirtualKLed*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseHideEvent(KLed* self, QHideEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_HideEvent_IsBase(true);
        vkled->hideEvent(event);
    } else {
        ((VirtualKLed*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnHideEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_HideEvent_Callback(reinterpret_cast<VirtualKLed::KLed_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_NativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkled && vkled->isVirtualKLed) {
        return vkled->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKLed*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KLed_QBaseNativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_NativeEvent_IsBase(true);
        return vkled->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKLed*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnNativeEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_NativeEvent_Callback(reinterpret_cast<VirtualKLed::KLed_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_ChangeEvent(KLed* self, QEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->changeEvent(param1);
    } else {
        ((VirtualKLed*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KLed_QBaseChangeEvent(KLed* self, QEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ChangeEvent_IsBase(true);
        vkled->changeEvent(param1);
    } else {
        ((VirtualKLed*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnChangeEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ChangeEvent_Callback(reinterpret_cast<VirtualKLed::KLed_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KLed_Metric(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKLed*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KLed_QBaseMetric(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Metric_IsBase(true);
        return vkled->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKLed*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMetric(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Metric_Callback(reinterpret_cast<VirtualKLed::KLed_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_InitPainter(const KLed* self, QPainter* painter) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->initPainter(painter);
    } else {
        ((VirtualKLed*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KLed_QBaseInitPainter(const KLed* self, QPainter* painter) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_InitPainter_IsBase(true);
        vkled->initPainter(painter);
    } else {
        ((VirtualKLed*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnInitPainter(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_InitPainter_Callback(reinterpret_cast<VirtualKLed::KLed_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KLed_Redirected(const KLed* self, QPoint* offset) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->redirected(offset);
    } else {
        return ((VirtualKLed*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KLed_QBaseRedirected(const KLed* self, QPoint* offset) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Redirected_IsBase(true);
        return vkled->redirected(offset);
    } else {
        return ((VirtualKLed*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnRedirected(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Redirected_Callback(reinterpret_cast<VirtualKLed::KLed_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KLed_SharedPainter(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->sharedPainter();
    } else {
        return ((VirtualKLed*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KLed_QBaseSharedPainter(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SharedPainter_IsBase(true);
        return vkled->sharedPainter();
    } else {
        return ((VirtualKLed*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSharedPainter(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SharedPainter_Callback(reinterpret_cast<VirtualKLed::KLed_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_InputMethodEvent(KLed* self, QInputMethodEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->inputMethodEvent(param1);
    } else {
        ((VirtualKLed*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KLed_QBaseInputMethodEvent(KLed* self, QInputMethodEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_InputMethodEvent_IsBase(true);
        vkled->inputMethodEvent(param1);
    } else {
        ((VirtualKLed*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnInputMethodEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_InputMethodEvent_Callback(reinterpret_cast<VirtualKLed::KLed_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KLed_InputMethodQuery(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return new QVariant(vkled->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKLed*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KLed_QBaseInputMethodQuery(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_InputMethodQuery_IsBase(true);
        return new QVariant(vkled->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKLed*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnInputMethodQuery(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_InputMethodQuery_Callback(reinterpret_cast<VirtualKLed::KLed_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_FocusNextPrevChild(KLed* self, bool next) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return vkled->focusNextPrevChild(next);
    } else {
        return ((VirtualKLed*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KLed_QBaseFocusNextPrevChild(KLed* self, bool next) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusNextPrevChild_IsBase(true);
        return vkled->focusNextPrevChild(next);
    } else {
        return ((VirtualKLed*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusNextPrevChild(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKLed::KLed_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_EventFilter(KLed* self, QObject* watched, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return vkled->eventFilter(watched, event);
    } else {
        return self->KLed::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KLed_QBaseEventFilter(KLed* self, QObject* watched, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_EventFilter_IsBase(true);
        return vkled->eventFilter(watched, event);
    } else {
        return self->KLed::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnEventFilter(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_EventFilter_Callback(reinterpret_cast<VirtualKLed::KLed_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_TimerEvent(KLed* self, QTimerEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->timerEvent(event);
    } else {
        ((VirtualKLed*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseTimerEvent(KLed* self, QTimerEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_TimerEvent_IsBase(true);
        vkled->timerEvent(event);
    } else {
        ((VirtualKLed*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnTimerEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_TimerEvent_Callback(reinterpret_cast<VirtualKLed::KLed_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_ChildEvent(KLed* self, QChildEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->childEvent(event);
    } else {
        ((VirtualKLed*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseChildEvent(KLed* self, QChildEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ChildEvent_IsBase(true);
        vkled->childEvent(event);
    } else {
        ((VirtualKLed*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnChildEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ChildEvent_Callback(reinterpret_cast<VirtualKLed::KLed_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_CustomEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->customEvent(event);
    } else {
        ((VirtualKLed*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLed_QBaseCustomEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_CustomEvent_IsBase(true);
        vkled->customEvent(event);
    } else {
        ((VirtualKLed*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnCustomEvent(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_CustomEvent_Callback(reinterpret_cast<VirtualKLed::KLed_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_ConnectNotify(KLed* self, const QMetaMethod* signal) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->connectNotify(*signal);
    } else {
        ((VirtualKLed*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLed_QBaseConnectNotify(KLed* self, const QMetaMethod* signal) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ConnectNotify_IsBase(true);
        vkled->connectNotify(*signal);
    } else {
        ((VirtualKLed*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnConnectNotify(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_ConnectNotify_Callback(reinterpret_cast<VirtualKLed::KLed_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_DisconnectNotify(KLed* self, const QMetaMethod* signal) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->disconnectNotify(*signal);
    } else {
        ((VirtualKLed*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLed_QBaseDisconnectNotify(KLed* self, const QMetaMethod* signal) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DisconnectNotify_IsBase(true);
        vkled->disconnectNotify(*signal);
    } else {
        ((VirtualKLed*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDisconnectNotify(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_DisconnectNotify_Callback(reinterpret_cast<VirtualKLed::KLed_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_UpdateMicroFocus(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->updateMicroFocus();
    } else {
        ((VirtualKLed*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KLed_QBaseUpdateMicroFocus(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_UpdateMicroFocus_IsBase(true);
        vkled->updateMicroFocus();
    } else {
        ((VirtualKLed*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnUpdateMicroFocus(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKLed::KLed_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_Create(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->create();
    } else {
        ((VirtualKLed*)self)->create();
    }
}

// Base class handler implementation
void KLed_QBaseCreate(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Create_IsBase(true);
        vkled->create();
    } else {
        ((VirtualKLed*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnCreate(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Create_Callback(reinterpret_cast<VirtualKLed::KLed_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KLed_Destroy(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->destroy();
    } else {
        ((VirtualKLed*)self)->destroy();
    }
}

// Base class handler implementation
void KLed_QBaseDestroy(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Destroy_IsBase(true);
        vkled->destroy();
    } else {
        ((VirtualKLed*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDestroy(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Destroy_Callback(reinterpret_cast<VirtualKLed::KLed_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_FocusNextChild(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return vkled->focusNextChild();
    } else {
        return ((VirtualKLed*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KLed_QBaseFocusNextChild(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusNextChild_IsBase(true);
        return vkled->focusNextChild();
    } else {
        return ((VirtualKLed*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusNextChild(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusNextChild_Callback(reinterpret_cast<VirtualKLed::KLed_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_FocusPreviousChild(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        return vkled->focusPreviousChild();
    } else {
        return ((VirtualKLed*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KLed_QBaseFocusPreviousChild(KLed* self) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusPreviousChild_IsBase(true);
        return vkled->focusPreviousChild();
    } else {
        return ((VirtualKLed*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusPreviousChild(KLed* self, intptr_t slot) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_FocusPreviousChild_Callback(reinterpret_cast<VirtualKLed::KLed_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLed_Sender(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->sender();
    } else {
        return ((VirtualKLed*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLed_QBaseSender(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Sender_IsBase(true);
        return vkled->sender();
    } else {
        return ((VirtualKLed*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSender(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Sender_Callback(reinterpret_cast<VirtualKLed::KLed_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLed_SenderSignalIndex(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->senderSignalIndex();
    } else {
        return ((VirtualKLed*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLed_QBaseSenderSignalIndex(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SenderSignalIndex_IsBase(true);
        return vkled->senderSignalIndex();
    } else {
        return ((VirtualKLed*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSenderSignalIndex(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLed::KLed_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLed_Receivers(const KLed* self, const char* signal) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->receivers(signal);
    } else {
        return ((VirtualKLed*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLed_QBaseReceivers(const KLed* self, const char* signal) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Receivers_IsBase(true);
        return vkled->receivers(signal);
    } else {
        return ((VirtualKLed*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnReceivers(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_Receivers_Callback(reinterpret_cast<VirtualKLed::KLed_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLed_IsSignalConnected(const KLed* self, const QMetaMethod* signal) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->isSignalConnected(*signal);
    } else {
        return ((VirtualKLed*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLed_QBaseIsSignalConnected(const KLed* self, const QMetaMethod* signal) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_IsSignalConnected_IsBase(true);
        return vkled->isSignalConnected(*signal);
    } else {
        return ((VirtualKLed*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnIsSignalConnected(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_IsSignalConnected_Callback(reinterpret_cast<VirtualKLed::KLed_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KLed_GetDecodedMetricF(const KLed* self, int metricA, int metricB) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        return vkled->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKLed*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KLed_QBaseGetDecodedMetricF(const KLed* self, int metricA, int metricB) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_GetDecodedMetricF_IsBase(true);
        return vkled->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKLed*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KLed_OnGetDecodedMetricF(const KLed* self, intptr_t slot) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled && vkled->isVirtualKLed) {
        vkled->setKLed_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKLed::KLed_GetDecodedMetricF_Callback>(slot));
    }
}

void KLed_Delete(KLed* self) {
    delete self;
}
