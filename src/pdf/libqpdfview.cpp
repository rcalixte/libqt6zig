#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
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
#include <QGraphicsProxyWidget>
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
#include <QPalette>
#include <QPdfDocument>
#include <QPdfPageNavigator>
#include <QPdfView>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qpdfview.h>
#include "libqpdfview.h"
#include "libqpdfview.hxx"

QPdfView* QPdfView_new(QWidget* parent) {
    return new VirtualQPdfView(parent);
}

QPdfView* QPdfView_new2() {
    return new VirtualQPdfView();
}

QMetaObject* QPdfView_MetaObject(const QPdfView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfView_Metacast(QPdfView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfView_Metacall(QPdfView* self, int param1, int param2, void** param3) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfView_OnMetacall(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Metacall_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfView_QBaseMetacall(QPdfView* self, int param1, int param2, void** param3) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Metacall_IsBase(true);
        return vqpdfview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfView_Tr(const char* s) {
    QString _ret = QPdfView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfView_SetDocument(QPdfView* self, QPdfDocument* document) {
    self->setDocument(document);
}

QPdfDocument* QPdfView_Document(const QPdfView* self) {
    return self->document();
}

QPdfPageNavigator* QPdfView_PageNavigator(const QPdfView* self) {
    return self->pageNavigator();
}

int QPdfView_PageMode(const QPdfView* self) {
    return static_cast<int>(self->pageMode());
}

int QPdfView_ZoomMode(const QPdfView* self) {
    return static_cast<int>(self->zoomMode());
}

double QPdfView_ZoomFactor(const QPdfView* self) {
    return static_cast<double>(self->zoomFactor());
}

int QPdfView_PageSpacing(const QPdfView* self) {
    return self->pageSpacing();
}

void QPdfView_SetPageSpacing(QPdfView* self, int spacing) {
    self->setPageSpacing(static_cast<int>(spacing));
}

QMargins* QPdfView_DocumentMargins(const QPdfView* self) {
    return new QMargins(self->documentMargins());
}

void QPdfView_SetDocumentMargins(QPdfView* self, QMargins* margins) {
    self->setDocumentMargins(*margins);
}

void QPdfView_SetPageMode(QPdfView* self, int mode) {
    self->setPageMode(static_cast<QPdfView::PageMode>(mode));
}

void QPdfView_SetZoomMode(QPdfView* self, int mode) {
    self->setZoomMode(static_cast<QPdfView::ZoomMode>(mode));
}

void QPdfView_SetZoomFactor(QPdfView* self, double factor) {
    self->setZoomFactor(static_cast<qreal>(factor));
}

void QPdfView_DocumentChanged(QPdfView* self, QPdfDocument* document) {
    self->documentChanged(document);
}

void QPdfView_Connect_DocumentChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, QPdfDocument*) = reinterpret_cast<void (*)(QPdfView*, QPdfDocument*)>(slot);
    QPdfView::connect(self, &QPdfView::documentChanged, [self, slotFunc](QPdfDocument* document) {
        QPdfDocument* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void QPdfView_PageModeChanged(QPdfView* self, int pageMode) {
    self->pageModeChanged(static_cast<QPdfView::PageMode>(pageMode));
}

void QPdfView_Connect_PageModeChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self, &QPdfView::pageModeChanged, [self, slotFunc](QPdfView::PageMode pageMode) {
        int sigval1 = static_cast<int>(pageMode);
        slotFunc(self, sigval1);
    });
}

void QPdfView_ZoomModeChanged(QPdfView* self, int zoomMode) {
    self->zoomModeChanged(static_cast<QPdfView::ZoomMode>(zoomMode));
}

void QPdfView_Connect_ZoomModeChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self, &QPdfView::zoomModeChanged, [self, slotFunc](QPdfView::ZoomMode zoomMode) {
        int sigval1 = static_cast<int>(zoomMode);
        slotFunc(self, sigval1);
    });
}

void QPdfView_ZoomFactorChanged(QPdfView* self, double zoomFactor) {
    self->zoomFactorChanged(static_cast<qreal>(zoomFactor));
}

void QPdfView_Connect_ZoomFactorChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, double) = reinterpret_cast<void (*)(QPdfView*, double)>(slot);
    QPdfView::connect(self, &QPdfView::zoomFactorChanged, [self, slotFunc](qreal zoomFactor) {
        double sigval1 = static_cast<double>(zoomFactor);
        slotFunc(self, sigval1);
    });
}

