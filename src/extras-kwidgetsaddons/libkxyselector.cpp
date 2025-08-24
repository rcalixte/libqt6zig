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
#include <QByteArray>
#include <cstring>
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
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKXYSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KXYSelector_OnMetacall(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Metacall_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KXYSelector_QBaseMetacall(KXYSelector* self, int param1, int param2, void** param3) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Metacall_IsBase(true);
        return vkxyselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKXYSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KXYSelector_Tr(const char* s) {
    QString _ret = KXYSelector::tr(s);
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

void KXYSelector_ValueChanged(KXYSelector* self, int x, int y) {
    self->valueChanged(static_cast<int>(x), static_cast<int>(y));
}

void KXYSelector_Connect_ValueChanged(KXYSelector* self, intptr_t slot) {
    void (*slotFunc)(KXYSelector*, int, int) = reinterpret_cast<void (*)(KXYSelector*, int, int)>(slot);
    KXYSelector::connect(self, &KXYSelector::valueChanged, [self, slotFunc](int x, int y) {
        int sigval1 = x;
        int sigval2 = y;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KXYSelector_Tr2(const char* s, const char* c) {
    QString _ret = KXYSelector::tr(s, c);
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
    QString _ret = KXYSelector::tr(s, c, static_cast<int>(n));
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
QSize* KXYSelector_MinimumSizeHint(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return new QSize(vkxyselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKXYSelector*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KXYSelector_QBaseMinimumSizeHint(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MinimumSizeHint_IsBase(true);
        return new QSize(vkxyselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKXYSelector*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMinimumSizeHint(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MinimumSizeHint_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DrawContents(KXYSelector* self, QPainter* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->drawContents(param1);
    } else {
        ((VirtualKXYSelector*)self)->drawContents(param1);
    }
}

// Base class handler implementation
void KXYSelector_QBaseDrawContents(KXYSelector* self, QPainter* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DrawContents_IsBase(true);
        vkxyselector->drawContents(param1);
    } else {
        ((VirtualKXYSelector*)self)->drawContents(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDrawContents(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DrawContents_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DrawContents_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DrawMarker(KXYSelector* self, QPainter* p, int xp, int yp) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->drawMarker(p, static_cast<int>(xp), static_cast<int>(yp));
    } else {
        ((VirtualKXYSelector*)self)->drawMarker(p, static_cast<int>(xp), static_cast<int>(yp));
    }
}

// Base class handler implementation
void KXYSelector_QBaseDrawMarker(KXYSelector* self, QPainter* p, int xp, int yp) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DrawMarker_IsBase(true);
        vkxyselector->drawMarker(p, static_cast<int>(xp), static_cast<int>(yp));
    } else {
        ((VirtualKXYSelector*)self)->drawMarker(p, static_cast<int>(xp), static_cast<int>(yp));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDrawMarker(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DrawMarker_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DrawMarker_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_PaintEvent(KXYSelector* self, QPaintEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->paintEvent(e);
    } else {
        ((VirtualKXYSelector*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KXYSelector_QBasePaintEvent(KXYSelector* self, QPaintEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_PaintEvent_IsBase(true);
        vkxyselector->paintEvent(e);
    } else {
        ((VirtualKXYSelector*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnPaintEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_PaintEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_MousePressEvent(KXYSelector* self, QMouseEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->mousePressEvent(e);
    } else {
        ((VirtualKXYSelector*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KXYSelector_QBaseMousePressEvent(KXYSelector* self, QMouseEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MousePressEvent_IsBase(true);
        vkxyselector->mousePressEvent(e);
    } else {
        ((VirtualKXYSelector*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMousePressEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MousePressEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_MouseMoveEvent(KXYSelector* self, QMouseEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->mouseMoveEvent(e);
    } else {
        ((VirtualKXYSelector*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KXYSelector_QBaseMouseMoveEvent(KXYSelector* self, QMouseEvent* e) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MouseMoveEvent_IsBase(true);
        vkxyselector->mouseMoveEvent(e);
    } else {
        ((VirtualKXYSelector*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMouseMoveEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MouseMoveEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_WheelEvent(KXYSelector* self, QWheelEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->wheelEvent(param1);
    } else {
        ((VirtualKXYSelector*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void KXYSelector_QBaseWheelEvent(KXYSelector* self, QWheelEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_WheelEvent_IsBase(true);
        vkxyselector->wheelEvent(param1);
    } else {
        ((VirtualKXYSelector*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnWheelEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_WheelEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KXYSelector_DevType(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->devType();
    } else {
        return self->KXYSelector::devType();
    }
}

// Base class handler implementation
int KXYSelector_QBaseDevType(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DevType_IsBase(true);
        return vkxyselector->devType();
    } else {
        return self->KXYSelector::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDevType(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DevType_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_SetVisible(KXYSelector* self, bool visible) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setVisible(visible);
    } else {
        self->KXYSelector::setVisible(visible);
    }
}

// Base class handler implementation
void KXYSelector_QBaseSetVisible(KXYSelector* self, bool visible) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SetVisible_IsBase(true);
        vkxyselector->setVisible(visible);
    } else {
        self->KXYSelector::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSetVisible(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SetVisible_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KXYSelector_SizeHint(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return new QSize(vkxyselector->sizeHint());
    } else {
        return new QSize(((VirtualKXYSelector*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KXYSelector_QBaseSizeHint(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SizeHint_IsBase(true);
        return new QSize(vkxyselector->sizeHint());
    } else {
        return new QSize(((VirtualKXYSelector*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSizeHint(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SizeHint_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KXYSelector_HeightForWidth(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KXYSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KXYSelector_QBaseHeightForWidth(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_HeightForWidth_IsBase(true);
        return vkxyselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KXYSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnHeightForWidth(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_HeightForWidth_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_HasHeightForWidth(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->hasHeightForWidth();
    } else {
        return self->KXYSelector::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KXYSelector_QBaseHasHeightForWidth(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_HasHeightForWidth_IsBase(true);
        return vkxyselector->hasHeightForWidth();
    } else {
        return self->KXYSelector::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnHasHeightForWidth(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_HasHeightForWidth_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KXYSelector_PaintEngine(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->paintEngine();
    } else {
        return self->KXYSelector::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KXYSelector_QBasePaintEngine(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_PaintEngine_IsBase(true);
        return vkxyselector->paintEngine();
    } else {
        return self->KXYSelector::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnPaintEngine(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_PaintEngine_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_Event(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->event(event);
    } else {
        return ((VirtualKXYSelector*)self)->event(event);
    }
}

// Base class handler implementation
bool KXYSelector_QBaseEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Event_IsBase(true);
        return vkxyselector->event(event);
    } else {
        return ((VirtualKXYSelector*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Event_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_MouseReleaseEvent(KXYSelector* self, QMouseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->mouseReleaseEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseMouseReleaseEvent(KXYSelector* self, QMouseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MouseReleaseEvent_IsBase(true);
        vkxyselector->mouseReleaseEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMouseReleaseEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_MouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseMouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MouseDoubleClickEvent_IsBase(true);
        vkxyselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMouseDoubleClickEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_KeyPressEvent(KXYSelector* self, QKeyEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->keyPressEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseKeyPressEvent(KXYSelector* self, QKeyEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_KeyPressEvent_IsBase(true);
        vkxyselector->keyPressEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnKeyPressEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_KeyPressEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_KeyReleaseEvent(KXYSelector* self, QKeyEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->keyReleaseEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseKeyReleaseEvent(KXYSelector* self, QKeyEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_KeyReleaseEvent_IsBase(true);
        vkxyselector->keyReleaseEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnKeyReleaseEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_FocusInEvent(KXYSelector* self, QFocusEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->focusInEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseFocusInEvent(KXYSelector* self, QFocusEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusInEvent_IsBase(true);
        vkxyselector->focusInEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusInEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusInEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_FocusOutEvent(KXYSelector* self, QFocusEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->focusOutEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseFocusOutEvent(KXYSelector* self, QFocusEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusOutEvent_IsBase(true);
        vkxyselector->focusOutEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusOutEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusOutEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_EnterEvent(KXYSelector* self, QEnterEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->enterEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseEnterEvent(KXYSelector* self, QEnterEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_EnterEvent_IsBase(true);
        vkxyselector->enterEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnEnterEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_EnterEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_LeaveEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->leaveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseLeaveEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_LeaveEvent_IsBase(true);
        vkxyselector->leaveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnLeaveEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_LeaveEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_MoveEvent(KXYSelector* self, QMoveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->moveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseMoveEvent(KXYSelector* self, QMoveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MoveEvent_IsBase(true);
        vkxyselector->moveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMoveEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_MoveEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ResizeEvent(KXYSelector* self, QResizeEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->resizeEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseResizeEvent(KXYSelector* self, QResizeEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ResizeEvent_IsBase(true);
        vkxyselector->resizeEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnResizeEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ResizeEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_CloseEvent(KXYSelector* self, QCloseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->closeEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseCloseEvent(KXYSelector* self, QCloseEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_CloseEvent_IsBase(true);
        vkxyselector->closeEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnCloseEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_CloseEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ContextMenuEvent(KXYSelector* self, QContextMenuEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->contextMenuEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseContextMenuEvent(KXYSelector* self, QContextMenuEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ContextMenuEvent_IsBase(true);
        vkxyselector->contextMenuEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnContextMenuEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ContextMenuEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_TabletEvent(KXYSelector* self, QTabletEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->tabletEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseTabletEvent(KXYSelector* self, QTabletEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_TabletEvent_IsBase(true);
        vkxyselector->tabletEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnTabletEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_TabletEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ActionEvent(KXYSelector* self, QActionEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->actionEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseActionEvent(KXYSelector* self, QActionEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ActionEvent_IsBase(true);
        vkxyselector->actionEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnActionEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ActionEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DragEnterEvent(KXYSelector* self, QDragEnterEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->dragEnterEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseDragEnterEvent(KXYSelector* self, QDragEnterEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DragEnterEvent_IsBase(true);
        vkxyselector->dragEnterEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDragEnterEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DragEnterEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DragMoveEvent(KXYSelector* self, QDragMoveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->dragMoveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseDragMoveEvent(KXYSelector* self, QDragMoveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DragMoveEvent_IsBase(true);
        vkxyselector->dragMoveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDragMoveEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DragMoveEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->dragLeaveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseDragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DragLeaveEvent_IsBase(true);
        vkxyselector->dragLeaveEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDragLeaveEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DragLeaveEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DropEvent(KXYSelector* self, QDropEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->dropEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseDropEvent(KXYSelector* self, QDropEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DropEvent_IsBase(true);
        vkxyselector->dropEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDropEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DropEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ShowEvent(KXYSelector* self, QShowEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->showEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseShowEvent(KXYSelector* self, QShowEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ShowEvent_IsBase(true);
        vkxyselector->showEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnShowEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ShowEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_HideEvent(KXYSelector* self, QHideEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->hideEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseHideEvent(KXYSelector* self, QHideEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_HideEvent_IsBase(true);
        vkxyselector->hideEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnHideEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_HideEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_NativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKXYSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KXYSelector_QBaseNativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_NativeEvent_IsBase(true);
        return vkxyselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKXYSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnNativeEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_NativeEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ChangeEvent(KXYSelector* self, QEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->changeEvent(param1);
    } else {
        ((VirtualKXYSelector*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KXYSelector_QBaseChangeEvent(KXYSelector* self, QEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ChangeEvent_IsBase(true);
        vkxyselector->changeEvent(param1);
    } else {
        ((VirtualKXYSelector*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnChangeEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ChangeEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KXYSelector_Metric(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKXYSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KXYSelector_QBaseMetric(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Metric_IsBase(true);
        return vkxyselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKXYSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnMetric(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Metric_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_InitPainter(const KXYSelector* self, QPainter* painter) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->initPainter(painter);
    } else {
        ((VirtualKXYSelector*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KXYSelector_QBaseInitPainter(const KXYSelector* self, QPainter* painter) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_InitPainter_IsBase(true);
        vkxyselector->initPainter(painter);
    } else {
        ((VirtualKXYSelector*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnInitPainter(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_InitPainter_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KXYSelector_Redirected(const KXYSelector* self, QPoint* offset) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->redirected(offset);
    } else {
        return ((VirtualKXYSelector*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KXYSelector_QBaseRedirected(const KXYSelector* self, QPoint* offset) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Redirected_IsBase(true);
        return vkxyselector->redirected(offset);
    } else {
        return ((VirtualKXYSelector*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnRedirected(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Redirected_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KXYSelector_SharedPainter(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->sharedPainter();
    } else {
        return ((VirtualKXYSelector*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KXYSelector_QBaseSharedPainter(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SharedPainter_IsBase(true);
        return vkxyselector->sharedPainter();
    } else {
        return ((VirtualKXYSelector*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSharedPainter(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SharedPainter_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_InputMethodEvent(KXYSelector* self, QInputMethodEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->inputMethodEvent(param1);
    } else {
        ((VirtualKXYSelector*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KXYSelector_QBaseInputMethodEvent(KXYSelector* self, QInputMethodEvent* param1) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_InputMethodEvent_IsBase(true);
        vkxyselector->inputMethodEvent(param1);
    } else {
        ((VirtualKXYSelector*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnInputMethodEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_InputMethodEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KXYSelector_InputMethodQuery(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return new QVariant(vkxyselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKXYSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KXYSelector_QBaseInputMethodQuery(const KXYSelector* self, int param1) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_InputMethodQuery_IsBase(true);
        return new QVariant(vkxyselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKXYSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnInputMethodQuery(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_InputMethodQuery_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_FocusNextPrevChild(KXYSelector* self, bool next) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKXYSelector*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KXYSelector_QBaseFocusNextPrevChild(KXYSelector* self, bool next) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusNextPrevChild_IsBase(true);
        return vkxyselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKXYSelector*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusNextPrevChild(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_EventFilter(KXYSelector* self, QObject* watched, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->eventFilter(watched, event);
    } else {
        return self->KXYSelector::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KXYSelector_QBaseEventFilter(KXYSelector* self, QObject* watched, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_EventFilter_IsBase(true);
        return vkxyselector->eventFilter(watched, event);
    } else {
        return self->KXYSelector::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnEventFilter(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_EventFilter_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_TimerEvent(KXYSelector* self, QTimerEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->timerEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseTimerEvent(KXYSelector* self, QTimerEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_TimerEvent_IsBase(true);
        vkxyselector->timerEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnTimerEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_TimerEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ChildEvent(KXYSelector* self, QChildEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->childEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseChildEvent(KXYSelector* self, QChildEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ChildEvent_IsBase(true);
        vkxyselector->childEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnChildEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ChildEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_CustomEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->customEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KXYSelector_QBaseCustomEvent(KXYSelector* self, QEvent* event) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_CustomEvent_IsBase(true);
        vkxyselector->customEvent(event);
    } else {
        ((VirtualKXYSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnCustomEvent(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_CustomEvent_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ConnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->connectNotify(*signal);
    } else {
        ((VirtualKXYSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KXYSelector_QBaseConnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ConnectNotify_IsBase(true);
        vkxyselector->connectNotify(*signal);
    } else {
        ((VirtualKXYSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnConnectNotify(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ConnectNotify_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_DisconnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->disconnectNotify(*signal);
    } else {
        ((VirtualKXYSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KXYSelector_QBaseDisconnectNotify(KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DisconnectNotify_IsBase(true);
        vkxyselector->disconnectNotify(*signal);
    } else {
        ((VirtualKXYSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDisconnectNotify(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_ValuesFromPosition(const KXYSelector* self, int x, int y, int* xVal, int* yVal) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->valuesFromPosition(static_cast<int>(x), static_cast<int>(y), static_cast<int&>(*xVal), static_cast<int&>(*yVal));
    } else {
        ((VirtualKXYSelector*)self)->valuesFromPosition(static_cast<int>(x), static_cast<int>(y), static_cast<int&>(*xVal), static_cast<int&>(*yVal));
    }
}

// Base class handler implementation
void KXYSelector_QBaseValuesFromPosition(const KXYSelector* self, int x, int y, int* xVal, int* yVal) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ValuesFromPosition_IsBase(true);
        vkxyselector->valuesFromPosition(static_cast<int>(x), static_cast<int>(y), static_cast<int&>(*xVal), static_cast<int&>(*yVal));
    } else {
        ((VirtualKXYSelector*)self)->valuesFromPosition(static_cast<int>(x), static_cast<int>(y), static_cast<int&>(*xVal), static_cast<int&>(*yVal));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnValuesFromPosition(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_ValuesFromPosition_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_ValuesFromPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_UpdateMicroFocus(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->updateMicroFocus();
    } else {
        ((VirtualKXYSelector*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KXYSelector_QBaseUpdateMicroFocus(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_UpdateMicroFocus_IsBase(true);
        vkxyselector->updateMicroFocus();
    } else {
        ((VirtualKXYSelector*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnUpdateMicroFocus(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_Create(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->create();
    } else {
        ((VirtualKXYSelector*)self)->create();
    }
}

// Base class handler implementation
void KXYSelector_QBaseCreate(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Create_IsBase(true);
        vkxyselector->create();
    } else {
        ((VirtualKXYSelector*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnCreate(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Create_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KXYSelector_Destroy(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->destroy();
    } else {
        ((VirtualKXYSelector*)self)->destroy();
    }
}

// Base class handler implementation
void KXYSelector_QBaseDestroy(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Destroy_IsBase(true);
        vkxyselector->destroy();
    } else {
        ((VirtualKXYSelector*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnDestroy(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Destroy_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_FocusNextChild(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->focusNextChild();
    } else {
        return ((VirtualKXYSelector*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KXYSelector_QBaseFocusNextChild(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusNextChild_IsBase(true);
        return vkxyselector->focusNextChild();
    } else {
        return ((VirtualKXYSelector*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusNextChild(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusNextChild_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_FocusPreviousChild(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->focusPreviousChild();
    } else {
        return ((VirtualKXYSelector*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KXYSelector_QBaseFocusPreviousChild(KXYSelector* self) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusPreviousChild_IsBase(true);
        return vkxyselector->focusPreviousChild();
    } else {
        return ((VirtualKXYSelector*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnFocusPreviousChild(KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = dynamic_cast<VirtualKXYSelector*>(self);
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_FocusPreviousChild_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KXYSelector_Sender(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->sender();
    } else {
        return ((VirtualKXYSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* KXYSelector_QBaseSender(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Sender_IsBase(true);
        return vkxyselector->sender();
    } else {
        return ((VirtualKXYSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSender(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Sender_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KXYSelector_SenderSignalIndex(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->senderSignalIndex();
    } else {
        return ((VirtualKXYSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KXYSelector_QBaseSenderSignalIndex(const KXYSelector* self) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SenderSignalIndex_IsBase(true);
        return vkxyselector->senderSignalIndex();
    } else {
        return ((VirtualKXYSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnSenderSignalIndex(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KXYSelector_Receivers(const KXYSelector* self, const char* signal) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->receivers(signal);
    } else {
        return ((VirtualKXYSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KXYSelector_QBaseReceivers(const KXYSelector* self, const char* signal) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Receivers_IsBase(true);
        return vkxyselector->receivers(signal);
    } else {
        return ((VirtualKXYSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnReceivers(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_Receivers_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXYSelector_IsSignalConnected(const KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKXYSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KXYSelector_QBaseIsSignalConnected(const KXYSelector* self, const QMetaMethod* signal) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_IsSignalConnected_IsBase(true);
        return vkxyselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKXYSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnIsSignalConnected(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KXYSelector_GetDecodedMetricF(const KXYSelector* self, int metricA, int metricB) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        return vkxyselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKXYSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KXYSelector_QBaseGetDecodedMetricF(const KXYSelector* self, int metricA, int metricB) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_GetDecodedMetricF_IsBase(true);
        return vkxyselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKXYSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KXYSelector_OnGetDecodedMetricF(const KXYSelector* self, intptr_t slot) {
    auto* vkxyselector = const_cast<VirtualKXYSelector*>(dynamic_cast<const VirtualKXYSelector*>(self));
    if (vkxyselector && vkxyselector->isVirtualKXYSelector) {
        vkxyselector->setKXYSelector_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKXYSelector::KXYSelector_GetDecodedMetricF_Callback>(slot));
    }
}

void KXYSelector_Delete(KXYSelector* self) {
    delete self;
}
