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
#include <QPdfDocument>
#include <QPdfPageNavigator>
#include <QPdfSearchModel>
#include <QPdfView>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfView_Tr(const char* s) {
    auto _ret = QPdfView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfView_SetDocument(QPdfView* self, QPdfDocument* document) {
    self->setDocument(document);
}

QPdfDocument* QPdfView_Document(const QPdfView* self) {
    return self->document();
}

QPdfSearchModel* QPdfView_SearchModel(const QPdfView* self) {
    return self->searchModel();
}

void QPdfView_SetSearchModel(QPdfView* self, QPdfSearchModel* searchModel) {
    self->setSearchModel(searchModel);
}

int QPdfView_CurrentSearchResultIndex(const QPdfView* self) {
    return self->currentSearchResultIndex();
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

void QPdfView_SetCurrentSearchResultIndex(QPdfView* self, int currentResult) {
    self->setCurrentSearchResultIndex(static_cast<int>(currentResult));
}

void QPdfView_DocumentChanged(QPdfView* self, QPdfDocument* document) {
    self->documentChanged(document);
}

void QPdfView_Connect_DocumentChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, QPdfDocument*) = reinterpret_cast<void (*)(QPdfView*, QPdfDocument*)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(QPdfDocument*)>(&QPdfView::documentChanged),
                      [self, slotFunc](QPdfDocument* document) {
                          QPdfDocument* sigval1 = document;
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_PageModeChanged(QPdfView* self, int pageMode) {
    self->pageModeChanged(static_cast<QPdfView::PageMode>(pageMode));
}

void QPdfView_Connect_PageModeChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(QPdfView::PageMode)>(&QPdfView::pageModeChanged),
                      [self, slotFunc](QPdfView::PageMode pageMode) {
                          int sigval1 = static_cast<int>(pageMode);
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_ZoomModeChanged(QPdfView* self, int zoomMode) {
    self->zoomModeChanged(static_cast<QPdfView::ZoomMode>(zoomMode));
}

void QPdfView_Connect_ZoomModeChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(QPdfView::ZoomMode)>(&QPdfView::zoomModeChanged),
                      [self, slotFunc](QPdfView::ZoomMode zoomMode) {
                          int sigval1 = static_cast<int>(zoomMode);
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_ZoomFactorChanged(QPdfView* self, double zoomFactor) {
    self->zoomFactorChanged(static_cast<qreal>(zoomFactor));
}

void QPdfView_Connect_ZoomFactorChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, double) = reinterpret_cast<void (*)(QPdfView*, double)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(qreal)>(&QPdfView::zoomFactorChanged),
                      [self, slotFunc](qreal zoomFactor) {
                          double sigval1 = static_cast<double>(zoomFactor);
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_PageSpacingChanged(QPdfView* self, int pageSpacing) {
    self->pageSpacingChanged(static_cast<int>(pageSpacing));
}

void QPdfView_Connect_PageSpacingChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(int)>(&QPdfView::pageSpacingChanged),
                      [self, slotFunc](int pageSpacing) {
                          int sigval1 = pageSpacing;
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_DocumentMarginsChanged(QPdfView* self, QMargins* documentMargins) {
    self->documentMarginsChanged(*documentMargins);
}

void QPdfView_Connect_DocumentMarginsChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, QMargins*) = reinterpret_cast<void (*)(QPdfView*, QMargins*)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(QMargins)>(&QPdfView::documentMarginsChanged),
                      [self, slotFunc](QMargins documentMargins) {
                          QMargins* sigval1 = new QMargins(documentMargins);
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_SearchModelChanged(QPdfView* self, QPdfSearchModel* searchModel) {
    self->searchModelChanged(searchModel);
}

void QPdfView_Connect_SearchModelChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfView*, QPdfSearchModel*)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(QPdfSearchModel*)>(&QPdfView::searchModelChanged),
                      [self, slotFunc](QPdfSearchModel* searchModel) {
                          QPdfSearchModel* sigval1 = searchModel;
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_CurrentSearchResultIndexChanged(QPdfView* self, int currentResult) {
    self->currentSearchResultIndexChanged(static_cast<int>(currentResult));
}

void QPdfView_Connect_CurrentSearchResultIndexChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self,
                      static_cast<void (QPdfView::*)(int)>(&QPdfView::currentSearchResultIndexChanged),
                      [self, slotFunc](int currentResult) {
                          int sigval1 = currentResult;
                          slotFunc(self, sigval1);
                      });
}

void QPdfView_PaintEvent(QPdfView* self, QPaintEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->paintEvent(event);
    }
}

void QPdfView_ResizeEvent(QPdfView* self, QResizeEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->resizeEvent(event);
    }
}

