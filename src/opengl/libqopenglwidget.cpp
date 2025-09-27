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
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLWidget>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qopenglwidget.h>
#include "libqopenglwidget.h"
#include "libqopenglwidget.hxx"

QOpenGLWidget* QOpenGLWidget_new(QWidget* parent) {
    return new VirtualQOpenGLWidget(parent);
}

QOpenGLWidget* QOpenGLWidget_new2() {
    return new VirtualQOpenGLWidget();
}

QOpenGLWidget* QOpenGLWidget_new3(QWidget* parent, int f) {
    return new VirtualQOpenGLWidget(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QOpenGLWidget_MetaObject(const QOpenGLWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLWidget_Metacast(QOpenGLWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLWidget_Metacall(QOpenGLWidget* self, int param1, int param2, void** param3) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLWidget_Tr(const char* s) {
    QString _ret = QOpenGLWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLWidget_SetUpdateBehavior(QOpenGLWidget* self, int updateBehavior) {
    self->setUpdateBehavior(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

int QOpenGLWidget_UpdateBehavior(const QOpenGLWidget* self) {
    return static_cast<int>(self->updateBehavior());
}

void QOpenGLWidget_SetFormat(QOpenGLWidget* self, const QSurfaceFormat* format) {
    self->setFormat(*format);
}

QSurfaceFormat* QOpenGLWidget_Format(const QOpenGLWidget* self) {
    return new QSurfaceFormat(self->format());
}

void QOpenGLWidget_SetTextureFormat(QOpenGLWidget* self, uint32_t texFormat) {
    self->setTextureFormat(static_cast<GLenum>(texFormat));
}

bool QOpenGLWidget_IsValid(const QOpenGLWidget* self) {
    return self->isValid();
}

void QOpenGLWidget_MakeCurrent(QOpenGLWidget* self) {
    self->makeCurrent();
}

void QOpenGLWidget_MakeCurrent2(QOpenGLWidget* self, uint8_t targetBuffer) {
    self->makeCurrent(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer));
}

void QOpenGLWidget_DoneCurrent(QOpenGLWidget* self) {
    self->doneCurrent();
}

QOpenGLContext* QOpenGLWidget_Context(const QOpenGLWidget* self) {
    return self->context();
}

uint32_t QOpenGLWidget_DefaultFramebufferObject(const QOpenGLWidget* self) {
    return self->defaultFramebufferObject();
}

uint32_t QOpenGLWidget_DefaultFramebufferObject2(const QOpenGLWidget* self, uint8_t targetBuffer) {
    return self->defaultFramebufferObject(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer));
}

QImage* QOpenGLWidget_GrabFramebuffer(QOpenGLWidget* self) {
    return new QImage(self->grabFramebuffer());
}

QImage* QOpenGLWidget_GrabFramebuffer2(QOpenGLWidget* self, uint8_t targetBuffer) {
    return new QImage(self->grabFramebuffer(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer)));
}

uint8_t QOpenGLWidget_CurrentTargetBuffer(const QOpenGLWidget* self) {
    return static_cast<uint8_t>(self->currentTargetBuffer());
}

void QOpenGLWidget_AboutToCompose(QOpenGLWidget* self) {
    self->aboutToCompose();
}

void QOpenGLWidget_Connect_AboutToCompose(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::aboutToCompose, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QOpenGLWidget_FrameSwapped(QOpenGLWidget* self) {
    self->frameSwapped();
}

void QOpenGLWidget_Connect_FrameSwapped(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::frameSwapped, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QOpenGLWidget_AboutToResize(QOpenGLWidget* self) {
    self->aboutToResize();
}

void QOpenGLWidget_Connect_AboutToResize(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::aboutToResize, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QOpenGLWidget_Resized(QOpenGLWidget* self) {
    self->resized();
}

void QOpenGLWidget_Connect_Resized(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::resized, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QOpenGLWidget_InitializeGL(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->initializeGL();
    }
}

void QOpenGLWidget_ResizeGL(QOpenGLWidget* self, int w, int h) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->resizeGL(static_cast<int>(w), static_cast<int>(h));
    }
}

void QOpenGLWidget_PaintGL(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->paintGL();
    }
}

void QOpenGLWidget_PaintEvent(QOpenGLWidget* self, QPaintEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->paintEvent(e);
    }
}

void QOpenGLWidget_ResizeEvent(QOpenGLWidget* self, QResizeEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->resizeEvent(e);
    }
}

bool QOpenGLWidget_Event(QOpenGLWidget* self, QEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->event(e);
    }
    return {};
}

int QOpenGLWidget_Metric(const QOpenGLWidget* self, int metric) {
    auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    return {};
}

QPaintDevice* QOpenGLWidget_Redirected(const QOpenGLWidget* self, QPoint* p) {
    auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->redirected(p);
    }
    return {};
}

