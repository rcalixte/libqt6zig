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
#include <QByteArray>
#include <cstring>
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
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfView_OnMetacall(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Metacall_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfView_QBaseMetacall(QPdfView* self, int param1, int param2, void** param3) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Metacall_IsBase(true);
        return vqpdfview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfView_Tr(const char* s) {
    QString _ret = QPdfView::tr(s);
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

void QPdfView_SearchModelChanged(QPdfView* self, QPdfSearchModel* searchModel) {
    self->searchModelChanged(searchModel);
}

void QPdfView_Connect_SearchModelChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfView*, QPdfSearchModel*)>(slot);
    QPdfView::connect(self, &QPdfView::searchModelChanged, [self, slotFunc](QPdfSearchModel* searchModel) {
        QPdfSearchModel* sigval1 = searchModel;
        slotFunc(self, sigval1);
    });
}

void QPdfView_CurrentSearchResultIndexChanged(QPdfView* self, int currentResult) {
    self->currentSearchResultIndexChanged(static_cast<int>(currentResult));
}

void QPdfView_Connect_CurrentSearchResultIndexChanged(QPdfView* self, intptr_t slot) {
    void (*slotFunc)(QPdfView*, int) = reinterpret_cast<void (*)(QPdfView*, int)>(slot);
    QPdfView::connect(self, &QPdfView::currentSearchResultIndexChanged, [self, slotFunc](int currentResult) {
        int sigval1 = currentResult;
        slotFunc(self, sigval1);
    });
}

