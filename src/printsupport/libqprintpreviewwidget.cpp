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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QPrintPreviewWidget>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprintpreviewwidget.h>
#include "libqprintpreviewwidget.h"
#include "libqprintpreviewwidget.hxx"

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent) {
    return new VirtualQPrintPreviewWidget(parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer) {
    return new VirtualQPrintPreviewWidget(printer);
}

QPrintPreviewWidget* QPrintPreviewWidget_new3() {
    return new VirtualQPrintPreviewWidget();
}

QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent) {
    return new VirtualQPrintPreviewWidget(printer, parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags) {
    return new VirtualQPrintPreviewWidget(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags) {
    return new VirtualQPrintPreviewWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QPrintPreviewWidget_MetaObject(const QPrintPreviewWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPrintPreviewWidget_Metacast(QPrintPreviewWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPrintPreviewWidget_Metacall(QPrintPreviewWidget* self, int param1, int param2, void** param3) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPrintPreviewWidget_Tr(const char* s) {
    QString _ret = QPrintPreviewWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self) {
    return static_cast<double>(self->zoomFactor());
}

int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self) {
    return static_cast<int>(self->orientation());
}

int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self) {
    return static_cast<int>(self->viewMode());
}

int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self) {
    return static_cast<int>(self->zoomMode());
}

int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self) {
    return self->currentPage();
}

int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self) {
    return self->pageCount();
}

void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        self->setVisible(visible);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->setVisible(visible);
    }
}

void QPrintPreviewWidget_Print(QPrintPreviewWidget* self) {
    self->print();
}

void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self) {
    self->zoomIn();
}

void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self) {
    self->zoomOut();
}

void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor) {
    self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation) {
    self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode) {
    self->setViewMode(static_cast<QPrintPreviewWidget::ViewMode>(viewMode));
}

void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode) {
    self->setZoomMode(static_cast<QPrintPreviewWidget::ZoomMode>(zoomMode));
}

void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber) {
    self->setCurrentPage(static_cast<int>(pageNumber));
}

void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self) {
    self->fitToWidth();
}

void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self) {
    self->fitInView();
}

void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self) {
    self->setLandscapeOrientation();
}

void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self) {
    self->setPortraitOrientation();
}

void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self) {
    self->setSinglePageViewMode();
}

void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self) {
    self->setFacingPagesViewMode();
}

void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self) {
    self->setAllPagesViewMode();
}

void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self) {
    self->updatePreview();
}

void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer) {
    self->paintRequested(printer);
}

void QPrintPreviewWidget_Connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewWidget*, QPrinter*) = reinterpret_cast<void (*)(QPrintPreviewWidget*, QPrinter*)>(slot);
    QPrintPreviewWidget::connect(self, &QPrintPreviewWidget::paintRequested, [self, slotFunc](QPrinter* printer) {
        QPrinter* sigval1 = printer;
        slotFunc(self, sigval1);
    });
}

void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self) {
    self->previewChanged();
}

