#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QBrush>
#include <QByteArray>
#include <QChart>
#include <QChartView>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QFrame>
#include <QGraphicsEffect>
#include <QGraphicsItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
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
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QChartView_OnMetacall(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Metacall_Callback(reinterpret_cast<VirtualQChartView::QChartView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QChartView_QBaseMetacall(QChartView* self, int param1, int param2, void** param3) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Metacall_IsBase(true);
        return vqchartview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QChartView_Tr(const char* s) {
    QString _ret = QChartView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QChartView_SetRubberBand(QChartView* self, int* rubberBands) {
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

libqt_string QChartView_Tr2(const char* s, const char* c) {
    QString _ret = QChartView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QChartView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QChartView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->resizeEvent(event);
    } else {
        vqchartview->resizeEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseResizeEvent(QChartView* self, QResizeEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ResizeEvent_IsBase(true);
        vqchartview->resizeEvent(event);
    } else {
        vqchartview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnResizeEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ResizeEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->mousePressEvent(event);
    } else {
        vqchartview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseMousePressEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MousePressEvent_IsBase(true);
        vqchartview->mousePressEvent(event);
    } else {
        vqchartview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMousePressEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MousePressEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->mouseMoveEvent(event);
    } else {
        vqchartview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseMouseMoveEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MouseMoveEvent_IsBase(true);
        vqchartview->mouseMoveEvent(event);
    } else {
        vqchartview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseMoveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->mouseReleaseEvent(event);
    } else {
        vqchartview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseMouseReleaseEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MouseReleaseEvent_IsBase(true);
        vqchartview->mouseReleaseEvent(event);
    } else {
        vqchartview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseReleaseEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QChartView_SizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return new QSize(vqchartview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QChartView_QBaseSizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_SizeHint_IsBase(true);
        return new QSize(vqchartview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSizeHint(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_SizeHint_Callback(reinterpret_cast<VirtualQChartView::QChartView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QChartView_InputMethodQuery(const QChartView* self, int query) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return new QVariant(vqchartview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QChartView_QBaseInputMethodQuery(const QChartView* self, int query) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_InputMethodQuery_IsBase(true);
        return new QVariant(vqchartview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInputMethodQuery(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_InputMethodQuery_Callback(reinterpret_cast<VirtualQChartView::QChartView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_SetupViewport(QChartView* self, QWidget* widget) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setupViewport(widget);
    } else {
        vqchartview->setupViewport(widget);
    }
}

// Base class handler implementation
void QChartView_QBaseSetupViewport(QChartView* self, QWidget* widget) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_SetupViewport_IsBase(true);
        vqchartview->setupViewport(widget);
    } else {
        vqchartview->setupViewport(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSetupViewport(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_SetupViewport_Callback(reinterpret_cast<VirtualQChartView::QChartView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_Event(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->event(event);
    } else {
        return vqchartview->event(event);
    }
}

// Base class handler implementation
bool QChartView_QBaseEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Event_IsBase(true);
        return vqchartview->event(event);
    } else {
        return vqchartview->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Event_Callback(reinterpret_cast<VirtualQChartView::QChartView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_ViewportEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->viewportEvent(event);
    } else {
        return vqchartview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QChartView_QBaseViewportEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ViewportEvent_IsBase(true);
        return vqchartview->viewportEvent(event);
    } else {
        return vqchartview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnViewportEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ViewportEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ContextMenuEvent(QChartView* self, QContextMenuEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->contextMenuEvent(event);
    } else {
        vqchartview->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseContextMenuEvent(QChartView* self, QContextMenuEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ContextMenuEvent_IsBase(true);
        vqchartview->contextMenuEvent(event);
    } else {
        vqchartview->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnContextMenuEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DragEnterEvent(QChartView* self, QDragEnterEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->dragEnterEvent(event);
    } else {
        vqchartview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseDragEnterEvent(QChartView* self, QDragEnterEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DragEnterEvent_IsBase(true);
        vqchartview->dragEnterEvent(event);
    } else {
        vqchartview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDragEnterEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DragEnterEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DragLeaveEvent(QChartView* self, QDragLeaveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->dragLeaveEvent(event);
    } else {
        vqchartview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseDragLeaveEvent(QChartView* self, QDragLeaveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DragLeaveEvent_IsBase(true);
        vqchartview->dragLeaveEvent(event);
    } else {
        vqchartview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDragLeaveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DragMoveEvent(QChartView* self, QDragMoveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->dragMoveEvent(event);
    } else {
        vqchartview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseDragMoveEvent(QChartView* self, QDragMoveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DragMoveEvent_IsBase(true);
        vqchartview->dragMoveEvent(event);
    } else {
        vqchartview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDragMoveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DragMoveEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DropEvent(QChartView* self, QDropEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->dropEvent(event);
    } else {
        vqchartview->dropEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseDropEvent(QChartView* self, QDropEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DropEvent_IsBase(true);
        vqchartview->dropEvent(event);
    } else {
        vqchartview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDropEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DropEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_FocusInEvent(QChartView* self, QFocusEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->focusInEvent(event);
    } else {
        vqchartview->focusInEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseFocusInEvent(QChartView* self, QFocusEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusInEvent_IsBase(true);
        vqchartview->focusInEvent(event);
    } else {
        vqchartview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusInEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusInEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_FocusNextPrevChild(QChartView* self, bool next) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->focusNextPrevChild(next);
    } else {
        return vqchartview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QChartView_QBaseFocusNextPrevChild(QChartView* self, bool next) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusNextPrevChild_IsBase(true);
        return vqchartview->focusNextPrevChild(next);
    } else {
        return vqchartview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusNextPrevChild(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQChartView::QChartView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_FocusOutEvent(QChartView* self, QFocusEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->focusOutEvent(event);
    } else {
        vqchartview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseFocusOutEvent(QChartView* self, QFocusEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusOutEvent_IsBase(true);
        vqchartview->focusOutEvent(event);
    } else {
        vqchartview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusOutEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusOutEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_KeyPressEvent(QChartView* self, QKeyEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->keyPressEvent(event);
    } else {
        vqchartview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseKeyPressEvent(QChartView* self, QKeyEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_KeyPressEvent_IsBase(true);
        vqchartview->keyPressEvent(event);
    } else {
        vqchartview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnKeyPressEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_KeyPressEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_KeyReleaseEvent(QChartView* self, QKeyEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->keyReleaseEvent(event);
    } else {
        vqchartview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseKeyReleaseEvent(QChartView* self, QKeyEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_KeyReleaseEvent_IsBase(true);
        vqchartview->keyReleaseEvent(event);
    } else {
        vqchartview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnKeyReleaseEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_MouseDoubleClickEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->mouseDoubleClickEvent(event);
    } else {
        vqchartview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseMouseDoubleClickEvent(QChartView* self, QMouseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MouseDoubleClickEvent_IsBase(true);
        vqchartview->mouseDoubleClickEvent(event);
    } else {
        vqchartview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseDoubleClickEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_WheelEvent(QChartView* self, QWheelEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->wheelEvent(event);
    } else {
        vqchartview->wheelEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseWheelEvent(QChartView* self, QWheelEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_WheelEvent_IsBase(true);
        vqchartview->wheelEvent(event);
    } else {
        vqchartview->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnWheelEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_WheelEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_PaintEvent(QChartView* self, QPaintEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->paintEvent(event);
    } else {
        vqchartview->paintEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBasePaintEvent(QChartView* self, QPaintEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_PaintEvent_IsBase(true);
        vqchartview->paintEvent(event);
    } else {
        vqchartview->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnPaintEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_PaintEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ScrollContentsBy(QChartView* self, int dx, int dy) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqchartview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QChartView_QBaseScrollContentsBy(QChartView* self, int dx, int dy) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ScrollContentsBy_IsBase(true);
        vqchartview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqchartview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnScrollContentsBy(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQChartView::QChartView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ShowEvent(QChartView* self, QShowEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->showEvent(event);
    } else {
        vqchartview->showEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseShowEvent(QChartView* self, QShowEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ShowEvent_IsBase(true);
        vqchartview->showEvent(event);
    } else {
        vqchartview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnShowEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ShowEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_InputMethodEvent(QChartView* self, QInputMethodEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->inputMethodEvent(event);
    } else {
        vqchartview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseInputMethodEvent(QChartView* self, QInputMethodEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_InputMethodEvent_IsBase(true);
        vqchartview->inputMethodEvent(event);
    } else {
        vqchartview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInputMethodEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_InputMethodEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DrawBackground(QChartView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->drawBackground(painter, *rect);
    } else {
        vqchartview->drawBackground(painter, *rect);
    }
}

// Base class handler implementation
void QChartView_QBaseDrawBackground(QChartView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DrawBackground_IsBase(true);
        vqchartview->drawBackground(painter, *rect);
    } else {
        vqchartview->drawBackground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDrawBackground(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DrawBackground_Callback(reinterpret_cast<VirtualQChartView::QChartView_DrawBackground_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DrawForeground(QChartView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->drawForeground(painter, *rect);
    } else {
        vqchartview->drawForeground(painter, *rect);
    }
}

// Base class handler implementation
void QChartView_QBaseDrawForeground(QChartView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DrawForeground_IsBase(true);
        vqchartview->drawForeground(painter, *rect);
    } else {
        vqchartview->drawForeground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDrawForeground(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DrawForeground_Callback(reinterpret_cast<VirtualQChartView::QChartView_DrawForeground_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QChartView_MinimumSizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return new QSize(vqchartview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QChartView_QBaseMinimumSizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_MinimumSizeHint_IsBase(true);
        return new QSize(vqchartview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMinimumSizeHint(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQChartView::QChartView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_EventFilter(QChartView* self, QObject* param1, QEvent* param2) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->eventFilter(param1, param2);
    } else {
        return vqchartview->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QChartView_QBaseEventFilter(QChartView* self, QObject* param1, QEvent* param2) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_EventFilter_IsBase(true);
        return vqchartview->eventFilter(param1, param2);
    } else {
        return vqchartview->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnEventFilter(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_EventFilter_Callback(reinterpret_cast<VirtualQChartView::QChartView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QChartView_ViewportSizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return new QSize(vqchartview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QChartView_QBaseViewportSizeHint(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_ViewportSizeHint_IsBase(true);
        return new QSize(vqchartview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnViewportSizeHint(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQChartView::QChartView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ChangeEvent(QChartView* self, QEvent* param1) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->changeEvent(param1);
    } else {
        vqchartview->changeEvent(param1);
    }
}

// Base class handler implementation
void QChartView_QBaseChangeEvent(QChartView* self, QEvent* param1) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ChangeEvent_IsBase(true);
        vqchartview->changeEvent(param1);
    } else {
        vqchartview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnChangeEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ChangeEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_InitStyleOption(const QChartView* self, QStyleOptionFrame* option) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->initStyleOption(option);
    } else {
        vqchartview->initStyleOption(option);
    }
}

// Base class handler implementation
void QChartView_QBaseInitStyleOption(const QChartView* self, QStyleOptionFrame* option) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_InitStyleOption_IsBase(true);
        vqchartview->initStyleOption(option);
    } else {
        vqchartview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInitStyleOption(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_InitStyleOption_Callback(reinterpret_cast<VirtualQChartView::QChartView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QChartView_DevType(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->devType();
    } else {
        return vqchartview->devType();
    }
}

// Base class handler implementation
int QChartView_QBaseDevType(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_DevType_IsBase(true);
        return vqchartview->devType();
    } else {
        return vqchartview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDevType(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_DevType_Callback(reinterpret_cast<VirtualQChartView::QChartView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_SetVisible(QChartView* self, bool visible) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setVisible(visible);
    } else {
        vqchartview->setVisible(visible);
    }
}

// Base class handler implementation
void QChartView_QBaseSetVisible(QChartView* self, bool visible) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_SetVisible_IsBase(true);
        vqchartview->setVisible(visible);
    } else {
        vqchartview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSetVisible(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_SetVisible_Callback(reinterpret_cast<VirtualQChartView::QChartView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QChartView_HeightForWidth(const QChartView* self, int param1) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqchartview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QChartView_QBaseHeightForWidth(const QChartView* self, int param1) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_HeightForWidth_IsBase(true);
        return vqchartview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqchartview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnHeightForWidth(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_HeightForWidth_Callback(reinterpret_cast<VirtualQChartView::QChartView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_HasHeightForWidth(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->hasHeightForWidth();
    } else {
        return vqchartview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QChartView_QBaseHasHeightForWidth(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_HasHeightForWidth_IsBase(true);
        return vqchartview->hasHeightForWidth();
    } else {
        return vqchartview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnHasHeightForWidth(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQChartView::QChartView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QChartView_PaintEngine(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->paintEngine();
    } else {
        return vqchartview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QChartView_QBasePaintEngine(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_PaintEngine_IsBase(true);
        return vqchartview->paintEngine();
    } else {
        return vqchartview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnPaintEngine(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_PaintEngine_Callback(reinterpret_cast<VirtualQChartView::QChartView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_EnterEvent(QChartView* self, QEnterEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->enterEvent(event);
    } else {
        vqchartview->enterEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseEnterEvent(QChartView* self, QEnterEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_EnterEvent_IsBase(true);
        vqchartview->enterEvent(event);
    } else {
        vqchartview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnEnterEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_EnterEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_LeaveEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->leaveEvent(event);
    } else {
        vqchartview->leaveEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseLeaveEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_LeaveEvent_IsBase(true);
        vqchartview->leaveEvent(event);
    } else {
        vqchartview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnLeaveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_LeaveEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_MoveEvent(QChartView* self, QMoveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->moveEvent(event);
    } else {
        vqchartview->moveEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseMoveEvent(QChartView* self, QMoveEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MoveEvent_IsBase(true);
        vqchartview->moveEvent(event);
    } else {
        vqchartview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMoveEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_MoveEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_CloseEvent(QChartView* self, QCloseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->closeEvent(event);
    } else {
        vqchartview->closeEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseCloseEvent(QChartView* self, QCloseEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_CloseEvent_IsBase(true);
        vqchartview->closeEvent(event);
    } else {
        vqchartview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnCloseEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_CloseEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_TabletEvent(QChartView* self, QTabletEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->tabletEvent(event);
    } else {
        vqchartview->tabletEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseTabletEvent(QChartView* self, QTabletEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_TabletEvent_IsBase(true);
        vqchartview->tabletEvent(event);
    } else {
        vqchartview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnTabletEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_TabletEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ActionEvent(QChartView* self, QActionEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->actionEvent(event);
    } else {
        vqchartview->actionEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseActionEvent(QChartView* self, QActionEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ActionEvent_IsBase(true);
        vqchartview->actionEvent(event);
    } else {
        vqchartview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnActionEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ActionEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_HideEvent(QChartView* self, QHideEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->hideEvent(event);
    } else {
        vqchartview->hideEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseHideEvent(QChartView* self, QHideEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_HideEvent_IsBase(true);
        vqchartview->hideEvent(event);
    } else {
        vqchartview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnHideEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_HideEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_NativeEvent(QChartView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqchartview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QChartView_QBaseNativeEvent(QChartView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_NativeEvent_IsBase(true);
        return vqchartview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqchartview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnNativeEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_NativeEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QChartView_Metric(const QChartView* self, int param1) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqchartview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QChartView_QBaseMetric(const QChartView* self, int param1) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Metric_IsBase(true);
        return vqchartview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqchartview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMetric(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Metric_Callback(reinterpret_cast<VirtualQChartView::QChartView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_InitPainter(const QChartView* self, QPainter* painter) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->initPainter(painter);
    } else {
        vqchartview->initPainter(painter);
    }
}

// Base class handler implementation
void QChartView_QBaseInitPainter(const QChartView* self, QPainter* painter) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_InitPainter_IsBase(true);
        vqchartview->initPainter(painter);
    } else {
        vqchartview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnInitPainter(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_InitPainter_Callback(reinterpret_cast<VirtualQChartView::QChartView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QChartView_Redirected(const QChartView* self, QPoint* offset) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->redirected(offset);
    } else {
        return vqchartview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QChartView_QBaseRedirected(const QChartView* self, QPoint* offset) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Redirected_IsBase(true);
        return vqchartview->redirected(offset);
    } else {
        return vqchartview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnRedirected(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Redirected_Callback(reinterpret_cast<VirtualQChartView::QChartView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QChartView_SharedPainter(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->sharedPainter();
    } else {
        return vqchartview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QChartView_QBaseSharedPainter(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_SharedPainter_IsBase(true);
        return vqchartview->sharedPainter();
    } else {
        return vqchartview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSharedPainter(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_SharedPainter_Callback(reinterpret_cast<VirtualQChartView::QChartView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_TimerEvent(QChartView* self, QTimerEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->timerEvent(event);
    } else {
        vqchartview->timerEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseTimerEvent(QChartView* self, QTimerEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_TimerEvent_IsBase(true);
        vqchartview->timerEvent(event);
    } else {
        vqchartview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnTimerEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_TimerEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ChildEvent(QChartView* self, QChildEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->childEvent(event);
    } else {
        vqchartview->childEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseChildEvent(QChartView* self, QChildEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ChildEvent_IsBase(true);
        vqchartview->childEvent(event);
    } else {
        vqchartview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnChildEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ChildEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_CustomEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->customEvent(event);
    } else {
        vqchartview->customEvent(event);
    }
}

// Base class handler implementation
void QChartView_QBaseCustomEvent(QChartView* self, QEvent* event) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_CustomEvent_IsBase(true);
        vqchartview->customEvent(event);
    } else {
        vqchartview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnCustomEvent(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_CustomEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_ConnectNotify(QChartView* self, QMetaMethod* signal) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->connectNotify(*signal);
    } else {
        vqchartview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QChartView_QBaseConnectNotify(QChartView* self, QMetaMethod* signal) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ConnectNotify_IsBase(true);
        vqchartview->connectNotify(*signal);
    } else {
        vqchartview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnConnectNotify(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_ConnectNotify_Callback(reinterpret_cast<VirtualQChartView::QChartView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DisconnectNotify(QChartView* self, QMetaMethod* signal) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->disconnectNotify(*signal);
    } else {
        vqchartview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QChartView_QBaseDisconnectNotify(QChartView* self, QMetaMethod* signal) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DisconnectNotify_IsBase(true);
        vqchartview->disconnectNotify(*signal);
    } else {
        vqchartview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDisconnectNotify(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DisconnectNotify_Callback(reinterpret_cast<VirtualQChartView::QChartView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_SetViewportMargins(QChartView* self, int left, int top, int right, int bottom) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqchartview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QChartView_QBaseSetViewportMargins(QChartView* self, int left, int top, int right, int bottom) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_SetViewportMargins_IsBase(true);
        vqchartview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqchartview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSetViewportMargins(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_SetViewportMargins_Callback(reinterpret_cast<VirtualQChartView::QChartView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QChartView_ViewportMargins(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return new QMargins(vqchartview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QChartView_QBaseViewportMargins(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_ViewportMargins_IsBase(true);
        return new QMargins(vqchartview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnViewportMargins(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_ViewportMargins_Callback(reinterpret_cast<VirtualQChartView::QChartView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_DrawFrame(QChartView* self, QPainter* param1) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->drawFrame(param1);
    } else {
        vqchartview->drawFrame(param1);
    }
}

// Base class handler implementation
void QChartView_QBaseDrawFrame(QChartView* self, QPainter* param1) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DrawFrame_IsBase(true);
        vqchartview->drawFrame(param1);
    } else {
        vqchartview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDrawFrame(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_DrawFrame_Callback(reinterpret_cast<VirtualQChartView::QChartView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_UpdateMicroFocus(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->updateMicroFocus();
    } else {
        vqchartview->updateMicroFocus();
    }
}

// Base class handler implementation
void QChartView_QBaseUpdateMicroFocus(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_UpdateMicroFocus_IsBase(true);
        vqchartview->updateMicroFocus();
    } else {
        vqchartview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnUpdateMicroFocus(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQChartView::QChartView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_Create(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->create();
    } else {
        vqchartview->create();
    }
}

// Base class handler implementation
void QChartView_QBaseCreate(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Create_IsBase(true);
        vqchartview->create();
    } else {
        vqchartview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnCreate(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Create_Callback(reinterpret_cast<VirtualQChartView::QChartView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QChartView_Destroy(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->destroy();
    } else {
        vqchartview->destroy();
    }
}

// Base class handler implementation
void QChartView_QBaseDestroy(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Destroy_IsBase(true);
        vqchartview->destroy();
    } else {
        vqchartview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnDestroy(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_Destroy_Callback(reinterpret_cast<VirtualQChartView::QChartView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_FocusNextChild(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->focusNextChild();
    } else {
        return vqchartview->focusNextChild();
    }
}

// Base class handler implementation
bool QChartView_QBaseFocusNextChild(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusNextChild_IsBase(true);
        return vqchartview->focusNextChild();
    } else {
        return vqchartview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusNextChild(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusNextChild_Callback(reinterpret_cast<VirtualQChartView::QChartView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_FocusPreviousChild(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        return vqchartview->focusPreviousChild();
    } else {
        return vqchartview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QChartView_QBaseFocusPreviousChild(QChartView* self) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusPreviousChild_IsBase(true);
        return vqchartview->focusPreviousChild();
    } else {
        return vqchartview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnFocusPreviousChild(QChartView* self, intptr_t slot) {
    if (auto* vqchartview = dynamic_cast<VirtualQChartView*>(self)) {
        vqchartview->setQChartView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQChartView::QChartView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QChartView_Sender(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->sender();
    } else {
        return vqchartview->sender();
    }
}

// Base class handler implementation
QObject* QChartView_QBaseSender(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Sender_IsBase(true);
        return vqchartview->sender();
    } else {
        return vqchartview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSender(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Sender_Callback(reinterpret_cast<VirtualQChartView::QChartView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QChartView_SenderSignalIndex(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->senderSignalIndex();
    } else {
        return vqchartview->senderSignalIndex();
    }
}

// Base class handler implementation
int QChartView_QBaseSenderSignalIndex(const QChartView* self) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_SenderSignalIndex_IsBase(true);
        return vqchartview->senderSignalIndex();
    } else {
        return vqchartview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnSenderSignalIndex(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQChartView::QChartView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QChartView_Receivers(const QChartView* self, const char* signal) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->receivers(signal);
    } else {
        return vqchartview->receivers(signal);
    }
}

// Base class handler implementation
int QChartView_QBaseReceivers(const QChartView* self, const char* signal) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Receivers_IsBase(true);
        return vqchartview->receivers(signal);
    } else {
        return vqchartview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnReceivers(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_Receivers_Callback(reinterpret_cast<VirtualQChartView::QChartView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChartView_IsSignalConnected(const QChartView* self, QMetaMethod* signal) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        return vqchartview->isSignalConnected(*signal);
    } else {
        return vqchartview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QChartView_QBaseIsSignalConnected(const QChartView* self, QMetaMethod* signal) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_IsSignalConnected_IsBase(true);
        return vqchartview->isSignalConnected(*signal);
    } else {
        return vqchartview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnIsSignalConnected(const QChartView* self, intptr_t slot) {
    if (auto* vqchartview = const_cast<VirtualQChartView*>(dynamic_cast<const VirtualQChartView*>(self))) {
        vqchartview->setQChartView_IsSignalConnected_Callback(reinterpret_cast<VirtualQChartView::QChartView_IsSignalConnected_Callback>(slot));
    }
}

void QChartView_Delete(QChartView* self) {
    delete self;
}
