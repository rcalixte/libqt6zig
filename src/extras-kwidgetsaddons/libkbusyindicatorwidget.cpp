#include <KBusyIndicatorWidget>
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
#include <kbusyindicatorwidget.h>
#include "libkbusyindicatorwidget.h"
#include "libkbusyindicatorwidget.hxx"

KBusyIndicatorWidget* KBusyIndicatorWidget_new(QWidget* parent) {
    return new VirtualKBusyIndicatorWidget(parent);
}

KBusyIndicatorWidget* KBusyIndicatorWidget_new2() {
    return new VirtualKBusyIndicatorWidget();
}

QMetaObject* KBusyIndicatorWidget_MetaObject(const KBusyIndicatorWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBusyIndicatorWidget_Metacast(KBusyIndicatorWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBusyIndicatorWidget_Metacall(KBusyIndicatorWidget* self, int param1, int param2, void** param3) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KBusyIndicatorWidget_OnMetacall(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Metacall_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KBusyIndicatorWidget_QBaseMetacall(KBusyIndicatorWidget* self, int param1, int param2, void** param3) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Metacall_IsBase(true);
        return vkbusyindicatorwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBusyIndicatorWidget_Tr(const char* s) {
    QString _ret = KBusyIndicatorWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KBusyIndicatorWidget_IsRunning(const KBusyIndicatorWidget* self) {
    return self->isRunning();
}

void KBusyIndicatorWidget_Start(KBusyIndicatorWidget* self) {
    self->start();
}

void KBusyIndicatorWidget_Stop(KBusyIndicatorWidget* self) {
    self->stop();
}

void KBusyIndicatorWidget_SetRunning(KBusyIndicatorWidget* self) {
    self->setRunning();
}

libqt_string KBusyIndicatorWidget_Tr2(const char* s, const char* c) {
    QString _ret = KBusyIndicatorWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBusyIndicatorWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = KBusyIndicatorWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBusyIndicatorWidget_SetRunning1(KBusyIndicatorWidget* self, const bool enable) {
    self->setRunning(enable);
}

// Derived class handler implementation
QSize* KBusyIndicatorWidget_MinimumSizeHint(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return new QSize(vkbusyindicatorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBusyIndicatorWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KBusyIndicatorWidget_QBaseMinimumSizeHint(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkbusyindicatorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBusyIndicatorWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMinimumSizeHint(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ShowEvent(KBusyIndicatorWidget* self, QShowEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->showEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseShowEvent(KBusyIndicatorWidget* self, QShowEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ShowEvent_IsBase(true);
        vkbusyindicatorwidget->showEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnShowEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ShowEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_HideEvent(KBusyIndicatorWidget* self, QHideEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->hideEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseHideEvent(KBusyIndicatorWidget* self, QHideEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_HideEvent_IsBase(true);
        vkbusyindicatorwidget->hideEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnHideEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_HideEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->resizeEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ResizeEvent_IsBase(true);
        vkbusyindicatorwidget->resizeEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnResizeEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_PaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->paintEvent(param1);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBasePaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_PaintEvent_IsBase(true);
        vkbusyindicatorwidget->paintEvent(param1);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnPaintEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_PaintEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_Event(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->event(event);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Event_IsBase(true);
        return vkbusyindicatorwidget->event(event);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Event_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int KBusyIndicatorWidget_DevType(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->devType();
    } else {
        return self->KBusyIndicatorWidget::devType();
    }
}

// Base class handler implementation
int KBusyIndicatorWidget_QBaseDevType(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DevType_IsBase(true);
        return vkbusyindicatorwidget->devType();
    } else {
        return self->KBusyIndicatorWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDevType(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DevType_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_SetVisible(KBusyIndicatorWidget* self, bool visible) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setVisible(visible);
    } else {
        self->KBusyIndicatorWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseSetVisible(KBusyIndicatorWidget* self, bool visible) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SetVisible_IsBase(true);
        vkbusyindicatorwidget->setVisible(visible);
    } else {
        self->KBusyIndicatorWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSetVisible(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SetVisible_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBusyIndicatorWidget_SizeHint(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return new QSize(vkbusyindicatorwidget->sizeHint());
    } else {
        return new QSize(((VirtualKBusyIndicatorWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KBusyIndicatorWidget_QBaseSizeHint(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SizeHint_IsBase(true);
        return new QSize(vkbusyindicatorwidget->sizeHint());
    } else {
        return new QSize(((VirtualKBusyIndicatorWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSizeHint(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SizeHint_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KBusyIndicatorWidget_HeightForWidth(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBusyIndicatorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KBusyIndicatorWidget_QBaseHeightForWidth(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_HeightForWidth_IsBase(true);
        return vkbusyindicatorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBusyIndicatorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnHeightForWidth(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_HasHeightForWidth(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->hasHeightForWidth();
    } else {
        return self->KBusyIndicatorWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseHasHeightForWidth(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_HasHeightForWidth_IsBase(true);
        return vkbusyindicatorwidget->hasHeightForWidth();
    } else {
        return self->KBusyIndicatorWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnHasHeightForWidth(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KBusyIndicatorWidget_PaintEngine(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->paintEngine();
    } else {
        return self->KBusyIndicatorWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KBusyIndicatorWidget_QBasePaintEngine(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_PaintEngine_IsBase(true);
        return vkbusyindicatorwidget->paintEngine();
    } else {
        return self->KBusyIndicatorWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnPaintEngine(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_PaintEngine_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_MousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->mousePressEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseMousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MousePressEvent_IsBase(true);
        vkbusyindicatorwidget->mousePressEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMousePressEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_MouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseMouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MouseReleaseEvent_IsBase(true);
        vkbusyindicatorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMouseReleaseEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_MouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseMouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MouseDoubleClickEvent_IsBase(true);
        vkbusyindicatorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMouseDoubleClickEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_MouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseMouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MouseMoveEvent_IsBase(true);
        vkbusyindicatorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMouseMoveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_WheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->wheelEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseWheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_WheelEvent_IsBase(true);
        vkbusyindicatorwidget->wheelEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnWheelEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_WheelEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_KeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->keyPressEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseKeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_KeyPressEvent_IsBase(true);
        vkbusyindicatorwidget->keyPressEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnKeyPressEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_KeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseKeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_KeyReleaseEvent_IsBase(true);
        vkbusyindicatorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnKeyReleaseEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_FocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->focusInEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseFocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusInEvent_IsBase(true);
        vkbusyindicatorwidget->focusInEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusInEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_FocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->focusOutEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseFocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusOutEvent_IsBase(true);
        vkbusyindicatorwidget->focusOutEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusOutEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_EnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->enterEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseEnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_EnterEvent_IsBase(true);
        vkbusyindicatorwidget->enterEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnEnterEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_EnterEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_LeaveEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->leaveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseLeaveEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_LeaveEvent_IsBase(true);
        vkbusyindicatorwidget->leaveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnLeaveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_MoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->moveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseMoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MoveEvent_IsBase(true);
        vkbusyindicatorwidget->moveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMoveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_MoveEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_CloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->closeEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseCloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_CloseEvent_IsBase(true);
        vkbusyindicatorwidget->closeEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnCloseEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_CloseEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->contextMenuEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ContextMenuEvent_IsBase(true);
        vkbusyindicatorwidget->contextMenuEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnContextMenuEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_TabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->tabletEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseTabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_TabletEvent_IsBase(true);
        vkbusyindicatorwidget->tabletEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnTabletEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_TabletEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ActionEvent(KBusyIndicatorWidget* self, QActionEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->actionEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseActionEvent(KBusyIndicatorWidget* self, QActionEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ActionEvent_IsBase(true);
        vkbusyindicatorwidget->actionEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnActionEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ActionEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_DragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->dragEnterEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseDragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DragEnterEvent_IsBase(true);
        vkbusyindicatorwidget->dragEnterEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDragEnterEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_DragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->dragMoveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseDragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DragMoveEvent_IsBase(true);
        vkbusyindicatorwidget->dragMoveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDragMoveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_DragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseDragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DragLeaveEvent_IsBase(true);
        vkbusyindicatorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDragLeaveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_DropEvent(KBusyIndicatorWidget* self, QDropEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->dropEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseDropEvent(KBusyIndicatorWidget* self, QDropEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DropEvent_IsBase(true);
        vkbusyindicatorwidget->dropEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDropEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DropEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_NativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseNativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_NativeEvent_IsBase(true);
        return vkbusyindicatorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnNativeEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_NativeEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ChangeEvent(KBusyIndicatorWidget* self, QEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->changeEvent(param1);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseChangeEvent(KBusyIndicatorWidget* self, QEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ChangeEvent_IsBase(true);
        vkbusyindicatorwidget->changeEvent(param1);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnChangeEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KBusyIndicatorWidget_Metric(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KBusyIndicatorWidget_QBaseMetric(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Metric_IsBase(true);
        return vkbusyindicatorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMetric(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Metric_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_InitPainter(const KBusyIndicatorWidget* self, QPainter* painter) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->initPainter(painter);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseInitPainter(const KBusyIndicatorWidget* self, QPainter* painter) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_InitPainter_IsBase(true);
        vkbusyindicatorwidget->initPainter(painter);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnInitPainter(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_InitPainter_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KBusyIndicatorWidget_Redirected(const KBusyIndicatorWidget* self, QPoint* offset) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->redirected(offset);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KBusyIndicatorWidget_QBaseRedirected(const KBusyIndicatorWidget* self, QPoint* offset) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Redirected_IsBase(true);
        return vkbusyindicatorwidget->redirected(offset);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnRedirected(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Redirected_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KBusyIndicatorWidget_SharedPainter(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->sharedPainter();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KBusyIndicatorWidget_QBaseSharedPainter(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SharedPainter_IsBase(true);
        return vkbusyindicatorwidget->sharedPainter();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSharedPainter(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SharedPainter_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_InputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseInputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_InputMethodEvent_IsBase(true);
        vkbusyindicatorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnInputMethodEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KBusyIndicatorWidget_InputMethodQuery(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return new QVariant(vkbusyindicatorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBusyIndicatorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KBusyIndicatorWidget_QBaseInputMethodQuery(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkbusyindicatorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBusyIndicatorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnInputMethodQuery(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_FocusNextPrevChild(KBusyIndicatorWidget* self, bool next) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseFocusNextPrevChild(KBusyIndicatorWidget* self, bool next) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusNextPrevChild_IsBase(true);
        return vkbusyindicatorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusNextPrevChild(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_EventFilter(KBusyIndicatorWidget* self, QObject* watched, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->eventFilter(watched, event);
    } else {
        return self->KBusyIndicatorWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseEventFilter(KBusyIndicatorWidget* self, QObject* watched, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_EventFilter_IsBase(true);
        return vkbusyindicatorwidget->eventFilter(watched, event);
    } else {
        return self->KBusyIndicatorWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnEventFilter(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_EventFilter_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_TimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->timerEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseTimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_TimerEvent_IsBase(true);
        vkbusyindicatorwidget->timerEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnTimerEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_TimerEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ChildEvent(KBusyIndicatorWidget* self, QChildEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->childEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseChildEvent(KBusyIndicatorWidget* self, QChildEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ChildEvent_IsBase(true);
        vkbusyindicatorwidget->childEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnChildEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ChildEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_CustomEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->customEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseCustomEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_CustomEvent_IsBase(true);
        vkbusyindicatorwidget->customEvent(event);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnCustomEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_CustomEvent_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_ConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->connectNotify(*signal);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ConnectNotify_IsBase(true);
        vkbusyindicatorwidget->connectNotify(*signal);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnConnectNotify(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_DisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseDisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DisconnectNotify_IsBase(true);
        vkbusyindicatorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDisconnectNotify(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_UpdateMicroFocus(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->updateMicroFocus();
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseUpdateMicroFocus(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_UpdateMicroFocus_IsBase(true);
        vkbusyindicatorwidget->updateMicroFocus();
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnUpdateMicroFocus(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_Create(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->create();
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->create();
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseCreate(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Create_IsBase(true);
        vkbusyindicatorwidget->create();
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnCreate(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Create_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KBusyIndicatorWidget_Destroy(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->destroy();
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_QBaseDestroy(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Destroy_IsBase(true);
        vkbusyindicatorwidget->destroy();
    } else {
        ((VirtualKBusyIndicatorWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDestroy(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Destroy_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_FocusNextChild(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->focusNextChild();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseFocusNextChild(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusNextChild_IsBase(true);
        return vkbusyindicatorwidget->focusNextChild();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusNextChild(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_FocusPreviousChild(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->focusPreviousChild();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseFocusPreviousChild(KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusPreviousChild_IsBase(true);
        return vkbusyindicatorwidget->focusPreviousChild();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusPreviousChild(KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBusyIndicatorWidget_Sender(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->sender();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBusyIndicatorWidget_QBaseSender(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Sender_IsBase(true);
        return vkbusyindicatorwidget->sender();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSender(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Sender_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBusyIndicatorWidget_SenderSignalIndex(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->senderSignalIndex();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBusyIndicatorWidget_QBaseSenderSignalIndex(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SenderSignalIndex_IsBase(true);
        return vkbusyindicatorwidget->senderSignalIndex();
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSenderSignalIndex(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBusyIndicatorWidget_Receivers(const KBusyIndicatorWidget* self, const char* signal) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->receivers(signal);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBusyIndicatorWidget_QBaseReceivers(const KBusyIndicatorWidget* self, const char* signal) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Receivers_IsBase(true);
        return vkbusyindicatorwidget->receivers(signal);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnReceivers(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_Receivers_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBusyIndicatorWidget_IsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_QBaseIsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_IsSignalConnected_IsBase(true);
        return vkbusyindicatorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnIsSignalConnected(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KBusyIndicatorWidget_GetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        return vkbusyindicatorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KBusyIndicatorWidget_QBaseGetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_GetDecodedMetricF_IsBase(true);
        return vkbusyindicatorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBusyIndicatorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnGetDecodedMetricF(const KBusyIndicatorWidget* self, intptr_t slot) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget && vkbusyindicatorwidget->isVirtualKBusyIndicatorWidget) {
        vkbusyindicatorwidget->setKBusyIndicatorWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KBusyIndicatorWidget_Delete(KBusyIndicatorWidget* self) {
    delete self;
}
