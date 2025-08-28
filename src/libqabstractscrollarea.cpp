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
#include <QList>
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
#include <QScrollBar>
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
#include <qabstractscrollarea.h>
#include "libqabstractscrollarea.h"
#include "libqabstractscrollarea.hxx"

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent) {
    return new VirtualQAbstractScrollArea(parent);
}

QAbstractScrollArea* QAbstractScrollArea_new2() {
    return new VirtualQAbstractScrollArea();
}

QMetaObject* QAbstractScrollArea_MetaObject(const QAbstractScrollArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractScrollArea_Metacast(QAbstractScrollArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractScrollArea_Metacall(QAbstractScrollArea* self, int param1, int param2, void** param3) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractScrollArea_Tr(const char* s) {
    QString _ret = QAbstractScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->verticalScrollBarPolicy());
}

void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy) {
    self->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(verticalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self) {
    return self->verticalScrollBar();
}

void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
    self->setVerticalScrollBar(scrollbar);
}

int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->horizontalScrollBarPolicy());
}

void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy) {
    self->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(horizontalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self) {
    return self->horizontalScrollBar();
}

void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
    self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self) {
    return self->cornerWidget();
}

void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
    self->setCornerWidget(widget);
}

void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment) {
    self->addScrollBarWidget(widget, static_cast<Qt::Alignment>(alignment));
}

libqt_list /* of QWidget* */ QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment) {
    QList<QWidget*> _ret = self->scrollBarWidgets(static_cast<Qt::Alignment>(alignment));
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self) {
    return self->viewport();
}

void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget) {
    self->setViewport(widget);
}

QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self) {
    return new QSize(self->maximumViewportSize());
}

QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractScrollArea*)self)->minimumSizeHint());
    }
}

QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractScrollArea*)self)->sizeHint());
    }
}

void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        self->setupViewport(viewport);
    } else {
        ((VirtualQAbstractScrollArea*)self)->setupViewport(viewport);
    }
}

int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->sizeAdjustPolicy());
}

void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy) {
    self->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
}

bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->eventFilter(param1, param2);
    }
    return {};
}

bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->event(param1);
    }
    return {};
}

bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->viewportEvent(param1);
    }
    return {};
}

void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->resizeEvent(param1);
    }
}

void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->paintEvent(param1);
    }
}

void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->mousePressEvent(param1);
    }
}

void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->mouseReleaseEvent(param1);
    }
}

void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    }
}

void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->mouseMoveEvent(param1);
    }
}

void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->wheelEvent(param1);
    }
}

void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->contextMenuEvent(param1);
    }
}

void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->dragEnterEvent(param1);
    }
}

void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->dragMoveEvent(param1);
    }
}

void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->dragLeaveEvent(param1);
    }
}

void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->dropEvent(param1);
    }
}

void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->keyPressEvent(param1);
    }
}

void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return new QSize(vqabstractscrollarea->viewportSizeHint());
    }
    return {};
}

