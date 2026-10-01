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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToolTipWidget_Tr(const char* s) {
    auto _ret = KToolTipWidget::tr(s);
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
    KToolTipWidget::connect(self,
                            static_cast<void (KToolTipWidget::*)()>(&KToolTipWidget::hidden),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void KToolTipWidget_EnterEvent(KToolTipWidget* self, QEnterEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->enterEvent(event);
    }
}

void KToolTipWidget_HideEvent(KToolTipWidget* self, QHideEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->hideEvent(param1);
    }
}

void KToolTipWidget_LeaveEvent(KToolTipWidget* self, QEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->leaveEvent(param1);
    }
}

void KToolTipWidget_PaintEvent(KToolTipWidget* self, QPaintEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->paintEvent(event);
    }
}

libqt_string KToolTipWidget_Tr2(const char* s, const char* c) {
    auto _ret = KToolTipWidget::tr(s, c);
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
    auto _ret = KToolTipWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToolTipWidget_SuperMetaObject(const KToolTipWidget* self) {
    return (QMetaObject*)self->KToolTipWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMetaObject(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_metaobject_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToolTipWidget_SuperMetacast(KToolTipWidget* self, const char* param1) {
    return self->KToolTipWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMetacast(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_metacast_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToolTipWidget_SuperMetacall(KToolTipWidget* self, int param1, int param2, void** param3) {
    return self->KToolTipWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMetacall(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_metacall_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void KToolTipWidget_SuperEnterEvent(KToolTipWidget* self, QEnterEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnEnterEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_enterevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_EnterEvent_Callback>(slot);
}

// Base class handler implementation
void KToolTipWidget_SuperHideEvent(KToolTipWidget* self, QHideEvent* param1) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnHideEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_hideevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
void KToolTipWidget_SuperLeaveEvent(KToolTipWidget* self, QEvent* param1) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnLeaveEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_leaveevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KToolTipWidget_SuperPaintEvent(KToolTipWidget* self, QPaintEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnPaintEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_paintevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int KToolTipWidget_DevType(const KToolTipWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KToolTipWidget_SuperDevType(const KToolTipWidget* self) {
    return self->KToolTipWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDevType(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_devtype_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_SetVisible(KToolTipWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KToolTipWidget_SuperSetVisible(KToolTipWidget* self, bool visible) {
    self->KToolTipWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSetVisible(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_setvisible_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KToolTipWidget_SizeHint(const KToolTipWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KToolTipWidget_SuperSizeHint(const KToolTipWidget* self) {
    return new QSize(self->KToolTipWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSizeHint(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_sizehint_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KToolTipWidget_MinimumSizeHint(const KToolTipWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KToolTipWidget_SuperMinimumSizeHint(const KToolTipWidget* self) {
    return new QSize(self->KToolTipWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMinimumSizeHint(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_minimumsizehint_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KToolTipWidget_HeightForWidth(const KToolTipWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KToolTipWidget_SuperHeightForWidth(const KToolTipWidget* self, int param1) {
    return self->KToolTipWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnHeightForWidth(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_heightforwidth_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KToolTipWidget_HasHeightForWidth(const KToolTipWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KToolTipWidget_SuperHasHeightForWidth(const KToolTipWidget* self) {
    return self->KToolTipWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnHasHeightForWidth(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KToolTipWidget_PaintEngine(const KToolTipWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KToolTipWidget_SuperPaintEngine(const KToolTipWidget* self) {
    return self->KToolTipWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnPaintEngine(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_paintengine_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KToolTipWidget_Event(KToolTipWidget* self, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        return vktooltipwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolTipWidget_SuperEvent(KToolTipWidget* self, QEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        return vktooltipwidget->KToolTipWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_event_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_MousePressEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperMousePressEvent(KToolTipWidget* self, QMouseEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMousePressEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_mousepressevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_MouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperMouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMouseReleaseEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_MouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperMouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMouseDoubleClickEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_MouseMoveEvent(KToolTipWidget* self, QMouseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperMouseMoveEvent(KToolTipWidget* self, QMouseEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMouseMoveEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_mousemoveevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_WheelEvent(KToolTipWidget* self, QWheelEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperWheelEvent(KToolTipWidget* self, QWheelEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnWheelEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_wheelevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_KeyPressEvent(KToolTipWidget* self, QKeyEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperKeyPressEvent(KToolTipWidget* self, QKeyEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnKeyPressEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_keypressevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_KeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperKeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnKeyReleaseEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_FocusInEvent(KToolTipWidget* self, QFocusEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperFocusInEvent(KToolTipWidget* self, QFocusEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusInEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_focusinevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_FocusOutEvent(KToolTipWidget* self, QFocusEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperFocusOutEvent(KToolTipWidget* self, QFocusEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusOutEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_focusoutevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_MoveEvent(KToolTipWidget* self, QMoveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperMoveEvent(KToolTipWidget* self, QMoveEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMoveEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_moveevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ResizeEvent(KToolTipWidget* self, QResizeEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperResizeEvent(KToolTipWidget* self, QResizeEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnResizeEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_resizeevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_CloseEvent(KToolTipWidget* self, QCloseEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperCloseEvent(KToolTipWidget* self, QCloseEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnCloseEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_closeevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnContextMenuEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_contextmenuevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_TabletEvent(KToolTipWidget* self, QTabletEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperTabletEvent(KToolTipWidget* self, QTabletEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnTabletEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_tabletevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ActionEvent(KToolTipWidget* self, QActionEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperActionEvent(KToolTipWidget* self, QActionEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnActionEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_actionevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_DragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperDragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDragEnterEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_dragenterevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_DragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperDragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDragMoveEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_dragmoveevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_DragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperDragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDragLeaveEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_dragleaveevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_DropEvent(KToolTipWidget* self, QDropEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperDropEvent(KToolTipWidget* self, QDropEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDropEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_dropevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ShowEvent(KToolTipWidget* self, QShowEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperShowEvent(KToolTipWidget* self, QShowEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnShowEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_showevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool KToolTipWidget_NativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        return vktooltipwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolTipWidget_SuperNativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        return vktooltipwidget->KToolTipWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnNativeEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_nativeevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ChangeEvent(KToolTipWidget* self, QEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperChangeEvent(KToolTipWidget* self, QEvent* param1) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnChangeEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_changeevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KToolTipWidget_Metric(const KToolTipWidget* self, int param1) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget) {
        return vktooltipwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KToolTipWidget_SuperMetric(const KToolTipWidget* self, int param1) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->KToolTipWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnMetric(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_metric_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_InitPainter(const KToolTipWidget* self, QPainter* painter) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget) {
        vktooltipwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperInitPainter(const KToolTipWidget* self, QPainter* painter) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        vktooltipwidget->KToolTipWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnInitPainter(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_initpainter_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KToolTipWidget_Redirected(const KToolTipWidget* self, QPoint* offset) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget) {
        return vktooltipwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KToolTipWidget_SuperRedirected(const KToolTipWidget* self, QPoint* offset) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->KToolTipWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnRedirected(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_redirected_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KToolTipWidget_SharedPainter(const KToolTipWidget* self) {
    auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self));
    if (vktooltipwidget) {
        return vktooltipwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KToolTipWidget_SuperSharedPainter(const KToolTipWidget* self) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->KToolTipWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnSharedPainter(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_sharedpainter_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_InputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperInputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnInputMethodEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_inputmethodevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KToolTipWidget_InputMethodQuery(const KToolTipWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KToolTipWidget_SuperInputMethodQuery(const KToolTipWidget* self, int param1) {
    return new QVariant(self->KToolTipWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnInputMethodQuery(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self)))
        vktooltipwidget->ktooltipwidget_inputmethodquery_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KToolTipWidget_FocusNextPrevChild(KToolTipWidget* self, bool next) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        return vktooltipwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolTipWidget_SuperFocusNextPrevChild(KToolTipWidget* self, bool next) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        return vktooltipwidget->KToolTipWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnFocusNextPrevChild(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KToolTipWidget_EventFilter(KToolTipWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KToolTipWidget_SuperEventFilter(KToolTipWidget* self, QObject* watched, QEvent* event) {
    return self->KToolTipWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnEventFilter(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_eventfilter_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_TimerEvent(KToolTipWidget* self, QTimerEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperTimerEvent(KToolTipWidget* self, QTimerEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnTimerEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_timerevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ChildEvent(KToolTipWidget* self, QChildEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperChildEvent(KToolTipWidget* self, QChildEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnChildEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_childevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_CustomEvent(KToolTipWidget* self, QEvent* event) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperCustomEvent(KToolTipWidget* self, QEvent* event) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnCustomEvent(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_customevent_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_ConnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperConnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnConnectNotify(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_connectnotify_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToolTipWidget_DisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self);
    if (vktooltipwidget) {
        vktooltipwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolTipWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolTipWidget_SuperDisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->KToolTipWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolTipWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolTipWidget_OnDisconnectNotify(KToolTipWidget* self, intptr_t slot) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self))
        vktooltipwidget->ktooltipwidget_disconnectnotify_callback = reinterpret_cast<VirtualKToolTipWidget::KToolTipWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KToolTipWidget_UpdateMicroFocus(KToolTipWidget* self) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->VirtualKToolTipWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KToolTipWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KToolTipWidget_Create(KToolTipWidget* self) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->VirtualKToolTipWidget::create();
    } else
        qFatal("Error: Protected method KToolTipWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KToolTipWidget_Destroy(KToolTipWidget* self) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        vktooltipwidget->VirtualKToolTipWidget::destroy();
    } else
        qFatal("Error: Protected method KToolTipWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolTipWidget_FocusNextChild(KToolTipWidget* self) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        return vktooltipwidget->VirtualKToolTipWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KToolTipWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolTipWidget_FocusPreviousChild(KToolTipWidget* self) {
    if (auto* vktooltipwidget = dynamic_cast<VirtualKToolTipWidget*>(self)) {
        return vktooltipwidget->VirtualKToolTipWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KToolTipWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KToolTipWidget_Sender(const KToolTipWidget* self) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->VirtualKToolTipWidget::sender();
    } else
        qFatal("Error: Protected method KToolTipWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolTipWidget_SenderSignalIndex(const KToolTipWidget* self) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->VirtualKToolTipWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToolTipWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolTipWidget_Receivers(const KToolTipWidget* self, const char* signal) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->VirtualKToolTipWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KToolTipWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolTipWidget_IsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->VirtualKToolTipWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToolTipWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KToolTipWidget_GetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB) {
    if (auto* vktooltipwidget = const_cast<VirtualKToolTipWidget*>(dynamic_cast<const VirtualKToolTipWidget*>(self))) {
        return vktooltipwidget->VirtualKToolTipWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KToolTipWidget::getDecodedMetricF called without a directly constructed type");
}

void KToolTipWidget_Delete(KToolTipWidget* self) {
    delete self;
}