void QPrintPreviewWidget_Connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewWidget*) = reinterpret_cast<void (*)(QPrintPreviewWidget*)>(slot);
    QPrintPreviewWidget::connect(self, &QPrintPreviewWidget::previewChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c) {
    QString _ret = QPrintPreviewWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPrintPreviewWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom) {
    self->zoomIn(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom) {
    self->zoomOut(static_cast<qreal>(zoom));
}

// Base class handler implementation
int QPrintPreviewWidget_QBaseMetacall(QPrintPreviewWidget* self, int param1, int param2, void** param3) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Metacall_IsBase(true);
        return vqprintpreviewwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPrintPreviewWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMetacall(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Metacall_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseSetVisible(QPrintPreviewWidget* self, bool visible) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SetVisible_IsBase(true);
        vqprintpreviewwidget->setVisible(visible);
    } else {
        self->QPrintPreviewWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSetVisible(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SetVisible_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewWidget_DevType(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->devType();
    } else {
        return self->QPrintPreviewWidget::devType();
    }
}

// Base class handler implementation
int QPrintPreviewWidget_QBaseDevType(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DevType_IsBase(true);
        return vqprintpreviewwidget->devType();
    } else {
        return self->QPrintPreviewWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDevType(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DevType_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintPreviewWidget_SizeHint(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return new QSize(vqprintpreviewwidget->sizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPrintPreviewWidget_QBaseSizeHint(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SizeHint_IsBase(true);
        return new QSize(vqprintpreviewwidget->sizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSizeHint(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SizeHint_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintPreviewWidget_MinimumSizeHint(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return new QSize(vqprintpreviewwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPrintPreviewWidget_QBaseMinimumSizeHint(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqprintpreviewwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMinimumSizeHint(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewWidget_HeightForWidth(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPrintPreviewWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPrintPreviewWidget_QBaseHeightForWidth(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_HeightForWidth_IsBase(true);
        return vqprintpreviewwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPrintPreviewWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnHeightForWidth(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_HasHeightForWidth(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->hasHeightForWidth();
    } else {
        return self->QPrintPreviewWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseHasHeightForWidth(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_HasHeightForWidth_IsBase(true);
        return vqprintpreviewwidget->hasHeightForWidth();
    } else {
        return self->QPrintPreviewWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnHasHeightForWidth(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPrintPreviewWidget_PaintEngine(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->paintEngine();
    } else {
        return self->QPrintPreviewWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPrintPreviewWidget_QBasePaintEngine(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_PaintEngine_IsBase(true);
        return vqprintpreviewwidget->paintEngine();
    } else {
        return self->QPrintPreviewWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnPaintEngine(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_PaintEngine_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_Event(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->event(event);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Event_IsBase(true);
        return vqprintpreviewwidget->event(event);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Event_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_MousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->mousePressEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseMousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MousePressEvent_IsBase(true);
        vqprintpreviewwidget->mousePressEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMousePressEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_MouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseMouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MouseReleaseEvent_IsBase(true);
        vqprintpreviewwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMouseReleaseEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_MouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseMouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MouseDoubleClickEvent_IsBase(true);
        vqprintpreviewwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMouseDoubleClickEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_MouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseMouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MouseMoveEvent_IsBase(true);
        vqprintpreviewwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMouseMoveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_WheelEvent(QPrintPreviewWidget* self, QWheelEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->wheelEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseWheelEvent(QPrintPreviewWidget* self, QWheelEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_WheelEvent_IsBase(true);
        vqprintpreviewwidget->wheelEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnWheelEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_WheelEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_KeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->keyPressEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseKeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_KeyPressEvent_IsBase(true);
        vqprintpreviewwidget->keyPressEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnKeyPressEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_KeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseKeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_KeyReleaseEvent_IsBase(true);
        vqprintpreviewwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnKeyReleaseEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_FocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->focusInEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseFocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusInEvent_IsBase(true);
        vqprintpreviewwidget->focusInEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusInEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_FocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->focusOutEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseFocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusOutEvent_IsBase(true);
        vqprintpreviewwidget->focusOutEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusOutEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_EnterEvent(QPrintPreviewWidget* self, QEnterEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->enterEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseEnterEvent(QPrintPreviewWidget* self, QEnterEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_EnterEvent_IsBase(true);
        vqprintpreviewwidget->enterEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnEnterEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_EnterEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_LeaveEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->leaveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseLeaveEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_LeaveEvent_IsBase(true);
        vqprintpreviewwidget->leaveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnLeaveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_PaintEvent(QPrintPreviewWidget* self, QPaintEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->paintEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBasePaintEvent(QPrintPreviewWidget* self, QPaintEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_PaintEvent_IsBase(true);
        vqprintpreviewwidget->paintEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnPaintEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_PaintEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_MoveEvent(QPrintPreviewWidget* self, QMoveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->moveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseMoveEvent(QPrintPreviewWidget* self, QMoveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MoveEvent_IsBase(true);
        vqprintpreviewwidget->moveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMoveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_MoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->resizeEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ResizeEvent_IsBase(true);
        vqprintpreviewwidget->resizeEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnResizeEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_CloseEvent(QPrintPreviewWidget* self, QCloseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->closeEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseCloseEvent(QPrintPreviewWidget* self, QCloseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_CloseEvent_IsBase(true);
        vqprintpreviewwidget->closeEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnCloseEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_CloseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->contextMenuEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ContextMenuEvent_IsBase(true);
        vqprintpreviewwidget->contextMenuEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnContextMenuEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_TabletEvent(QPrintPreviewWidget* self, QTabletEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->tabletEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseTabletEvent(QPrintPreviewWidget* self, QTabletEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_TabletEvent_IsBase(true);
        vqprintpreviewwidget->tabletEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnTabletEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_TabletEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ActionEvent(QPrintPreviewWidget* self, QActionEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->actionEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseActionEvent(QPrintPreviewWidget* self, QActionEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ActionEvent_IsBase(true);
        vqprintpreviewwidget->actionEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnActionEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ActionEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_DragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->dragEnterEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseDragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DragEnterEvent_IsBase(true);
        vqprintpreviewwidget->dragEnterEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDragEnterEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_DragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->dragMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseDragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DragMoveEvent_IsBase(true);
        vqprintpreviewwidget->dragMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDragMoveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_DragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseDragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DragLeaveEvent_IsBase(true);
        vqprintpreviewwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDragLeaveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_DropEvent(QPrintPreviewWidget* self, QDropEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->dropEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseDropEvent(QPrintPreviewWidget* self, QDropEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DropEvent_IsBase(true);
        vqprintpreviewwidget->dropEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDropEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DropEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ShowEvent(QPrintPreviewWidget* self, QShowEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->showEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseShowEvent(QPrintPreviewWidget* self, QShowEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ShowEvent_IsBase(true);
        vqprintpreviewwidget->showEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnShowEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ShowEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_HideEvent(QPrintPreviewWidget* self, QHideEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->hideEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseHideEvent(QPrintPreviewWidget* self, QHideEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_HideEvent_IsBase(true);
        vqprintpreviewwidget->hideEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnHideEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_HideEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_NativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseNativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_NativeEvent_IsBase(true);
        return vqprintpreviewwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnNativeEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_NativeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ChangeEvent(QPrintPreviewWidget* self, QEvent* param1) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->changeEvent(param1);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseChangeEvent(QPrintPreviewWidget* self, QEvent* param1) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ChangeEvent_IsBase(true);
        vqprintpreviewwidget->changeEvent(param1);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnChangeEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewWidget_Metric(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPrintPreviewWidget_QBaseMetric(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Metric_IsBase(true);
        return vqprintpreviewwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMetric(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Metric_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_InitPainter(const QPrintPreviewWidget* self, QPainter* painter) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->initPainter(painter);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseInitPainter(const QPrintPreviewWidget* self, QPainter* painter) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_InitPainter_IsBase(true);
        vqprintpreviewwidget->initPainter(painter);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnInitPainter(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_InitPainter_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPrintPreviewWidget_Redirected(const QPrintPreviewWidget* self, QPoint* offset) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->redirected(offset);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPrintPreviewWidget_QBaseRedirected(const QPrintPreviewWidget* self, QPoint* offset) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Redirected_IsBase(true);
        return vqprintpreviewwidget->redirected(offset);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnRedirected(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Redirected_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPrintPreviewWidget_SharedPainter(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->sharedPainter();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPrintPreviewWidget_QBaseSharedPainter(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SharedPainter_IsBase(true);
        return vqprintpreviewwidget->sharedPainter();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSharedPainter(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SharedPainter_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_InputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseInputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_InputMethodEvent_IsBase(true);
        vqprintpreviewwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnInputMethodEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPrintPreviewWidget_InputMethodQuery(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return new QVariant(vqprintpreviewwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPrintPreviewWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPrintPreviewWidget_QBaseInputMethodQuery(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqprintpreviewwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPrintPreviewWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnInputMethodQuery(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_FocusNextPrevChild(QPrintPreviewWidget* self, bool next) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseFocusNextPrevChild(QPrintPreviewWidget* self, bool next) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusNextPrevChild_IsBase(true);
        return vqprintpreviewwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusNextPrevChild(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_EventFilter(QPrintPreviewWidget* self, QObject* watched, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->eventFilter(watched, event);
    } else {
        return self->QPrintPreviewWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseEventFilter(QPrintPreviewWidget* self, QObject* watched, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_EventFilter_IsBase(true);
        return vqprintpreviewwidget->eventFilter(watched, event);
    } else {
        return self->QPrintPreviewWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnEventFilter(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_EventFilter_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_TimerEvent(QPrintPreviewWidget* self, QTimerEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->timerEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseTimerEvent(QPrintPreviewWidget* self, QTimerEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_TimerEvent_IsBase(true);
        vqprintpreviewwidget->timerEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnTimerEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_TimerEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ChildEvent(QPrintPreviewWidget* self, QChildEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->childEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseChildEvent(QPrintPreviewWidget* self, QChildEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ChildEvent_IsBase(true);
        vqprintpreviewwidget->childEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnChildEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ChildEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_CustomEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->customEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseCustomEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_CustomEvent_IsBase(true);
        vqprintpreviewwidget->customEvent(event);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnCustomEvent(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_CustomEvent_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_ConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->connectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ConnectNotify_IsBase(true);
        vqprintpreviewwidget->connectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnConnectNotify(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_DisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseDisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DisconnectNotify_IsBase(true);
        vqprintpreviewwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDisconnectNotify(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_UpdateMicroFocus(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->updateMicroFocus();
    } else {
        ((VirtualQPrintPreviewWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseUpdateMicroFocus(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_UpdateMicroFocus_IsBase(true);
        vqprintpreviewwidget->updateMicroFocus();
    } else {
        ((VirtualQPrintPreviewWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnUpdateMicroFocus(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_Create(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->create();
    } else {
        ((VirtualQPrintPreviewWidget*)self)->create();
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseCreate(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Create_IsBase(true);
        vqprintpreviewwidget->create();
    } else {
        ((VirtualQPrintPreviewWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnCreate(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Create_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewWidget_Destroy(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->destroy();
    } else {
        ((VirtualQPrintPreviewWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseDestroy(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Destroy_IsBase(true);
        vqprintpreviewwidget->destroy();
    } else {
        ((VirtualQPrintPreviewWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDestroy(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Destroy_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_FocusNextChild(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->focusNextChild();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseFocusNextChild(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusNextChild_IsBase(true);
        return vqprintpreviewwidget->focusNextChild();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusNextChild(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_FocusPreviousChild(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->focusPreviousChild();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseFocusPreviousChild(QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusPreviousChild_IsBase(true);
        return vqprintpreviewwidget->focusPreviousChild();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusPreviousChild(QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPrintPreviewWidget_Sender(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->sender();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPrintPreviewWidget_QBaseSender(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Sender_IsBase(true);
        return vqprintpreviewwidget->sender();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSender(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Sender_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewWidget_SenderSignalIndex(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->senderSignalIndex();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPrintPreviewWidget_QBaseSenderSignalIndex(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SenderSignalIndex_IsBase(true);
        return vqprintpreviewwidget->senderSignalIndex();
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSenderSignalIndex(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewWidget_Receivers(const QPrintPreviewWidget* self, const char* signal) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->receivers(signal);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPrintPreviewWidget_QBaseReceivers(const QPrintPreviewWidget* self, const char* signal) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Receivers_IsBase(true);
        return vqprintpreviewwidget->receivers(signal);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnReceivers(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_Receivers_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewWidget_IsSignalConnected(const QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_QBaseIsSignalConnected(const QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_IsSignalConnected_IsBase(true);
        return vqprintpreviewwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnIsSignalConnected(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QPrintPreviewWidget_GetDecodedMetricF(const QPrintPreviewWidget* self, int metricA, int metricB) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        return vqprintpreviewwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPrintPreviewWidget_QBaseGetDecodedMetricF(const QPrintPreviewWidget* self, int metricA, int metricB) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_GetDecodedMetricF_IsBase(true);
        return vqprintpreviewwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPrintPreviewWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnGetDecodedMetricF(const QPrintPreviewWidget* self, intptr_t slot) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
        vqprintpreviewwidget->setQPrintPreviewWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self) {
    delete self;
}
