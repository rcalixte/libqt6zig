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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPrintPreviewWidget_Tr(const char* s) {
    auto _ret = QPrintPreviewWidget::tr(s);
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
    self->setVisible(visible);
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
    QPrintPreviewWidget::connect(self,
                                 static_cast<void (QPrintPreviewWidget::*)(QPrinter*)>(&QPrintPreviewWidget::paintRequested),
                                 [self, slotFunc](QPrinter* printer) {
                                     QPrinter* sigval1 = printer;
                                     slotFunc(self, sigval1);
                                 });
}

void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self) {
    self->previewChanged();
}

void QPrintPreviewWidget_Connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewWidget*) = reinterpret_cast<void (*)(QPrintPreviewWidget*)>(slot);
    QPrintPreviewWidget::connect(self,
                                 static_cast<void (QPrintPreviewWidget::*)()>(&QPrintPreviewWidget::previewChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

libqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c) {
    auto _ret = QPrintPreviewWidget::tr(s, c);
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
    auto _ret = QPrintPreviewWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPrintPreviewWidget_SuperMetaObject(const QPrintPreviewWidget* self) {
    return (QMetaObject*)self->QPrintPreviewWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMetaObject(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_metaobject_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPrintPreviewWidget_SuperMetacast(QPrintPreviewWidget* self, const char* param1) {
    return self->QPrintPreviewWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMetacast(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_metacast_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPrintPreviewWidget_SuperMetacall(QPrintPreviewWidget* self, int param1, int param2, void** param3) {
    return self->QPrintPreviewWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMetacall(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_metacall_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QPrintPreviewWidget_SuperSetVisible(QPrintPreviewWidget* self, bool visible) {
    self->QPrintPreviewWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSetVisible(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_setvisible_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewWidget_DevType(const QPrintPreviewWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QPrintPreviewWidget_SuperDevType(const QPrintPreviewWidget* self) {
    return self->QPrintPreviewWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDevType(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_devtype_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
QSize* QPrintPreviewWidget_SizeHint(const QPrintPreviewWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPrintPreviewWidget_SuperSizeHint(const QPrintPreviewWidget* self) {
    return new QSize(self->QPrintPreviewWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSizeHint(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_sizehint_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPrintPreviewWidget_MinimumSizeHint(const QPrintPreviewWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPrintPreviewWidget_SuperMinimumSizeHint(const QPrintPreviewWidget* self) {
    return new QSize(self->QPrintPreviewWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMinimumSizeHint(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_minimumsizehint_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewWidget_HeightForWidth(const QPrintPreviewWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPrintPreviewWidget_SuperHeightForWidth(const QPrintPreviewWidget* self, int param1) {
    return self->QPrintPreviewWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnHeightForWidth(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_heightforwidth_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewWidget_HasHeightForWidth(const QPrintPreviewWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPrintPreviewWidget_SuperHasHeightForWidth(const QPrintPreviewWidget* self) {
    return self->QPrintPreviewWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnHasHeightForWidth(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPrintPreviewWidget_PaintEngine(const QPrintPreviewWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPrintPreviewWidget_SuperPaintEngine(const QPrintPreviewWidget* self) {
    return self->QPrintPreviewWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnPaintEngine(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_paintengine_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewWidget_Event(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        return vqprintpreviewwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_SuperEvent(QPrintPreviewWidget* self, QEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        return vqprintpreviewwidget->QPrintPreviewWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_event_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_MousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperMousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMousePressEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_mousepressevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_MouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperMouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMouseReleaseEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_MouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperMouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMouseDoubleClickEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_MouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperMouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMouseMoveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_mousemoveevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_WheelEvent(QPrintPreviewWidget* self, QWheelEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperWheelEvent(QPrintPreviewWidget* self, QWheelEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnWheelEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_wheelevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_KeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperKeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnKeyPressEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_keypressevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_KeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperKeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnKeyReleaseEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_FocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperFocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusInEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_focusinevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_FocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperFocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusOutEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_focusoutevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_EnterEvent(QPrintPreviewWidget* self, QEnterEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperEnterEvent(QPrintPreviewWidget* self, QEnterEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnEnterEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_enterevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_LeaveEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperLeaveEvent(QPrintPreviewWidget* self, QEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnLeaveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_leaveevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_PaintEvent(QPrintPreviewWidget* self, QPaintEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperPaintEvent(QPrintPreviewWidget* self, QPaintEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnPaintEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_paintevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_MoveEvent(QPrintPreviewWidget* self, QMoveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperMoveEvent(QPrintPreviewWidget* self, QMoveEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMoveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_moveevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnResizeEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_resizeevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_CloseEvent(QPrintPreviewWidget* self, QCloseEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperCloseEvent(QPrintPreviewWidget* self, QCloseEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnCloseEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_closeevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnContextMenuEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_contextmenuevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_TabletEvent(QPrintPreviewWidget* self, QTabletEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperTabletEvent(QPrintPreviewWidget* self, QTabletEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnTabletEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_tabletevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ActionEvent(QPrintPreviewWidget* self, QActionEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperActionEvent(QPrintPreviewWidget* self, QActionEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnActionEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_actionevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_DragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperDragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDragEnterEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_dragenterevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_DragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperDragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDragMoveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_dragmoveevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_DragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperDragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDragLeaveEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_dragleaveevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_DropEvent(QPrintPreviewWidget* self, QDropEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperDropEvent(QPrintPreviewWidget* self, QDropEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDropEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_dropevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ShowEvent(QPrintPreviewWidget* self, QShowEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperShowEvent(QPrintPreviewWidget* self, QShowEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnShowEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_showevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_HideEvent(QPrintPreviewWidget* self, QHideEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperHideEvent(QPrintPreviewWidget* self, QHideEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnHideEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_hideevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewWidget_NativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        return vqprintpreviewwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_SuperNativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        return vqprintpreviewwidget->QPrintPreviewWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnNativeEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_nativeevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ChangeEvent(QPrintPreviewWidget* self, QEvent* param1) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperChangeEvent(QPrintPreviewWidget* self, QEvent* param1) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnChangeEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_changeevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewWidget_Metric(const QPrintPreviewWidget* self, int param1) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget) {
        return vqprintpreviewwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPrintPreviewWidget_SuperMetric(const QPrintPreviewWidget* self, int param1) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->QPrintPreviewWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnMetric(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_metric_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_InitPainter(const QPrintPreviewWidget* self, QPainter* painter) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperInitPainter(const QPrintPreviewWidget* self, QPainter* painter) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        vqprintpreviewwidget->QPrintPreviewWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnInitPainter(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_initpainter_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPrintPreviewWidget_Redirected(const QPrintPreviewWidget* self, QPoint* offset) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget) {
        return vqprintpreviewwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPrintPreviewWidget_SuperRedirected(const QPrintPreviewWidget* self, QPoint* offset) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->QPrintPreviewWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnRedirected(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_redirected_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPrintPreviewWidget_SharedPainter(const QPrintPreviewWidget* self) {
    auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self));
    if (vqprintpreviewwidget) {
        return vqprintpreviewwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPrintPreviewWidget_SuperSharedPainter(const QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->QPrintPreviewWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSharedPainter(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_sharedpainter_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_InputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperInputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnInputMethodEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_inputmethodevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPrintPreviewWidget_InputMethodQuery(const QPrintPreviewWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPrintPreviewWidget_SuperInputMethodQuery(const QPrintPreviewWidget* self, int param1) {
    return new QVariant(self->QPrintPreviewWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnInputMethodQuery(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self)))
        vqprintpreviewwidget->qprintpreviewwidget_inputmethodquery_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewWidget_FocusNextPrevChild(QPrintPreviewWidget* self, bool next) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        return vqprintpreviewwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewWidget_SuperFocusNextPrevChild(QPrintPreviewWidget* self, bool next) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        return vqprintpreviewwidget->QPrintPreviewWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnFocusNextPrevChild(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewWidget_EventFilter(QPrintPreviewWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPrintPreviewWidget_SuperEventFilter(QPrintPreviewWidget* self, QObject* watched, QEvent* event) {
    return self->QPrintPreviewWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnEventFilter(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_eventfilter_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_TimerEvent(QPrintPreviewWidget* self, QTimerEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperTimerEvent(QPrintPreviewWidget* self, QTimerEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnTimerEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_timerevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ChildEvent(QPrintPreviewWidget* self, QChildEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperChildEvent(QPrintPreviewWidget* self, QChildEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnChildEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_childevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_CustomEvent(QPrintPreviewWidget* self, QEvent* event) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperCustomEvent(QPrintPreviewWidget* self, QEvent* event) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnCustomEvent(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_customevent_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_ConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnConnectNotify(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_connectnotify_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewWidget_DisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
    if (vqprintpreviewwidget) {
        vqprintpreviewwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewWidget_SuperDisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->QPrintPreviewWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnDisconnectNotify(QPrintPreviewWidget* self, intptr_t slot) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self))
        vqprintpreviewwidget->qprintpreviewwidget_disconnectnotify_callback = reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPrintPreviewWidget_UpdateMicroFocus(QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->VirtualQPrintPreviewWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintPreviewWidget_Create(QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->VirtualQPrintPreviewWidget::create();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintPreviewWidget_Destroy(QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        vqprintpreviewwidget->VirtualQPrintPreviewWidget::destroy();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintPreviewWidget_FocusNextChild(QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintPreviewWidget_FocusPreviousChild(QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self)) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPrintPreviewWidget_Sender(const QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::sender();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPrintPreviewWidget_SenderSignalIndex(const QPrintPreviewWidget* self) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPrintPreviewWidget_Receivers(const QPrintPreviewWidget* self, const char* signal) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintPreviewWidget_IsSignalConnected(const QPrintPreviewWidget* self, const QMetaMethod* signal) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPrintPreviewWidget_GetDecodedMetricF(const QPrintPreviewWidget* self, int metricA, int metricB) {
    if (auto* vqprintpreviewwidget = const_cast<VirtualQPrintPreviewWidget*>(dynamic_cast<const VirtualQPrintPreviewWidget*>(self))) {
        return vqprintpreviewwidget->VirtualQPrintPreviewWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPrintPreviewWidget::getDecodedMetricF called without a directly constructed type");
}

void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self) {
    delete self;
}