QPaintEngine* QOpenGLWidget_PaintEngine(const QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->paintEngine();
    }
    return {};
}

libqt_string QOpenGLWidget_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLWidget::tr(s, c, static_cast<int>(n));
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
int QOpenGLWidget_QBaseMetacall(QOpenGLWidget* self, int param1, int param2, void** param3) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Metacall_IsBase(true);
        return vqopenglwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetacall(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Metacall_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseInitializeGL(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InitializeGL_IsBase(true);
        vqopenglwidget->initializeGL();
    } else {
        ((VirtualQOpenGLWidget*)self)->initializeGL();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInitializeGL(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InitializeGL_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InitializeGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseResizeGL(QOpenGLWidget* self, int w, int h) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ResizeGL_IsBase(true);
        vqopenglwidget->resizeGL(static_cast<int>(w), static_cast<int>(h));
    } else {
        ((VirtualQOpenGLWidget*)self)->resizeGL(static_cast<int>(w), static_cast<int>(h));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnResizeGL(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ResizeGL_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ResizeGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWidget_QBasePaintGL(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_PaintGL_IsBase(true);
        vqopenglwidget->paintGL();
    } else {
        ((VirtualQOpenGLWidget*)self)->paintGL();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintGL(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_PaintGL_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWidget_QBasePaintEvent(QOpenGLWidget* self, QPaintEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_PaintEvent_IsBase(true);
        vqopenglwidget->paintEvent(e);
    } else {
        ((VirtualQOpenGLWidget*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_PaintEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseResizeEvent(QOpenGLWidget* self, QResizeEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ResizeEvent_IsBase(true);
        vqopenglwidget->resizeEvent(e);
    } else {
        ((VirtualQOpenGLWidget*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnResizeEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseEvent(QOpenGLWidget* self, QEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Event_IsBase(true);
        return vqopenglwidget->event(e);
    } else {
        return ((VirtualQOpenGLWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Event_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Event_Callback>(slot));
    }
}

// Base class handler implementation
int QOpenGLWidget_QBaseMetric(const QOpenGLWidget* self, int metric) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Metric_IsBase(true);
        return vqopenglwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQOpenGLWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetric(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Metric_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Metric_Callback>(slot));
    }
}

// Base class handler implementation
QPaintDevice* QOpenGLWidget_QBaseRedirected(const QOpenGLWidget* self, QPoint* p) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Redirected_IsBase(true);
        return vqopenglwidget->redirected(p);
    } else {
        return ((VirtualQOpenGLWidget*)self)->redirected(p);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnRedirected(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Redirected_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Redirected_Callback>(slot));
    }
}

// Base class handler implementation
QPaintEngine* QOpenGLWidget_QBasePaintEngine(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_PaintEngine_IsBase(true);
        return vqopenglwidget->paintEngine();
    } else {
        return ((VirtualQOpenGLWidget*)self)->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintEngine(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_PaintEngine_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWidget_DevType(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->devType();
    } else {
        return self->QOpenGLWidget::devType();
    }
}

// Base class handler implementation
int QOpenGLWidget_QBaseDevType(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DevType_IsBase(true);
        return vqopenglwidget->devType();
    } else {
        return self->QOpenGLWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDevType(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DevType_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_SetVisible(QOpenGLWidget* self, bool visible) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setVisible(visible);
    } else {
        self->QOpenGLWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseSetVisible(QOpenGLWidget* self, bool visible) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SetVisible_IsBase(true);
        vqopenglwidget->setVisible(visible);
    } else {
        self->QOpenGLWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSetVisible(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SetVisible_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QOpenGLWidget_SizeHint(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return new QSize(vqopenglwidget->sizeHint());
    } else {
        return new QSize(((VirtualQOpenGLWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QOpenGLWidget_QBaseSizeHint(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SizeHint_IsBase(true);
        return new QSize(vqopenglwidget->sizeHint());
    } else {
        return new QSize(((VirtualQOpenGLWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSizeHint(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SizeHint_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QOpenGLWidget_MinimumSizeHint(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return new QSize(vqopenglwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQOpenGLWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QOpenGLWidget_QBaseMinimumSizeHint(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqopenglwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQOpenGLWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMinimumSizeHint(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWidget_HeightForWidth(const QOpenGLWidget* self, int param1) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QOpenGLWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QOpenGLWidget_QBaseHeightForWidth(const QOpenGLWidget* self, int param1) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_HeightForWidth_IsBase(true);
        return vqopenglwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QOpenGLWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnHeightForWidth(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_HasHeightForWidth(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->hasHeightForWidth();
    } else {
        return self->QOpenGLWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseHasHeightForWidth(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_HasHeightForWidth_IsBase(true);
        return vqopenglwidget->hasHeightForWidth();
    } else {
        return self->QOpenGLWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnHasHeightForWidth(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_MousePressEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->mousePressEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseMousePressEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MousePressEvent_IsBase(true);
        vqopenglwidget->mousePressEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMousePressEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_MouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseMouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MouseReleaseEvent_IsBase(true);
        vqopenglwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMouseReleaseEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_MouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseMouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MouseDoubleClickEvent_IsBase(true);
        vqopenglwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMouseDoubleClickEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_MouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseMouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MouseMoveEvent_IsBase(true);
        vqopenglwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMouseMoveEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_WheelEvent(QOpenGLWidget* self, QWheelEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->wheelEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseWheelEvent(QOpenGLWidget* self, QWheelEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_WheelEvent_IsBase(true);
        vqopenglwidget->wheelEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnWheelEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_WheelEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_KeyPressEvent(QOpenGLWidget* self, QKeyEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->keyPressEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseKeyPressEvent(QOpenGLWidget* self, QKeyEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_KeyPressEvent_IsBase(true);
        vqopenglwidget->keyPressEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnKeyPressEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_KeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseKeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_KeyReleaseEvent_IsBase(true);
        vqopenglwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnKeyReleaseEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_FocusInEvent(QOpenGLWidget* self, QFocusEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->focusInEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseFocusInEvent(QOpenGLWidget* self, QFocusEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusInEvent_IsBase(true);
        vqopenglwidget->focusInEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusInEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_FocusOutEvent(QOpenGLWidget* self, QFocusEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->focusOutEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseFocusOutEvent(QOpenGLWidget* self, QFocusEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusOutEvent_IsBase(true);
        vqopenglwidget->focusOutEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusOutEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_EnterEvent(QOpenGLWidget* self, QEnterEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->enterEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseEnterEvent(QOpenGLWidget* self, QEnterEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_EnterEvent_IsBase(true);
        vqopenglwidget->enterEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEnterEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_EnterEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_LeaveEvent(QOpenGLWidget* self, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->leaveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseLeaveEvent(QOpenGLWidget* self, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_LeaveEvent_IsBase(true);
        vqopenglwidget->leaveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnLeaveEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_MoveEvent(QOpenGLWidget* self, QMoveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->moveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseMoveEvent(QOpenGLWidget* self, QMoveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MoveEvent_IsBase(true);
        vqopenglwidget->moveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMoveEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_MoveEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_CloseEvent(QOpenGLWidget* self, QCloseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->closeEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseCloseEvent(QOpenGLWidget* self, QCloseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_CloseEvent_IsBase(true);
        vqopenglwidget->closeEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnCloseEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_CloseEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_ContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->contextMenuEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ContextMenuEvent_IsBase(true);
        vqopenglwidget->contextMenuEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnContextMenuEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_TabletEvent(QOpenGLWidget* self, QTabletEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->tabletEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseTabletEvent(QOpenGLWidget* self, QTabletEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_TabletEvent_IsBase(true);
        vqopenglwidget->tabletEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnTabletEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_TabletEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_ActionEvent(QOpenGLWidget* self, QActionEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->actionEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseActionEvent(QOpenGLWidget* self, QActionEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ActionEvent_IsBase(true);
        vqopenglwidget->actionEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnActionEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ActionEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_DragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->dragEnterEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseDragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DragEnterEvent_IsBase(true);
        vqopenglwidget->dragEnterEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDragEnterEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_DragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->dragMoveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseDragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DragMoveEvent_IsBase(true);
        vqopenglwidget->dragMoveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDragMoveEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_DragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseDragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DragLeaveEvent_IsBase(true);
        vqopenglwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDragLeaveEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_DropEvent(QOpenGLWidget* self, QDropEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->dropEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseDropEvent(QOpenGLWidget* self, QDropEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DropEvent_IsBase(true);
        vqopenglwidget->dropEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDropEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DropEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_ShowEvent(QOpenGLWidget* self, QShowEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->showEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseShowEvent(QOpenGLWidget* self, QShowEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ShowEvent_IsBase(true);
        vqopenglwidget->showEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnShowEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ShowEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_HideEvent(QOpenGLWidget* self, QHideEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->hideEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseHideEvent(QOpenGLWidget* self, QHideEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_HideEvent_IsBase(true);
        vqopenglwidget->hideEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnHideEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_HideEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_NativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQOpenGLWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseNativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_NativeEvent_IsBase(true);
        return vqopenglwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQOpenGLWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnNativeEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_NativeEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_ChangeEvent(QOpenGLWidget* self, QEvent* param1) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->changeEvent(param1);
    } else {
        ((VirtualQOpenGLWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseChangeEvent(QOpenGLWidget* self, QEvent* param1) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ChangeEvent_IsBase(true);
        vqopenglwidget->changeEvent(param1);
    } else {
        ((VirtualQOpenGLWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnChangeEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_InitPainter(const QOpenGLWidget* self, QPainter* painter) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->initPainter(painter);
    } else {
        ((VirtualQOpenGLWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseInitPainter(const QOpenGLWidget* self, QPainter* painter) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InitPainter_IsBase(true);
        vqopenglwidget->initPainter(painter);
    } else {
        ((VirtualQOpenGLWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInitPainter(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InitPainter_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QOpenGLWidget_SharedPainter(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->sharedPainter();
    } else {
        return ((VirtualQOpenGLWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QOpenGLWidget_QBaseSharedPainter(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SharedPainter_IsBase(true);
        return vqopenglwidget->sharedPainter();
    } else {
        return ((VirtualQOpenGLWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSharedPainter(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SharedPainter_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_InputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQOpenGLWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseInputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InputMethodEvent_IsBase(true);
        vqopenglwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQOpenGLWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInputMethodEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QOpenGLWidget_InputMethodQuery(const QOpenGLWidget* self, int param1) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return new QVariant(vqopenglwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQOpenGLWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QOpenGLWidget_QBaseInputMethodQuery(const QOpenGLWidget* self, int param1) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqopenglwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQOpenGLWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInputMethodQuery(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_FocusNextPrevChild(QOpenGLWidget* self, bool next) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQOpenGLWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseFocusNextPrevChild(QOpenGLWidget* self, bool next) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusNextPrevChild_IsBase(true);
        return vqopenglwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQOpenGLWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusNextPrevChild(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_EventFilter(QOpenGLWidget* self, QObject* watched, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->eventFilter(watched, event);
    } else {
        return self->QOpenGLWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseEventFilter(QOpenGLWidget* self, QObject* watched, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_EventFilter_IsBase(true);
        return vqopenglwidget->eventFilter(watched, event);
    } else {
        return self->QOpenGLWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEventFilter(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_TimerEvent(QOpenGLWidget* self, QTimerEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->timerEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseTimerEvent(QOpenGLWidget* self, QTimerEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_TimerEvent_IsBase(true);
        vqopenglwidget->timerEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnTimerEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_ChildEvent(QOpenGLWidget* self, QChildEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->childEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseChildEvent(QOpenGLWidget* self, QChildEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ChildEvent_IsBase(true);
        vqopenglwidget->childEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnChildEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_CustomEvent(QOpenGLWidget* self, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->customEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseCustomEvent(QOpenGLWidget* self, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_CustomEvent_IsBase(true);
        vqopenglwidget->customEvent(event);
    } else {
        ((VirtualQOpenGLWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnCustomEvent(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_ConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ConnectNotify_IsBase(true);
        vqopenglwidget->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnConnectNotify(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_DisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseDisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DisconnectNotify_IsBase(true);
        vqopenglwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDisconnectNotify(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_UpdateMicroFocus(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->updateMicroFocus();
    } else {
        ((VirtualQOpenGLWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseUpdateMicroFocus(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_UpdateMicroFocus_IsBase(true);
        vqopenglwidget->updateMicroFocus();
    } else {
        ((VirtualQOpenGLWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnUpdateMicroFocus(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_Create(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->create();
    } else {
        ((VirtualQOpenGLWidget*)self)->create();
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseCreate(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Create_IsBase(true);
        vqopenglwidget->create();
    } else {
        ((VirtualQOpenGLWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnCreate(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Create_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWidget_Destroy(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->destroy();
    } else {
        ((VirtualQOpenGLWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QOpenGLWidget_QBaseDestroy(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Destroy_IsBase(true);
        vqopenglwidget->destroy();
    } else {
        ((VirtualQOpenGLWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDestroy(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Destroy_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_FocusNextChild(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->focusNextChild();
    } else {
        return ((VirtualQOpenGLWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseFocusNextChild(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusNextChild_IsBase(true);
        return vqopenglwidget->focusNextChild();
    } else {
        return ((VirtualQOpenGLWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusNextChild(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_FocusPreviousChild(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->focusPreviousChild();
    } else {
        return ((VirtualQOpenGLWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseFocusPreviousChild(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusPreviousChild_IsBase(true);
        return vqopenglwidget->focusPreviousChild();
    } else {
        return ((VirtualQOpenGLWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusPreviousChild(QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLWidget_Sender(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->sender();
    } else {
        return ((VirtualQOpenGLWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLWidget_QBaseSender(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Sender_IsBase(true);
        return vqopenglwidget->sender();
    } else {
        return ((VirtualQOpenGLWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSender(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Sender_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWidget_SenderSignalIndex(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLWidget_QBaseSenderSignalIndex(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SenderSignalIndex_IsBase(true);
        return vqopenglwidget->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSenderSignalIndex(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWidget_Receivers(const QOpenGLWidget* self, const char* signal) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->receivers(signal);
    } else {
        return ((VirtualQOpenGLWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLWidget_QBaseReceivers(const QOpenGLWidget* self, const char* signal) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Receivers_IsBase(true);
        return vqopenglwidget->receivers(signal);
    } else {
        return ((VirtualQOpenGLWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnReceivers(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_Receivers_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWidget_IsSignalConnected(const QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLWidget_QBaseIsSignalConnected(const QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_IsSignalConnected_IsBase(true);
        return vqopenglwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnIsSignalConnected(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QOpenGLWidget_GetDecodedMetricF(const QOpenGLWidget* self, int metricA, int metricB) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        return vqopenglwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQOpenGLWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QOpenGLWidget_QBaseGetDecodedMetricF(const QOpenGLWidget* self, int metricA, int metricB) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_GetDecodedMetricF_IsBase(true);
        return vqopenglwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQOpenGLWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnGetDecodedMetricF(const QOpenGLWidget* self, intptr_t slot) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
        vqopenglwidget->setQOpenGLWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QOpenGLWidget_Delete(QOpenGLWidget* self) {
    delete self;
}
