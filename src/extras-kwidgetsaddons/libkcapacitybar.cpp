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
#include <QByteArray>
#include <cstring>
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
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCapacityBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCapacityBar_Tr(const char* s) {
    QString _ret = KCapacityBar::tr(s);
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
    QString _ret = self->text();
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
    auto* vkcapacitybar = dynamic_cast<const VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCapacityBar*)self)->minimumSizeHint());
    }
}

void KCapacityBar_PaintEvent(KCapacityBar* self, QPaintEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->paintEvent(event);
    }
}

void KCapacityBar_ChangeEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->changeEvent(event);
    }
}

libqt_string KCapacityBar_Tr2(const char* s, const char* c) {
    QString _ret = KCapacityBar::tr(s, c);
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
    QString _ret = KCapacityBar::tr(s, c, static_cast<int>(n));
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
int KCapacityBar_QBaseMetacall(KCapacityBar* self, int param1, int param2, void** param3) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Metacall_IsBase(true);
        return vkcapacitybar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCapacityBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMetacall(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Metacall_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KCapacityBar_QBaseMinimumSizeHint(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MinimumSizeHint_IsBase(true);
        return new QSize(vkcapacitybar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCapacityBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMinimumSizeHint(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KCapacityBar_QBasePaintEvent(KCapacityBar* self, QPaintEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_PaintEvent_IsBase(true);
        vkcapacitybar->paintEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnPaintEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_PaintEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KCapacityBar_QBaseChangeEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ChangeEvent_IsBase(true);
        vkcapacitybar->changeEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnChangeEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ChangeEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCapacityBar_DevType(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->devType();
    } else {
        return self->KCapacityBar::devType();
    }
}

// Base class handler implementation
int KCapacityBar_QBaseDevType(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DevType_IsBase(true);
        return vkcapacitybar->devType();
    } else {
        return self->KCapacityBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDevType(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DevType_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_SetVisible(KCapacityBar* self, bool visible) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setVisible(visible);
    } else {
        self->KCapacityBar::setVisible(visible);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseSetVisible(KCapacityBar* self, bool visible) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SetVisible_IsBase(true);
        vkcapacitybar->setVisible(visible);
    } else {
        self->KCapacityBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSetVisible(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SetVisible_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCapacityBar_SizeHint(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return new QSize(vkcapacitybar->sizeHint());
    } else {
        return new QSize(((VirtualKCapacityBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KCapacityBar_QBaseSizeHint(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SizeHint_IsBase(true);
        return new QSize(vkcapacitybar->sizeHint());
    } else {
        return new QSize(((VirtualKCapacityBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSizeHint(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SizeHint_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KCapacityBar_HeightForWidth(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCapacityBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KCapacityBar_QBaseHeightForWidth(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_HeightForWidth_IsBase(true);
        return vkcapacitybar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCapacityBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnHeightForWidth(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_HeightForWidth_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_HasHeightForWidth(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->hasHeightForWidth();
    } else {
        return self->KCapacityBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseHasHeightForWidth(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_HasHeightForWidth_IsBase(true);
        return vkcapacitybar->hasHeightForWidth();
    } else {
        return self->KCapacityBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnHasHeightForWidth(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KCapacityBar_PaintEngine(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->paintEngine();
    } else {
        return self->KCapacityBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KCapacityBar_QBasePaintEngine(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_PaintEngine_IsBase(true);
        return vkcapacitybar->paintEngine();
    } else {
        return self->KCapacityBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnPaintEngine(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_PaintEngine_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_Event(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->event(event);
    } else {
        return ((VirtualKCapacityBar*)self)->event(event);
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Event_IsBase(true);
        return vkcapacitybar->event(event);
    } else {
        return ((VirtualKCapacityBar*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Event_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_MousePressEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->mousePressEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseMousePressEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MousePressEvent_IsBase(true);
        vkcapacitybar->mousePressEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMousePressEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MousePressEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_MouseReleaseEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->mouseReleaseEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseMouseReleaseEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MouseReleaseEvent_IsBase(true);
        vkcapacitybar->mouseReleaseEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMouseReleaseEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_MouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseMouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MouseDoubleClickEvent_IsBase(true);
        vkcapacitybar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMouseDoubleClickEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_MouseMoveEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->mouseMoveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseMouseMoveEvent(KCapacityBar* self, QMouseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MouseMoveEvent_IsBase(true);
        vkcapacitybar->mouseMoveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMouseMoveEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_WheelEvent(KCapacityBar* self, QWheelEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->wheelEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseWheelEvent(KCapacityBar* self, QWheelEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_WheelEvent_IsBase(true);
        vkcapacitybar->wheelEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnWheelEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_WheelEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_KeyPressEvent(KCapacityBar* self, QKeyEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->keyPressEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseKeyPressEvent(KCapacityBar* self, QKeyEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_KeyPressEvent_IsBase(true);
        vkcapacitybar->keyPressEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnKeyPressEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_KeyPressEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_KeyReleaseEvent(KCapacityBar* self, QKeyEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->keyReleaseEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseKeyReleaseEvent(KCapacityBar* self, QKeyEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_KeyReleaseEvent_IsBase(true);
        vkcapacitybar->keyReleaseEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnKeyReleaseEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_FocusInEvent(KCapacityBar* self, QFocusEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->focusInEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseFocusInEvent(KCapacityBar* self, QFocusEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusInEvent_IsBase(true);
        vkcapacitybar->focusInEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusInEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusInEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_FocusOutEvent(KCapacityBar* self, QFocusEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->focusOutEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseFocusOutEvent(KCapacityBar* self, QFocusEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusOutEvent_IsBase(true);
        vkcapacitybar->focusOutEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusOutEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusOutEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_EnterEvent(KCapacityBar* self, QEnterEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->enterEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseEnterEvent(KCapacityBar* self, QEnterEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_EnterEvent_IsBase(true);
        vkcapacitybar->enterEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnEnterEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_EnterEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_LeaveEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->leaveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseLeaveEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_LeaveEvent_IsBase(true);
        vkcapacitybar->leaveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnLeaveEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_LeaveEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_MoveEvent(KCapacityBar* self, QMoveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->moveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseMoveEvent(KCapacityBar* self, QMoveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MoveEvent_IsBase(true);
        vkcapacitybar->moveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMoveEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_MoveEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_ResizeEvent(KCapacityBar* self, QResizeEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->resizeEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseResizeEvent(KCapacityBar* self, QResizeEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ResizeEvent_IsBase(true);
        vkcapacitybar->resizeEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnResizeEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ResizeEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_CloseEvent(KCapacityBar* self, QCloseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->closeEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseCloseEvent(KCapacityBar* self, QCloseEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_CloseEvent_IsBase(true);
        vkcapacitybar->closeEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnCloseEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_CloseEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_ContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->contextMenuEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ContextMenuEvent_IsBase(true);
        vkcapacitybar->contextMenuEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnContextMenuEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_TabletEvent(KCapacityBar* self, QTabletEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->tabletEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseTabletEvent(KCapacityBar* self, QTabletEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_TabletEvent_IsBase(true);
        vkcapacitybar->tabletEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnTabletEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_TabletEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_ActionEvent(KCapacityBar* self, QActionEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->actionEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseActionEvent(KCapacityBar* self, QActionEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ActionEvent_IsBase(true);
        vkcapacitybar->actionEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnActionEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ActionEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_DragEnterEvent(KCapacityBar* self, QDragEnterEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->dragEnterEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseDragEnterEvent(KCapacityBar* self, QDragEnterEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DragEnterEvent_IsBase(true);
        vkcapacitybar->dragEnterEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDragEnterEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DragEnterEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_DragMoveEvent(KCapacityBar* self, QDragMoveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->dragMoveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseDragMoveEvent(KCapacityBar* self, QDragMoveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DragMoveEvent_IsBase(true);
        vkcapacitybar->dragMoveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDragMoveEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DragMoveEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_DragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->dragLeaveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseDragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DragLeaveEvent_IsBase(true);
        vkcapacitybar->dragLeaveEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDragLeaveEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_DropEvent(KCapacityBar* self, QDropEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->dropEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseDropEvent(KCapacityBar* self, QDropEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DropEvent_IsBase(true);
        vkcapacitybar->dropEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDropEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DropEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_ShowEvent(KCapacityBar* self, QShowEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->showEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseShowEvent(KCapacityBar* self, QShowEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ShowEvent_IsBase(true);
        vkcapacitybar->showEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnShowEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ShowEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_HideEvent(KCapacityBar* self, QHideEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->hideEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseHideEvent(KCapacityBar* self, QHideEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_HideEvent_IsBase(true);
        vkcapacitybar->hideEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnHideEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_HideEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_NativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCapacityBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseNativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_NativeEvent_IsBase(true);
        return vkcapacitybar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCapacityBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnNativeEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_NativeEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCapacityBar_Metric(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCapacityBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KCapacityBar_QBaseMetric(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Metric_IsBase(true);
        return vkcapacitybar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCapacityBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnMetric(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Metric_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_InitPainter(const KCapacityBar* self, QPainter* painter) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->initPainter(painter);
    } else {
        ((VirtualKCapacityBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseInitPainter(const KCapacityBar* self, QPainter* painter) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_InitPainter_IsBase(true);
        vkcapacitybar->initPainter(painter);
    } else {
        ((VirtualKCapacityBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnInitPainter(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_InitPainter_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KCapacityBar_Redirected(const KCapacityBar* self, QPoint* offset) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->redirected(offset);
    } else {
        return ((VirtualKCapacityBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KCapacityBar_QBaseRedirected(const KCapacityBar* self, QPoint* offset) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Redirected_IsBase(true);
        return vkcapacitybar->redirected(offset);
    } else {
        return ((VirtualKCapacityBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnRedirected(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Redirected_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KCapacityBar_SharedPainter(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->sharedPainter();
    } else {
        return ((VirtualKCapacityBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KCapacityBar_QBaseSharedPainter(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SharedPainter_IsBase(true);
        return vkcapacitybar->sharedPainter();
    } else {
        return ((VirtualKCapacityBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSharedPainter(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SharedPainter_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_InputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->inputMethodEvent(param1);
    } else {
        ((VirtualKCapacityBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseInputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_InputMethodEvent_IsBase(true);
        vkcapacitybar->inputMethodEvent(param1);
    } else {
        ((VirtualKCapacityBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnInputMethodEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_InputMethodEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCapacityBar_InputMethodQuery(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return new QVariant(vkcapacitybar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCapacityBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KCapacityBar_QBaseInputMethodQuery(const KCapacityBar* self, int param1) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_InputMethodQuery_IsBase(true);
        return new QVariant(vkcapacitybar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCapacityBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnInputMethodQuery(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_InputMethodQuery_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_FocusNextPrevChild(KCapacityBar* self, bool next) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->focusNextPrevChild(next);
    } else {
        return ((VirtualKCapacityBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseFocusNextPrevChild(KCapacityBar* self, bool next) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusNextPrevChild_IsBase(true);
        return vkcapacitybar->focusNextPrevChild(next);
    } else {
        return ((VirtualKCapacityBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusNextPrevChild(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_EventFilter(KCapacityBar* self, QObject* watched, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->eventFilter(watched, event);
    } else {
        return self->KCapacityBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseEventFilter(KCapacityBar* self, QObject* watched, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_EventFilter_IsBase(true);
        return vkcapacitybar->eventFilter(watched, event);
    } else {
        return self->KCapacityBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnEventFilter(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_EventFilter_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_TimerEvent(KCapacityBar* self, QTimerEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->timerEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseTimerEvent(KCapacityBar* self, QTimerEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_TimerEvent_IsBase(true);
        vkcapacitybar->timerEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnTimerEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_TimerEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_ChildEvent(KCapacityBar* self, QChildEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->childEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseChildEvent(KCapacityBar* self, QChildEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ChildEvent_IsBase(true);
        vkcapacitybar->childEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnChildEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ChildEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_CustomEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->customEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseCustomEvent(KCapacityBar* self, QEvent* event) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_CustomEvent_IsBase(true);
        vkcapacitybar->customEvent(event);
    } else {
        ((VirtualKCapacityBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnCustomEvent(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_CustomEvent_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_ConnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->connectNotify(*signal);
    } else {
        ((VirtualKCapacityBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseConnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ConnectNotify_IsBase(true);
        vkcapacitybar->connectNotify(*signal);
    } else {
        ((VirtualKCapacityBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnConnectNotify(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_ConnectNotify_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_DisconnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->disconnectNotify(*signal);
    } else {
        ((VirtualKCapacityBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCapacityBar_QBaseDisconnectNotify(KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DisconnectNotify_IsBase(true);
        vkcapacitybar->disconnectNotify(*signal);
    } else {
        ((VirtualKCapacityBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDisconnectNotify(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_DisconnectNotify_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_UpdateMicroFocus(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->updateMicroFocus();
    } else {
        ((VirtualKCapacityBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KCapacityBar_QBaseUpdateMicroFocus(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_UpdateMicroFocus_IsBase(true);
        vkcapacitybar->updateMicroFocus();
    } else {
        ((VirtualKCapacityBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnUpdateMicroFocus(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_Create(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->create();
    } else {
        ((VirtualKCapacityBar*)self)->create();
    }
}

// Base class handler implementation
void KCapacityBar_QBaseCreate(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Create_IsBase(true);
        vkcapacitybar->create();
    } else {
        ((VirtualKCapacityBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnCreate(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Create_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KCapacityBar_Destroy(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->destroy();
    } else {
        ((VirtualKCapacityBar*)self)->destroy();
    }
}

// Base class handler implementation
void KCapacityBar_QBaseDestroy(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Destroy_IsBase(true);
        vkcapacitybar->destroy();
    } else {
        ((VirtualKCapacityBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnDestroy(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Destroy_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_FocusNextChild(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->focusNextChild();
    } else {
        return ((VirtualKCapacityBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseFocusNextChild(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusNextChild_IsBase(true);
        return vkcapacitybar->focusNextChild();
    } else {
        return ((VirtualKCapacityBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusNextChild(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusNextChild_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_FocusPreviousChild(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->focusPreviousChild();
    } else {
        return ((VirtualKCapacityBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseFocusPreviousChild(KCapacityBar* self) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusPreviousChild_IsBase(true);
        return vkcapacitybar->focusPreviousChild();
    } else {
        return ((VirtualKCapacityBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnFocusPreviousChild(KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = dynamic_cast<VirtualKCapacityBar*>(self);
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCapacityBar_Sender(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->sender();
    } else {
        return ((VirtualKCapacityBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCapacityBar_QBaseSender(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Sender_IsBase(true);
        return vkcapacitybar->sender();
    } else {
        return ((VirtualKCapacityBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSender(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Sender_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCapacityBar_SenderSignalIndex(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->senderSignalIndex();
    } else {
        return ((VirtualKCapacityBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCapacityBar_QBaseSenderSignalIndex(const KCapacityBar* self) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SenderSignalIndex_IsBase(true);
        return vkcapacitybar->senderSignalIndex();
    } else {
        return ((VirtualKCapacityBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnSenderSignalIndex(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCapacityBar_Receivers(const KCapacityBar* self, const char* signal) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->receivers(signal);
    } else {
        return ((VirtualKCapacityBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCapacityBar_QBaseReceivers(const KCapacityBar* self, const char* signal) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Receivers_IsBase(true);
        return vkcapacitybar->receivers(signal);
    } else {
        return ((VirtualKCapacityBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnReceivers(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_Receivers_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCapacityBar_IsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->isSignalConnected(*signal);
    } else {
        return ((VirtualKCapacityBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCapacityBar_QBaseIsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_IsSignalConnected_IsBase(true);
        return vkcapacitybar->isSignalConnected(*signal);
    } else {
        return ((VirtualKCapacityBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnIsSignalConnected(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_IsSignalConnected_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KCapacityBar_GetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        return vkcapacitybar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCapacityBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KCapacityBar_QBaseGetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_GetDecodedMetricF_IsBase(true);
        return vkcapacitybar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCapacityBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KCapacityBar_OnGetDecodedMetricF(const KCapacityBar* self, intptr_t slot) {
    auto* vkcapacitybar = const_cast<VirtualKCapacityBar*>(dynamic_cast<const VirtualKCapacityBar*>(self));
    if (vkcapacitybar && vkcapacitybar->isVirtualKCapacityBar) {
        vkcapacitybar->setKCapacityBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKCapacityBar::KCapacityBar_GetDecodedMetricF_Callback>(slot));
    }
}

void KCapacityBar_Delete(KCapacityBar* self) {
    delete self;
}
