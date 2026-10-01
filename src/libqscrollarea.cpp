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
#include <qscrollarea.h>
#include "libqscrollarea.h"
#include "libqscrollarea.hxx"

QScrollArea* QScrollArea_new(QWidget* parent) {
    return new VirtualQScrollArea(parent);
}

QScrollArea* QScrollArea_new2() {
    return new VirtualQScrollArea();
}

QMetaObject* QScrollArea_MetaObject(const QScrollArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScrollArea_Metacast(QScrollArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScrollArea_Metacall(QScrollArea* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScrollArea_Tr(const char* s) {
    auto _ret = QScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* QScrollArea_Widget(const QScrollArea* self) {
    return self->widget();
}

void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QScrollArea_TakeWidget(QScrollArea* self) {
    return self->takeWidget();
}

bool QScrollArea_WidgetResizable(const QScrollArea* self) {
    return self->widgetResizable();
}

void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable) {
    self->setWidgetResizable(resizable);
}

QSize* QScrollArea_SizeHint(const QScrollArea* self) {
    return new QSize(self->sizeHint());
}

bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next) {
    return self->focusNextPrevChild(next);
}

int QScrollArea_Alignment(const QScrollArea* self) {
    return static_cast<int>(self->alignment());
}

void QScrollArea_SetAlignment(QScrollArea* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y));
}

void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
    self->ensureWidgetVisible(childWidget);
}

bool QScrollArea_Event(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        return vqscrollarea->event(param1);
    }
    qFatal("Error: Protected method QScrollArea::event called without a directly constructed type");
}

bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        return vqscrollarea->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QScrollArea::eventFilter called without a directly constructed type");
}

void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->resizeEvent(param1);
    }
}

void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<const VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        return new QSize(vqscrollarea->viewportSizeHint());
    }
    qFatal("Error: Protected method QScrollArea::viewportSizeHint called without a directly constructed type");
}

libqt_string QScrollArea_Tr2(const char* s, const char* c) {
    auto _ret = QScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScrollArea_Tr3(const char* s, const char* c, int n) {
    auto _ret = QScrollArea::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin));
}

void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin) {
    self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin));
}

