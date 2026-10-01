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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractScrollArea_Tr(const char* s) {
    auto _ret = QAbstractScrollArea::tr(s);
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
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
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
    return new QSize(self->minimumSizeHint());
}

QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self) {
    return new QSize(self->sizeHint());
}

void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->sizeAdjustPolicy());
}

void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy) {
    self->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
}

bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QAbstractScrollArea::eventFilter called without a directly constructed type");
}

bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->event(param1);
    }
    qFatal("Error: Protected method QAbstractScrollArea::event called without a directly constructed type");
}

bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->viewportEvent(param1);
    }
    qFatal("Error: Protected method QAbstractScrollArea::viewportEvent called without a directly constructed type");
}

void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->resizeEvent(param1);
    }
}

void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->paintEvent(param1);
    }
}

void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->mousePressEvent(param1);
    }
}

void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->mouseReleaseEvent(param1);
    }
}

void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    }
}

void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->mouseMoveEvent(param1);
    }
}

void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->wheelEvent(param1);
    }
}

void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->contextMenuEvent(param1);
    }
}

void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->dragEnterEvent(param1);
    }
}

void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->dragMoveEvent(param1);
    }
}

void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->dragLeaveEvent(param1);
    }
}

void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->dropEvent(param1);
    }
}

void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->keyPressEvent(param1);
    }
}

void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        return new QSize(vqabstractscrollarea->viewportSizeHint());
    }
    qFatal("Error: Protected method QAbstractScrollArea::viewportSizeHint called without a directly constructed type");
}

