#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChart>
#include <QChartView>
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
#include <QGraphicsItem>
#include <QGraphicsView>
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
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QStyleOptionGraphicsItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qchartview.h>
#include "libqchartview.h"
#include "libqchartview.hxx"

QChartView* QChartView_new(QWidget* parent) {
    return new VirtualQChartView(parent);
}

QChartView* QChartView_new2() {
    return new VirtualQChartView();
}

QChartView* QChartView_new3(QChart* chart) {
    return new VirtualQChartView(chart);
}

QChartView* QChartView_new4(QChart* chart, QWidget* parent) {
    return new VirtualQChartView(chart, parent);
}

QMetaObject* QChartView_MetaObject(const QChartView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QChartView_Metacast(QChartView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QChartView_Metacall(QChartView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QChartView_Tr(const char* s) {
    auto _ret = QChartView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QChartView_SetRubberBand(QChartView* self, const int* rubberBands) {
    self->setRubberBand((const QChartView::RubberBands&)(*rubberBands));
}

int QChartView_RubberBand(const QChartView* self) {
    return static_cast<int>(self->rubberBand());
}

QChart* QChartView_Chart(const QChartView* self) {
    return self->chart();
}

void QChartView_SetChart(QChartView* self, QChart* chart) {
    self->setChart(chart);
}

void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->resizeEvent(event);
    }
}

void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->mousePressEvent(event);
    }
}

void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->mouseMoveEvent(event);
    }
}

void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->mouseReleaseEvent(event);
    }
}