void QPdfView_PageSpacingChanged(QPdfView* self, int pageSpacing) {
    self->pageSpacingChanged(static_cast<int>(pageSpacing));
}

void QPdfView_Connect_PageSpacingChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self, &QPdfView::pageSpacingChanged, [self, slotFunc](int pageSpacing) {
        int sigval1 = pageSpacing;
        slotFunc(self, sigval1);
    });
}

void QPdfView_DocumentMarginsChanged(QPdfView* self, QMargins* documentMargins) {
    self->documentMarginsChanged(*documentMargins);
}

void QPdfView_Connect_DocumentMarginsChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, QMargins*) = reinterpret_cast<void (*)(QPdfView*, QMargins*)>(slot);
    QPdfView::connect(self, &QPdfView::documentMarginsChanged, [self, slotFunc](QMargins documentMargins) {
        QMargins* sigval1 = new QMargins(documentMargins);
        slotFunc(self, sigval1);
    });
}

libqt_string QPdfView_Tr2(const char* s, const char* c) {
    QString _ret = QPdfView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPdfView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfView::tr(s, c, static_cast<int>(n));
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
void QPdfView_PaintEvent(QPdfView* self, QPaintEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->paintEvent(event);
    } else {
        vqpdfview->paintEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBasePaintEvent(QPdfView* self, QPaintEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_PaintEvent_IsBase(true);
        vqpdfview->paintEvent(event);
    } else {
        vqpdfview->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnPaintEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_PaintEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ResizeEvent(QPdfView* self, QResizeEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->resizeEvent(event);
    } else {
        vqpdfview->resizeEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseResizeEvent(QPdfView* self, QResizeEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ResizeEvent_IsBase(true);
        vqpdfview->resizeEvent(event);
    } else {
        vqpdfview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnResizeEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ResizeEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ScrollContentsBy(QPdfView* self, int dx, int dy) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QPdfView_QBaseScrollContentsBy(QPdfView* self, int dx, int dy) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ScrollContentsBy_IsBase(true);
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnScrollContentsBy(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfView_MinimumSizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return new QSize(vqpdfview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPdfView_QBaseMinimumSizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_MinimumSizeHint_IsBase(true);
        return new QSize(vqpdfview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMinimumSizeHint(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfView_SizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return new QSize(vqpdfview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QPdfView_QBaseSizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_SizeHint_IsBase(true);
        return new QSize(vqpdfview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSizeHint(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_SizeHint_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_SetupViewport(QPdfView* self, QWidget* viewport) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setupViewport(viewport);
    } else {
        vqpdfview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QPdfView_QBaseSetupViewport(QPdfView* self, QWidget* viewport) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_SetupViewport_IsBase(true);
        vqpdfview->setupViewport(viewport);
    } else {
        vqpdfview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetupViewport(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_SetupViewport_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_EventFilter(QPdfView* self, QObject* param1, QEvent* param2) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->eventFilter(param1, param2);
    } else {
        return vqpdfview->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPdfView_QBaseEventFilter(QPdfView* self, QObject* param1, QEvent* param2) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_EventFilter_IsBase(true);
        return vqpdfview->eventFilter(param1, param2);
    } else {
        return vqpdfview->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEventFilter(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_EventFilter_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_Event(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->event(param1);
    } else {
        return vqpdfview->event(param1);
    }
}

// Base class handler implementation
bool QPdfView_QBaseEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Event_IsBase(true);
        return vqpdfview->event(param1);
    } else {
        return vqpdfview->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Event_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_ViewportEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->viewportEvent(param1);
    } else {
        return vqpdfview->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QPdfView_QBaseViewportEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ViewportEvent_IsBase(true);
        return vqpdfview->viewportEvent(param1);
    } else {
        return vqpdfview->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ViewportEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MousePressEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->mousePressEvent(param1);
    } else {
        vqpdfview->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseMousePressEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MousePressEvent_IsBase(true);
        vqpdfview->mousePressEvent(param1);
    } else {
        vqpdfview->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMousePressEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MousePressEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MouseReleaseEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->mouseReleaseEvent(param1);
    } else {
        vqpdfview->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseMouseReleaseEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MouseReleaseEvent_IsBase(true);
        vqpdfview->mouseReleaseEvent(param1);
    } else {
        vqpdfview->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseReleaseEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->mouseDoubleClickEvent(param1);
    } else {
        vqpdfview->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseMouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MouseDoubleClickEvent_IsBase(true);
        vqpdfview->mouseDoubleClickEvent(param1);
    } else {
        vqpdfview->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseDoubleClickEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MouseMoveEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->mouseMoveEvent(param1);
    } else {
        vqpdfview->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseMouseMoveEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MouseMoveEvent_IsBase(true);
        vqpdfview->mouseMoveEvent(param1);
    } else {
        vqpdfview->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseMoveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_WheelEvent(QPdfView* self, QWheelEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->wheelEvent(param1);
    } else {
        vqpdfview->wheelEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseWheelEvent(QPdfView* self, QWheelEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_WheelEvent_IsBase(true);
        vqpdfview->wheelEvent(param1);
    } else {
        vqpdfview->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnWheelEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_WheelEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ContextMenuEvent(QPdfView* self, QContextMenuEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->contextMenuEvent(param1);
    } else {
        vqpdfview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseContextMenuEvent(QPdfView* self, QContextMenuEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ContextMenuEvent_IsBase(true);
        vqpdfview->contextMenuEvent(param1);
    } else {
        vqpdfview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnContextMenuEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DragEnterEvent(QPdfView* self, QDragEnterEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->dragEnterEvent(param1);
    } else {
        vqpdfview->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDragEnterEvent(QPdfView* self, QDragEnterEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DragEnterEvent_IsBase(true);
        vqpdfview->dragEnterEvent(param1);
    } else {
        vqpdfview->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragEnterEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DragEnterEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DragMoveEvent(QPdfView* self, QDragMoveEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->dragMoveEvent(param1);
    } else {
        vqpdfview->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDragMoveEvent(QPdfView* self, QDragMoveEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DragMoveEvent_IsBase(true);
        vqpdfview->dragMoveEvent(param1);
    } else {
        vqpdfview->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragMoveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DragMoveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->dragLeaveEvent(param1);
    } else {
        vqpdfview->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DragLeaveEvent_IsBase(true);
        vqpdfview->dragLeaveEvent(param1);
    } else {
        vqpdfview->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragLeaveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DropEvent(QPdfView* self, QDropEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->dropEvent(param1);
    } else {
        vqpdfview->dropEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDropEvent(QPdfView* self, QDropEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DropEvent_IsBase(true);
        vqpdfview->dropEvent(param1);
    } else {
        vqpdfview->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDropEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DropEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_KeyPressEvent(QPdfView* self, QKeyEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->keyPressEvent(param1);
    } else {
        vqpdfview->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseKeyPressEvent(QPdfView* self, QKeyEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_KeyPressEvent_IsBase(true);
        vqpdfview->keyPressEvent(param1);
    } else {
        vqpdfview->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnKeyPressEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_KeyPressEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfView_ViewportSizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return new QSize(vqpdfview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QPdfView_QBaseViewportSizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_ViewportSizeHint_IsBase(true);
        return new QSize(vqpdfview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportSizeHint(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ChangeEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->changeEvent(param1);
    } else {
        vqpdfview->changeEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseChangeEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ChangeEvent_IsBase(true);
        vqpdfview->changeEvent(param1);
    } else {
        vqpdfview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnChangeEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ChangeEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_InitStyleOption(const QPdfView* self, QStyleOptionFrame* option) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->initStyleOption(option);
    } else {
        vqpdfview->initStyleOption(option);
    }
}

// Base class handler implementation
void QPdfView_QBaseInitStyleOption(const QPdfView* self, QStyleOptionFrame* option) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_InitStyleOption_IsBase(true);
        vqpdfview->initStyleOption(option);
    } else {
        vqpdfview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInitStyleOption(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_InitStyleOption_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_DevType(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->devType();
    } else {
        return vqpdfview->devType();
    }
}

// Base class handler implementation
int QPdfView_QBaseDevType(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_DevType_IsBase(true);
        return vqpdfview->devType();
    } else {
        return vqpdfview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDevType(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_DevType_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_SetVisible(QPdfView* self, bool visible) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setVisible(visible);
    } else {
        vqpdfview->setVisible(visible);
    }
}

// Base class handler implementation
void QPdfView_QBaseSetVisible(QPdfView* self, bool visible) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_SetVisible_IsBase(true);
        vqpdfview->setVisible(visible);
    } else {
        vqpdfview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetVisible(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_SetVisible_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_HeightForWidth(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqpdfview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPdfView_QBaseHeightForWidth(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_HeightForWidth_IsBase(true);
        return vqpdfview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqpdfview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHeightForWidth(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_HeightForWidth_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_HasHeightForWidth(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->hasHeightForWidth();
    } else {
        return vqpdfview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPdfView_QBaseHasHeightForWidth(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_HasHeightForWidth_IsBase(true);
        return vqpdfview->hasHeightForWidth();
    } else {
        return vqpdfview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHasHeightForWidth(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPdfView_PaintEngine(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->paintEngine();
    } else {
        return vqpdfview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPdfView_QBasePaintEngine(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_PaintEngine_IsBase(true);
        return vqpdfview->paintEngine();
    } else {
        return vqpdfview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnPaintEngine(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_PaintEngine_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_KeyReleaseEvent(QPdfView* self, QKeyEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->keyReleaseEvent(event);
    } else {
        vqpdfview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseKeyReleaseEvent(QPdfView* self, QKeyEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_KeyReleaseEvent_IsBase(true);
        vqpdfview->keyReleaseEvent(event);
    } else {
        vqpdfview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnKeyReleaseEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_FocusInEvent(QPdfView* self, QFocusEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->focusInEvent(event);
    } else {
        vqpdfview->focusInEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseFocusInEvent(QPdfView* self, QFocusEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusInEvent_IsBase(true);
        vqpdfview->focusInEvent(event);
    } else {
        vqpdfview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusInEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusInEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_FocusOutEvent(QPdfView* self, QFocusEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->focusOutEvent(event);
    } else {
        vqpdfview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseFocusOutEvent(QPdfView* self, QFocusEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusOutEvent_IsBase(true);
        vqpdfview->focusOutEvent(event);
    } else {
        vqpdfview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusOutEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusOutEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_EnterEvent(QPdfView* self, QEnterEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->enterEvent(event);
    } else {
        vqpdfview->enterEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseEnterEvent(QPdfView* self, QEnterEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_EnterEvent_IsBase(true);
        vqpdfview->enterEvent(event);
    } else {
        vqpdfview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEnterEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_EnterEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_LeaveEvent(QPdfView* self, QEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->leaveEvent(event);
    } else {
        vqpdfview->leaveEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseLeaveEvent(QPdfView* self, QEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_LeaveEvent_IsBase(true);
        vqpdfview->leaveEvent(event);
    } else {
        vqpdfview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnLeaveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_LeaveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MoveEvent(QPdfView* self, QMoveEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->moveEvent(event);
    } else {
        vqpdfview->moveEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseMoveEvent(QPdfView* self, QMoveEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MoveEvent_IsBase(true);
        vqpdfview->moveEvent(event);
    } else {
        vqpdfview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMoveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_MoveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_CloseEvent(QPdfView* self, QCloseEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->closeEvent(event);
    } else {
        vqpdfview->closeEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseCloseEvent(QPdfView* self, QCloseEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_CloseEvent_IsBase(true);
        vqpdfview->closeEvent(event);
    } else {
        vqpdfview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCloseEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_CloseEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_TabletEvent(QPdfView* self, QTabletEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->tabletEvent(event);
    } else {
        vqpdfview->tabletEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseTabletEvent(QPdfView* self, QTabletEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_TabletEvent_IsBase(true);
        vqpdfview->tabletEvent(event);
    } else {
        vqpdfview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnTabletEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_TabletEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ActionEvent(QPdfView* self, QActionEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->actionEvent(event);
    } else {
        vqpdfview->actionEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseActionEvent(QPdfView* self, QActionEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ActionEvent_IsBase(true);
        vqpdfview->actionEvent(event);
    } else {
        vqpdfview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnActionEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ActionEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ShowEvent(QPdfView* self, QShowEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->showEvent(event);
    } else {
        vqpdfview->showEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseShowEvent(QPdfView* self, QShowEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ShowEvent_IsBase(true);
        vqpdfview->showEvent(event);
    } else {
        vqpdfview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnShowEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ShowEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_HideEvent(QPdfView* self, QHideEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->hideEvent(event);
    } else {
        vqpdfview->hideEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseHideEvent(QPdfView* self, QHideEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_HideEvent_IsBase(true);
        vqpdfview->hideEvent(event);
    } else {
        vqpdfview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHideEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_HideEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_NativeEvent(QPdfView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPdfView_QBaseNativeEvent(QPdfView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_NativeEvent_IsBase(true);
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnNativeEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_NativeEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_Metric(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPdfView_QBaseMetric(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Metric_IsBase(true);
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMetric(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Metric_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_InitPainter(const QPdfView* self, QPainter* painter) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->initPainter(painter);
    } else {
        vqpdfview->initPainter(painter);
    }
}

// Base class handler implementation
void QPdfView_QBaseInitPainter(const QPdfView* self, QPainter* painter) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_InitPainter_IsBase(true);
        vqpdfview->initPainter(painter);
    } else {
        vqpdfview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInitPainter(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_InitPainter_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPdfView_Redirected(const QPdfView* self, QPoint* offset) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->redirected(offset);
    } else {
        return vqpdfview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPdfView_QBaseRedirected(const QPdfView* self, QPoint* offset) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Redirected_IsBase(true);
        return vqpdfview->redirected(offset);
    } else {
        return vqpdfview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnRedirected(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Redirected_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPdfView_SharedPainter(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->sharedPainter();
    } else {
        return vqpdfview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPdfView_QBaseSharedPainter(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_SharedPainter_IsBase(true);
        return vqpdfview->sharedPainter();
    } else {
        return vqpdfview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSharedPainter(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_SharedPainter_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_InputMethodEvent(QPdfView* self, QInputMethodEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->inputMethodEvent(param1);
    } else {
        vqpdfview->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseInputMethodEvent(QPdfView* self, QInputMethodEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_InputMethodEvent_IsBase(true);
        vqpdfview->inputMethodEvent(param1);
    } else {
        vqpdfview->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInputMethodEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_InputMethodEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPdfView_InputMethodQuery(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return new QVariant(vqpdfview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPdfView_QBaseInputMethodQuery(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_InputMethodQuery_IsBase(true);
        return new QVariant(vqpdfview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInputMethodQuery(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_InputMethodQuery_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_FocusNextPrevChild(QPdfView* self, bool next) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->focusNextPrevChild(next);
    } else {
        return vqpdfview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPdfView_QBaseFocusNextPrevChild(QPdfView* self, bool next) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusNextPrevChild_IsBase(true);
        return vqpdfview->focusNextPrevChild(next);
    } else {
        return vqpdfview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusNextPrevChild(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_TimerEvent(QPdfView* self, QTimerEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->timerEvent(event);
    } else {
        vqpdfview->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseTimerEvent(QPdfView* self, QTimerEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_TimerEvent_IsBase(true);
        vqpdfview->timerEvent(event);
    } else {
        vqpdfview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnTimerEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_TimerEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ChildEvent(QPdfView* self, QChildEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->childEvent(event);
    } else {
        vqpdfview->childEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseChildEvent(QPdfView* self, QChildEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ChildEvent_IsBase(true);
        vqpdfview->childEvent(event);
    } else {
        vqpdfview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnChildEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ChildEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_CustomEvent(QPdfView* self, QEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->customEvent(event);
    } else {
        vqpdfview->customEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseCustomEvent(QPdfView* self, QEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_CustomEvent_IsBase(true);
        vqpdfview->customEvent(event);
    } else {
        vqpdfview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCustomEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_CustomEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ConnectNotify(QPdfView* self, QMetaMethod* signal) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->connectNotify(*signal);
    } else {
        vqpdfview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfView_QBaseConnectNotify(QPdfView* self, QMetaMethod* signal) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ConnectNotify_IsBase(true);
        vqpdfview->connectNotify(*signal);
    } else {
        vqpdfview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnConnectNotify(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DisconnectNotify(QPdfView* self, QMetaMethod* signal) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->disconnectNotify(*signal);
    } else {
        vqpdfview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfView_QBaseDisconnectNotify(QPdfView* self, QMetaMethod* signal) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DisconnectNotify_IsBase(true);
        vqpdfview->disconnectNotify(*signal);
    } else {
        vqpdfview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDisconnectNotify(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_SetViewportMargins(QPdfView* self, int left, int top, int right, int bottom) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqpdfview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QPdfView_QBaseSetViewportMargins(QPdfView* self, int left, int top, int right, int bottom) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_SetViewportMargins_IsBase(true);
        vqpdfview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqpdfview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetViewportMargins(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_SetViewportMargins_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QPdfView_ViewportMargins(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return new QMargins(vqpdfview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QPdfView_QBaseViewportMargins(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_ViewportMargins_IsBase(true);
        return new QMargins(vqpdfview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportMargins(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_ViewportMargins_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DrawFrame(QPdfView* self, QPainter* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->drawFrame(param1);
    } else {
        vqpdfview->drawFrame(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDrawFrame(QPdfView* self, QPainter* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DrawFrame_IsBase(true);
        vqpdfview->drawFrame(param1);
    } else {
        vqpdfview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDrawFrame(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_DrawFrame_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_UpdateMicroFocus(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->updateMicroFocus();
    } else {
        vqpdfview->updateMicroFocus();
    }
}

// Base class handler implementation
void QPdfView_QBaseUpdateMicroFocus(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_UpdateMicroFocus_IsBase(true);
        vqpdfview->updateMicroFocus();
    } else {
        vqpdfview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnUpdateMicroFocus(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_Create(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->create();
    } else {
        vqpdfview->create();
    }
}

// Base class handler implementation
void QPdfView_QBaseCreate(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Create_IsBase(true);
        vqpdfview->create();
    } else {
        vqpdfview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCreate(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Create_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_Destroy(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->destroy();
    } else {
        vqpdfview->destroy();
    }
}

// Base class handler implementation
void QPdfView_QBaseDestroy(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Destroy_IsBase(true);
        vqpdfview->destroy();
    } else {
        vqpdfview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDestroy(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_Destroy_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_FocusNextChild(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->focusNextChild();
    } else {
        return vqpdfview->focusNextChild();
    }
}

// Base class handler implementation
bool QPdfView_QBaseFocusNextChild(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusNextChild_IsBase(true);
        return vqpdfview->focusNextChild();
    } else {
        return vqpdfview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusNextChild(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusNextChild_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_FocusPreviousChild(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->focusPreviousChild();
    } else {
        return vqpdfview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPdfView_QBaseFocusPreviousChild(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusPreviousChild_IsBase(true);
        return vqpdfview->focusPreviousChild();
    } else {
        return vqpdfview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusPreviousChild(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->setQPdfView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfView_Sender(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->sender();
    } else {
        return vqpdfview->sender();
    }
}

// Base class handler implementation
QObject* QPdfView_QBaseSender(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Sender_IsBase(true);
        return vqpdfview->sender();
    } else {
        return vqpdfview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSender(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Sender_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_SenderSignalIndex(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->senderSignalIndex();
    } else {
        return vqpdfview->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfView_QBaseSenderSignalIndex(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_SenderSignalIndex_IsBase(true);
        return vqpdfview->senderSignalIndex();
    } else {
        return vqpdfview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSenderSignalIndex(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_Receivers(const QPdfView* self, const char* signal) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->receivers(signal);
    } else {
        return vqpdfview->receivers(signal);
    }
}

// Base class handler implementation
int QPdfView_QBaseReceivers(const QPdfView* self, const char* signal) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Receivers_IsBase(true);
        return vqpdfview->receivers(signal);
    } else {
        return vqpdfview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnReceivers(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_Receivers_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_IsSignalConnected(const QPdfView* self, QMetaMethod* signal) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->isSignalConnected(*signal);
    } else {
        return vqpdfview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfView_QBaseIsSignalConnected(const QPdfView* self, QMetaMethod* signal) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_IsSignalConnected_IsBase(true);
        return vqpdfview->isSignalConnected(*signal);
    } else {
        return vqpdfview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnIsSignalConnected(const QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->setQPdfView_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_IsSignalConnected_Callback>(slot));
    }
}

void QPdfView_Delete(QPdfView* self) {
    delete self;
}