libqt_string QAbstractScrollArea_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractScrollArea::tr(s, c);
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
    auto _ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractScrollArea_SuperMetaObject(const QAbstractScrollArea* self) {
    return (QMetaObject*)self->QAbstractScrollArea::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetaObject(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_metaobject_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractScrollArea_SuperMetacast(QAbstractScrollArea* self, const char* param1) {
    return self->QAbstractScrollArea::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetacast(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_metacast_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractScrollArea_SuperMetacall(QAbstractScrollArea* self, int param1, int param2, void** param3) {
    return self->QAbstractScrollArea::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetacall(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_metacall_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractScrollArea_SuperMinimumSizeHint(const QAbstractScrollArea* self) {
    return new QSize(self->QAbstractScrollArea::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMinimumSizeHint(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_minimumsizehint_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractScrollArea_SuperSizeHint(const QAbstractScrollArea* self) {
    return new QSize(self->QAbstractScrollArea::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSizeHint(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_sizehint_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperSetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
    self->QAbstractScrollArea::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetupViewport(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_setupviewport_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetupViewport_Callback>(slot);
}

// Base class handler implementation
bool QAbstractScrollArea_SuperEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->QAbstractScrollArea::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEventFilter(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_eventfilter_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QAbstractScrollArea_SuperEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->QAbstractScrollArea::event(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_event_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Event_Callback>(slot);
}

// Base class handler implementation
bool QAbstractScrollArea_SuperViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->QAbstractScrollArea::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_viewportevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnResizeEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_resizeevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperPaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_paintevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMousePressEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_mousepressevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseDoubleClickEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnWheelEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_wheelevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnContextMenuEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_dragenterevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperDropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDropEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_dropevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyPressEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_keypressevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractScrollArea_SuperScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnScrollContentsBy(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_scrollcontentsby_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractScrollArea_SuperViewportSizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        return new QSize(vqabstractscrollarea->QAbstractScrollArea::viewportSizeHint());
    qFatal("Error: Protected virtual method QAbstractScrollArea::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportSizeHint(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_viewportsizehint_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_ChangeEvent(QAbstractScrollArea* self, QEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperChangeEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnChangeEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_changeevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_InitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea) {
        vqabstractscrollarea->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperInitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->QAbstractScrollArea::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInitStyleOption(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_initstyleoption_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QAbstractScrollArea_DevType(const QAbstractScrollArea* self) {
    return self->devType();
}

// Base class handler implementation
int QAbstractScrollArea_SuperDevType(const QAbstractScrollArea* self) {
    return self->QAbstractScrollArea::devType();
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDevType(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_devtype_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DevType_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_SetVisible(QAbstractScrollArea* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QAbstractScrollArea_SuperSetVisible(QAbstractScrollArea* self, bool visible) {
    self->QAbstractScrollArea::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetVisible(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_setvisible_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QAbstractScrollArea_HeightForWidth(const QAbstractScrollArea* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QAbstractScrollArea_SuperHeightForWidth(const QAbstractScrollArea* self, int param1) {
    return self->QAbstractScrollArea::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHeightForWidth(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_heightforwidth_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractScrollArea_HasHeightForWidth(const QAbstractScrollArea* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QAbstractScrollArea_SuperHasHeightForWidth(const QAbstractScrollArea* self) {
    return self->QAbstractScrollArea::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHasHeightForWidth(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_hasheightforwidth_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QAbstractScrollArea_PaintEngine(const QAbstractScrollArea* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QAbstractScrollArea_SuperPaintEngine(const QAbstractScrollArea* self) {
    return self->QAbstractScrollArea::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEngine(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_paintengine_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_KeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperKeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_FocusInEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperFocusInEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusInEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_focusinevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_FocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperFocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusOutEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_focusoutevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_EnterEvent(QAbstractScrollArea* self, QEnterEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperEnterEvent(QAbstractScrollArea* self, QEnterEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_enterevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_LeaveEvent(QAbstractScrollArea* self, QEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperLeaveEvent(QAbstractScrollArea* self, QEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_leaveevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_MoveEvent(QAbstractScrollArea* self, QMoveEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperMoveEvent(QAbstractScrollArea* self, QMoveEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_moveevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_CloseEvent(QAbstractScrollArea* self, QCloseEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperCloseEvent(QAbstractScrollArea* self, QCloseEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCloseEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_closeevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_TabletEvent(QAbstractScrollArea* self, QTabletEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperTabletEvent(QAbstractScrollArea* self, QTabletEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnTabletEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_tabletevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_ActionEvent(QAbstractScrollArea* self, QActionEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperActionEvent(QAbstractScrollArea* self, QActionEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnActionEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_actionevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_ShowEvent(QAbstractScrollArea* self, QShowEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperShowEvent(QAbstractScrollArea* self, QShowEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnShowEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_showevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_HideEvent(QAbstractScrollArea* self, QHideEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperHideEvent(QAbstractScrollArea* self, QHideEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHideEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_hideevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractScrollArea_NativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractScrollArea_SuperNativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->QAbstractScrollArea::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnNativeEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_nativeevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractScrollArea_Metric(const QAbstractScrollArea* self, int param1) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QAbstractScrollArea_SuperMetric(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->QAbstractScrollArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetric(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_metric_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metric_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_InitPainter(const QAbstractScrollArea* self, QPainter* painter) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea) {
        vqabstractscrollarea->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperInitPainter(const QAbstractScrollArea* self, QPainter* painter) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->QAbstractScrollArea::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInitPainter(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_initpainter_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QAbstractScrollArea_Redirected(const QAbstractScrollArea* self, QPoint* offset) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QAbstractScrollArea_SuperRedirected(const QAbstractScrollArea* self, QPoint* offset) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->QAbstractScrollArea::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnRedirected(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_redirected_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QAbstractScrollArea_SharedPainter(const QAbstractScrollArea* self) {
    auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self));
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QAbstractScrollArea_SuperSharedPainter(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->QAbstractScrollArea::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSharedPainter(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_sharedpainter_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_InputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperInputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInputMethodEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractScrollArea_InputMethodQuery(const QAbstractScrollArea* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QAbstractScrollArea_SuperInputMethodQuery(const QAbstractScrollArea* self, int param1) {
    return new QVariant(self->QAbstractScrollArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInputMethodQuery(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        vqabstractscrollarea->qabstractscrollarea_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusNextPrevChild(QAbstractScrollArea* self, bool next) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        return vqabstractscrollarea->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractScrollArea_SuperFocusNextPrevChild(QAbstractScrollArea* self, bool next) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->QAbstractScrollArea::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusNextPrevChild(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_focusnextprevchild_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_TimerEvent(QAbstractScrollArea* self, QTimerEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperTimerEvent(QAbstractScrollArea* self, QTimerEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnTimerEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_timerevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_ChildEvent(QAbstractScrollArea* self, QChildEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperChildEvent(QAbstractScrollArea* self, QChildEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnChildEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_childevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_CustomEvent(QAbstractScrollArea* self, QEvent* event) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperCustomEvent(QAbstractScrollArea* self, QEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCustomEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_customevent_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_ConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnConnectNotify(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_connectnotify_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractScrollArea_DisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
    if (vqabstractscrollarea) {
        vqabstractscrollarea->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractScrollArea::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractScrollArea_SuperDisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->QAbstractScrollArea::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractScrollArea::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDisconnectNotify(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self))
        vqabstractscrollarea->qabstractscrollarea_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->VirtualQAbstractScrollArea::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QAbstractScrollArea::setViewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractScrollArea_SetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->VirtualQAbstractScrollArea::setViewportMargins(*margins);
    } else
        qFatal("Error: Protected method QAbstractScrollArea::setViewportMargins2 called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self)))
        return new QMargins(vqabstractscrollarea->viewportMargins());
    qFatal("Error: Protected method QAbstractScrollArea::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractScrollArea_DrawFrame(QAbstractScrollArea* self, QPainter* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->VirtualQAbstractScrollArea::drawFrame(param1);
    } else
        qFatal("Error: Protected method QAbstractScrollArea::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractScrollArea_UpdateMicroFocus(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->VirtualQAbstractScrollArea::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractScrollArea_Create(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->VirtualQAbstractScrollArea::create();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractScrollArea_Destroy(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->VirtualQAbstractScrollArea::destroy();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractScrollArea_FocusNextChild(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::focusNextChild();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractScrollArea_FocusPreviousChild(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::focusPreviousChild();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractScrollArea_Sender(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::sender();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractScrollArea_SenderSignalIndex(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractScrollArea::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractScrollArea_Receivers(const QAbstractScrollArea* self, const char* signal) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractScrollArea::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractScrollArea_IsSignalConnected(const QAbstractScrollArea* self, const QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractScrollArea::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QAbstractScrollArea_GetDecodedMetricF(const QAbstractScrollArea* self, int metricA, int metricB) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->VirtualQAbstractScrollArea::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QAbstractScrollArea::getDecodedMetricF called without a directly constructed type");
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
    delete self;
}