libqt_string QChartView_Tr2(const char* s, const char* c) {
    auto _ret = QChartView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QChartView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QChartView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QChartView_SuperMetaObject(const QChartView* self) {
    return (QMetaObject*)self->QChartView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMetaObject(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_metaobject_callback = reinterpret_cast<VirtualQChartView::QChartView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QChartView_SuperMetacast(QChartView* self, const char* param1) {
    return self->QChartView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMetacast(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_metacast_callback = reinterpret_cast<VirtualQChartView::QChartView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QChartView_SuperMetacall(QChartView* self, int param1, int param2, void** param3) {
    return self->QChartView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMetacall(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_metacall_callback = reinterpret_cast<VirtualQChartView::QChartView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QChartView_SuperResizeEvent(QChartView* self, QResizeEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnResizeEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_resizeevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QChartView_SuperMousePressEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMousePressEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_mousepressevent_callback = reinterpret_cast<VirtualQChartView::QChartView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QChartView_SuperMouseMoveEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseMoveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_mousemoveevent_callback = reinterpret_cast<VirtualQChartView::QChartView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QChartView_SuperMouseReleaseEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseReleaseEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_mousereleaseevent_callback = reinterpret_cast<VirtualQChartView::QChartView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QChartView_SizeHint(const QChartView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QChartView_SuperSizeHint(const QChartView* self) {
    return new QSize(self->QChartView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSizeHint(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_sizehint_callback = reinterpret_cast<VirtualQChartView::QChartView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QVariant* QChartView_InputMethodQuery(const QChartView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QChartView_SuperInputMethodQuery(const QChartView* self, int query) {
    return new QVariant(self->QChartView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInputMethodQuery(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_inputmethodquery_callback = reinterpret_cast<VirtualQChartView::QChartView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QChartView_SetupViewport(QChartView* self, QWidget* widget) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->setupViewport(widget);
    } else {
        qFatal("Error: Protected virtual method QChartView::setupViewport called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperSetupViewport(QChartView* self, QWidget* widget) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::setupViewport(widget);
    } else
        qFatal("Error: Protected virtual method QChartView::setupViewport called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSetupViewport(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_setupviewport_callback = reinterpret_cast<VirtualQChartView::QChartView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QChartView_Event(QChartView* self, QEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        return vqchartview->event(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChartView_SuperEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->QChartView::event(event);
    } else
        qFatal("Error: Protected virtual method QChartView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_event_callback = reinterpret_cast<VirtualQChartView::QChartView_Event_Callback>(slot);
}

// Derived class handler implementation
bool QChartView_ViewportEvent(QChartView* self, QEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        return vqchartview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChartView_SuperViewportEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->QChartView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnViewportEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_viewportevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ContextMenuEvent(QChartView* self, QContextMenuEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperContextMenuEvent(QChartView* self, QContextMenuEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnContextMenuEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_contextmenuevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DragEnterEvent(QChartView* self, QDragEnterEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDragEnterEvent(QChartView* self, QDragEnterEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDragEnterEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_dragenterevent_callback = reinterpret_cast<VirtualQChartView::QChartView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DragLeaveEvent(QChartView* self, QDragLeaveEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDragLeaveEvent(QChartView* self, QDragLeaveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDragLeaveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_dragleaveevent_callback = reinterpret_cast<VirtualQChartView::QChartView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DragMoveEvent(QChartView* self, QDragMoveEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDragMoveEvent(QChartView* self, QDragMoveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDragMoveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_dragmoveevent_callback = reinterpret_cast<VirtualQChartView::QChartView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DropEvent(QChartView* self, QDropEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDropEvent(QChartView* self, QDropEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDropEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_dropevent_callback = reinterpret_cast<VirtualQChartView::QChartView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_FocusInEvent(QChartView* self, QFocusEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperFocusInEvent(QChartView* self, QFocusEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusInEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_focusinevent_callback = reinterpret_cast<VirtualQChartView::QChartView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
bool QChartView_FocusNextPrevChild(QChartView* self, bool next) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        return vqchartview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QChartView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChartView_SuperFocusNextPrevChild(QChartView* self, bool next) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->QChartView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QChartView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusNextPrevChild(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_focusnextprevchild_callback = reinterpret_cast<VirtualQChartView::QChartView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QChartView_FocusOutEvent(QChartView* self, QFocusEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperFocusOutEvent(QChartView* self, QFocusEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusOutEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_focusoutevent_callback = reinterpret_cast<VirtualQChartView::QChartView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_KeyPressEvent(QChartView* self, QKeyEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperKeyPressEvent(QChartView* self, QKeyEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnKeyPressEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_keypressevent_callback = reinterpret_cast<VirtualQChartView::QChartView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_KeyReleaseEvent(QChartView* self, QKeyEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperKeyReleaseEvent(QChartView* self, QKeyEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnKeyReleaseEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_keyreleaseevent_callback = reinterpret_cast<VirtualQChartView::QChartView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_MouseDoubleClickEvent(QChartView* self, QMouseEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperMouseDoubleClickEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseDoubleClickEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQChartView::QChartView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_WheelEvent(QChartView* self, QWheelEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperWheelEvent(QChartView* self, QWheelEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnWheelEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_wheelevent_callback = reinterpret_cast<VirtualQChartView::QChartView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_PaintEvent(QChartView* self, QPaintEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperPaintEvent(QChartView* self, QPaintEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnPaintEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_paintevent_callback = reinterpret_cast<VirtualQChartView::QChartView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ScrollContentsBy(QChartView* self, int dx, int dy) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QChartView::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperScrollContentsBy(QChartView* self, int dx, int dy) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QChartView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnScrollContentsBy(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_scrollcontentsby_callback = reinterpret_cast<VirtualQChartView::QChartView_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ShowEvent(QChartView* self, QShowEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperShowEvent(QChartView* self, QShowEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnShowEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_showevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_InputMethodEvent(QChartView* self, QInputMethodEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperInputMethodEvent(QChartView* self, QInputMethodEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInputMethodEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_inputmethodevent_callback = reinterpret_cast<VirtualQChartView::QChartView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DrawBackground(QChartView* self, QPainter* painter, const QRectF* rect) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->drawBackground(painter, *rect);
    } else {
        qFatal("Error: Protected virtual method QChartView::drawBackground called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDrawBackground(QChartView* self, QPainter* painter, const QRectF* rect) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::drawBackground(painter, *rect);
    } else
        qFatal("Error: Protected virtual method QChartView::drawBackground called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDrawBackground(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_drawbackground_callback = reinterpret_cast<VirtualQChartView::QChartView_DrawBackground_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DrawForeground(QChartView* self, QPainter* painter, const QRectF* rect) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->drawForeground(painter, *rect);
    } else {
        qFatal("Error: Protected virtual method QChartView::drawForeground called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDrawForeground(QChartView* self, QPainter* painter, const QRectF* rect) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::drawForeground(painter, *rect);
    } else
        qFatal("Error: Protected virtual method QChartView::drawForeground called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDrawForeground(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_drawforeground_callback = reinterpret_cast<VirtualQChartView::QChartView_DrawForeground_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DrawItems(QChartView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->drawItems(painter, static_cast<int>(numItems), items, options);
    } else {
        qFatal("Error: Protected virtual method QChartView::drawItems called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDrawItems(QChartView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::drawItems(painter, static_cast<int>(numItems), items, options);
    } else
        qFatal("Error: Protected virtual method QChartView::drawItems called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDrawItems(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_drawitems_callback = reinterpret_cast<VirtualQChartView::QChartView_DrawItems_Callback>(slot);
}

// Derived class handler implementation
QSize* QChartView_MinimumSizeHint(const QChartView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QChartView_SuperMinimumSizeHint(const QChartView* self) {
    return new QSize(self->QChartView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMinimumSizeHint(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_minimumsizehint_callback = reinterpret_cast<VirtualQChartView::QChartView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool QChartView_EventFilter(QChartView* self, QObject* param1, QEvent* param2) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        return vqchartview->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QChartView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChartView_SuperEventFilter(QChartView* self, QObject* param1, QEvent* param2) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->QChartView::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QChartView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnEventFilter(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_eventfilter_callback = reinterpret_cast<VirtualQChartView::QChartView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QChartView_ViewportSizeHint(const QChartView* self) {
    return new QSize((self->*&VirtualQChartView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QChartView_SuperViewportSizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        return new QSize(vqchartview->viewportSizeHint());
    qFatal("Error: Protected virtual method QChartView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnViewportSizeHint(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_viewportsizehint_callback = reinterpret_cast<VirtualQChartView::QChartView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ChangeEvent(QChartView* self, QEvent* param1) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QChartView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperChangeEvent(QChartView* self, QEvent* param1) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QChartView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnChangeEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_changeevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_InitStyleOption(const QChartView* self, QStyleOptionFrame* option) {
    auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self));
    if (vqchartview) {
        vqchartview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QChartView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperInitStyleOption(const QChartView* self, QStyleOptionFrame* option) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->QChartView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QChartView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInitStyleOption(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_initstyleoption_callback = reinterpret_cast<VirtualQChartView::QChartView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QChartView_DevType(const QChartView* self) {
    return self->devType();
}

// Base class handler implementation
int QChartView_SuperDevType(const QChartView* self) {
    return self->QChartView::devType();
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDevType(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_devtype_callback = reinterpret_cast<VirtualQChartView::QChartView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QChartView_SetVisible(QChartView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QChartView_SuperSetVisible(QChartView* self, bool visible) {
    self->QChartView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSetVisible(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_setvisible_callback = reinterpret_cast<VirtualQChartView::QChartView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QChartView_HeightForWidth(const QChartView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QChartView_SuperHeightForWidth(const QChartView* self, int param1) {
    return self->QChartView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnHeightForWidth(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_heightforwidth_callback = reinterpret_cast<VirtualQChartView::QChartView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QChartView_HasHeightForWidth(const QChartView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QChartView_SuperHasHeightForWidth(const QChartView* self) {
    return self->QChartView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnHasHeightForWidth(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_hasheightforwidth_callback = reinterpret_cast<VirtualQChartView::QChartView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QChartView_PaintEngine(const QChartView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QChartView_SuperPaintEngine(const QChartView* self) {
    return self->QChartView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnPaintEngine(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_paintengine_callback = reinterpret_cast<VirtualQChartView::QChartView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QChartView_EnterEvent(QChartView* self, QEnterEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperEnterEvent(QChartView* self, QEnterEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnEnterEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_enterevent_callback = reinterpret_cast<VirtualQChartView::QChartView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_LeaveEvent(QChartView* self, QEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperLeaveEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnLeaveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_leaveevent_callback = reinterpret_cast<VirtualQChartView::QChartView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_MoveEvent(QChartView* self, QMoveEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperMoveEvent(QChartView* self, QMoveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMoveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_moveevent_callback = reinterpret_cast<VirtualQChartView::QChartView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_CloseEvent(QChartView* self, QCloseEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperCloseEvent(QChartView* self, QCloseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnCloseEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_closeevent_callback = reinterpret_cast<VirtualQChartView::QChartView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_TabletEvent(QChartView* self, QTabletEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperTabletEvent(QChartView* self, QTabletEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnTabletEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_tabletevent_callback = reinterpret_cast<VirtualQChartView::QChartView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ActionEvent(QChartView* self, QActionEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperActionEvent(QChartView* self, QActionEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnActionEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_actionevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_HideEvent(QChartView* self, QHideEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperHideEvent(QChartView* self, QHideEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnHideEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_hideevent_callback = reinterpret_cast<VirtualQChartView::QChartView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QChartView_NativeEvent(QChartView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        return vqchartview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QChartView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChartView_SuperNativeEvent(QChartView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->QChartView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QChartView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnNativeEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_nativeevent_callback = reinterpret_cast<VirtualQChartView::QChartView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QChartView_Metric(const QChartView* self, int param1) {
    auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self));
    if (vqchartview) {
        return vqchartview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QChartView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QChartView_SuperMetric(const QChartView* self, int param1) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->QChartView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QChartView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMetric(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_metric_callback = reinterpret_cast<VirtualQChartView::QChartView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QChartView_InitPainter(const QChartView* self, QPainter* painter) {
    auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self));
    if (vqchartview) {
        vqchartview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QChartView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperInitPainter(const QChartView* self, QPainter* painter) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->QChartView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QChartView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInitPainter(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_initpainter_callback = reinterpret_cast<VirtualQChartView::QChartView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QChartView_Redirected(const QChartView* self, QPoint* offset) {
    auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self));
    if (vqchartview) {
        return vqchartview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QChartView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QChartView_SuperRedirected(const QChartView* self, QPoint* offset) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->QChartView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QChartView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnRedirected(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_redirected_callback = reinterpret_cast<VirtualQChartView::QChartView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QChartView_SharedPainter(const QChartView* self) {
    auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self));
    if (vqchartview) {
        return vqchartview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QChartView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QChartView_SuperSharedPainter(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->QChartView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QChartView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSharedPainter(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        vqchartview->qchartview_sharedpainter_callback = reinterpret_cast<VirtualQChartView::QChartView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QChartView_TimerEvent(QChartView* self, QTimerEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperTimerEvent(QChartView* self, QTimerEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnTimerEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_timerevent_callback = reinterpret_cast<VirtualQChartView::QChartView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ChildEvent(QChartView* self, QChildEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperChildEvent(QChartView* self, QChildEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnChildEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_childevent_callback = reinterpret_cast<VirtualQChartView::QChartView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_CustomEvent(QChartView* self, QEvent* event) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChartView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperCustomEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QChartView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnCustomEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_customevent_callback = reinterpret_cast<VirtualQChartView::QChartView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QChartView_ConnectNotify(QChartView* self, const QMetaMethod* signal) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QChartView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperConnectNotify(QChartView* self, const QMetaMethod* signal) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QChartView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnConnectNotify(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_connectnotify_callback = reinterpret_cast<VirtualQChartView::QChartView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QChartView_DisconnectNotify(QChartView* self, const QMetaMethod* signal) {
    auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
    if (vqchartview) {
        vqchartview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QChartView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QChartView_SuperDisconnectNotify(QChartView* self, const QMetaMethod* signal) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->QChartView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QChartView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDisconnectNotify(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self))
        vqchartview->qchartview_disconnectnotify_callback = reinterpret_cast<VirtualQChartView::QChartView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QChartView_SetViewportMargins(QChartView* self, int left, int top, int right, int bottom) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->VirtualQChartView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QChartView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QChartView_ViewportMargins(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self)))
        return new QMargins(vqchartview->viewportMargins());
    qFatal("Error: Protected method QChartView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QChartView_DrawFrame(QChartView* self, QPainter* param1) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->VirtualQChartView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QChartView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QChartView_UpdateMicroFocus(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->VirtualQChartView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QChartView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QChartView_Create(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->VirtualQChartView::create();
    } else
        qFatal("Error: Protected method QChartView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QChartView_Destroy(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->VirtualQChartView::destroy();
    } else
        qFatal("Error: Protected method QChartView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QChartView_FocusNextChild(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->VirtualQChartView::focusNextChild();
    } else
        qFatal("Error: Protected method QChartView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QChartView_FocusPreviousChild(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->VirtualQChartView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QChartView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QChartView_Sender(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->VirtualQChartView::sender();
    } else
        qFatal("Error: Protected method QChartView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QChartView_SenderSignalIndex(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->VirtualQChartView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QChartView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QChartView_Receivers(const QChartView* self, const char* signal) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->VirtualQChartView::receivers(signal);
    } else
        qFatal("Error: Protected method QChartView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QChartView_IsSignalConnected(const QChartView* self, const QMetaMethod* signal) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->VirtualQChartView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QChartView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QChartView_GetDecodedMetricF(const QChartView* self, int metricA, int metricB) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->VirtualQChartView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QChartView::getDecodedMetricF called without a directly constructed type");
}

void QChartView_Delete(QChartView* self) {
    delete self;
}
