#include <KAdjustingScrollArea>
#include <QAbstractScrollArea>
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
#include <QMargins>
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
#include <QScrollArea>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kadjustingscrollarea.h>
#include "libkadjustingscrollarea.h"
#include "libkadjustingscrollarea.hxx"

KAdjustingScrollArea* KAdjustingScrollArea_new(QWidget* parent) {
    return new VirtualKAdjustingScrollArea(parent);
}

KAdjustingScrollArea* KAdjustingScrollArea_new2() {
    return new VirtualKAdjustingScrollArea();
}

QMetaObject* KAdjustingScrollArea_MetaObject(const KAdjustingScrollArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAdjustingScrollArea_Metacast(KAdjustingScrollArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAdjustingScrollArea_Metacall(KAdjustingScrollArea* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAdjustingScrollArea_Tr(const char* s) {
    auto _ret = KAdjustingScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KAdjustingScrollArea_MinimumSizeHint(const KAdjustingScrollArea* self) {
    return new QSize(self->minimumSizeHint());
}

QSize* KAdjustingScrollArea_SizeHint(const KAdjustingScrollArea* self) {
    return new QSize(self->sizeHint());
}

bool KAdjustingScrollArea_Event(KAdjustingScrollArea* self, QEvent* event) {
    return self->event(event);
}

libqt_string KAdjustingScrollArea_Tr2(const char* s, const char* c) {
    auto _ret = KAdjustingScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAdjustingScrollArea_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAdjustingScrollArea::tr(s, c, static_cast<int>(n));
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
QMetaObject* KAdjustingScrollArea_SuperMetaObject(const KAdjustingScrollArea* self) {
    return (QMetaObject*)self->KAdjustingScrollArea::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMetaObject(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_metaobject_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAdjustingScrollArea_SuperMetacast(KAdjustingScrollArea* self, const char* param1) {
    return self->KAdjustingScrollArea::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMetacast(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_metacast_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAdjustingScrollArea_SuperMetacall(KAdjustingScrollArea* self, int param1, int param2, void** param3) {
    return self->KAdjustingScrollArea::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMetacall(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_metacall_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KAdjustingScrollArea_SuperMinimumSizeHint(const KAdjustingScrollArea* self) {
    return new QSize(self->KAdjustingScrollArea::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMinimumSizeHint(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_minimumsizehint_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KAdjustingScrollArea_SuperSizeHint(const KAdjustingScrollArea* self) {
    return new QSize(self->KAdjustingScrollArea::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSizeHint(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_sizehint_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool KAdjustingScrollArea_SuperEvent(KAdjustingScrollArea* self, QEvent* event) {
    return self->KAdjustingScrollArea::event(event);
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_event_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Event_Callback>(slot);
}

// Derived class handler implementation
bool KAdjustingScrollArea_FocusNextPrevChild(KAdjustingScrollArea* self, bool next) {
    return self->focusNextPrevChild(next);
}

// Base class handler implementation
bool KAdjustingScrollArea_SuperFocusNextPrevChild(KAdjustingScrollArea* self, bool next) {
    return self->KAdjustingScrollArea::focusNextPrevChild(next);
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusNextPrevChild(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_focusnextprevchild_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnResizeEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_resizeevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnScrollContentsBy(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_scrollcontentsby_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
QSize* KAdjustingScrollArea_ViewportSizeHint(const KAdjustingScrollArea* self) {
    return new QSize((self->*&VirtualKAdjustingScrollArea::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KAdjustingScrollArea_SuperViewportSizeHint(const KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        return new QSize(vkadjustingscrollarea->viewportSizeHint());
    qFatal("Error: Protected virtual method KAdjustingScrollArea::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnViewportSizeHint(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_viewportsizehint_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_SetupViewport(KAdjustingScrollArea* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KAdjustingScrollArea_SuperSetupViewport(KAdjustingScrollArea* self, QWidget* viewport) {
    self->KAdjustingScrollArea::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSetupViewport(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_setupviewport_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool KAdjustingScrollArea_ViewportEvent(KAdjustingScrollArea* self, QEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        return vkadjustingscrollarea->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_SuperViewportEvent(KAdjustingScrollArea* self, QEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        return vkadjustingscrollarea->KAdjustingScrollArea::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnViewportEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_viewportevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_PaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperPaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnPaintEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_paintevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_MousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperMousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMousePressEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_mousepressevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_MouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperMouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMouseReleaseEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_mousereleaseevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_MouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperMouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMouseDoubleClickEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_mousedoubleclickevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_MouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperMouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMouseMoveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_mousemoveevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_WheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperWheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnWheelEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_wheelevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnContextMenuEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_contextmenuevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_DragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperDragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDragEnterEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_dragenterevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_DragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperDragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDragMoveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_dragmoveevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_DragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperDragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDragLeaveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_dragleaveevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_DropEvent(KAdjustingScrollArea* self, QDropEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperDropEvent(KAdjustingScrollArea* self, QDropEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDropEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_dropevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_KeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperKeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnKeyPressEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_keypressevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ChangeEvent(KAdjustingScrollArea* self, QEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperChangeEvent(KAdjustingScrollArea* self, QEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnChangeEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_changeevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_InitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperInitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        vkadjustingscrollarea->KAdjustingScrollArea::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInitStyleOption(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_initstyleoption_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KAdjustingScrollArea_DevType(const KAdjustingScrollArea* self) {
    return self->devType();
}

// Base class handler implementation
int KAdjustingScrollArea_SuperDevType(const KAdjustingScrollArea* self) {
    return self->KAdjustingScrollArea::devType();
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDevType(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_devtype_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DevType_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_SetVisible(KAdjustingScrollArea* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KAdjustingScrollArea_SuperSetVisible(KAdjustingScrollArea* self, bool visible) {
    self->KAdjustingScrollArea::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSetVisible(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_setvisible_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KAdjustingScrollArea_HeightForWidth(const KAdjustingScrollArea* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KAdjustingScrollArea_SuperHeightForWidth(const KAdjustingScrollArea* self, int param1) {
    return self->KAdjustingScrollArea::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnHeightForWidth(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_heightforwidth_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KAdjustingScrollArea_HasHeightForWidth(const KAdjustingScrollArea* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KAdjustingScrollArea_SuperHasHeightForWidth(const KAdjustingScrollArea* self) {
    return self->KAdjustingScrollArea::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnHasHeightForWidth(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_hasheightforwidth_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KAdjustingScrollArea_PaintEngine(const KAdjustingScrollArea* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KAdjustingScrollArea_SuperPaintEngine(const KAdjustingScrollArea* self) {
    return self->KAdjustingScrollArea::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnPaintEngine(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_paintengine_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_KeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperKeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnKeyReleaseEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_keyreleaseevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_FocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperFocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusInEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_focusinevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_FocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperFocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusOutEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_focusoutevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_EnterEvent(KAdjustingScrollArea* self, QEnterEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperEnterEvent(KAdjustingScrollArea* self, QEnterEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnEnterEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_enterevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_LeaveEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperLeaveEvent(KAdjustingScrollArea* self, QEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnLeaveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_leaveevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_MoveEvent(KAdjustingScrollArea* self, QMoveEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperMoveEvent(KAdjustingScrollArea* self, QMoveEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMoveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_moveevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_CloseEvent(KAdjustingScrollArea* self, QCloseEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperCloseEvent(KAdjustingScrollArea* self, QCloseEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnCloseEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_closeevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_TabletEvent(KAdjustingScrollArea* self, QTabletEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperTabletEvent(KAdjustingScrollArea* self, QTabletEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnTabletEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_tabletevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ActionEvent(KAdjustingScrollArea* self, QActionEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperActionEvent(KAdjustingScrollArea* self, QActionEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnActionEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_actionevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ShowEvent(KAdjustingScrollArea* self, QShowEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperShowEvent(KAdjustingScrollArea* self, QShowEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnShowEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_showevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_HideEvent(KAdjustingScrollArea* self, QHideEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperHideEvent(KAdjustingScrollArea* self, QHideEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnHideEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_hideevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAdjustingScrollArea_NativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        return vkadjustingscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_SuperNativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        return vkadjustingscrollarea->KAdjustingScrollArea::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnNativeEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_nativeevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KAdjustingScrollArea_Metric(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea) {
        return vkadjustingscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KAdjustingScrollArea_SuperMetric(const KAdjustingScrollArea* self, int param1) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->KAdjustingScrollArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMetric(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_metric_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Metric_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_InitPainter(const KAdjustingScrollArea* self, QPainter* painter) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperInitPainter(const KAdjustingScrollArea* self, QPainter* painter) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        vkadjustingscrollarea->KAdjustingScrollArea::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInitPainter(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_initpainter_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KAdjustingScrollArea_Redirected(const KAdjustingScrollArea* self, QPoint* offset) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea) {
        return vkadjustingscrollarea->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KAdjustingScrollArea_SuperRedirected(const KAdjustingScrollArea* self, QPoint* offset) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->KAdjustingScrollArea::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnRedirected(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_redirected_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KAdjustingScrollArea_SharedPainter(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea) {
        return vkadjustingscrollarea->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KAdjustingScrollArea_SuperSharedPainter(const KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->KAdjustingScrollArea::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSharedPainter(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_sharedpainter_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_InputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperInputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInputMethodEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_inputmethodevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KAdjustingScrollArea_InputMethodQuery(const KAdjustingScrollArea* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KAdjustingScrollArea_SuperInputMethodQuery(const KAdjustingScrollArea* self, int param1) {
    return new QVariant(self->KAdjustingScrollArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInputMethodQuery(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        vkadjustingscrollarea->kadjustingscrollarea_inputmethodquery_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_TimerEvent(KAdjustingScrollArea* self, QTimerEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperTimerEvent(KAdjustingScrollArea* self, QTimerEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnTimerEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_timerevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ChildEvent(KAdjustingScrollArea* self, QChildEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperChildEvent(KAdjustingScrollArea* self, QChildEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnChildEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_childevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_CustomEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperCustomEvent(KAdjustingScrollArea* self, QEvent* event) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnCustomEvent(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_customevent_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_ConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnConnectNotify(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_connectnotify_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAdjustingScrollArea_DisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea) {
        vkadjustingscrollarea->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAdjustingScrollArea::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAdjustingScrollArea_SuperDisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->KAdjustingScrollArea::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAdjustingScrollArea::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDisconnectNotify(KAdjustingScrollArea* self, intptr_t slot) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self))
        vkadjustingscrollarea->kadjustingscrollarea_disconnectnotify_callback = reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KAdjustingScrollArea_SetViewportMargins(KAdjustingScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->VirtualKAdjustingScrollArea::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KAdjustingScrollArea_ViewportMargins(const KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self)))
        return new QMargins(vkadjustingscrollarea->viewportMargins());
    qFatal("Error: Protected method KAdjustingScrollArea::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KAdjustingScrollArea_DrawFrame(KAdjustingScrollArea* self, QPainter* param1) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->VirtualKAdjustingScrollArea::drawFrame(param1);
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KAdjustingScrollArea_UpdateMicroFocus(KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->VirtualKAdjustingScrollArea::updateMicroFocus();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KAdjustingScrollArea_Create(KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->VirtualKAdjustingScrollArea::create();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KAdjustingScrollArea_Destroy(KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        vkadjustingscrollarea->VirtualKAdjustingScrollArea::destroy();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAdjustingScrollArea_FocusNextChild(KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::focusNextChild();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAdjustingScrollArea_FocusPreviousChild(KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self)) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::focusPreviousChild();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KAdjustingScrollArea_Sender(const KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::sender();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAdjustingScrollArea_SenderSignalIndex(const KAdjustingScrollArea* self) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAdjustingScrollArea_Receivers(const KAdjustingScrollArea* self, const char* signal) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::receivers(signal);
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAdjustingScrollArea_IsSignalConnected(const KAdjustingScrollArea* self, const QMetaMethod* signal) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KAdjustingScrollArea_GetDecodedMetricF(const KAdjustingScrollArea* self, int metricA, int metricB) {
    if (auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self))) {
        return vkadjustingscrollarea->VirtualKAdjustingScrollArea::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KAdjustingScrollArea::getDecodedMetricF called without a directly constructed type");
}

void KAdjustingScrollArea_Delete(KAdjustingScrollArea* self) {
    delete self;
}
