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
#include <QByteArray>
#include <cstring>
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
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScrollArea*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QScrollArea_OnMetacall(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Metacall_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QScrollArea_QBaseMetacall(QScrollArea* self, int param1, int param2, void** param3) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Metacall_IsBase(true);
        return vqscrollarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScrollArea*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScrollArea_Tr(const char* s) {
    QString _ret = QScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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

int QScrollArea_Alignment(const QScrollArea* self) {
    return static_cast<int>(self->alignment());
}

void QScrollArea_SetAlignment(QScrollArea* self, int alignment) {
    self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y));
}

void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
    self->ensureWidgetVisible(childWidget);
}

libqt_string QScrollArea_Tr2(const char* s, const char* c) {
    QString _ret = QScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScrollArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScrollArea::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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

// Derived class handler implementation
QSize* QScrollArea_SizeHint(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return new QSize(vqscrollarea->sizeHint());
    } else {
        return new QSize(((VirtualQScrollArea*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QScrollArea_QBaseSizeHint(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SizeHint_IsBase(true);
        return new QSize(vqscrollarea->sizeHint());
    } else {
        return new QSize(((VirtualQScrollArea*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSizeHint(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->focusNextPrevChild(next);
    } else {
        return self->QScrollArea::focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseFocusNextPrevChild(QScrollArea* self, bool next) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusNextPrevChild_IsBase(true);
        return vqscrollarea->focusNextPrevChild(next);
    } else {
        return self->QScrollArea::focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusNextPrevChild(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_Event(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->event(param1);
    } else {
        return ((VirtualQScrollArea*)self)->event(param1);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Event_IsBase(true);
        return vqscrollarea->event(param1);
    } else {
        return ((VirtualQScrollArea*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Event_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->eventFilter(param1, param2);
    } else {
        return ((VirtualQScrollArea*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseEventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_EventFilter_IsBase(true);
        return vqscrollarea->eventFilter(param1, param2);
    } else {
        return ((VirtualQScrollArea*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEventFilter(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_EventFilter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->resizeEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseResizeEvent(QScrollArea* self, QResizeEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ResizeEvent_IsBase(true);
        vqscrollarea->resizeEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnResizeEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQScrollArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QScrollArea_QBaseScrollContentsBy(QScrollArea* self, int dx, int dy) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ScrollContentsBy_IsBase(true);
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQScrollArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnScrollContentsBy(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return new QSize(vqscrollarea->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QScrollArea_QBaseViewportSizeHint(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ViewportSizeHint_IsBase(true);
        return new QSize(vqscrollarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportSizeHint(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QScrollArea_MinimumSizeHint(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return new QSize(vqscrollarea->minimumSizeHint());
    } else {
        return new QSize(((VirtualQScrollArea*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QScrollArea_QBaseMinimumSizeHint(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MinimumSizeHint_IsBase(true);
        return new QSize(vqscrollarea->minimumSizeHint());
    } else {
        return new QSize(((VirtualQScrollArea*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMinimumSizeHint(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_SetupViewport(QScrollArea* self, QWidget* viewport) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setupViewport(viewport);
    } else {
        self->QScrollArea::setupViewport(viewport);
    }
}

// Base class handler implementation
void QScrollArea_QBaseSetupViewport(QScrollArea* self, QWidget* viewport) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SetupViewport_IsBase(true);
        vqscrollarea->setupViewport(viewport);
    } else {
        self->QScrollArea::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetupViewport(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SetupViewport_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_ViewportEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->viewportEvent(param1);
    } else {
        return ((VirtualQScrollArea*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseViewportEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ViewportEvent_IsBase(true);
        return vqscrollarea->viewportEvent(param1);
    } else {
        return ((VirtualQScrollArea*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ViewportEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_PaintEvent(QScrollArea* self, QPaintEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->paintEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBasePaintEvent(QScrollArea* self, QPaintEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_PaintEvent_IsBase(true);
        vqscrollarea->paintEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnPaintEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_PaintEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MousePressEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->mousePressEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMousePressEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MousePressEvent_IsBase(true);
        vqscrollarea->mousePressEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMousePressEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MousePressEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MouseReleaseEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMouseReleaseEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MouseReleaseEvent_IsBase(true);
        vqscrollarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseReleaseEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MouseDoubleClickEvent_IsBase(true);
        vqscrollarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseDoubleClickEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MouseMoveEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->mouseMoveEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMouseMoveEvent(QScrollArea* self, QMouseEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MouseMoveEvent_IsBase(true);
        vqscrollarea->mouseMoveEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseMoveEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_WheelEvent(QScrollArea* self, QWheelEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->wheelEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseWheelEvent(QScrollArea* self, QWheelEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_WheelEvent_IsBase(true);
        vqscrollarea->wheelEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnWheelEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_WheelEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->contextMenuEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ContextMenuEvent_IsBase(true);
        vqscrollarea->contextMenuEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnContextMenuEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DragEnterEvent(QScrollArea* self, QDragEnterEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->dragEnterEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDragEnterEvent(QScrollArea* self, QDragEnterEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DragEnterEvent_IsBase(true);
        vqscrollarea->dragEnterEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragEnterEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DragMoveEvent(QScrollArea* self, QDragMoveEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->dragMoveEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDragMoveEvent(QScrollArea* self, QDragMoveEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DragMoveEvent_IsBase(true);
        vqscrollarea->dragMoveEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragMoveEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->dragLeaveEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DragLeaveEvent_IsBase(true);
        vqscrollarea->dragLeaveEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragLeaveEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DropEvent(QScrollArea* self, QDropEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->dropEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDropEvent(QScrollArea* self, QDropEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DropEvent_IsBase(true);
        vqscrollarea->dropEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDropEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DropEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_KeyPressEvent(QScrollArea* self, QKeyEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->keyPressEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseKeyPressEvent(QScrollArea* self, QKeyEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_KeyPressEvent_IsBase(true);
        vqscrollarea->keyPressEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnKeyPressEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ChangeEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->changeEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseChangeEvent(QScrollArea* self, QEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ChangeEvent_IsBase(true);
        vqscrollarea->changeEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnChangeEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ChangeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_InitStyleOption(const QScrollArea* self, QStyleOptionFrame* option) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->initStyleOption(option);
    } else {
        ((VirtualQScrollArea*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QScrollArea_QBaseInitStyleOption(const QScrollArea* self, QStyleOptionFrame* option) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InitStyleOption_IsBase(true);
        vqscrollarea->initStyleOption(option);
    } else {
        ((VirtualQScrollArea*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInitStyleOption(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InitStyleOption_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_DevType(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->devType();
    } else {
        return self->QScrollArea::devType();
    }
}

// Base class handler implementation
int QScrollArea_QBaseDevType(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DevType_IsBase(true);
        return vqscrollarea->devType();
    } else {
        return self->QScrollArea::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDevType(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DevType_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_SetVisible(QScrollArea* self, bool visible) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setVisible(visible);
    } else {
        self->QScrollArea::setVisible(visible);
    }
}

// Base class handler implementation
void QScrollArea_QBaseSetVisible(QScrollArea* self, bool visible) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SetVisible_IsBase(true);
        vqscrollarea->setVisible(visible);
    } else {
        self->QScrollArea::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetVisible(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SetVisible_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_HeightForWidth(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QScrollArea::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QScrollArea_QBaseHeightForWidth(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_HeightForWidth_IsBase(true);
        return vqscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QScrollArea::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHeightForWidth(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_HeightForWidth_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_HasHeightForWidth(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->hasHeightForWidth();
    } else {
        return self->QScrollArea::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QScrollArea_QBaseHasHeightForWidth(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_HasHeightForWidth_IsBase(true);
        return vqscrollarea->hasHeightForWidth();
    } else {
        return self->QScrollArea::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHasHeightForWidth(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QScrollArea_PaintEngine(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->paintEngine();
    } else {
        return self->QScrollArea::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QScrollArea_QBasePaintEngine(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_PaintEngine_IsBase(true);
        return vqscrollarea->paintEngine();
    } else {
        return self->QScrollArea::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnPaintEngine(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_PaintEngine_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_KeyReleaseEvent(QScrollArea* self, QKeyEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->keyReleaseEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseKeyReleaseEvent(QScrollArea* self, QKeyEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_KeyReleaseEvent_IsBase(true);
        vqscrollarea->keyReleaseEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnKeyReleaseEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_FocusInEvent(QScrollArea* self, QFocusEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->focusInEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseFocusInEvent(QScrollArea* self, QFocusEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusInEvent_IsBase(true);
        vqscrollarea->focusInEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusInEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusInEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_FocusOutEvent(QScrollArea* self, QFocusEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->focusOutEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseFocusOutEvent(QScrollArea* self, QFocusEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusOutEvent_IsBase(true);
        vqscrollarea->focusOutEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusOutEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusOutEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_EnterEvent(QScrollArea* self, QEnterEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->enterEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseEnterEvent(QScrollArea* self, QEnterEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_EnterEvent_IsBase(true);
        vqscrollarea->enterEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEnterEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_EnterEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_LeaveEvent(QScrollArea* self, QEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->leaveEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseLeaveEvent(QScrollArea* self, QEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_LeaveEvent_IsBase(true);
        vqscrollarea->leaveEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnLeaveEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_LeaveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MoveEvent(QScrollArea* self, QMoveEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->moveEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMoveEvent(QScrollArea* self, QMoveEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MoveEvent_IsBase(true);
        vqscrollarea->moveEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMoveEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_MoveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_CloseEvent(QScrollArea* self, QCloseEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->closeEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseCloseEvent(QScrollArea* self, QCloseEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_CloseEvent_IsBase(true);
        vqscrollarea->closeEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCloseEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_CloseEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_TabletEvent(QScrollArea* self, QTabletEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->tabletEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseTabletEvent(QScrollArea* self, QTabletEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_TabletEvent_IsBase(true);
        vqscrollarea->tabletEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnTabletEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_TabletEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ActionEvent(QScrollArea* self, QActionEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->actionEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseActionEvent(QScrollArea* self, QActionEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ActionEvent_IsBase(true);
        vqscrollarea->actionEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnActionEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ActionEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ShowEvent(QScrollArea* self, QShowEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->showEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseShowEvent(QScrollArea* self, QShowEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ShowEvent_IsBase(true);
        vqscrollarea->showEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnShowEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ShowEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_HideEvent(QScrollArea* self, QHideEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->hideEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseHideEvent(QScrollArea* self, QHideEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_HideEvent_IsBase(true);
        vqscrollarea->hideEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHideEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_HideEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_NativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQScrollArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QScrollArea_QBaseNativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_NativeEvent_IsBase(true);
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQScrollArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnNativeEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_NativeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_Metric(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQScrollArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QScrollArea_QBaseMetric(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Metric_IsBase(true);
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQScrollArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMetric(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Metric_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_InitPainter(const QScrollArea* self, QPainter* painter) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->initPainter(painter);
    } else {
        ((VirtualQScrollArea*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QScrollArea_QBaseInitPainter(const QScrollArea* self, QPainter* painter) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InitPainter_IsBase(true);
        vqscrollarea->initPainter(painter);
    } else {
        ((VirtualQScrollArea*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInitPainter(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InitPainter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QScrollArea_Redirected(const QScrollArea* self, QPoint* offset) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->redirected(offset);
    } else {
        return ((VirtualQScrollArea*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QScrollArea_QBaseRedirected(const QScrollArea* self, QPoint* offset) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Redirected_IsBase(true);
        return vqscrollarea->redirected(offset);
    } else {
        return ((VirtualQScrollArea*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnRedirected(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Redirected_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QScrollArea_SharedPainter(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->sharedPainter();
    } else {
        return ((VirtualQScrollArea*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QScrollArea_QBaseSharedPainter(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SharedPainter_IsBase(true);
        return vqscrollarea->sharedPainter();
    } else {
        return ((VirtualQScrollArea*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSharedPainter(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SharedPainter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_InputMethodEvent(QScrollArea* self, QInputMethodEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->inputMethodEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseInputMethodEvent(QScrollArea* self, QInputMethodEvent* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InputMethodEvent_IsBase(true);
        vqscrollarea->inputMethodEvent(param1);
    } else {
        ((VirtualQScrollArea*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInputMethodEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InputMethodEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QScrollArea_InputMethodQuery(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return new QVariant(vqscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQScrollArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QScrollArea_QBaseInputMethodQuery(const QScrollArea* self, int param1) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InputMethodQuery_IsBase(true);
        return new QVariant(vqscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQScrollArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInputMethodQuery(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_InputMethodQuery_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_TimerEvent(QScrollArea* self, QTimerEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->timerEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseTimerEvent(QScrollArea* self, QTimerEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_TimerEvent_IsBase(true);
        vqscrollarea->timerEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnTimerEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_TimerEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ChildEvent(QScrollArea* self, QChildEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->childEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseChildEvent(QScrollArea* self, QChildEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ChildEvent_IsBase(true);
        vqscrollarea->childEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnChildEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ChildEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_CustomEvent(QScrollArea* self, QEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->customEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseCustomEvent(QScrollArea* self, QEvent* event) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_CustomEvent_IsBase(true);
        vqscrollarea->customEvent(event);
    } else {
        ((VirtualQScrollArea*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCustomEvent(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_CustomEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ConnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->connectNotify(*signal);
    } else {
        ((VirtualQScrollArea*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollArea_QBaseConnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ConnectNotify_IsBase(true);
        vqscrollarea->connectNotify(*signal);
    } else {
        ((VirtualQScrollArea*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnConnectNotify(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ConnectNotify_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DisconnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->disconnectNotify(*signal);
    } else {
        ((VirtualQScrollArea*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDisconnectNotify(QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DisconnectNotify_IsBase(true);
        vqscrollarea->disconnectNotify(*signal);
    } else {
        ((VirtualQScrollArea*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDisconnectNotify(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DisconnectNotify_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_SetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQScrollArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QScrollArea_QBaseSetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SetViewportMargins_IsBase(true);
        vqscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQScrollArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetViewportMargins(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QScrollArea_ViewportMargins(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return new QMargins(vqscrollarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QScrollArea_QBaseViewportMargins(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ViewportMargins_IsBase(true);
        return new QMargins(vqscrollarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportMargins(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_ViewportMargins_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DrawFrame(QScrollArea* self, QPainter* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->drawFrame(param1);
    } else {
        ((VirtualQScrollArea*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDrawFrame(QScrollArea* self, QPainter* param1) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DrawFrame_IsBase(true);
        vqscrollarea->drawFrame(param1);
    } else {
        ((VirtualQScrollArea*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDrawFrame(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_DrawFrame_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_UpdateMicroFocus(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->updateMicroFocus();
    } else {
        ((VirtualQScrollArea*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QScrollArea_QBaseUpdateMicroFocus(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_UpdateMicroFocus_IsBase(true);
        vqscrollarea->updateMicroFocus();
    } else {
        ((VirtualQScrollArea*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnUpdateMicroFocus(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_Create(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->create();
    } else {
        ((VirtualQScrollArea*)self)->create();
    }
}

// Base class handler implementation
void QScrollArea_QBaseCreate(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Create_IsBase(true);
        vqscrollarea->create();
    } else {
        ((VirtualQScrollArea*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCreate(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Create_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_Destroy(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->destroy();
    } else {
        ((VirtualQScrollArea*)self)->destroy();
    }
}

// Base class handler implementation
void QScrollArea_QBaseDestroy(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Destroy_IsBase(true);
        vqscrollarea->destroy();
    } else {
        ((VirtualQScrollArea*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDestroy(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Destroy_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_FocusNextChild(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->focusNextChild();
    } else {
        return ((VirtualQScrollArea*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QScrollArea_QBaseFocusNextChild(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusNextChild_IsBase(true);
        return vqscrollarea->focusNextChild();
    } else {
        return ((VirtualQScrollArea*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusNextChild(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusNextChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_FocusPreviousChild(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->focusPreviousChild();
    } else {
        return ((VirtualQScrollArea*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QScrollArea_QBaseFocusPreviousChild(QScrollArea* self) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusPreviousChild_IsBase(true);
        return vqscrollarea->focusPreviousChild();
    } else {
        return ((VirtualQScrollArea*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusPreviousChild(QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScrollArea_Sender(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->sender();
    } else {
        return ((VirtualQScrollArea*)self)->sender();
    }
}

// Base class handler implementation
QObject* QScrollArea_QBaseSender(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Sender_IsBase(true);
        return vqscrollarea->sender();
    } else {
        return ((VirtualQScrollArea*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSender(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Sender_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_SenderSignalIndex(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->senderSignalIndex();
    } else {
        return ((VirtualQScrollArea*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QScrollArea_QBaseSenderSignalIndex(const QScrollArea* self) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SenderSignalIndex_IsBase(true);
        return vqscrollarea->senderSignalIndex();
    } else {
        return ((VirtualQScrollArea*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSenderSignalIndex(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_Receivers(const QScrollArea* self, const char* signal) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->receivers(signal);
    } else {
        return ((VirtualQScrollArea*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QScrollArea_QBaseReceivers(const QScrollArea* self, const char* signal) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Receivers_IsBase(true);
        return vqscrollarea->receivers(signal);
    } else {
        return ((VirtualQScrollArea*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnReceivers(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_Receivers_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_IsSignalConnected(const QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->isSignalConnected(*signal);
    } else {
        return ((VirtualQScrollArea*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseIsSignalConnected(const QScrollArea* self, const QMetaMethod* signal) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_IsSignalConnected_IsBase(true);
        return vqscrollarea->isSignalConnected(*signal);
    } else {
        return ((VirtualQScrollArea*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnIsSignalConnected(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_IsSignalConnected_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QScrollArea_GetDecodedMetricF(const QScrollArea* self, int metricA, int metricB) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        return vqscrollarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQScrollArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QScrollArea_QBaseGetDecodedMetricF(const QScrollArea* self, int metricA, int metricB) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_GetDecodedMetricF_IsBase(true);
        return vqscrollarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQScrollArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnGetDecodedMetricF(const QScrollArea* self, intptr_t slot) {
    auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self));
    if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
        vqscrollarea->setQScrollArea_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_GetDecodedMetricF_Callback>(slot));
    }
}

void QScrollArea_Delete(QScrollArea* self) {
    delete self;
}