libqt_string QAbstractScrollArea_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractScrollArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
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
int QAbstractScrollArea_QBaseMetacall(QAbstractScrollArea* self, int param1, int param2, void** param3) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Metacall_IsBase(true);
        return vqabstractscrollarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAbstractScrollArea::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetacall(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Metacall_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseMinimumSizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractscrollarea->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractScrollArea*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMinimumSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseSizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SizeHint_IsBase(true);
        return new QSize(vqabstractscrollarea->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractScrollArea*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetupViewport_IsBase(true);
        vqabstractscrollarea->setupViewport(viewport);
    } else {
        self->QAbstractScrollArea::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetupViewport(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetupViewport_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetupViewport_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_EventFilter_IsBase(true);
        return vqabstractscrollarea->eventFilter(param1, param2);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEventFilter(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_EventFilter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Event_IsBase(true);
        return vqabstractscrollarea->event(param1);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Event_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Event_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportEvent_IsBase(true);
        return vqabstractscrollarea->viewportEvent(param1);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ResizeEvent_IsBase(true);
        vqabstractscrollarea->resizeEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnResizeEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBasePaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEvent_IsBase(true);
        vqabstractscrollarea->paintEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MousePressEvent_IsBase(true);
        vqabstractscrollarea->mousePressEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMousePressEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseReleaseEvent_IsBase(true);
        vqabstractscrollarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseDoubleClickEvent_IsBase(true);
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseDoubleClickEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseMoveEvent_IsBase(true);
        vqabstractscrollarea->mouseMoveEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_WheelEvent_IsBase(true);
        vqabstractscrollarea->wheelEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnWheelEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_WheelEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ContextMenuEvent_IsBase(true);
        vqabstractscrollarea->contextMenuEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnContextMenuEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DragEnterEvent_IsBase(true);
        vqabstractscrollarea->dragEnterEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragEnterEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DragMoveEvent_IsBase(true);
        vqabstractscrollarea->dragMoveEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DragLeaveEvent_IsBase(true);
        vqabstractscrollarea->dragLeaveEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragLeaveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DropEvent_IsBase(true);
        vqabstractscrollarea->dropEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDropEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DropEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DropEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyPressEvent_IsBase(true);
        vqabstractscrollarea->keyPressEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyPressEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ScrollContentsBy_IsBase(true);
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQAbstractScrollArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnScrollContentsBy(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ScrollContentsBy_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseViewportSizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportSizeHint_IsBase(true);
        return new QSize(vqabstractscrollarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ChangeEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->changeEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseChangeEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ChangeEvent_IsBase(true);
        vqabstractscrollarea->changeEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnChangeEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_InitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->initStyleOption(option);
    } else {
        ((VirtualQAbstractScrollArea*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseInitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InitStyleOption_IsBase(true);
        vqabstractscrollarea->initStyleOption(option);
    } else {
        ((VirtualQAbstractScrollArea*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInitStyleOption(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_DevType(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->devType();
    } else {
        return self->QAbstractScrollArea::devType();
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseDevType(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DevType_IsBase(true);
        return vqabstractscrollarea->devType();
    } else {
        return self->QAbstractScrollArea::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDevType(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DevType_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetVisible(QAbstractScrollArea* self, bool visible) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setVisible(visible);
    } else {
        self->QAbstractScrollArea::setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetVisible(QAbstractScrollArea* self, bool visible) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetVisible_IsBase(true);
        vqabstractscrollarea->setVisible(visible);
    } else {
        self->QAbstractScrollArea::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetVisible(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetVisible_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_HeightForWidth(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractScrollArea::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseHeightForWidth(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_HeightForWidth_IsBase(true);
        return vqabstractscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractScrollArea::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHeightForWidth(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_HasHeightForWidth(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->hasHeightForWidth();
    } else {
        return self->QAbstractScrollArea::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseHasHeightForWidth(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_HasHeightForWidth_IsBase(true);
        return vqabstractscrollarea->hasHeightForWidth();
    } else {
        return self->QAbstractScrollArea::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHasHeightForWidth(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractScrollArea_PaintEngine(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->paintEngine();
    } else {
        return self->QAbstractScrollArea::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractScrollArea_QBasePaintEngine(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEngine_IsBase(true);
        return vqabstractscrollarea->paintEngine();
    } else {
        return self->QAbstractScrollArea::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEngine(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_KeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseKeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyReleaseEvent_IsBase(true);
        vqabstractscrollarea->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_FocusInEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->focusInEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseFocusInEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusInEvent_IsBase(true);
        vqabstractscrollarea->focusInEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusInEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_FocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->focusOutEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseFocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusOutEvent_IsBase(true);
        vqabstractscrollarea->focusOutEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusOutEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_EnterEvent(QAbstractScrollArea* self, QEnterEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->enterEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseEnterEvent(QAbstractScrollArea* self, QEnterEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_EnterEvent_IsBase(true);
        vqabstractscrollarea->enterEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_LeaveEvent(QAbstractScrollArea* self, QEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->leaveEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseLeaveEvent(QAbstractScrollArea* self, QEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_LeaveEvent_IsBase(true);
        vqabstractscrollarea->leaveEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_MoveEvent(QAbstractScrollArea* self, QMoveEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->moveEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMoveEvent(QAbstractScrollArea* self, QMoveEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MoveEvent_IsBase(true);
        vqabstractscrollarea->moveEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_CloseEvent(QAbstractScrollArea* self, QCloseEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->closeEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseCloseEvent(QAbstractScrollArea* self, QCloseEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_CloseEvent_IsBase(true);
        vqabstractscrollarea->closeEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCloseEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_TabletEvent(QAbstractScrollArea* self, QTabletEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->tabletEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseTabletEvent(QAbstractScrollArea* self, QTabletEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_TabletEvent_IsBase(true);
        vqabstractscrollarea->tabletEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnTabletEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ActionEvent(QAbstractScrollArea* self, QActionEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->actionEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseActionEvent(QAbstractScrollArea* self, QActionEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ActionEvent_IsBase(true);
        vqabstractscrollarea->actionEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnActionEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ShowEvent(QAbstractScrollArea* self, QShowEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->showEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseShowEvent(QAbstractScrollArea* self, QShowEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ShowEvent_IsBase(true);
        vqabstractscrollarea->showEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnShowEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_HideEvent(QAbstractScrollArea* self, QHideEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->hideEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseHideEvent(QAbstractScrollArea* self, QHideEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_HideEvent_IsBase(true);
        vqabstractscrollarea->hideEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHideEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_HideEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_NativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractScrollArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseNativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_NativeEvent_IsBase(true);
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractScrollArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnNativeEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_Metric(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractScrollArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseMetric(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Metric_IsBase(true);
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractScrollArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetric(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Metric_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_InitPainter(const QAbstractScrollArea* self, QPainter* painter) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->initPainter(painter);
    } else {
        ((VirtualQAbstractScrollArea*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseInitPainter(const QAbstractScrollArea* self, QPainter* painter) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InitPainter_IsBase(true);
        vqabstractscrollarea->initPainter(painter);
    } else {
        ((VirtualQAbstractScrollArea*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInitPainter(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InitPainter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractScrollArea_Redirected(const QAbstractScrollArea* self, QPoint* offset) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->redirected(offset);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractScrollArea_QBaseRedirected(const QAbstractScrollArea* self, QPoint* offset) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Redirected_IsBase(true);
        return vqabstractscrollarea->redirected(offset);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnRedirected(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Redirected_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractScrollArea_SharedPainter(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->sharedPainter();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractScrollArea_QBaseSharedPainter(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SharedPainter_IsBase(true);
        return vqabstractscrollarea->sharedPainter();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSharedPainter(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_InputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseInputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodEvent_IsBase(true);
        vqabstractscrollarea->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInputMethodEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractScrollArea_InputMethodQuery(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return new QVariant(vqabstractscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractScrollArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractScrollArea_QBaseInputMethodQuery(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractScrollArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInputMethodQuery(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusNextPrevChild(QAbstractScrollArea* self, bool next) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseFocusNextPrevChild(QAbstractScrollArea* self, bool next) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextPrevChild_IsBase(true);
        return vqabstractscrollarea->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusNextPrevChild(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_TimerEvent(QAbstractScrollArea* self, QTimerEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->timerEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseTimerEvent(QAbstractScrollArea* self, QTimerEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_TimerEvent_IsBase(true);
        vqabstractscrollarea->timerEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnTimerEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ChildEvent(QAbstractScrollArea* self, QChildEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->childEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseChildEvent(QAbstractScrollArea* self, QChildEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ChildEvent_IsBase(true);
        vqabstractscrollarea->childEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnChildEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_CustomEvent(QAbstractScrollArea* self, QEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->customEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseCustomEvent(QAbstractScrollArea* self, QEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_CustomEvent_IsBase(true);
        vqabstractscrollarea->customEvent(event);
    } else {
        ((VirtualQAbstractScrollArea*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCustomEvent(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->connectNotify(*signal);
    } else {
        ((VirtualQAbstractScrollArea*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ConnectNotify_IsBase(true);
        vqabstractscrollarea->connectNotify(*signal);
    } else {
        ((VirtualQAbstractScrollArea*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnConnectNotify(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractScrollArea*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DisconnectNotify_IsBase(true);
        vqabstractscrollarea->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractScrollArea*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDisconnectNotify(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQAbstractScrollArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins_IsBase(true);
        vqabstractscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQAbstractScrollArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetViewportMargins(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setViewportMargins(*margins);
    } else {
        ((VirtualQAbstractScrollArea*)self)->setViewportMargins(*margins);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins2_IsBase(true);
        vqabstractscrollarea->setViewportMargins(*margins);
    } else {
        ((VirtualQAbstractScrollArea*)self)->setViewportMargins(*margins);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetViewportMargins2(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins2_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetViewportMargins2_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return new QMargins(vqabstractscrollarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QAbstractScrollArea_QBaseViewportMargins(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportMargins_IsBase(true);
        return new QMargins(vqabstractscrollarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportMargins(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DrawFrame(QAbstractScrollArea* self, QPainter* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->drawFrame(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDrawFrame(QAbstractScrollArea* self, QPainter* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DrawFrame_IsBase(true);
        vqabstractscrollarea->drawFrame(param1);
    } else {
        ((VirtualQAbstractScrollArea*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDrawFrame(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_DrawFrame_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_UpdateMicroFocus(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->updateMicroFocus();
    } else {
        ((VirtualQAbstractScrollArea*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseUpdateMicroFocus(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_UpdateMicroFocus_IsBase(true);
        vqabstractscrollarea->updateMicroFocus();
    } else {
        ((VirtualQAbstractScrollArea*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnUpdateMicroFocus(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_Create(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->create();
    } else {
        ((VirtualQAbstractScrollArea*)self)->create();
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseCreate(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Create_IsBase(true);
        vqabstractscrollarea->create();
    } else {
        ((VirtualQAbstractScrollArea*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCreate(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Create_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_Destroy(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->destroy();
    } else {
        ((VirtualQAbstractScrollArea*)self)->destroy();
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDestroy(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Destroy_IsBase(true);
        vqabstractscrollarea->destroy();
    } else {
        ((VirtualQAbstractScrollArea*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDestroy(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Destroy_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusNextChild(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->focusNextChild();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseFocusNextChild(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextChild_IsBase(true);
        return vqabstractscrollarea->focusNextChild();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusNextChild(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusPreviousChild(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->focusPreviousChild();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseFocusPreviousChild(QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusPreviousChild_IsBase(true);
        return vqabstractscrollarea->focusPreviousChild();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusPreviousChild(QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractScrollArea_Sender(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->sender();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractScrollArea_QBaseSender(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Sender_IsBase(true);
        return vqabstractscrollarea->sender();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSender(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Sender_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_SenderSignalIndex(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->senderSignalIndex();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseSenderSignalIndex(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SenderSignalIndex_IsBase(true);
        return vqabstractscrollarea->senderSignalIndex();
    } else {
        return ((VirtualQAbstractScrollArea*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSenderSignalIndex(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_Receivers(const QAbstractScrollArea* self, const char* signal) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->receivers(signal);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseReceivers(const QAbstractScrollArea* self, const char* signal) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Receivers_IsBase(true);
        return vqabstractscrollarea->receivers(signal);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnReceivers(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_Receivers_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_IsSignalConnected(const QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseIsSignalConnected(const QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_IsSignalConnected_IsBase(true);
        return vqabstractscrollarea->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractScrollArea*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnIsSignalConnected(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QAbstractScrollArea_GetDecodedMetricF(const QAbstractScrollArea* self, int metricA, int metricB) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        return vqabstractscrollarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractScrollArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QAbstractScrollArea_QBaseGetDecodedMetricF(const QAbstractScrollArea* self, int metricA, int metricB) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_GetDecodedMetricF_IsBase(true);
        return vqabstractscrollarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractScrollArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnGetDecodedMetricF(const QAbstractScrollArea* self, intptr_t slot) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
        vqabstractscrollarea->setQAbstractScrollArea_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_GetDecodedMetricF_Callback>(slot));
    }
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
    delete self;
}
