#include <KPixmapSequence>
#include <KPixmapSequenceWidget>
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
#include <kpixmapsequencewidget.h>
#include "libkpixmapsequencewidget.h"
#include "libkpixmapsequencewidget.hxx"

KPixmapSequenceWidget* KPixmapSequenceWidget_new(QWidget* parent) {
    return new VirtualKPixmapSequenceWidget(parent);
}

KPixmapSequenceWidget* KPixmapSequenceWidget_new2() {
    return new VirtualKPixmapSequenceWidget();
}

KPixmapSequenceWidget* KPixmapSequenceWidget_new3(const KPixmapSequence* seq) {
    return new VirtualKPixmapSequenceWidget(*seq);
}

KPixmapSequenceWidget* KPixmapSequenceWidget_new4(const KPixmapSequence* seq, QWidget* parent) {
    return new VirtualKPixmapSequenceWidget(*seq, parent);
}

QMetaObject* KPixmapSequenceWidget_MetaObject(const KPixmapSequenceWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPixmapSequenceWidget_Metacast(KPixmapSequenceWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPixmapSequenceWidget_Metacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPixmapSequenceWidget_Tr(const char* s) {
    auto _ret = KPixmapSequenceWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPixmapSequence* KPixmapSequenceWidget_Sequence(const KPixmapSequenceWidget* self) {
    return new KPixmapSequence(self->sequence());
}

int KPixmapSequenceWidget_Interval(const KPixmapSequenceWidget* self) {
    return self->interval();
}

QSize* KPixmapSequenceWidget_SizeHint(const KPixmapSequenceWidget* self) {
    return new QSize(self->sizeHint());
}

void KPixmapSequenceWidget_SetSequence(KPixmapSequenceWidget* self, const KPixmapSequence* seq) {
    self->setSequence(*seq);
}

void KPixmapSequenceWidget_SetInterval(KPixmapSequenceWidget* self, int msecs) {
    self->setInterval(static_cast<int>(msecs));
}

libqt_string KPixmapSequenceWidget_Tr2(const char* s, const char* c) {
    auto _ret = KPixmapSequenceWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPixmapSequenceWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPixmapSequenceWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPixmapSequenceWidget_SuperMetaObject(const KPixmapSequenceWidget* self) {
    return (QMetaObject*)self->KPixmapSequenceWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMetaObject(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_metaobject_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPixmapSequenceWidget_SuperMetacast(KPixmapSequenceWidget* self, const char* param1) {
    return self->KPixmapSequenceWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMetacast(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_metacast_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPixmapSequenceWidget_SuperMetacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3) {
    return self->KPixmapSequenceWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMetacall(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_metacall_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KPixmapSequenceWidget_SuperSizeHint(const KPixmapSequenceWidget* self) {
    return new QSize(self->KPixmapSequenceWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSizeHint(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_sizehint_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPixmapSequenceWidget_DevType(const KPixmapSequenceWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KPixmapSequenceWidget_SuperDevType(const KPixmapSequenceWidget* self) {
    return self->KPixmapSequenceWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDevType(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_devtype_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_SetVisible(KPixmapSequenceWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperSetVisible(KPixmapSequenceWidget* self, bool visible) {
    self->KPixmapSequenceWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSetVisible(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_setvisible_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPixmapSequenceWidget_MinimumSizeHint(const KPixmapSequenceWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPixmapSequenceWidget_SuperMinimumSizeHint(const KPixmapSequenceWidget* self) {
    return new QSize(self->KPixmapSequenceWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMinimumSizeHint(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_minimumsizehint_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPixmapSequenceWidget_HeightForWidth(const KPixmapSequenceWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPixmapSequenceWidget_SuperHeightForWidth(const KPixmapSequenceWidget* self, int param1) {
    return self->KPixmapSequenceWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnHeightForWidth(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_heightforwidth_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapSequenceWidget_HasHeightForWidth(const KPixmapSequenceWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPixmapSequenceWidget_SuperHasHeightForWidth(const KPixmapSequenceWidget* self) {
    return self->KPixmapSequenceWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnHasHeightForWidth(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPixmapSequenceWidget_PaintEngine(const KPixmapSequenceWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPixmapSequenceWidget_SuperPaintEngine(const KPixmapSequenceWidget* self) {
    return self->KPixmapSequenceWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnPaintEngine(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_paintengine_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapSequenceWidget_Event(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        return vkpixmapsequencewidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_SuperEvent(KPixmapSequenceWidget* self, QEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        return vkpixmapsequencewidget->KPixmapSequenceWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_event_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_MousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperMousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMousePressEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_mousepressevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_MouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperMouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMouseReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_MouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperMouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMouseDoubleClickEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_MouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperMouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMouseMoveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_mousemoveevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_WheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperWheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnWheelEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_wheelevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_KeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperKeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnKeyPressEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_keypressevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_KeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperKeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnKeyReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_FocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperFocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusInEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_focusinevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_FocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperFocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusOutEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_focusoutevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_EnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperEnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnEnterEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_enterevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_LeaveEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperLeaveEvent(KPixmapSequenceWidget* self, QEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_leaveevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_PaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperPaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnPaintEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_paintevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_MoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperMoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMoveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_moveevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnResizeEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_resizeevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_CloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperCloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnCloseEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_closeevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnContextMenuEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_contextmenuevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_TabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperTabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnTabletEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_tabletevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ActionEvent(KPixmapSequenceWidget* self, QActionEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperActionEvent(KPixmapSequenceWidget* self, QActionEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnActionEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_actionevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_DragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperDragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDragEnterEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_dragenterevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_DragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperDragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDragMoveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_dragmoveevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_DragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperDragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDragLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_dragleaveevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_DropEvent(KPixmapSequenceWidget* self, QDropEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperDropEvent(KPixmapSequenceWidget* self, QDropEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDropEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_dropevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ShowEvent(KPixmapSequenceWidget* self, QShowEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperShowEvent(KPixmapSequenceWidget* self, QShowEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnShowEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_showevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_HideEvent(KPixmapSequenceWidget* self, QHideEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperHideEvent(KPixmapSequenceWidget* self, QHideEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnHideEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_hideevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapSequenceWidget_NativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        return vkpixmapsequencewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_SuperNativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        return vkpixmapsequencewidget->KPixmapSequenceWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnNativeEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_nativeevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ChangeEvent(KPixmapSequenceWidget* self, QEvent* param1) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperChangeEvent(KPixmapSequenceWidget* self, QEvent* param1) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnChangeEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_changeevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPixmapSequenceWidget_Metric(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget) {
        return vkpixmapsequencewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPixmapSequenceWidget_SuperMetric(const KPixmapSequenceWidget* self, int param1) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->KPixmapSequenceWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMetric(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_metric_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_InitPainter(const KPixmapSequenceWidget* self, QPainter* painter) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperInitPainter(const KPixmapSequenceWidget* self, QPainter* painter) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnInitPainter(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_initpainter_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPixmapSequenceWidget_Redirected(const KPixmapSequenceWidget* self, QPoint* offset) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget) {
        return vkpixmapsequencewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPixmapSequenceWidget_SuperRedirected(const KPixmapSequenceWidget* self, QPoint* offset) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->KPixmapSequenceWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnRedirected(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_redirected_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPixmapSequenceWidget_SharedPainter(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget) {
        return vkpixmapsequencewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPixmapSequenceWidget_SuperSharedPainter(const KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->KPixmapSequenceWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSharedPainter(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_sharedpainter_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_InputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperInputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnInputMethodEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_inputmethodevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPixmapSequenceWidget_InputMethodQuery(const KPixmapSequenceWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPixmapSequenceWidget_SuperInputMethodQuery(const KPixmapSequenceWidget* self, int param1) {
    return new QVariant(self->KPixmapSequenceWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnInputMethodQuery(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self)))
        vkpixmapsequencewidget->kpixmapsequencewidget_inputmethodquery_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapSequenceWidget_FocusNextPrevChild(KPixmapSequenceWidget* self, bool next) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        return vkpixmapsequencewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_SuperFocusNextPrevChild(KPixmapSequenceWidget* self, bool next) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        return vkpixmapsequencewidget->KPixmapSequenceWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusNextPrevChild(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapSequenceWidget_EventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPixmapSequenceWidget_SuperEventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event) {
    return self->KPixmapSequenceWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnEventFilter(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_eventfilter_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_TimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperTimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnTimerEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_timerevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ChildEvent(KPixmapSequenceWidget* self, QChildEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperChildEvent(KPixmapSequenceWidget* self, QChildEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnChildEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_childevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_CustomEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperCustomEvent(KPixmapSequenceWidget* self, QEvent* event) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnCustomEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_customevent_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_ConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnConnectNotify(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_connectnotify_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceWidget_DisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget) {
        vkpixmapsequencewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_SuperDisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->KPixmapSequenceWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDisconnectNotify(KPixmapSequenceWidget* self, intptr_t slot) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self))
        vkpixmapsequencewidget->kpixmapsequencewidget_disconnectnotify_callback = reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPixmapSequenceWidget_UpdateMicroFocus(KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapSequenceWidget_Create(KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::create();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapSequenceWidget_Destroy(KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::destroy();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapSequenceWidget_FocusNextChild(KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapSequenceWidget_FocusPreviousChild(KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self)) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPixmapSequenceWidget_Sender(const KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::sender();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapSequenceWidget_SenderSignalIndex(const KPixmapSequenceWidget* self) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapSequenceWidget_Receivers(const KPixmapSequenceWidget* self, const char* signal) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapSequenceWidget_IsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPixmapSequenceWidget_GetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB) {
    if (auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self))) {
        return vkpixmapsequencewidget->VirtualKPixmapSequenceWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPixmapSequenceWidget::getDecodedMetricF called without a directly constructed type");
}

void KPixmapSequenceWidget_Delete(KPixmapSequenceWidget* self) {
    delete self;
}