void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin) {
    self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

// Base class handler implementation
QMetaObject* QScrollArea_SuperMetaObject(const QScrollArea* self) {
    return (QMetaObject*)self->QScrollArea::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMetaObject(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_metaobject_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QScrollArea_SuperMetacast(QScrollArea* self, const char* param1) {
    return self->QScrollArea::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMetacast(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_metacast_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_Metacast_Callback>(slot);
}

// Base class handler implementation
int QScrollArea_SuperMetacall(QScrollArea* self, int param1, int param2, void** param3) {
    return self->QScrollArea::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMetacall(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_metacall_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QScrollArea_SuperSizeHint(const QScrollArea* self) {
    return new QSize(self->QScrollArea::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSizeHint(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_sizehint_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QScrollArea_SuperFocusNextPrevChild(QScrollArea* self, bool next) {
    return self->QScrollArea::focusNextPrevChild(next);
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusNextPrevChild(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_focusnextprevchild_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
bool QScrollArea_SuperEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->QScrollArea::event(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_event_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_Event_Callback>(slot);
}

// Base class handler implementation
bool QScrollArea_SuperEventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->QScrollArea::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QScrollArea::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEventFilter(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_eventfilter_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QScrollArea_SuperResizeEvent(QScrollArea* self, QResizeEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnResizeEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_resizeevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollArea_SuperScrollContentsBy(QScrollArea* self, int dx, int dy) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QScrollArea::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnScrollContentsBy(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_scrollcontentsby_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
QSize* QScrollArea_SuperViewportSizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        return new QSize(vqscrollarea->QScrollArea::viewportSizeHint());
    qFatal("Error: Protected virtual method QScrollArea::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportSizeHint(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_viewportsizehint_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QScrollArea_MinimumSizeHint(const QScrollArea* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QScrollArea_SuperMinimumSizeHint(const QScrollArea* self) {
    return new QSize(self->QScrollArea::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMinimumSizeHint(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_minimumsizehint_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_SetupViewport(QScrollArea* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QScrollArea_SuperSetupViewport(QScrollArea* self, QWidget* viewport) {
    self->QScrollArea::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetupViewport(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_setupviewport_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QScrollArea_ViewportEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        return vqscrollarea->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QScrollArea_SuperViewportEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->QScrollArea::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_viewportevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_PaintEvent(QScrollArea* self, QPaintEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperPaintEvent(QScrollArea* self, QPaintEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnPaintEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_paintevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_MousePressEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperMousePressEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMousePressEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_mousepressevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_MouseReleaseEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperMouseReleaseEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseReleaseEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_mousereleaseevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_MouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperMouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseDoubleClickEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_mousedoubleclickevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_MouseMoveEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperMouseMoveEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseMoveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_mousemoveevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_WheelEvent(QScrollArea* self, QWheelEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperWheelEvent(QScrollArea* self, QWheelEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnWheelEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_wheelevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_ContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnContextMenuEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_contextmenuevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_DragEnterEvent(QScrollArea* self, QDragEnterEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperDragEnterEvent(QScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragEnterEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_dragenterevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_DragMoveEvent(QScrollArea* self, QDragMoveEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperDragMoveEvent(QScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragMoveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_dragmoveevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_DragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperDragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragLeaveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_dragleaveevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_DropEvent(QScrollArea* self, QDropEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperDropEvent(QScrollArea* self, QDropEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDropEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_dropevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_KeyPressEvent(QScrollArea* self, QKeyEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperKeyPressEvent(QScrollArea* self, QKeyEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnKeyPressEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_keypressevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_ChangeEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperChangeEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnChangeEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_changeevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_InitStyleOption(const QScrollArea* self, QStyleOptionFrame* option) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea) {
        vqscrollarea->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperInitStyleOption(const QScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->QScrollArea::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QScrollArea::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInitStyleOption(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_initstyleoption_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QScrollArea_DevType(const QScrollArea* self) {
    return self->devType();
}

// Base class handler implementation
int QScrollArea_SuperDevType(const QScrollArea* self) {
    return self->QScrollArea::devType();
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDevType(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_devtype_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_DevType_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_SetVisible(QScrollArea* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QScrollArea_SuperSetVisible(QScrollArea* self, bool visible) {
    self->QScrollArea::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetVisible(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_setvisible_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QScrollArea_HeightForWidth(const QScrollArea* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QScrollArea_SuperHeightForWidth(const QScrollArea* self, int param1) {
    return self->QScrollArea::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHeightForWidth(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_heightforwidth_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QScrollArea_HasHeightForWidth(const QScrollArea* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QScrollArea_SuperHasHeightForWidth(const QScrollArea* self) {
    return self->QScrollArea::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHasHeightForWidth(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_hasheightforwidth_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QScrollArea_PaintEngine(const QScrollArea* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QScrollArea_SuperPaintEngine(const QScrollArea* self) {
    return self->QScrollArea::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnPaintEngine(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_paintengine_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_KeyReleaseEvent(QScrollArea* self, QKeyEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperKeyReleaseEvent(QScrollArea* self, QKeyEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnKeyReleaseEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_keyreleaseevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_FocusInEvent(QScrollArea* self, QFocusEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperFocusInEvent(QScrollArea* self, QFocusEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusInEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_focusinevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_FocusOutEvent(QScrollArea* self, QFocusEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperFocusOutEvent(QScrollArea* self, QFocusEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusOutEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_focusoutevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_EnterEvent(QScrollArea* self, QEnterEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperEnterEvent(QScrollArea* self, QEnterEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEnterEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_enterevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_LeaveEvent(QScrollArea* self, QEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperLeaveEvent(QScrollArea* self, QEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnLeaveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_leaveevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_MoveEvent(QScrollArea* self, QMoveEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperMoveEvent(QScrollArea* self, QMoveEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMoveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_moveevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_CloseEvent(QScrollArea* self, QCloseEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperCloseEvent(QScrollArea* self, QCloseEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCloseEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_closeevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_TabletEvent(QScrollArea* self, QTabletEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperTabletEvent(QScrollArea* self, QTabletEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnTabletEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_tabletevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_ActionEvent(QScrollArea* self, QActionEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperActionEvent(QScrollArea* self, QActionEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnActionEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_actionevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_ShowEvent(QScrollArea* self, QShowEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperShowEvent(QScrollArea* self, QShowEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnShowEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_showevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_HideEvent(QScrollArea* self, QHideEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperHideEvent(QScrollArea* self, QHideEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHideEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_hideevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QScrollArea_NativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QScrollArea::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QScrollArea_SuperNativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->QScrollArea::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QScrollArea::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnNativeEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_nativeevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QScrollArea_Metric(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea) {
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QScrollArea::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QScrollArea_SuperMetric(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->QScrollArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QScrollArea::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMetric(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_metric_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_Metric_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_InitPainter(const QScrollArea* self, QPainter* painter) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea) {
        vqscrollarea->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperInitPainter(const QScrollArea* self, QPainter* painter) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->QScrollArea::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QScrollArea::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInitPainter(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_initpainter_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QScrollArea_Redirected(const QScrollArea* self, QPoint* offset) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea) {
        return vqscrollarea->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QScrollArea_SuperRedirected(const QScrollArea* self, QPoint* offset) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->QScrollArea::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QScrollArea::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnRedirected(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_redirected_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QScrollArea_SharedPainter(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea) {
        return vqscrollarea->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QScrollArea::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QScrollArea_SuperSharedPainter(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->QScrollArea::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QScrollArea::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSharedPainter(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_sharedpainter_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_InputMethodEvent(QScrollArea* self, QInputMethodEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperInputMethodEvent(QScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollArea::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInputMethodEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_inputmethodevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QScrollArea_InputMethodQuery(const QScrollArea* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QScrollArea_SuperInputMethodQuery(const QScrollArea* self, int param1) {
    return new QVariant(self->QScrollArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInputMethodQuery(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        vqscrollarea->qscrollarea_inputmethodquery_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_TimerEvent(QScrollArea* self, QTimerEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperTimerEvent(QScrollArea* self, QTimerEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnTimerEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_timerevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_ChildEvent(QScrollArea* self, QChildEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperChildEvent(QScrollArea* self, QChildEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnChildEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_childevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_CustomEvent(QScrollArea* self, QEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperCustomEvent(QScrollArea* self, QEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollArea::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCustomEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_customevent_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_ConnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperConnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScrollArea::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnConnectNotify(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_connectnotify_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QScrollArea_DisconnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea) {
        vqscrollarea->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScrollArea::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollArea_SuperDisconnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->QScrollArea::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScrollArea::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDisconnectNotify(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self))
        vqscrollarea->qscrollarea_disconnectnotify_callback = reinterpret_cast<VirtualQScrollArea::QScrollArea_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QScrollArea_SetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->VirtualQScrollArea::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QScrollArea::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QScrollArea_ViewportMargins(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self)))
        return new QMargins(vqscrollarea->viewportMargins());
    qFatal("Error: Protected method QScrollArea::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollArea_DrawFrame(QScrollArea* self, QPainter* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->VirtualQScrollArea::drawFrame(param1);
    } else
        qFatal("Error: Protected method QScrollArea::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollArea_UpdateMicroFocus(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->VirtualQScrollArea::updateMicroFocus();
    } else
        qFatal("Error: Protected method QScrollArea::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollArea_Create(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->VirtualQScrollArea::create();
    } else
        qFatal("Error: Protected method QScrollArea::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollArea_Destroy(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->VirtualQScrollArea::destroy();
    } else
        qFatal("Error: Protected method QScrollArea::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScrollArea_FocusNextChild(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->VirtualQScrollArea::focusNextChild();
    } else
        qFatal("Error: Protected method QScrollArea::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScrollArea_FocusPreviousChild(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->VirtualQScrollArea::focusPreviousChild();
    } else
        qFatal("Error: Protected method QScrollArea::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QScrollArea_Sender(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->VirtualQScrollArea::sender();
    } else
        qFatal("Error: Protected method QScrollArea::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QScrollArea_SenderSignalIndex(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->VirtualQScrollArea::senderSignalIndex();
    } else
        qFatal("Error: Protected method QScrollArea::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QScrollArea_Receivers(const QScrollArea* self, const char* signal) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->VirtualQScrollArea::receivers(signal);
    } else
        qFatal("Error: Protected method QScrollArea::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScrollArea_IsSignalConnected(const QScrollArea* self, const QMetaMethod* signal) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->VirtualQScrollArea::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QScrollArea::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QScrollArea_GetDecodedMetricF(const QScrollArea* self, int metricA, int metricB) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->VirtualQScrollArea::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QScrollArea::getDecodedMetricF called without a directly constructed type");
}

void QScrollArea_Delete(QScrollArea* self) {
    delete self;
}