libqt_string QPdfView_Tr2(const char* s, const char* c) {
    QString _ret = QPdfView::tr(s, c);
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
    QString _ret = QPdfView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QPdfView_PaintEvent(QPdfView* self, QPaintEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->paintEvent(event);
    } else {
        ((VirtualQPdfView*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBasePaintEvent(QPdfView* self, QPaintEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_PaintEvent_IsBase(true);
        vqpdfview->paintEvent(event);
    } else {
        ((VirtualQPdfView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnPaintEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_PaintEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ResizeEvent(QPdfView* self, QResizeEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->resizeEvent(event);
    } else {
        ((VirtualQPdfView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseResizeEvent(QPdfView* self, QResizeEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ResizeEvent_IsBase(true);
        vqpdfview->resizeEvent(event);
    } else {
        ((VirtualQPdfView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnResizeEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ResizeEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ScrollContentsBy(QPdfView* self, int dx, int dy) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQPdfView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QPdfView_QBaseScrollContentsBy(QPdfView* self, int dx, int dy) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ScrollContentsBy_IsBase(true);
        vqpdfview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQPdfView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnScrollContentsBy(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MousePressEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->mousePressEvent(event);
    } else {
        ((VirtualQPdfView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseMousePressEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MousePressEvent_IsBase(true);
        vqpdfview->mousePressEvent(event);
    } else {
        ((VirtualQPdfView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMousePressEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MousePressEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MouseMoveEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->mouseMoveEvent(event);
    } else {
        ((VirtualQPdfView*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseMouseMoveEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MouseMoveEvent_IsBase(true);
        vqpdfview->mouseMoveEvent(event);
    } else {
        ((VirtualQPdfView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseMoveEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MouseReleaseEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->mouseReleaseEvent(event);
    } else {
        ((VirtualQPdfView*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseMouseReleaseEvent(QPdfView* self, QMouseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MouseReleaseEvent_IsBase(true);
        vqpdfview->mouseReleaseEvent(event);
    } else {
        ((VirtualQPdfView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseReleaseEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfView_MinimumSizeHint(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return new QSize(vqpdfview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPdfView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPdfView_QBaseMinimumSizeHint(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MinimumSizeHint_IsBase(true);
        return new QSize(vqpdfview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPdfView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMinimumSizeHint(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfView_SizeHint(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return new QSize(vqpdfview->sizeHint());
    } else {
        return new QSize(((VirtualQPdfView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPdfView_QBaseSizeHint(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SizeHint_IsBase(true);
        return new QSize(vqpdfview->sizeHint());
    } else {
        return new QSize(((VirtualQPdfView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSizeHint(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SizeHint_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_SetupViewport(QPdfView* self, QWidget* viewport) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setupViewport(viewport);
    } else {
        self->QPdfView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QPdfView_QBaseSetupViewport(QPdfView* self, QWidget* viewport) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SetupViewport_IsBase(true);
        vqpdfview->setupViewport(viewport);
    } else {
        self->QPdfView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetupViewport(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SetupViewport_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_EventFilter(QPdfView* self, QObject* param1, QEvent* param2) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->eventFilter(param1, param2);
    } else {
        return ((VirtualQPdfView*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPdfView_QBaseEventFilter(QPdfView* self, QObject* param1, QEvent* param2) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_EventFilter_IsBase(true);
        return vqpdfview->eventFilter(param1, param2);
    } else {
        return ((VirtualQPdfView*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEventFilter(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_EventFilter_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_Event(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->event(param1);
    } else {
        return ((VirtualQPdfView*)self)->event(param1);
    }
}

// Base class handler implementation
bool QPdfView_QBaseEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Event_IsBase(true);
        return vqpdfview->event(param1);
    } else {
        return ((VirtualQPdfView*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Event_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_ViewportEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->viewportEvent(param1);
    } else {
        return ((VirtualQPdfView*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QPdfView_QBaseViewportEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ViewportEvent_IsBase(true);
        return vqpdfview->viewportEvent(param1);
    } else {
        return ((VirtualQPdfView*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ViewportEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseMouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MouseDoubleClickEvent_IsBase(true);
        vqpdfview->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMouseDoubleClickEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_WheelEvent(QPdfView* self, QWheelEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->wheelEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseWheelEvent(QPdfView* self, QWheelEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_WheelEvent_IsBase(true);
        vqpdfview->wheelEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnWheelEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_WheelEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ContextMenuEvent(QPdfView* self, QContextMenuEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->contextMenuEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseContextMenuEvent(QPdfView* self, QContextMenuEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ContextMenuEvent_IsBase(true);
        vqpdfview->contextMenuEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnContextMenuEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DragEnterEvent(QPdfView* self, QDragEnterEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->dragEnterEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDragEnterEvent(QPdfView* self, QDragEnterEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DragEnterEvent_IsBase(true);
        vqpdfview->dragEnterEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragEnterEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DragEnterEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DragMoveEvent(QPdfView* self, QDragMoveEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->dragMoveEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDragMoveEvent(QPdfView* self, QDragMoveEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DragMoveEvent_IsBase(true);
        vqpdfview->dragMoveEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragMoveEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DragMoveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->dragLeaveEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DragLeaveEvent_IsBase(true);
        vqpdfview->dragLeaveEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDragLeaveEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DropEvent(QPdfView* self, QDropEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->dropEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDropEvent(QPdfView* self, QDropEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DropEvent_IsBase(true);
        vqpdfview->dropEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDropEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DropEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_KeyPressEvent(QPdfView* self, QKeyEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->keyPressEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseKeyPressEvent(QPdfView* self, QKeyEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_KeyPressEvent_IsBase(true);
        vqpdfview->keyPressEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnKeyPressEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_KeyPressEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfView_ViewportSizeHint(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return new QSize(vqpdfview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QPdfView_QBaseViewportSizeHint(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ViewportSizeHint_IsBase(true);
        return new QSize(vqpdfview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportSizeHint(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ChangeEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->changeEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseChangeEvent(QPdfView* self, QEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ChangeEvent_IsBase(true);
        vqpdfview->changeEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnChangeEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ChangeEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_InitStyleOption(const QPdfView* self, QStyleOptionFrame* option) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->initStyleOption(option);
    } else {
        ((VirtualQPdfView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QPdfView_QBaseInitStyleOption(const QPdfView* self, QStyleOptionFrame* option) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InitStyleOption_IsBase(true);
        vqpdfview->initStyleOption(option);
    } else {
        ((VirtualQPdfView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInitStyleOption(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InitStyleOption_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_DevType(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->devType();
    } else {
        return self->QPdfView::devType();
    }
}

// Base class handler implementation
int QPdfView_QBaseDevType(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DevType_IsBase(true);
        return vqpdfview->devType();
    } else {
        return self->QPdfView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDevType(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DevType_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_SetVisible(QPdfView* self, bool visible) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setVisible(visible);
    } else {
        self->QPdfView::setVisible(visible);
    }
}

// Base class handler implementation
void QPdfView_QBaseSetVisible(QPdfView* self, bool visible) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SetVisible_IsBase(true);
        vqpdfview->setVisible(visible);
    } else {
        self->QPdfView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetVisible(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SetVisible_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_HeightForWidth(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPdfView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPdfView_QBaseHeightForWidth(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_HeightForWidth_IsBase(true);
        return vqpdfview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPdfView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHeightForWidth(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_HeightForWidth_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_HasHeightForWidth(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->hasHeightForWidth();
    } else {
        return self->QPdfView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPdfView_QBaseHasHeightForWidth(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_HasHeightForWidth_IsBase(true);
        return vqpdfview->hasHeightForWidth();
    } else {
        return self->QPdfView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHasHeightForWidth(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPdfView_PaintEngine(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->paintEngine();
    } else {
        return self->QPdfView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPdfView_QBasePaintEngine(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_PaintEngine_IsBase(true);
        return vqpdfview->paintEngine();
    } else {
        return self->QPdfView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnPaintEngine(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_PaintEngine_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_KeyReleaseEvent(QPdfView* self, QKeyEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->keyReleaseEvent(event);
    } else {
        ((VirtualQPdfView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseKeyReleaseEvent(QPdfView* self, QKeyEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_KeyReleaseEvent_IsBase(true);
        vqpdfview->keyReleaseEvent(event);
    } else {
        ((VirtualQPdfView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnKeyReleaseEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_FocusInEvent(QPdfView* self, QFocusEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->focusInEvent(event);
    } else {
        ((VirtualQPdfView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseFocusInEvent(QPdfView* self, QFocusEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusInEvent_IsBase(true);
        vqpdfview->focusInEvent(event);
    } else {
        ((VirtualQPdfView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusInEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusInEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_FocusOutEvent(QPdfView* self, QFocusEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->focusOutEvent(event);
    } else {
        ((VirtualQPdfView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseFocusOutEvent(QPdfView* self, QFocusEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusOutEvent_IsBase(true);
        vqpdfview->focusOutEvent(event);
    } else {
        ((VirtualQPdfView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusOutEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusOutEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_EnterEvent(QPdfView* self, QEnterEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->enterEvent(event);
    } else {
        ((VirtualQPdfView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseEnterEvent(QPdfView* self, QEnterEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_EnterEvent_IsBase(true);
        vqpdfview->enterEvent(event);
    } else {
        ((VirtualQPdfView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnEnterEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_EnterEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_LeaveEvent(QPdfView* self, QEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->leaveEvent(event);
    } else {
        ((VirtualQPdfView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseLeaveEvent(QPdfView* self, QEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_LeaveEvent_IsBase(true);
        vqpdfview->leaveEvent(event);
    } else {
        ((VirtualQPdfView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnLeaveEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_LeaveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_MoveEvent(QPdfView* self, QMoveEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->moveEvent(event);
    } else {
        ((VirtualQPdfView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseMoveEvent(QPdfView* self, QMoveEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MoveEvent_IsBase(true);
        vqpdfview->moveEvent(event);
    } else {
        ((VirtualQPdfView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMoveEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_MoveEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_CloseEvent(QPdfView* self, QCloseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->closeEvent(event);
    } else {
        ((VirtualQPdfView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseCloseEvent(QPdfView* self, QCloseEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_CloseEvent_IsBase(true);
        vqpdfview->closeEvent(event);
    } else {
        ((VirtualQPdfView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCloseEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_CloseEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_TabletEvent(QPdfView* self, QTabletEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->tabletEvent(event);
    } else {
        ((VirtualQPdfView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseTabletEvent(QPdfView* self, QTabletEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_TabletEvent_IsBase(true);
        vqpdfview->tabletEvent(event);
    } else {
        ((VirtualQPdfView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnTabletEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_TabletEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ActionEvent(QPdfView* self, QActionEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->actionEvent(event);
    } else {
        ((VirtualQPdfView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseActionEvent(QPdfView* self, QActionEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ActionEvent_IsBase(true);
        vqpdfview->actionEvent(event);
    } else {
        ((VirtualQPdfView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnActionEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ActionEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ShowEvent(QPdfView* self, QShowEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->showEvent(event);
    } else {
        ((VirtualQPdfView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseShowEvent(QPdfView* self, QShowEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ShowEvent_IsBase(true);
        vqpdfview->showEvent(event);
    } else {
        ((VirtualQPdfView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnShowEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ShowEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_HideEvent(QPdfView* self, QHideEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->hideEvent(event);
    } else {
        ((VirtualQPdfView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseHideEvent(QPdfView* self, QHideEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_HideEvent_IsBase(true);
        vqpdfview->hideEvent(event);
    } else {
        ((VirtualQPdfView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnHideEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_HideEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_NativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPdfView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPdfView_QBaseNativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_NativeEvent_IsBase(true);
        return vqpdfview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPdfView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnNativeEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_NativeEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_Metric(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPdfView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPdfView_QBaseMetric(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Metric_IsBase(true);
        return vqpdfview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPdfView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnMetric(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Metric_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_InitPainter(const QPdfView* self, QPainter* painter) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->initPainter(painter);
    } else {
        ((VirtualQPdfView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPdfView_QBaseInitPainter(const QPdfView* self, QPainter* painter) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InitPainter_IsBase(true);
        vqpdfview->initPainter(painter);
    } else {
        ((VirtualQPdfView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInitPainter(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InitPainter_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPdfView_Redirected(const QPdfView* self, QPoint* offset) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->redirected(offset);
    } else {
        return ((VirtualQPdfView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPdfView_QBaseRedirected(const QPdfView* self, QPoint* offset) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Redirected_IsBase(true);
        return vqpdfview->redirected(offset);
    } else {
        return ((VirtualQPdfView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnRedirected(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Redirected_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPdfView_SharedPainter(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->sharedPainter();
    } else {
        return ((VirtualQPdfView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPdfView_QBaseSharedPainter(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SharedPainter_IsBase(true);
        return vqpdfview->sharedPainter();
    } else {
        return ((VirtualQPdfView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSharedPainter(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SharedPainter_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_InputMethodEvent(QPdfView* self, QInputMethodEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->inputMethodEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseInputMethodEvent(QPdfView* self, QInputMethodEvent* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InputMethodEvent_IsBase(true);
        vqpdfview->inputMethodEvent(param1);
    } else {
        ((VirtualQPdfView*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInputMethodEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InputMethodEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPdfView_InputMethodQuery(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return new QVariant(vqpdfview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPdfView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPdfView_QBaseInputMethodQuery(const QPdfView* self, int param1) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InputMethodQuery_IsBase(true);
        return new QVariant(vqpdfview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPdfView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnInputMethodQuery(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_InputMethodQuery_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_FocusNextPrevChild(QPdfView* self, bool next) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->focusNextPrevChild(next);
    } else {
        return ((VirtualQPdfView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPdfView_QBaseFocusNextPrevChild(QPdfView* self, bool next) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusNextPrevChild_IsBase(true);
        return vqpdfview->focusNextPrevChild(next);
    } else {
        return ((VirtualQPdfView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusNextPrevChild(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_TimerEvent(QPdfView* self, QTimerEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->timerEvent(event);
    } else {
        ((VirtualQPdfView*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseTimerEvent(QPdfView* self, QTimerEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_TimerEvent_IsBase(true);
        vqpdfview->timerEvent(event);
    } else {
        ((VirtualQPdfView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnTimerEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_TimerEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ChildEvent(QPdfView* self, QChildEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->childEvent(event);
    } else {
        ((VirtualQPdfView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseChildEvent(QPdfView* self, QChildEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ChildEvent_IsBase(true);
        vqpdfview->childEvent(event);
    } else {
        ((VirtualQPdfView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnChildEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ChildEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_CustomEvent(QPdfView* self, QEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->customEvent(event);
    } else {
        ((VirtualQPdfView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfView_QBaseCustomEvent(QPdfView* self, QEvent* event) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_CustomEvent_IsBase(true);
        vqpdfview->customEvent(event);
    } else {
        ((VirtualQPdfView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCustomEvent(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_CustomEvent_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_ConnectNotify(QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->connectNotify(*signal);
    } else {
        ((VirtualQPdfView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfView_QBaseConnectNotify(QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ConnectNotify_IsBase(true);
        vqpdfview->connectNotify(*signal);
    } else {
        ((VirtualQPdfView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnConnectNotify(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DisconnectNotify(QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfView_QBaseDisconnectNotify(QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DisconnectNotify_IsBase(true);
        vqpdfview->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDisconnectNotify(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_SetViewportMargins(QPdfView* self, int left, int top, int right, int bottom) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQPdfView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QPdfView_QBaseSetViewportMargins(QPdfView* self, int left, int top, int right, int bottom) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SetViewportMargins_IsBase(true);
        vqpdfview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQPdfView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSetViewportMargins(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SetViewportMargins_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QPdfView_ViewportMargins(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return new QMargins(vqpdfview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QPdfView_QBaseViewportMargins(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ViewportMargins_IsBase(true);
        return new QMargins(vqpdfview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnViewportMargins(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_ViewportMargins_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_DrawFrame(QPdfView* self, QPainter* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->drawFrame(param1);
    } else {
        ((VirtualQPdfView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QPdfView_QBaseDrawFrame(QPdfView* self, QPainter* param1) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DrawFrame_IsBase(true);
        vqpdfview->drawFrame(param1);
    } else {
        ((VirtualQPdfView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDrawFrame(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_DrawFrame_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_UpdateMicroFocus(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->updateMicroFocus();
    } else {
        ((VirtualQPdfView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPdfView_QBaseUpdateMicroFocus(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_UpdateMicroFocus_IsBase(true);
        vqpdfview->updateMicroFocus();
    } else {
        ((VirtualQPdfView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnUpdateMicroFocus(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_Create(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->create();
    } else {
        ((VirtualQPdfView*)self)->create();
    }
}

// Base class handler implementation
void QPdfView_QBaseCreate(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Create_IsBase(true);
        vqpdfview->create();
    } else {
        ((VirtualQPdfView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnCreate(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Create_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfView_Destroy(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->destroy();
    } else {
        ((VirtualQPdfView*)self)->destroy();
    }
}

// Base class handler implementation
void QPdfView_QBaseDestroy(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Destroy_IsBase(true);
        vqpdfview->destroy();
    } else {
        ((VirtualQPdfView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnDestroy(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Destroy_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_FocusNextChild(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->focusNextChild();
    } else {
        return ((VirtualQPdfView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPdfView_QBaseFocusNextChild(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusNextChild_IsBase(true);
        return vqpdfview->focusNextChild();
    } else {
        return ((VirtualQPdfView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusNextChild(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusNextChild_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_FocusPreviousChild(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->focusPreviousChild();
    } else {
        return ((VirtualQPdfView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPdfView_QBaseFocusPreviousChild(QPdfView* self) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusPreviousChild_IsBase(true);
        return vqpdfview->focusPreviousChild();
    } else {
        return ((VirtualQPdfView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnFocusPreviousChild(QPdfView* self, intptr_t slot) {
    auto* vqpdfview = dynamic_cast<VirtualQPdfView*>(self);
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfView_Sender(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->sender();
    } else {
        return ((VirtualQPdfView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfView_QBaseSender(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Sender_IsBase(true);
        return vqpdfview->sender();
    } else {
        return ((VirtualQPdfView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSender(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Sender_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_SenderSignalIndex(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->senderSignalIndex();
    } else {
        return ((VirtualQPdfView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfView_QBaseSenderSignalIndex(const QPdfView* self) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SenderSignalIndex_IsBase(true);
        return vqpdfview->senderSignalIndex();
    } else {
        return ((VirtualQPdfView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnSenderSignalIndex(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfView_Receivers(const QPdfView* self, const char* signal) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->receivers(signal);
    } else {
        return ((VirtualQPdfView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfView_QBaseReceivers(const QPdfView* self, const char* signal) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Receivers_IsBase(true);
        return vqpdfview->receivers(signal);
    } else {
        return ((VirtualQPdfView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnReceivers(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_Receivers_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfView_IsSignalConnected(const QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfView_QBaseIsSignalConnected(const QPdfView* self, const QMetaMethod* signal) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_IsSignalConnected_IsBase(true);
        return vqpdfview->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnIsSignalConnected(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QPdfView_GetDecodedMetricF(const QPdfView* self, int metricA, int metricB) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        return vqpdfview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPdfView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPdfView_QBaseGetDecodedMetricF(const QPdfView* self, int metricA, int metricB) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_GetDecodedMetricF_IsBase(true);
        return vqpdfview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPdfView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfView_OnGetDecodedMetricF(const QPdfView* self, intptr_t slot) {
    auto* vqpdfview = const_cast<VirtualQPdfView*>(dynamic_cast<const VirtualQPdfView*>(self));
    if (vqpdfview && vqpdfview->isVirtualQPdfView) {
        vqpdfview->setQPdfView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPdfView::QPdfView_GetDecodedMetricF_Callback>(slot));
    }
}

void QPdfView_Delete(QPdfView* self) {
    delete self;
}
