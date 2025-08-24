#include <KColorButton>
#include <QAbstractButton>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcolorbutton.h>
#include "libkcolorbutton.h"
#include "libkcolorbutton.hxx"

KColorButton* KColorButton_new(QWidget* parent) {
    return new VirtualKColorButton(parent);
}

KColorButton* KColorButton_new2() {
    return new VirtualKColorButton();
}

KColorButton* KColorButton_new3(const QColor* c) {
    return new VirtualKColorButton(*c);
}

KColorButton* KColorButton_new4(const QColor* c, const QColor* defaultColor) {
    return new VirtualKColorButton(*c, *defaultColor);
}

KColorButton* KColorButton_new5(const QColor* c, QWidget* parent) {
    return new VirtualKColorButton(*c, parent);
}

KColorButton* KColorButton_new6(const QColor* c, const QColor* defaultColor, QWidget* parent) {
    return new VirtualKColorButton(*c, *defaultColor, parent);
}

QMetaObject* KColorButton_MetaObject(const KColorButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorButton_Metacast(KColorButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorButton_Metacall(KColorButton* self, int param1, int param2, void** param3) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KColorButton_OnMetacall(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Metacall_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KColorButton_QBaseMetacall(KColorButton* self, int param1, int param2, void** param3) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Metacall_IsBase(true);
        return vkcolorbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KColorButton_Tr(const char* s) {
    QString _ret = KColorButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* KColorButton_Color(const KColorButton* self) {
    return new QColor(self->color());
}

void KColorButton_SetColor(KColorButton* self, const QColor* c) {
    self->setColor(*c);
}

void KColorButton_SetAlphaChannelEnabled(KColorButton* self, bool alpha) {
    self->setAlphaChannelEnabled(alpha);
}

bool KColorButton_IsAlphaChannelEnabled(const KColorButton* self) {
    return self->isAlphaChannelEnabled();
}

QColor* KColorButton_DefaultColor(const KColorButton* self) {
    return new QColor(self->defaultColor());
}

void KColorButton_SetDefaultColor(KColorButton* self, const QColor* c) {
    self->setDefaultColor(*c);
}

void KColorButton_Changed(KColorButton* self, const QColor* newColor) {
    self->changed(*newColor);
}

void KColorButton_Connect_Changed(KColorButton* self, intptr_t slot) {
    void (*slotFunc)(KColorButton*, QColor*) = reinterpret_cast<void (*)(KColorButton*, QColor*)>(slot);
    KColorButton::connect(self, &KColorButton::changed, [self, slotFunc](const QColor& newColor) {
        const QColor& newColor_ret = newColor;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&newColor_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KColorButton_Tr2(const char* s, const char* c) {
    QString _ret = KColorButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = KColorButton::tr(s, c, static_cast<int>(n));
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
QSize* KColorButton_SizeHint(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return new QSize(vkcolorbutton->sizeHint());
    } else {
        return new QSize(((VirtualKColorButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KColorButton_QBaseSizeHint(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SizeHint_IsBase(true);
        return new QSize(vkcolorbutton->sizeHint());
    } else {
        return new QSize(((VirtualKColorButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSizeHint(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SizeHint_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KColorButton_MinimumSizeHint(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return new QSize(vkcolorbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKColorButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KColorButton_QBaseMinimumSizeHint(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MinimumSizeHint_IsBase(true);
        return new QSize(vkcolorbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKColorButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMinimumSizeHint(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_PaintEvent(KColorButton* self, QPaintEvent* pe) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->paintEvent(pe);
    } else {
        ((VirtualKColorButton*)self)->paintEvent(pe);
    }
}

// Base class handler implementation
void KColorButton_QBasePaintEvent(KColorButton* self, QPaintEvent* pe) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_PaintEvent_IsBase(true);
        vkcolorbutton->paintEvent(pe);
    } else {
        ((VirtualKColorButton*)self)->paintEvent(pe);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnPaintEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_PaintEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_DragEnterEvent(KColorButton* self, QDragEnterEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->dragEnterEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void KColorButton_QBaseDragEnterEvent(KColorButton* self, QDragEnterEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DragEnterEvent_IsBase(true);
        vkcolorbutton->dragEnterEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDragEnterEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DragEnterEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_DropEvent(KColorButton* self, QDropEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->dropEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void KColorButton_QBaseDropEvent(KColorButton* self, QDropEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DropEvent_IsBase(true);
        vkcolorbutton->dropEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDropEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DropEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_MousePressEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->mousePressEvent(e);
    } else {
        ((VirtualKColorButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseMousePressEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MousePressEvent_IsBase(true);
        vkcolorbutton->mousePressEvent(e);
    } else {
        ((VirtualKColorButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMousePressEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MousePressEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_MouseMoveEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKColorButton*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseMouseMoveEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MouseMoveEvent_IsBase(true);
        vkcolorbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKColorButton*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMouseMoveEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_KeyPressEvent(KColorButton* self, QKeyEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->keyPressEvent(e);
    } else {
        ((VirtualKColorButton*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseKeyPressEvent(KColorButton* self, QKeyEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_KeyPressEvent_IsBase(true);
        vkcolorbutton->keyPressEvent(e);
    } else {
        ((VirtualKColorButton*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnKeyPressEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_KeyPressEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_Event(KColorButton* self, QEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->event(e);
    } else {
        return ((VirtualKColorButton*)self)->event(e);
    }
}

// Base class handler implementation
bool KColorButton_QBaseEvent(KColorButton* self, QEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Event_IsBase(true);
        return vkcolorbutton->event(e);
    } else {
        return ((VirtualKColorButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Event_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_FocusInEvent(KColorButton* self, QFocusEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->focusInEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KColorButton_QBaseFocusInEvent(KColorButton* self, QFocusEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusInEvent_IsBase(true);
        vkcolorbutton->focusInEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusInEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusInEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_FocusOutEvent(KColorButton* self, QFocusEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->focusOutEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void KColorButton_QBaseFocusOutEvent(KColorButton* self, QFocusEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusOutEvent_IsBase(true);
        vkcolorbutton->focusOutEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusOutEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusOutEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_InitStyleOption(const KColorButton* self, QStyleOptionButton* option) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->initStyleOption(option);
    } else {
        ((VirtualKColorButton*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KColorButton_QBaseInitStyleOption(const KColorButton* self, QStyleOptionButton* option) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InitStyleOption_IsBase(true);
        vkcolorbutton->initStyleOption(option);
    } else {
        ((VirtualKColorButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInitStyleOption(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InitStyleOption_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_HitButton(const KColorButton* self, const QPoint* pos) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->hitButton(*pos);
    } else {
        return ((VirtualKColorButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool KColorButton_QBaseHitButton(const KColorButton* self, const QPoint* pos) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HitButton_IsBase(true);
        return vkcolorbutton->hitButton(*pos);
    } else {
        return ((VirtualKColorButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHitButton(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HitButton_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_CheckStateSet(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->checkStateSet();
    } else {
        ((VirtualKColorButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void KColorButton_QBaseCheckStateSet(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_CheckStateSet_IsBase(true);
        vkcolorbutton->checkStateSet();
    } else {
        ((VirtualKColorButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCheckStateSet(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_CheckStateSet_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_NextCheckState(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->nextCheckState();
    } else {
        ((VirtualKColorButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void KColorButton_QBaseNextCheckState(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_NextCheckState_IsBase(true);
        vkcolorbutton->nextCheckState();
    } else {
        ((VirtualKColorButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnNextCheckState(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_NextCheckState_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_KeyReleaseEvent(KColorButton* self, QKeyEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKColorButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseKeyReleaseEvent(KColorButton* self, QKeyEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_KeyReleaseEvent_IsBase(true);
        vkcolorbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKColorButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnKeyReleaseEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_MouseReleaseEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualKColorButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseMouseReleaseEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MouseReleaseEvent_IsBase(true);
        vkcolorbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualKColorButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMouseReleaseEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ChangeEvent(KColorButton* self, QEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->changeEvent(e);
    } else {
        ((VirtualKColorButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseChangeEvent(KColorButton* self, QEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ChangeEvent_IsBase(true);
        vkcolorbutton->changeEvent(e);
    } else {
        ((VirtualKColorButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnChangeEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ChangeEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_TimerEvent(KColorButton* self, QTimerEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->timerEvent(e);
    } else {
        ((VirtualKColorButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KColorButton_QBaseTimerEvent(KColorButton* self, QTimerEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_TimerEvent_IsBase(true);
        vkcolorbutton->timerEvent(e);
    } else {
        ((VirtualKColorButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnTimerEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_TimerEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorButton_DevType(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->devType();
    } else {
        return self->KColorButton::devType();
    }
}

// Base class handler implementation
int KColorButton_QBaseDevType(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DevType_IsBase(true);
        return vkcolorbutton->devType();
    } else {
        return self->KColorButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDevType(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DevType_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_SetVisible(KColorButton* self, bool visible) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setVisible(visible);
    } else {
        self->KColorButton::setVisible(visible);
    }
}

// Base class handler implementation
void KColorButton_QBaseSetVisible(KColorButton* self, bool visible) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SetVisible_IsBase(true);
        vkcolorbutton->setVisible(visible);
    } else {
        self->KColorButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSetVisible(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SetVisible_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorButton_HeightForWidth(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KColorButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KColorButton_QBaseHeightForWidth(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HeightForWidth_IsBase(true);
        return vkcolorbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KColorButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHeightForWidth(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HeightForWidth_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_HasHeightForWidth(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->hasHeightForWidth();
    } else {
        return self->KColorButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KColorButton_QBaseHasHeightForWidth(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HasHeightForWidth_IsBase(true);
        return vkcolorbutton->hasHeightForWidth();
    } else {
        return self->KColorButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHasHeightForWidth(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KColorButton_PaintEngine(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->paintEngine();
    } else {
        return self->KColorButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KColorButton_QBasePaintEngine(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_PaintEngine_IsBase(true);
        return vkcolorbutton->paintEngine();
    } else {
        return self->KColorButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnPaintEngine(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_PaintEngine_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_MouseDoubleClickEvent(KColorButton* self, QMouseEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKColorButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseMouseDoubleClickEvent(KColorButton* self, QMouseEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MouseDoubleClickEvent_IsBase(true);
        vkcolorbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKColorButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMouseDoubleClickEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_WheelEvent(KColorButton* self, QWheelEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->wheelEvent(event);
    } else {
        ((VirtualKColorButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseWheelEvent(KColorButton* self, QWheelEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_WheelEvent_IsBase(true);
        vkcolorbutton->wheelEvent(event);
    } else {
        ((VirtualKColorButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnWheelEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_WheelEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_EnterEvent(KColorButton* self, QEnterEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->enterEvent(event);
    } else {
        ((VirtualKColorButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseEnterEvent(KColorButton* self, QEnterEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_EnterEvent_IsBase(true);
        vkcolorbutton->enterEvent(event);
    } else {
        ((VirtualKColorButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnEnterEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_EnterEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_LeaveEvent(KColorButton* self, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->leaveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseLeaveEvent(KColorButton* self, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_LeaveEvent_IsBase(true);
        vkcolorbutton->leaveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnLeaveEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_LeaveEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_MoveEvent(KColorButton* self, QMoveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->moveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseMoveEvent(KColorButton* self, QMoveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MoveEvent_IsBase(true);
        vkcolorbutton->moveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMoveEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_MoveEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ResizeEvent(KColorButton* self, QResizeEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->resizeEvent(event);
    } else {
        ((VirtualKColorButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseResizeEvent(KColorButton* self, QResizeEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ResizeEvent_IsBase(true);
        vkcolorbutton->resizeEvent(event);
    } else {
        ((VirtualKColorButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnResizeEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ResizeEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_CloseEvent(KColorButton* self, QCloseEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->closeEvent(event);
    } else {
        ((VirtualKColorButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseCloseEvent(KColorButton* self, QCloseEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_CloseEvent_IsBase(true);
        vkcolorbutton->closeEvent(event);
    } else {
        ((VirtualKColorButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCloseEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_CloseEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ContextMenuEvent(KColorButton* self, QContextMenuEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->contextMenuEvent(event);
    } else {
        ((VirtualKColorButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseContextMenuEvent(KColorButton* self, QContextMenuEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ContextMenuEvent_IsBase(true);
        vkcolorbutton->contextMenuEvent(event);
    } else {
        ((VirtualKColorButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnContextMenuEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_TabletEvent(KColorButton* self, QTabletEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->tabletEvent(event);
    } else {
        ((VirtualKColorButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseTabletEvent(KColorButton* self, QTabletEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_TabletEvent_IsBase(true);
        vkcolorbutton->tabletEvent(event);
    } else {
        ((VirtualKColorButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnTabletEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_TabletEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ActionEvent(KColorButton* self, QActionEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->actionEvent(event);
    } else {
        ((VirtualKColorButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseActionEvent(KColorButton* self, QActionEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ActionEvent_IsBase(true);
        vkcolorbutton->actionEvent(event);
    } else {
        ((VirtualKColorButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnActionEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ActionEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_DragMoveEvent(KColorButton* self, QDragMoveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->dragMoveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseDragMoveEvent(KColorButton* self, QDragMoveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DragMoveEvent_IsBase(true);
        vkcolorbutton->dragMoveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDragMoveEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DragMoveEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_DragLeaveEvent(KColorButton* self, QDragLeaveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseDragLeaveEvent(KColorButton* self, QDragLeaveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DragLeaveEvent_IsBase(true);
        vkcolorbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKColorButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDragLeaveEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ShowEvent(KColorButton* self, QShowEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->showEvent(event);
    } else {
        ((VirtualKColorButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseShowEvent(KColorButton* self, QShowEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ShowEvent_IsBase(true);
        vkcolorbutton->showEvent(event);
    } else {
        ((VirtualKColorButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnShowEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ShowEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_HideEvent(KColorButton* self, QHideEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->hideEvent(event);
    } else {
        ((VirtualKColorButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseHideEvent(KColorButton* self, QHideEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HideEvent_IsBase(true);
        vkcolorbutton->hideEvent(event);
    } else {
        ((VirtualKColorButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHideEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_HideEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_NativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKColorButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KColorButton_QBaseNativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_NativeEvent_IsBase(true);
        return vkcolorbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKColorButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnNativeEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_NativeEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorButton_Metric(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKColorButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KColorButton_QBaseMetric(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Metric_IsBase(true);
        return vkcolorbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKColorButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMetric(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Metric_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_InitPainter(const KColorButton* self, QPainter* painter) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->initPainter(painter);
    } else {
        ((VirtualKColorButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KColorButton_QBaseInitPainter(const KColorButton* self, QPainter* painter) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InitPainter_IsBase(true);
        vkcolorbutton->initPainter(painter);
    } else {
        ((VirtualKColorButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInitPainter(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InitPainter_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KColorButton_Redirected(const KColorButton* self, QPoint* offset) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->redirected(offset);
    } else {
        return ((VirtualKColorButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KColorButton_QBaseRedirected(const KColorButton* self, QPoint* offset) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Redirected_IsBase(true);
        return vkcolorbutton->redirected(offset);
    } else {
        return ((VirtualKColorButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnRedirected(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Redirected_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KColorButton_SharedPainter(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->sharedPainter();
    } else {
        return ((VirtualKColorButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KColorButton_QBaseSharedPainter(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SharedPainter_IsBase(true);
        return vkcolorbutton->sharedPainter();
    } else {
        return ((VirtualKColorButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSharedPainter(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SharedPainter_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_InputMethodEvent(KColorButton* self, QInputMethodEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KColorButton_QBaseInputMethodEvent(KColorButton* self, QInputMethodEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InputMethodEvent_IsBase(true);
        vkcolorbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKColorButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInputMethodEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InputMethodEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KColorButton_InputMethodQuery(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return new QVariant(vkcolorbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKColorButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KColorButton_QBaseInputMethodQuery(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InputMethodQuery_IsBase(true);
        return new QVariant(vkcolorbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKColorButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInputMethodQuery(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_InputMethodQuery_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_FocusNextPrevChild(KColorButton* self, bool next) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKColorButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KColorButton_QBaseFocusNextPrevChild(KColorButton* self, bool next) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusNextPrevChild_IsBase(true);
        return vkcolorbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKColorButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusNextPrevChild(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_EventFilter(KColorButton* self, QObject* watched, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->eventFilter(watched, event);
    } else {
        return self->KColorButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KColorButton_QBaseEventFilter(KColorButton* self, QObject* watched, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_EventFilter_IsBase(true);
        return vkcolorbutton->eventFilter(watched, event);
    } else {
        return self->KColorButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnEventFilter(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_EventFilter_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ChildEvent(KColorButton* self, QChildEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->childEvent(event);
    } else {
        ((VirtualKColorButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseChildEvent(KColorButton* self, QChildEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ChildEvent_IsBase(true);
        vkcolorbutton->childEvent(event);
    } else {
        ((VirtualKColorButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnChildEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ChildEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_CustomEvent(KColorButton* self, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->customEvent(event);
    } else {
        ((VirtualKColorButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColorButton_QBaseCustomEvent(KColorButton* self, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_CustomEvent_IsBase(true);
        vkcolorbutton->customEvent(event);
    } else {
        ((VirtualKColorButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCustomEvent(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_CustomEvent_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_ConnectNotify(KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->connectNotify(*signal);
    } else {
        ((VirtualKColorButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColorButton_QBaseConnectNotify(KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ConnectNotify_IsBase(true);
        vkcolorbutton->connectNotify(*signal);
    } else {
        ((VirtualKColorButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnConnectNotify(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_ConnectNotify_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_DisconnectNotify(KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKColorButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColorButton_QBaseDisconnectNotify(KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DisconnectNotify_IsBase(true);
        vkcolorbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKColorButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDisconnectNotify(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_DisconnectNotify_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_UpdateMicroFocus(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->updateMicroFocus();
    } else {
        ((VirtualKColorButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KColorButton_QBaseUpdateMicroFocus(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_UpdateMicroFocus_IsBase(true);
        vkcolorbutton->updateMicroFocus();
    } else {
        ((VirtualKColorButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnUpdateMicroFocus(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_Create(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->create();
    } else {
        ((VirtualKColorButton*)self)->create();
    }
}

// Base class handler implementation
void KColorButton_QBaseCreate(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Create_IsBase(true);
        vkcolorbutton->create();
    } else {
        ((VirtualKColorButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCreate(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Create_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorButton_Destroy(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->destroy();
    } else {
        ((VirtualKColorButton*)self)->destroy();
    }
}

// Base class handler implementation
void KColorButton_QBaseDestroy(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Destroy_IsBase(true);
        vkcolorbutton->destroy();
    } else {
        ((VirtualKColorButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDestroy(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Destroy_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_FocusNextChild(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->focusNextChild();
    } else {
        return ((VirtualKColorButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KColorButton_QBaseFocusNextChild(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusNextChild_IsBase(true);
        return vkcolorbutton->focusNextChild();
    } else {
        return ((VirtualKColorButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusNextChild(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusNextChild_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_FocusPreviousChild(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->focusPreviousChild();
    } else {
        return ((VirtualKColorButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KColorButton_QBaseFocusPreviousChild(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusPreviousChild_IsBase(true);
        return vkcolorbutton->focusPreviousChild();
    } else {
        return ((VirtualKColorButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusPreviousChild(KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColorButton_Sender(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->sender();
    } else {
        return ((VirtualKColorButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColorButton_QBaseSender(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Sender_IsBase(true);
        return vkcolorbutton->sender();
    } else {
        return ((VirtualKColorButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSender(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Sender_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorButton_SenderSignalIndex(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->senderSignalIndex();
    } else {
        return ((VirtualKColorButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColorButton_QBaseSenderSignalIndex(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SenderSignalIndex_IsBase(true);
        return vkcolorbutton->senderSignalIndex();
    } else {
        return ((VirtualKColorButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSenderSignalIndex(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorButton_Receivers(const KColorButton* self, const char* signal) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->receivers(signal);
    } else {
        return ((VirtualKColorButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColorButton_QBaseReceivers(const KColorButton* self, const char* signal) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Receivers_IsBase(true);
        return vkcolorbutton->receivers(signal);
    } else {
        return ((VirtualKColorButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnReceivers(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_Receivers_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorButton_IsSignalConnected(const KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColorButton_QBaseIsSignalConnected(const KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_IsSignalConnected_IsBase(true);
        return vkcolorbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnIsSignalConnected(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_IsSignalConnected_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KColorButton_GetDecodedMetricF(const KColorButton* self, int metricA, int metricB) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        return vkcolorbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKColorButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KColorButton_QBaseGetDecodedMetricF(const KColorButton* self, int metricA, int metricB) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_GetDecodedMetricF_IsBase(true);
        return vkcolorbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKColorButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnGetDecodedMetricF(const KColorButton* self, intptr_t slot) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton && vkcolorbutton->isVirtualKColorButton) {
        vkcolorbutton->setKColorButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKColorButton::KColorButton_GetDecodedMetricF_Callback>(slot));
    }
}

void KColorButton_Delete(KColorButton* self) {
    delete self;
}
