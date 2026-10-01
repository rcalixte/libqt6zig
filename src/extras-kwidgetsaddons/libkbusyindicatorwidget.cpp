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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBusyIndicatorWidget_Tr(const char* s) {
    auto _ret = KBusyIndicatorWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KBusyIndicatorWidget_MinimumSizeHint(const KBusyIndicatorWidget* self) {
    return new QSize(self->minimumSizeHint());
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

void KBusyIndicatorWidget_ShowEvent(KBusyIndicatorWidget* self, QShowEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->showEvent(event);
    }
}

void KBusyIndicatorWidget_HideEvent(KBusyIndicatorWidget* self, QHideEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->hideEvent(event);
    }
}

void KBusyIndicatorWidget_ResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->resizeEvent(event);
    }
}

void KBusyIndicatorWidget_PaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->paintEvent(param1);
    }
}

bool KBusyIndicatorWidget_Event(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        return vkbusyindicatorwidget->event(event);
    }
    qFatal("Error: Protected method KBusyIndicatorWidget::event called without a directly constructed type");
}

libqt_string KBusyIndicatorWidget_Tr2(const char* s, const char* c) {
    auto _ret = KBusyIndicatorWidget::tr(s, c);
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
    auto _ret = KBusyIndicatorWidget::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KBusyIndicatorWidget_SuperMetaObject(const KBusyIndicatorWidget* self) {
    return (QMetaObject*)self->KBusyIndicatorWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMetaObject(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_metaobject_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBusyIndicatorWidget_SuperMetacast(KBusyIndicatorWidget* self, const char* param1) {
    return self->KBusyIndicatorWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMetacast(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_metacast_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBusyIndicatorWidget_SuperMetacall(KBusyIndicatorWidget* self, int param1, int param2, void** param3) {
    return self->KBusyIndicatorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMetacall(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_metacall_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KBusyIndicatorWidget_SuperMinimumSizeHint(const KBusyIndicatorWidget* self) {
    return new QSize(self->KBusyIndicatorWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMinimumSizeHint(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_minimumsizehint_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperShowEvent(KBusyIndicatorWidget* self, QShowEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnShowEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_showevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperHideEvent(KBusyIndicatorWidget* self, QHideEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnHideEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_hideevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnResizeEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_resizeevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperPaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnPaintEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_paintevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool KBusyIndicatorWidget_SuperEvent(KBusyIndicatorWidget* self, QEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        return vkbusyindicatorwidget->KBusyIndicatorWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_event_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Event_Callback>(slot);
}

// Derived class handler implementation
int KBusyIndicatorWidget_DevType(const KBusyIndicatorWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KBusyIndicatorWidget_SuperDevType(const KBusyIndicatorWidget* self) {
    return self->KBusyIndicatorWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDevType(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_devtype_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_SetVisible(KBusyIndicatorWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperSetVisible(KBusyIndicatorWidget* self, bool visible) {
    self->KBusyIndicatorWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSetVisible(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_setvisible_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KBusyIndicatorWidget_SizeHint(const KBusyIndicatorWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KBusyIndicatorWidget_SuperSizeHint(const KBusyIndicatorWidget* self) {
    return new QSize(self->KBusyIndicatorWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSizeHint(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_sizehint_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int KBusyIndicatorWidget_HeightForWidth(const KBusyIndicatorWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KBusyIndicatorWidget_SuperHeightForWidth(const KBusyIndicatorWidget* self, int param1) {
    return self->KBusyIndicatorWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnHeightForWidth(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_heightforwidth_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KBusyIndicatorWidget_HasHeightForWidth(const KBusyIndicatorWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KBusyIndicatorWidget_SuperHasHeightForWidth(const KBusyIndicatorWidget* self) {
    return self->KBusyIndicatorWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnHasHeightForWidth(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KBusyIndicatorWidget_PaintEngine(const KBusyIndicatorWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KBusyIndicatorWidget_SuperPaintEngine(const KBusyIndicatorWidget* self) {
    return self->KBusyIndicatorWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnPaintEngine(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_paintengine_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_MousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperMousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMousePressEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_mousepressevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_MouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperMouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMouseReleaseEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_MouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperMouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMouseDoubleClickEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_MouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperMouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMouseMoveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_mousemoveevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_WheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperWheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnWheelEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_wheelevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_KeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperKeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnKeyPressEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_keypressevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_KeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperKeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnKeyReleaseEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_FocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperFocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusInEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_focusinevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_FocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperFocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusOutEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_focusoutevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_EnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperEnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnEnterEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_enterevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_LeaveEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperLeaveEvent(KBusyIndicatorWidget* self, QEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnLeaveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_leaveevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_MoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperMoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMoveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_moveevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_CloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperCloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnCloseEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_closeevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_ContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnContextMenuEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_contextmenuevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_TabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperTabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnTabletEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_tabletevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_ActionEvent(KBusyIndicatorWidget* self, QActionEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperActionEvent(KBusyIndicatorWidget* self, QActionEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnActionEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_actionevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_DragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperDragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDragEnterEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_dragenterevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_DragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperDragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDragMoveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_dragmoveevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_DragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperDragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDragLeaveEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_dragleaveevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_DropEvent(KBusyIndicatorWidget* self, QDropEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperDropEvent(KBusyIndicatorWidget* self, QDropEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDropEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_dropevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBusyIndicatorWidget_NativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        return vkbusyindicatorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_SuperNativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        return vkbusyindicatorwidget->KBusyIndicatorWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnNativeEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_nativeevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_ChangeEvent(KBusyIndicatorWidget* self, QEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperChangeEvent(KBusyIndicatorWidget* self, QEvent* param1) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnChangeEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_changeevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KBusyIndicatorWidget_Metric(const KBusyIndicatorWidget* self, int param1) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget) {
        return vkbusyindicatorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KBusyIndicatorWidget_SuperMetric(const KBusyIndicatorWidget* self, int param1) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->KBusyIndicatorWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnMetric(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_metric_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_InitPainter(const KBusyIndicatorWidget* self, QPainter* painter) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperInitPainter(const KBusyIndicatorWidget* self, QPainter* painter) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnInitPainter(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_initpainter_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KBusyIndicatorWidget_Redirected(const KBusyIndicatorWidget* self, QPoint* offset) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget) {
        return vkbusyindicatorwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KBusyIndicatorWidget_SuperRedirected(const KBusyIndicatorWidget* self, QPoint* offset) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->KBusyIndicatorWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnRedirected(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_redirected_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KBusyIndicatorWidget_SharedPainter(const KBusyIndicatorWidget* self) {
    auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self));
    if (vkbusyindicatorwidget) {
        return vkbusyindicatorwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KBusyIndicatorWidget_SuperSharedPainter(const KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->KBusyIndicatorWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnSharedPainter(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_sharedpainter_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_InputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperInputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnInputMethodEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_inputmethodevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KBusyIndicatorWidget_InputMethodQuery(const KBusyIndicatorWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KBusyIndicatorWidget_SuperInputMethodQuery(const KBusyIndicatorWidget* self, int param1) {
    return new QVariant(self->KBusyIndicatorWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnInputMethodQuery(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self)))
        vkbusyindicatorwidget->kbusyindicatorwidget_inputmethodquery_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KBusyIndicatorWidget_FocusNextPrevChild(KBusyIndicatorWidget* self, bool next) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        return vkbusyindicatorwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBusyIndicatorWidget_SuperFocusNextPrevChild(KBusyIndicatorWidget* self, bool next) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        return vkbusyindicatorwidget->KBusyIndicatorWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnFocusNextPrevChild(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KBusyIndicatorWidget_EventFilter(KBusyIndicatorWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KBusyIndicatorWidget_SuperEventFilter(KBusyIndicatorWidget* self, QObject* watched, QEvent* event) {
    return self->KBusyIndicatorWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnEventFilter(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_eventfilter_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_TimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperTimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnTimerEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_timerevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_ChildEvent(KBusyIndicatorWidget* self, QChildEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperChildEvent(KBusyIndicatorWidget* self, QChildEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnChildEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_childevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_CustomEvent(KBusyIndicatorWidget* self, QEvent* event) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperCustomEvent(KBusyIndicatorWidget* self, QEvent* event) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnCustomEvent(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_customevent_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_ConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnConnectNotify(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_connectnotify_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBusyIndicatorWidget_DisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self);
    if (vkbusyindicatorwidget) {
        vkbusyindicatorwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBusyIndicatorWidget_SuperDisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->KBusyIndicatorWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBusyIndicatorWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBusyIndicatorWidget_OnDisconnectNotify(KBusyIndicatorWidget* self, intptr_t slot) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self))
        vkbusyindicatorwidget->kbusyindicatorwidget_disconnectnotify_callback = reinterpret_cast<VirtualKBusyIndicatorWidget::KBusyIndicatorWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KBusyIndicatorWidget_UpdateMicroFocus(KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KBusyIndicatorWidget_Create(KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::create();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KBusyIndicatorWidget_Destroy(KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::destroy();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBusyIndicatorWidget_FocusNextChild(KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBusyIndicatorWidget_FocusPreviousChild(KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = dynamic_cast<VirtualKBusyIndicatorWidget*>(self)) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBusyIndicatorWidget_Sender(const KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::sender();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBusyIndicatorWidget_SenderSignalIndex(const KBusyIndicatorWidget* self) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBusyIndicatorWidget_Receivers(const KBusyIndicatorWidget* self, const char* signal) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBusyIndicatorWidget_IsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KBusyIndicatorWidget_GetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB) {
    if (auto* vkbusyindicatorwidget = const_cast<VirtualKBusyIndicatorWidget*>(dynamic_cast<const VirtualKBusyIndicatorWidget*>(self))) {
        return vkbusyindicatorwidget->VirtualKBusyIndicatorWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KBusyIndicatorWidget::getDecodedMetricF called without a directly constructed type");
}

void KBusyIndicatorWidget_Delete(KBusyIndicatorWidget* self) {
    delete self;
}
