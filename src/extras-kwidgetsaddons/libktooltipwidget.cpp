#include <KToolTipWidget>
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
#include <QWindow>
#include <ktooltipwidget.h>
#include "libktooltipwidget.h"
#include "libktooltipwidget.hxx"

KToolTipWidget* KToolTipWidget_new(QWidget* parent) {
    return new VirtualKToolTipWidget(parent);
}

KToolTipWidget* KToolTipWidget_new2() {
    return new VirtualKToolTipWidget();
}

QMetaObject* KToolTipWidget_MetaObject(const KToolTipWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolTipWidget_Metacast(KToolTipWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolTipWidget_Metacall(KToolTipWidget* self, int param1, int param2, void** param3) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolTipWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KToolTipWidget_OnMetacall(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Metacall_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KToolTipWidget_QBaseMetacall(KToolTipWidget* self, int param1, int param2, void** param3) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Metacall_IsBase(true);
        return vktooltipwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolTipWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToolTipWidget_Tr(const char* s) {
    QString _ret = KToolTipWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToolTipWidget_ShowAt(KToolTipWidget* self, const QPoint* pos, QWidget* content, QWindow* transientParent) {
    self->showAt(*pos, content, transientParent);
}

void KToolTipWidget_ShowBelow(KToolTipWidget* self, const QRect* rect, QWidget* content, QWindow* transientParent) {
    self->showBelow(*rect, content, transientParent);
}

int KToolTipWidget_HideDelay(const KToolTipWidget* self) {
    return self->hideDelay();
}

void KToolTipWidget_HideLater(KToolTipWidget* self) {
    self->hideLater();
}

void KToolTipWidget_SetHideDelay(KToolTipWidget* self, int delay) {
    self->setHideDelay(static_cast<int>(delay));
}

void KToolTipWidget_Hidden(KToolTipWidget* self) {
    self->hidden();
}

void KToolTipWidget_Connect_Hidden(KToolTipWidget* self, intptr_t slot) {
    void (*slotFunc)(KToolTipWidget*) = reinterpret_cast<void (*)(KToolTipWidget*)>(slot);
    KToolTipWidget::connect(self, &KToolTipWidget::hidden, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KToolTipWidget_Tr2(const char* s, const char* c) {
    QString _ret = KToolTipWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolTipWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToolTipWidget::tr(s, c, static_cast<int>(n));
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
void KToolTipWidget_EnterEvent(KToolTipWidget* self, QEnterEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->enterEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseEnterEvent(KToolTipWidget* self, QEnterEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_EnterEvent_IsBase(true);
        vktooltipwidget->enterEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnEnterEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_EnterEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_HideEvent(KToolTipWidget* self, QHideEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->hideEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseHideEvent(KToolTipWidget* self, QHideEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_HideEvent_IsBase(true);
        vktooltipwidget->hideEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnHideEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_HideEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_LeaveEvent(KToolTipWidget* self, QEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->leaveEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseLeaveEvent(KToolTipWidget* self, QEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_LeaveEvent_IsBase(true);
        vktooltipwidget->leaveEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnLeaveEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_PaintEvent(KToolTipWidget* self, QPaintEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->paintEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBasePaintEvent(KToolTipWidget* self, QPaintEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_PaintEvent_IsBase(true);
        vktooltipwidget->paintEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnPaintEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_PaintEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolTipWidget_DevType(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->devType();
    } else {
        return self->KToolTipWidget::devType();
    }
}

// Base class handler implementation
int KToolTipWidget_QBaseDevType(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DevType_IsBase(true);
        return vktooltipwidget->devType();
    } else {
        return self->KToolTipWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDevType(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DevType_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_SetVisible(KToolTipWidget* self, bool visible) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setVisible(visible);
    } else {
        self->KToolTipWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseSetVisible(KToolTipWidget* self, bool visible) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SetVisible_IsBase(true);
        vktooltipwidget->setVisible(visible);
    } else {
        self->KToolTipWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSetVisible(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SetVisible_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KToolTipWidget_SizeHint(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return new QSize(vktooltipwidget->sizeHint());
    } else {
        return new QSize(((VirtualKToolTipWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KToolTipWidget_QBaseSizeHint(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SizeHint_IsBase(true);
        return new QSize(vktooltipwidget->sizeHint());
    } else {
        return new QSize(((VirtualKToolTipWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSizeHint(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SizeHint_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KToolTipWidget_MinimumSizeHint(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return new QSize(vktooltipwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKToolTipWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KToolTipWidget_QBaseMinimumSizeHint(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vktooltipwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKToolTipWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMinimumSizeHint(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolTipWidget_HeightForWidth(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KToolTipWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KToolTipWidget_QBaseHeightForWidth(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_HeightForWidth_IsBase(true);
        return vktooltipwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KToolTipWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnHeightForWidth(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_HasHeightForWidth(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->hasHeightForWidth();
    } else {
        return self->KToolTipWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseHasHeightForWidth(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_HasHeightForWidth_IsBase(true);
        return vktooltipwidget->hasHeightForWidth();
    } else {
        return self->KToolTipWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnHasHeightForWidth(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KToolTipWidget_PaintEngine(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->paintEngine();
    } else {
        return self->KToolTipWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KToolTipWidget_QBasePaintEngine(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_PaintEngine_IsBase(true);
        return vktooltipwidget->paintEngine();
    } else {
        return self->KToolTipWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnPaintEngine(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_PaintEngine_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_Event(KToolTipWidget* self, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->event(event);
    } else {
        return ((VirtualKToolTipWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseEvent(KToolTipWidget* self, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Event_IsBase(true);
        return vktooltipwidget->event(event);
    } else {
        return ((VirtualKToolTipWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Event_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_MousePressEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->mousePressEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseMousePressEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MousePressEvent_IsBase(true);
        vktooltipwidget->mousePressEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMousePressEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_MouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseMouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MouseReleaseEvent_IsBase(true);
        vktooltipwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMouseReleaseEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_MouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseMouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MouseDoubleClickEvent_IsBase(true);
        vktooltipwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMouseDoubleClickEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_MouseMoveEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseMouseMoveEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MouseMoveEvent_IsBase(true);
        vktooltipwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMouseMoveEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_WheelEvent(KToolTipWidget* self, QWheelEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->wheelEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseWheelEvent(KToolTipWidget* self, QWheelEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_WheelEvent_IsBase(true);
        vktooltipwidget->wheelEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnWheelEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_WheelEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_KeyPressEvent(KToolTipWidget* self, QKeyEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->keyPressEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseKeyPressEvent(KToolTipWidget* self, QKeyEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_KeyPressEvent_IsBase(true);
        vktooltipwidget->keyPressEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnKeyPressEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_KeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseKeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_KeyReleaseEvent_IsBase(true);
        vktooltipwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnKeyReleaseEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_FocusInEvent(KToolTipWidget* self, QFocusEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->focusInEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseFocusInEvent(KToolTipWidget* self, QFocusEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusInEvent_IsBase(true);
        vktooltipwidget->focusInEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusInEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_FocusOutEvent(KToolTipWidget* self, QFocusEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->focusOutEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseFocusOutEvent(KToolTipWidget* self, QFocusEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusOutEvent_IsBase(true);
        vktooltipwidget->focusOutEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusOutEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_MoveEvent(KToolTipWidget* self, QMoveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->moveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseMoveEvent(KToolTipWidget* self, QMoveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MoveEvent_IsBase(true);
        vktooltipwidget->moveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMoveEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_MoveEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ResizeEvent(KToolTipWidget* self, QResizeEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->resizeEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseResizeEvent(KToolTipWidget* self, QResizeEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ResizeEvent_IsBase(true);
        vktooltipwidget->resizeEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnResizeEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_CloseEvent(KToolTipWidget* self, QCloseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->closeEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseCloseEvent(KToolTipWidget* self, QCloseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_CloseEvent_IsBase(true);
        vktooltipwidget->closeEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnCloseEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_CloseEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->contextMenuEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ContextMenuEvent_IsBase(true);
        vktooltipwidget->contextMenuEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnContextMenuEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_TabletEvent(KToolTipWidget* self, QTabletEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->tabletEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseTabletEvent(KToolTipWidget* self, QTabletEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_TabletEvent_IsBase(true);
        vktooltipwidget->tabletEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnTabletEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_TabletEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ActionEvent(KToolTipWidget* self, QActionEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->actionEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseActionEvent(KToolTipWidget* self, QActionEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ActionEvent_IsBase(true);
        vktooltipwidget->actionEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnActionEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ActionEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_DragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->dragEnterEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseDragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DragEnterEvent_IsBase(true);
        vktooltipwidget->dragEnterEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDragEnterEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_DragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->dragMoveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseDragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DragMoveEvent_IsBase(true);
        vktooltipwidget->dragMoveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDragMoveEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_DragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseDragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DragLeaveEvent_IsBase(true);
        vktooltipwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDragLeaveEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_DropEvent(KToolTipWidget* self, QDropEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->dropEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseDropEvent(KToolTipWidget* self, QDropEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DropEvent_IsBase(true);
        vktooltipwidget->dropEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDropEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DropEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ShowEvent(KToolTipWidget* self, QShowEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->showEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseShowEvent(KToolTipWidget* self, QShowEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ShowEvent_IsBase(true);
        vktooltipwidget->showEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnShowEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ShowEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_NativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKToolTipWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseNativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_NativeEvent_IsBase(true);
        return vktooltipwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKToolTipWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnNativeEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_NativeEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ChangeEvent(KToolTipWidget* self, QEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->changeEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseChangeEvent(KToolTipWidget* self, QEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ChangeEvent_IsBase(true);
        vktooltipwidget->changeEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnChangeEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolTipWidget_Metric(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKToolTipWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KToolTipWidget_QBaseMetric(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Metric_IsBase(true);
        return vktooltipwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKToolTipWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMetric(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Metric_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_InitPainter(const KToolTipWidget* self, QPainter* painter) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->initPainter(painter);
    } else {
        ((VirtualKToolTipWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseInitPainter(const KToolTipWidget* self, QPainter* painter) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_InitPainter_IsBase(true);
        vktooltipwidget->initPainter(painter);
    } else {
        ((VirtualKToolTipWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnInitPainter(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_InitPainter_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KToolTipWidget_Redirected(const KToolTipWidget* self, QPoint* offset) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->redirected(offset);
    } else {
        return ((VirtualKToolTipWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KToolTipWidget_QBaseRedirected(const KToolTipWidget* self, QPoint* offset) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Redirected_IsBase(true);
        return vktooltipwidget->redirected(offset);
    } else {
        return ((VirtualKToolTipWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnRedirected(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Redirected_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KToolTipWidget_SharedPainter(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->sharedPainter();
    } else {
        return ((VirtualKToolTipWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KToolTipWidget_QBaseSharedPainter(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SharedPainter_IsBase(true);
        return vktooltipwidget->sharedPainter();
    } else {
        return ((VirtualKToolTipWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSharedPainter(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SharedPainter_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_InputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseInputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_InputMethodEvent_IsBase(true);
        vktooltipwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKToolTipWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnInputMethodEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KToolTipWidget_InputMethodQuery(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return new QVariant(vktooltipwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKToolTipWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KToolTipWidget_QBaseInputMethodQuery(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vktooltipwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKToolTipWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnInputMethodQuery(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_FocusNextPrevChild(KToolTipWidget* self, bool next) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKToolTipWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseFocusNextPrevChild(KToolTipWidget* self, bool next) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusNextPrevChild_IsBase(true);
        return vktooltipwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKToolTipWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusNextPrevChild(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_EventFilter(KToolTipWidget* self, QObject* watched, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->eventFilter(watched, event);
    } else {
        return self->KToolTipWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseEventFilter(KToolTipWidget* self, QObject* watched, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_EventFilter_IsBase(true);
        return vktooltipwidget->eventFilter(watched, event);
    } else {
        return self->KToolTipWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnEventFilter(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_EventFilter_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_TimerEvent(KToolTipWidget* self, QTimerEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->timerEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseTimerEvent(KToolTipWidget* self, QTimerEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_TimerEvent_IsBase(true);
        vktooltipwidget->timerEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnTimerEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_TimerEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ChildEvent(KToolTipWidget* self, QChildEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->childEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseChildEvent(KToolTipWidget* self, QChildEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ChildEvent_IsBase(true);
        vktooltipwidget->childEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnChildEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ChildEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_CustomEvent(KToolTipWidget* self, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->customEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseCustomEvent(KToolTipWidget* self, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_CustomEvent_IsBase(true);
        vktooltipwidget->customEvent(event);
    } else {
        ((VirtualKToolTipWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnCustomEvent(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_CustomEvent_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_ConnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->connectNotify(*signal);
    } else {
        ((VirtualKToolTipWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseConnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ConnectNotify_IsBase(true);
        vktooltipwidget->connectNotify(*signal);
    } else {
        ((VirtualKToolTipWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnConnectNotify(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_DisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKToolTipWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseDisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DisconnectNotify_IsBase(true);
        vktooltipwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKToolTipWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDisconnectNotify(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_UpdateMicroFocus(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->updateMicroFocus();
    } else {
        ((VirtualKToolTipWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseUpdateMicroFocus(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_UpdateMicroFocus_IsBase(true);
        vktooltipwidget->updateMicroFocus();
    } else {
        ((VirtualKToolTipWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnUpdateMicroFocus(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_Create(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->create();
    } else {
        ((VirtualKToolTipWidget*)self)->create();
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseCreate(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Create_IsBase(true);
        vktooltipwidget->create();
    } else {
        ((VirtualKToolTipWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnCreate(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Create_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolTipWidget_Destroy(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->destroy();
    } else {
        ((VirtualKToolTipWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KToolTipWidget_QBaseDestroy(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Destroy_IsBase(true);
        vktooltipwidget->destroy();
    } else {
        ((VirtualKToolTipWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDestroy(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Destroy_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_FocusNextChild(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->focusNextChild();
    } else {
        return ((VirtualKToolTipWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseFocusNextChild(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusNextChild_IsBase(true);
        return vktooltipwidget->focusNextChild();
    } else {
        return ((VirtualKToolTipWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusNextChild(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_FocusPreviousChild(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->focusPreviousChild();
    } else {
        return ((VirtualKToolTipWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseFocusPreviousChild(KToolTipWidget* self) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusPreviousChild_IsBase(true);
        return vktooltipwidget->focusPreviousChild();
    } else {
        return ((VirtualKToolTipWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusPreviousChild(KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToolTipWidget_Sender(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->sender();
    } else {
        return ((VirtualKToolTipWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToolTipWidget_QBaseSender(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Sender_IsBase(true);
        return vktooltipwidget->sender();
    } else {
        return ((VirtualKToolTipWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSender(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Sender_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolTipWidget_SenderSignalIndex(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->senderSignalIndex();
    } else {
        return ((VirtualKToolTipWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToolTipWidget_QBaseSenderSignalIndex(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SenderSignalIndex_IsBase(true);
        return vktooltipwidget->senderSignalIndex();
    } else {
        return ((VirtualKToolTipWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSenderSignalIndex(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolTipWidget_Receivers(const KToolTipWidget* self, const char* signal) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->receivers(signal);
    } else {
        return ((VirtualKToolTipWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToolTipWidget_QBaseReceivers(const KToolTipWidget* self, const char* signal) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Receivers_IsBase(true);
        return vktooltipwidget->receivers(signal);
    } else {
        return ((VirtualKToolTipWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnReceivers(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_Receivers_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolTipWidget_IsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolTipWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToolTipWidget_QBaseIsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_IsSignalConnected_IsBase(true);
        return vktooltipwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolTipWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnIsSignalConnected(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KToolTipWidget_GetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        return vktooltipwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKToolTipWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KToolTipWidget_QBaseGetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_GetDecodedMetricF_IsBase(true);
        return vktooltipwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKToolTipWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnGetDecodedMetricF(const KToolTipWidget* self, intptr_t slot) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget && vktooltipwidget->isVirtualKToolTipWidget) {
        vktooltipwidget->setKToolTipWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KToolTipWidget_Delete(KToolTipWidget* self) {
    delete self;
}
