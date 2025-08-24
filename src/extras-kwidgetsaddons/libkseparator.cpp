#include <KSeparator>
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
#include <QFrame>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kseparator.h>
#include "libkseparator.h"
#include "libkseparator.hxx"

KSeparator* KSeparator_new(QWidget* parent) {
    return new VirtualKSeparator(parent);
}

KSeparator* KSeparator_new2() {
    return new VirtualKSeparator();
}

KSeparator* KSeparator_new3(int orientation) {
    return new VirtualKSeparator(static_cast<Qt::Orientation>(orientation));
}

KSeparator* KSeparator_new4(QWidget* parent, int f) {
    return new VirtualKSeparator(parent, static_cast<Qt::WindowFlags>(f));
}

KSeparator* KSeparator_new5(int orientation, QWidget* parent) {
    return new VirtualKSeparator(static_cast<Qt::Orientation>(orientation), parent);
}

KSeparator* KSeparator_new6(int orientation, QWidget* parent, int f) {
    return new VirtualKSeparator(static_cast<Qt::Orientation>(orientation), parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* KSeparator_MetaObject(const KSeparator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSeparator_Metacast(KSeparator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSeparator_Metacall(KSeparator* self, int param1, int param2, void** param3) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSeparator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSeparator_OnMetacall(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Metacall_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KSeparator_QBaseMetacall(KSeparator* self, int param1, int param2, void** param3) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Metacall_IsBase(true);
        return vkseparator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSeparator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSeparator_Tr(const char* s) {
    QString _ret = KSeparator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KSeparator_Orientation(const KSeparator* self) {
    return static_cast<int>(self->orientation());
}

void KSeparator_SetOrientation(KSeparator* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

libqt_string KSeparator_Tr2(const char* s, const char* c) {
    QString _ret = KSeparator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSeparator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSeparator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* KSeparator_SizeHint(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return new QSize(vkseparator->sizeHint());
    } else {
        return new QSize(((VirtualKSeparator*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KSeparator_QBaseSizeHint(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SizeHint_IsBase(true);
        return new QSize(vkseparator->sizeHint());
    } else {
        return new QSize(((VirtualKSeparator*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSizeHint(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SizeHint_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_Event(KSeparator* self, QEvent* e) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->event(e);
    } else {
        return ((VirtualKSeparator*)self)->event(e);
    }
}

// Base class handler implementation
bool KSeparator_QBaseEvent(KSeparator* self, QEvent* e) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Event_IsBase(true);
        return vkseparator->event(e);
    } else {
        return ((VirtualKSeparator*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Event_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_PaintEvent(KSeparator* self, QPaintEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->paintEvent(param1);
    } else {
        ((VirtualKSeparator*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KSeparator_QBasePaintEvent(KSeparator* self, QPaintEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_PaintEvent_IsBase(true);
        vkseparator->paintEvent(param1);
    } else {
        ((VirtualKSeparator*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnPaintEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_PaintEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ChangeEvent(KSeparator* self, QEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->changeEvent(param1);
    } else {
        ((VirtualKSeparator*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KSeparator_QBaseChangeEvent(KSeparator* self, QEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ChangeEvent_IsBase(true);
        vkseparator->changeEvent(param1);
    } else {
        ((VirtualKSeparator*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnChangeEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ChangeEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_InitStyleOption(const KSeparator* self, QStyleOptionFrame* option) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->initStyleOption(option);
    } else {
        ((VirtualKSeparator*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KSeparator_QBaseInitStyleOption(const KSeparator* self, QStyleOptionFrame* option) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InitStyleOption_IsBase(true);
        vkseparator->initStyleOption(option);
    } else {
        ((VirtualKSeparator*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInitStyleOption(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InitStyleOption_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KSeparator_DevType(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->devType();
    } else {
        return self->KSeparator::devType();
    }
}

// Base class handler implementation
int KSeparator_QBaseDevType(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DevType_IsBase(true);
        return vkseparator->devType();
    } else {
        return self->KSeparator::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDevType(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DevType_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_SetVisible(KSeparator* self, bool visible) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setVisible(visible);
    } else {
        self->KSeparator::setVisible(visible);
    }
}

// Base class handler implementation
void KSeparator_QBaseSetVisible(KSeparator* self, bool visible) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SetVisible_IsBase(true);
        vkseparator->setVisible(visible);
    } else {
        self->KSeparator::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSetVisible(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SetVisible_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSeparator_MinimumSizeHint(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return new QSize(vkseparator->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSeparator*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KSeparator_QBaseMinimumSizeHint(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MinimumSizeHint_IsBase(true);
        return new QSize(vkseparator->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSeparator*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMinimumSizeHint(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MinimumSizeHint_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KSeparator_HeightForWidth(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSeparator::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KSeparator_QBaseHeightForWidth(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_HeightForWidth_IsBase(true);
        return vkseparator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSeparator::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnHeightForWidth(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_HeightForWidth_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_HasHeightForWidth(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->hasHeightForWidth();
    } else {
        return self->KSeparator::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KSeparator_QBaseHasHeightForWidth(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_HasHeightForWidth_IsBase(true);
        return vkseparator->hasHeightForWidth();
    } else {
        return self->KSeparator::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnHasHeightForWidth(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_HasHeightForWidth_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KSeparator_PaintEngine(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->paintEngine();
    } else {
        return self->KSeparator::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KSeparator_QBasePaintEngine(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_PaintEngine_IsBase(true);
        return vkseparator->paintEngine();
    } else {
        return self->KSeparator::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnPaintEngine(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_PaintEngine_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_MousePressEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->mousePressEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseMousePressEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MousePressEvent_IsBase(true);
        vkseparator->mousePressEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMousePressEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MousePressEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_MouseReleaseEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->mouseReleaseEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseMouseReleaseEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MouseReleaseEvent_IsBase(true);
        vkseparator->mouseReleaseEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMouseReleaseEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_MouseDoubleClickEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseMouseDoubleClickEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MouseDoubleClickEvent_IsBase(true);
        vkseparator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMouseDoubleClickEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_MouseMoveEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->mouseMoveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseMouseMoveEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MouseMoveEvent_IsBase(true);
        vkseparator->mouseMoveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMouseMoveEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MouseMoveEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_WheelEvent(KSeparator* self, QWheelEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->wheelEvent(event);
    } else {
        ((VirtualKSeparator*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseWheelEvent(KSeparator* self, QWheelEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_WheelEvent_IsBase(true);
        vkseparator->wheelEvent(event);
    } else {
        ((VirtualKSeparator*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnWheelEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_WheelEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_KeyPressEvent(KSeparator* self, QKeyEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->keyPressEvent(event);
    } else {
        ((VirtualKSeparator*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseKeyPressEvent(KSeparator* self, QKeyEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_KeyPressEvent_IsBase(true);
        vkseparator->keyPressEvent(event);
    } else {
        ((VirtualKSeparator*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnKeyPressEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_KeyPressEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_KeyReleaseEvent(KSeparator* self, QKeyEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->keyReleaseEvent(event);
    } else {
        ((VirtualKSeparator*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseKeyReleaseEvent(KSeparator* self, QKeyEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_KeyReleaseEvent_IsBase(true);
        vkseparator->keyReleaseEvent(event);
    } else {
        ((VirtualKSeparator*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnKeyReleaseEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_FocusInEvent(KSeparator* self, QFocusEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->focusInEvent(event);
    } else {
        ((VirtualKSeparator*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseFocusInEvent(KSeparator* self, QFocusEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusInEvent_IsBase(true);
        vkseparator->focusInEvent(event);
    } else {
        ((VirtualKSeparator*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusInEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusInEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_FocusOutEvent(KSeparator* self, QFocusEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->focusOutEvent(event);
    } else {
        ((VirtualKSeparator*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseFocusOutEvent(KSeparator* self, QFocusEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusOutEvent_IsBase(true);
        vkseparator->focusOutEvent(event);
    } else {
        ((VirtualKSeparator*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusOutEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusOutEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_EnterEvent(KSeparator* self, QEnterEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->enterEvent(event);
    } else {
        ((VirtualKSeparator*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseEnterEvent(KSeparator* self, QEnterEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_EnterEvent_IsBase(true);
        vkseparator->enterEvent(event);
    } else {
        ((VirtualKSeparator*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnEnterEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_EnterEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_LeaveEvent(KSeparator* self, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->leaveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseLeaveEvent(KSeparator* self, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_LeaveEvent_IsBase(true);
        vkseparator->leaveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnLeaveEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_LeaveEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_MoveEvent(KSeparator* self, QMoveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->moveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseMoveEvent(KSeparator* self, QMoveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MoveEvent_IsBase(true);
        vkseparator->moveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMoveEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_MoveEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ResizeEvent(KSeparator* self, QResizeEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->resizeEvent(event);
    } else {
        ((VirtualKSeparator*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseResizeEvent(KSeparator* self, QResizeEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ResizeEvent_IsBase(true);
        vkseparator->resizeEvent(event);
    } else {
        ((VirtualKSeparator*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnResizeEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ResizeEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_CloseEvent(KSeparator* self, QCloseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->closeEvent(event);
    } else {
        ((VirtualKSeparator*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseCloseEvent(KSeparator* self, QCloseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_CloseEvent_IsBase(true);
        vkseparator->closeEvent(event);
    } else {
        ((VirtualKSeparator*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnCloseEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_CloseEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ContextMenuEvent(KSeparator* self, QContextMenuEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->contextMenuEvent(event);
    } else {
        ((VirtualKSeparator*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseContextMenuEvent(KSeparator* self, QContextMenuEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ContextMenuEvent_IsBase(true);
        vkseparator->contextMenuEvent(event);
    } else {
        ((VirtualKSeparator*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnContextMenuEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ContextMenuEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_TabletEvent(KSeparator* self, QTabletEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->tabletEvent(event);
    } else {
        ((VirtualKSeparator*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseTabletEvent(KSeparator* self, QTabletEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_TabletEvent_IsBase(true);
        vkseparator->tabletEvent(event);
    } else {
        ((VirtualKSeparator*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnTabletEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_TabletEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ActionEvent(KSeparator* self, QActionEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->actionEvent(event);
    } else {
        ((VirtualKSeparator*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseActionEvent(KSeparator* self, QActionEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ActionEvent_IsBase(true);
        vkseparator->actionEvent(event);
    } else {
        ((VirtualKSeparator*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnActionEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ActionEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_DragEnterEvent(KSeparator* self, QDragEnterEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->dragEnterEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseDragEnterEvent(KSeparator* self, QDragEnterEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DragEnterEvent_IsBase(true);
        vkseparator->dragEnterEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDragEnterEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DragEnterEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_DragMoveEvent(KSeparator* self, QDragMoveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->dragMoveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseDragMoveEvent(KSeparator* self, QDragMoveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DragMoveEvent_IsBase(true);
        vkseparator->dragMoveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDragMoveEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DragMoveEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_DragLeaveEvent(KSeparator* self, QDragLeaveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->dragLeaveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseDragLeaveEvent(KSeparator* self, QDragLeaveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DragLeaveEvent_IsBase(true);
        vkseparator->dragLeaveEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDragLeaveEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DragLeaveEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_DropEvent(KSeparator* self, QDropEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->dropEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseDropEvent(KSeparator* self, QDropEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DropEvent_IsBase(true);
        vkseparator->dropEvent(event);
    } else {
        ((VirtualKSeparator*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDropEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DropEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ShowEvent(KSeparator* self, QShowEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->showEvent(event);
    } else {
        ((VirtualKSeparator*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseShowEvent(KSeparator* self, QShowEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ShowEvent_IsBase(true);
        vkseparator->showEvent(event);
    } else {
        ((VirtualKSeparator*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnShowEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ShowEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_HideEvent(KSeparator* self, QHideEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->hideEvent(event);
    } else {
        ((VirtualKSeparator*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseHideEvent(KSeparator* self, QHideEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_HideEvent_IsBase(true);
        vkseparator->hideEvent(event);
    } else {
        ((VirtualKSeparator*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnHideEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_HideEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_NativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSeparator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KSeparator_QBaseNativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_NativeEvent_IsBase(true);
        return vkseparator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSeparator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnNativeEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_NativeEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSeparator_Metric(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSeparator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KSeparator_QBaseMetric(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Metric_IsBase(true);
        return vkseparator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSeparator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMetric(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Metric_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_InitPainter(const KSeparator* self, QPainter* painter) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->initPainter(painter);
    } else {
        ((VirtualKSeparator*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KSeparator_QBaseInitPainter(const KSeparator* self, QPainter* painter) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InitPainter_IsBase(true);
        vkseparator->initPainter(painter);
    } else {
        ((VirtualKSeparator*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInitPainter(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InitPainter_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KSeparator_Redirected(const KSeparator* self, QPoint* offset) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->redirected(offset);
    } else {
        return ((VirtualKSeparator*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KSeparator_QBaseRedirected(const KSeparator* self, QPoint* offset) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Redirected_IsBase(true);
        return vkseparator->redirected(offset);
    } else {
        return ((VirtualKSeparator*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnRedirected(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Redirected_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KSeparator_SharedPainter(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->sharedPainter();
    } else {
        return ((VirtualKSeparator*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KSeparator_QBaseSharedPainter(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SharedPainter_IsBase(true);
        return vkseparator->sharedPainter();
    } else {
        return ((VirtualKSeparator*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSharedPainter(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SharedPainter_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_InputMethodEvent(KSeparator* self, QInputMethodEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->inputMethodEvent(param1);
    } else {
        ((VirtualKSeparator*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KSeparator_QBaseInputMethodEvent(KSeparator* self, QInputMethodEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InputMethodEvent_IsBase(true);
        vkseparator->inputMethodEvent(param1);
    } else {
        ((VirtualKSeparator*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInputMethodEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InputMethodEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KSeparator_InputMethodQuery(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return new QVariant(vkseparator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSeparator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KSeparator_QBaseInputMethodQuery(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InputMethodQuery_IsBase(true);
        return new QVariant(vkseparator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSeparator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInputMethodQuery(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_InputMethodQuery_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_FocusNextPrevChild(KSeparator* self, bool next) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->focusNextPrevChild(next);
    } else {
        return ((VirtualKSeparator*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KSeparator_QBaseFocusNextPrevChild(KSeparator* self, bool next) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusNextPrevChild_IsBase(true);
        return vkseparator->focusNextPrevChild(next);
    } else {
        return ((VirtualKSeparator*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusNextPrevChild(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_EventFilter(KSeparator* self, QObject* watched, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->eventFilter(watched, event);
    } else {
        return self->KSeparator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSeparator_QBaseEventFilter(KSeparator* self, QObject* watched, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_EventFilter_IsBase(true);
        return vkseparator->eventFilter(watched, event);
    } else {
        return self->KSeparator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnEventFilter(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_EventFilter_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_TimerEvent(KSeparator* self, QTimerEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->timerEvent(event);
    } else {
        ((VirtualKSeparator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseTimerEvent(KSeparator* self, QTimerEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_TimerEvent_IsBase(true);
        vkseparator->timerEvent(event);
    } else {
        ((VirtualKSeparator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnTimerEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_TimerEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ChildEvent(KSeparator* self, QChildEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->childEvent(event);
    } else {
        ((VirtualKSeparator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseChildEvent(KSeparator* self, QChildEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ChildEvent_IsBase(true);
        vkseparator->childEvent(event);
    } else {
        ((VirtualKSeparator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnChildEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ChildEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_CustomEvent(KSeparator* self, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->customEvent(event);
    } else {
        ((VirtualKSeparator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSeparator_QBaseCustomEvent(KSeparator* self, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_CustomEvent_IsBase(true);
        vkseparator->customEvent(event);
    } else {
        ((VirtualKSeparator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnCustomEvent(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_CustomEvent_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_ConnectNotify(KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->connectNotify(*signal);
    } else {
        ((VirtualKSeparator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSeparator_QBaseConnectNotify(KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ConnectNotify_IsBase(true);
        vkseparator->connectNotify(*signal);
    } else {
        ((VirtualKSeparator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnConnectNotify(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_ConnectNotify_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_DisconnectNotify(KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->disconnectNotify(*signal);
    } else {
        ((VirtualKSeparator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSeparator_QBaseDisconnectNotify(KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DisconnectNotify_IsBase(true);
        vkseparator->disconnectNotify(*signal);
    } else {
        ((VirtualKSeparator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDisconnectNotify(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DisconnectNotify_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_DrawFrame(KSeparator* self, QPainter* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->drawFrame(param1);
    } else {
        ((VirtualKSeparator*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KSeparator_QBaseDrawFrame(KSeparator* self, QPainter* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DrawFrame_IsBase(true);
        vkseparator->drawFrame(param1);
    } else {
        ((VirtualKSeparator*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDrawFrame(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_DrawFrame_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_UpdateMicroFocus(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->updateMicroFocus();
    } else {
        ((VirtualKSeparator*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KSeparator_QBaseUpdateMicroFocus(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_UpdateMicroFocus_IsBase(true);
        vkseparator->updateMicroFocus();
    } else {
        ((VirtualKSeparator*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnUpdateMicroFocus(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_Create(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->create();
    } else {
        ((VirtualKSeparator*)self)->create();
    }
}

// Base class handler implementation
void KSeparator_QBaseCreate(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Create_IsBase(true);
        vkseparator->create();
    } else {
        ((VirtualKSeparator*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnCreate(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Create_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KSeparator_Destroy(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->destroy();
    } else {
        ((VirtualKSeparator*)self)->destroy();
    }
}

// Base class handler implementation
void KSeparator_QBaseDestroy(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Destroy_IsBase(true);
        vkseparator->destroy();
    } else {
        ((VirtualKSeparator*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDestroy(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Destroy_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_FocusNextChild(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->focusNextChild();
    } else {
        return ((VirtualKSeparator*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KSeparator_QBaseFocusNextChild(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusNextChild_IsBase(true);
        return vkseparator->focusNextChild();
    } else {
        return ((VirtualKSeparator*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusNextChild(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusNextChild_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_FocusPreviousChild(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->focusPreviousChild();
    } else {
        return ((VirtualKSeparator*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KSeparator_QBaseFocusPreviousChild(KSeparator* self) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusPreviousChild_IsBase(true);
        return vkseparator->focusPreviousChild();
    } else {
        return ((VirtualKSeparator*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusPreviousChild(KSeparator* self, intptr_t slot) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_FocusPreviousChild_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSeparator_Sender(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->sender();
    } else {
        return ((VirtualKSeparator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSeparator_QBaseSender(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Sender_IsBase(true);
        return vkseparator->sender();
    } else {
        return ((VirtualKSeparator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSender(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Sender_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSeparator_SenderSignalIndex(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->senderSignalIndex();
    } else {
        return ((VirtualKSeparator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSeparator_QBaseSenderSignalIndex(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SenderSignalIndex_IsBase(true);
        return vkseparator->senderSignalIndex();
    } else {
        return ((VirtualKSeparator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSenderSignalIndex(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSeparator_Receivers(const KSeparator* self, const char* signal) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->receivers(signal);
    } else {
        return ((VirtualKSeparator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSeparator_QBaseReceivers(const KSeparator* self, const char* signal) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Receivers_IsBase(true);
        return vkseparator->receivers(signal);
    } else {
        return ((VirtualKSeparator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnReceivers(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_Receivers_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSeparator_IsSignalConnected(const KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->isSignalConnected(*signal);
    } else {
        return ((VirtualKSeparator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSeparator_QBaseIsSignalConnected(const KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_IsSignalConnected_IsBase(true);
        return vkseparator->isSignalConnected(*signal);
    } else {
        return ((VirtualKSeparator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnIsSignalConnected(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_IsSignalConnected_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KSeparator_GetDecodedMetricF(const KSeparator* self, int metricA, int metricB) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        return vkseparator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSeparator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KSeparator_QBaseGetDecodedMetricF(const KSeparator* self, int metricA, int metricB) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_GetDecodedMetricF_IsBase(true);
        return vkseparator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSeparator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnGetDecodedMetricF(const KSeparator* self, intptr_t slot) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator && vkseparator->isVirtualKSeparator) {
        vkseparator->setKSeparator_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKSeparator::KSeparator_GetDecodedMetricF_Callback>(slot));
    }
}

void KSeparator_Delete(KSeparator* self) {
    delete self;
}