void QPdfView_ScrollContentsBy(QPdfView* self, int dx, int dy) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QPdfView_MousePressEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->mousePressEvent(event);
    }
}

void QPdfView_MouseMoveEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->mouseMoveEvent(event);
    }
}

void QPdfView_MouseReleaseEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->mouseReleaseEvent(event);
    }
}

libqt_string QPdfView_Tr2(const char* s, const char* c) {
    auto _ret = QPdfView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPdfView_SuperMetaObject(const QPdfView* self) {
    return (QMetaObject*)self->QPdfView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMetaObject(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_metaobject_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfView_SuperMetacast(QPdfView* self, const char* param1) {
    return self->QPdfView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMetacast(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_metacast_callback = reinterpret_cast<VirtualQPdfView::QPdfView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfView_SuperMetacall(QPdfView* self, int param1, int param2, void** param3) {
    return self->QPdfView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMetacall(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_metacall_callback = reinterpret_cast<VirtualQPdfView::QPdfView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QPdfView_SuperPaintEvent(QPdfView* self, QPaintEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnPaintEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_paintevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QPdfView_SuperResizeEvent(QPdfView* self, QResizeEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnResizeEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_resizeevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QPdfView_SuperScrollContentsBy(QPdfView* self, int dx, int dy) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QPdfView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnScrollContentsBy(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_scrollcontentsby_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QPdfView_SuperMousePressEvent(QPdfView* self, QMouseEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMousePressEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_mousepressevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QPdfView_SuperMouseMoveEvent(QPdfView* self, QMouseEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseMoveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_mousemoveevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QPdfView_SuperMouseReleaseEvent(QPdfView* self, QMouseEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseReleaseEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_mousereleaseevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfView_MinimumSizeHint(const QPdfView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPdfView_SuperMinimumSizeHint(const QPdfView* self) {
    return new QSize(self->QPdfView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMinimumSizeHint(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_minimumsizehint_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfView_SizeHint(const QPdfView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPdfView_SuperSizeHint(const QPdfView* self) {
    return new QSize(self->QPdfView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSizeHint(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_sizehint_callback = reinterpret_cast<VirtualQPdfView::QPdfView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_SetupViewport(QPdfView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QPdfView_SuperSetupViewport(QPdfView* self, QWidget* viewport) {
    self->QPdfView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetupViewport(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_setupviewport_callback = reinterpret_cast<VirtualQPdfView::QPdfView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QPdfView_EventFilter(QPdfView* self, QObject* param1, QEvent* param2) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        return vqpdfview->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QPdfView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfView_SuperEventFilter(QPdfView* self, QObject* param1, QEvent* param2) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->QPdfView::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QPdfView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEventFilter(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_eventfilter_callback = reinterpret_cast<VirtualQPdfView::QPdfView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QPdfView_Event(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        return vqpdfview->event(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfView_SuperEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->QPdfView::event(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_event_callback = reinterpret_cast<VirtualQPdfView::QPdfView_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfView_ViewportEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        return vqpdfview->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfView_SuperViewportEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->QPdfView::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_viewportevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_MouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperMouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseDoubleClickEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_WheelEvent(QPdfView* self, QWheelEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperWheelEvent(QPdfView* self, QWheelEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnWheelEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_wheelevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_ContextMenuEvent(QPdfView* self, QContextMenuEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperContextMenuEvent(QPdfView* self, QContextMenuEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnContextMenuEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_contextmenuevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_DragEnterEvent(QPdfView* self, QDragEnterEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperDragEnterEvent(QPdfView* self, QDragEnterEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragEnterEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_dragenterevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_DragMoveEvent(QPdfView* self, QDragMoveEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperDragMoveEvent(QPdfView* self, QDragMoveEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragMoveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_dragmoveevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_DragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperDragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragLeaveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_dragleaveevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_DropEvent(QPdfView* self, QDropEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperDropEvent(QPdfView* self, QDropEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDropEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_dropevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_KeyPressEvent(QPdfView* self, QKeyEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperKeyPressEvent(QPdfView* self, QKeyEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnKeyPressEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_keypressevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfView_ViewportSizeHint(const QPdfView* self) {
    return new QSize((self->*&VirtualQPdfView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QPdfView_SuperViewportSizeHint(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        return new QSize(vqpdfview->viewportSizeHint());
    qFatal("Error: Protected virtual method QPdfView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportSizeHint(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_viewportsizehint_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_ChangeEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperChangeEvent(QPdfView* self, QEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnChangeEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_changeevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_InitStyleOption(const QPdfView* self, QStyleOptionFrame* option) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview) {
        vqpdfview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QPdfView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperInitStyleOption(const QPdfView* self, QStyleOptionFrame* option) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->QPdfView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QPdfView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInitStyleOption(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_initstyleoption_callback = reinterpret_cast<VirtualQPdfView::QPdfView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QPdfView_DevType(const QPdfView* self) {
    return self->devType();
}

// Base class handler implementation
int QPdfView_SuperDevType(const QPdfView* self) {
    return self->QPdfView::devType();
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDevType(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_devtype_callback = reinterpret_cast<VirtualQPdfView::QPdfView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_SetVisible(QPdfView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QPdfView_SuperSetVisible(QPdfView* self, bool visible) {
    self->QPdfView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetVisible(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_setvisible_callback = reinterpret_cast<VirtualQPdfView::QPdfView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QPdfView_HeightForWidth(const QPdfView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPdfView_SuperHeightForWidth(const QPdfView* self, int param1) {
    return self->QPdfView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHeightForWidth(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_heightforwidth_callback = reinterpret_cast<VirtualQPdfView::QPdfView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPdfView_HasHeightForWidth(const QPdfView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPdfView_SuperHasHeightForWidth(const QPdfView* self) {
    return self->QPdfView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHasHeightForWidth(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_hasheightforwidth_callback = reinterpret_cast<VirtualQPdfView::QPdfView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPdfView_PaintEngine(const QPdfView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPdfView_SuperPaintEngine(const QPdfView* self) {
    return self->QPdfView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnPaintEngine(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_paintengine_callback = reinterpret_cast<VirtualQPdfView::QPdfView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_KeyReleaseEvent(QPdfView* self, QKeyEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperKeyReleaseEvent(QPdfView* self, QKeyEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnKeyReleaseEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_keyreleaseevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_FocusInEvent(QPdfView* self, QFocusEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperFocusInEvent(QPdfView* self, QFocusEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusInEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_focusinevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_FocusOutEvent(QPdfView* self, QFocusEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperFocusOutEvent(QPdfView* self, QFocusEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusOutEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_focusoutevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_EnterEvent(QPdfView* self, QEnterEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperEnterEvent(QPdfView* self, QEnterEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEnterEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_enterevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_LeaveEvent(QPdfView* self, QEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperLeaveEvent(QPdfView* self, QEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnLeaveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_leaveevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_MoveEvent(QPdfView* self, QMoveEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperMoveEvent(QPdfView* self, QMoveEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMoveEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_moveevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_CloseEvent(QPdfView* self, QCloseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperCloseEvent(QPdfView* self, QCloseEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCloseEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_closeevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_TabletEvent(QPdfView* self, QTabletEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperTabletEvent(QPdfView* self, QTabletEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnTabletEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_tabletevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_ActionEvent(QPdfView* self, QActionEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperActionEvent(QPdfView* self, QActionEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnActionEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_actionevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_ShowEvent(QPdfView* self, QShowEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperShowEvent(QPdfView* self, QShowEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnShowEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_showevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_HideEvent(QPdfView* self, QHideEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperHideEvent(QPdfView* self, QHideEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHideEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_hideevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPdfView_NativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPdfView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfView_SuperNativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->QPdfView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPdfView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnNativeEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_nativeevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPdfView_Metric(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview) {
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPdfView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPdfView_SuperMetric(const QPdfView* self, int param1) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->QPdfView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPdfView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMetric(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_metric_callback = reinterpret_cast<VirtualQPdfView::QPdfView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_InitPainter(const QPdfView* self, QPainter* painter) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview) {
        vqpdfview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPdfView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperInitPainter(const QPdfView* self, QPainter* painter) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        vqpdfview->QPdfView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPdfView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInitPainter(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_initpainter_callback = reinterpret_cast<VirtualQPdfView::QPdfView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPdfView_Redirected(const QPdfView* self, QPoint* offset) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview) {
        return vqpdfview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPdfView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPdfView_SuperRedirected(const QPdfView* self, QPoint* offset) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->QPdfView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPdfView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnRedirected(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_redirected_callback = reinterpret_cast<VirtualQPdfView::QPdfView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPdfView_SharedPainter(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview) {
        return vqpdfview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPdfView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPdfView_SuperSharedPainter(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->QPdfView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPdfView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSharedPainter(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_sharedpainter_callback = reinterpret_cast<VirtualQPdfView::QPdfView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_InputMethodEvent(QPdfView* self, QInputMethodEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperInputMethodEvent(QPdfView* self, QInputMethodEvent* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInputMethodEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_inputmethodevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPdfView_InputMethodQuery(const QPdfView* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPdfView_SuperInputMethodQuery(const QPdfView* self, int param1) {
    return new QVariant(self->QPdfView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInputMethodQuery(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        vqpdfview->qpdfview_inputmethodquery_callback = reinterpret_cast<VirtualQPdfView::QPdfView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPdfView_FocusNextPrevChild(QPdfView* self, bool next) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        return vqpdfview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPdfView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfView_SuperFocusNextPrevChild(QPdfView* self, bool next) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->QPdfView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPdfView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusNextPrevChild(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_focusnextprevchild_callback = reinterpret_cast<VirtualQPdfView::QPdfView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_TimerEvent(QPdfView* self, QTimerEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperTimerEvent(QPdfView* self, QTimerEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnTimerEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_timerevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_ChildEvent(QPdfView* self, QChildEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperChildEvent(QPdfView* self, QChildEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnChildEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_childevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_CustomEvent(QPdfView* self, QEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperCustomEvent(QPdfView* self, QEvent* event) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCustomEvent(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_customevent_callback = reinterpret_cast<VirtualQPdfView::QPdfView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_ConnectNotify(QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperConnectNotify(QPdfView* self, const QMetaMethod* signal) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnConnectNotify(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_connectnotify_callback = reinterpret_cast<VirtualQPdfView::QPdfView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfView_DisconnectNotify(QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview) {
        vqpdfview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfView_SuperDisconnectNotify(QPdfView* self, const QMetaMethod* signal) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->QPdfView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDisconnectNotify(QPdfView* self, intptr_t slot) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self))
        vqpdfview->qpdfview_disconnectnotify_callback = reinterpret_cast<VirtualQPdfView::QPdfView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPdfView_SetViewportMargins(QPdfView* self, int left, int top, int right, int bottom) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->VirtualQPdfView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QPdfView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QPdfView_ViewportMargins(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self)))
        return new QMargins(vqpdfview->viewportMargins());
    qFatal("Error: Protected method QPdfView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfView_DrawFrame(QPdfView* self, QPainter* param1) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->VirtualQPdfView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QPdfView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfView_UpdateMicroFocus(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->VirtualQPdfView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPdfView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfView_Create(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->VirtualQPdfView::create();
    } else
        qFatal("Error: Protected method QPdfView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfView_Destroy(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        vqpdfview->VirtualQPdfView::destroy();
    } else
        qFatal("Error: Protected method QPdfView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfView_FocusNextChild(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->VirtualQPdfView::focusNextChild();
    } else
        qFatal("Error: Protected method QPdfView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfView_FocusPreviousChild(QPdfView* self) {
    if (auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self)) {
        return vqpdfview->VirtualQPdfView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPdfView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPdfView_Sender(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->VirtualQPdfView::sender();
    } else
        qFatal("Error: Protected method QPdfView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfView_SenderSignalIndex(const QPdfView* self) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->VirtualQPdfView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfView_Receivers(const QPdfView* self, const char* signal) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->VirtualQPdfView::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfView_IsSignalConnected(const QPdfView* self, const QMetaMethod* signal) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->VirtualQPdfView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPdfView_GetDecodedMetricF(const QPdfView* self, int metricA, int metricB) {
    if (auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self))) {
        return vqpdfview->VirtualQPdfView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPdfView::getDecodedMetricF called without a directly constructed type");
}

void QPdfView_Delete(QPdfView* self) {
    delete self;
}
