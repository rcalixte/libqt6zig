#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QImage>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLWindow>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QWindow>
#include <qopenglwindow.h>
#include "libqopenglwindow.h"
#include "libqopenglwindow.hxx"

QOpenGLWindow* QOpenGLWindow_new() {
    return new VirtualQOpenGLWindow();
}

QOpenGLWindow* QOpenGLWindow_new2(QOpenGLContext* shareContext) {
    return new VirtualQOpenGLWindow(shareContext);
}

QOpenGLWindow* QOpenGLWindow_new3(int updateBehavior) {
    return new VirtualQOpenGLWindow(static_cast<QOpenGLWindow::UpdateBehavior>(updateBehavior));
}

QOpenGLWindow* QOpenGLWindow_new4(int updateBehavior, QWindow* parent) {
    return new VirtualQOpenGLWindow(static_cast<QOpenGLWindow::UpdateBehavior>(updateBehavior), parent);
}

QOpenGLWindow* QOpenGLWindow_new5(QOpenGLContext* shareContext, int updateBehavior) {
    return new VirtualQOpenGLWindow(shareContext, static_cast<QOpenGLWindow::UpdateBehavior>(updateBehavior));
}

QOpenGLWindow* QOpenGLWindow_new6(QOpenGLContext* shareContext, int updateBehavior, QWindow* parent) {
    return new VirtualQOpenGLWindow(shareContext, static_cast<QOpenGLWindow::UpdateBehavior>(updateBehavior), parent);
}

QMetaObject* QOpenGLWindow_MetaObject(const QOpenGLWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLWindow_Metacast(QOpenGLWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLWindow_Metacall(QOpenGLWindow* self, int param1, int param2, void** param3) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLWindow_Tr(const char* s) {
    QString _ret = QOpenGLWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QOpenGLWindow_UpdateBehavior(const QOpenGLWindow* self) {
    return static_cast<int>(self->updateBehavior());
}

bool QOpenGLWindow_IsValid(const QOpenGLWindow* self) {
    return self->isValid();
}

void QOpenGLWindow_MakeCurrent(QOpenGLWindow* self) {
    self->makeCurrent();
}

void QOpenGLWindow_DoneCurrent(QOpenGLWindow* self) {
    self->doneCurrent();
}

QOpenGLContext* QOpenGLWindow_Context(const QOpenGLWindow* self) {
    return self->context();
}

QOpenGLContext* QOpenGLWindow_ShareContext(const QOpenGLWindow* self) {
    return self->shareContext();
}

uint32_t QOpenGLWindow_DefaultFramebufferObject(const QOpenGLWindow* self) {
    return self->defaultFramebufferObject();
}

QImage* QOpenGLWindow_GrabFramebuffer(QOpenGLWindow* self) {
    return new QImage(self->grabFramebuffer());
}

void QOpenGLWindow_FrameSwapped(QOpenGLWindow* self) {
    self->frameSwapped();
}

void QOpenGLWindow_Connect_FrameSwapped(QOpenGLWindow* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWindow*) = reinterpret_cast<void (*)(QOpenGLWindow*)>(slot);
    QOpenGLWindow::connect(self, &QOpenGLWindow::frameSwapped, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QOpenGLWindow_InitializeGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->initializeGL();
    }
}

void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->resizeGL(static_cast<int>(w), static_cast<int>(h));
    }
}

void QOpenGLWindow_PaintGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->paintGL();
    }
}

void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->paintUnderGL();
    }
}

void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->paintOverGL();
    }
}

void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->paintEvent(event);
    }
}

void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->resizeEvent(event);
    }
}

int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric) {
    auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    return {};
}

QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1) {
    auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->redirected(param1);
    }
    return {};
}

libqt_string QOpenGLWindow_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLWindow::tr(s, c, static_cast<int>(n));
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
int QOpenGLWindow_QBaseMetacall(QOpenGLWindow* self, int param1, int param2, void** param3) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Metacall_IsBase(true);
        return vqopenglwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetacall(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Metacall_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseInitializeGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_InitializeGL_IsBase(true);
        vqopenglwindow->initializeGL();
    } else {
        ((VirtualQOpenGLWindow*)self)->initializeGL();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnInitializeGL(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_InitializeGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_InitializeGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseResizeGL(QOpenGLWindow* self, int w, int h) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ResizeGL_IsBase(true);
        vqopenglwindow->resizeGL(static_cast<int>(w), static_cast<int>(h));
    } else {
        ((VirtualQOpenGLWindow*)self)->resizeGL(static_cast<int>(w), static_cast<int>(h));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResizeGL(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ResizeGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResizeGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintGL_IsBase(true);
        vqopenglwindow->paintGL();
    } else {
        ((VirtualQOpenGLWindow*)self)->paintGL();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintGL(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintUnderGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintUnderGL_IsBase(true);
        vqopenglwindow->paintUnderGL();
    } else {
        ((VirtualQOpenGLWindow*)self)->paintUnderGL();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintUnderGL(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintUnderGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintUnderGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintOverGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintOverGL_IsBase(true);
        vqopenglwindow->paintOverGL();
    } else {
        ((VirtualQOpenGLWindow*)self)->paintOverGL();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintOverGL(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintOverGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintOverGL_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintEvent(QOpenGLWindow* self, QPaintEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintEvent_IsBase(true);
        vqopenglwindow->paintEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_PaintEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseResizeEvent(QOpenGLWindow* self, QResizeEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ResizeEvent_IsBase(true);
        vqopenglwindow->resizeEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResizeEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
int QOpenGLWindow_QBaseMetric(const QOpenGLWindow* self, int metric) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Metric_IsBase(true);
        return vqopenglwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQOpenGLWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetric(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Metric_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Metric_Callback>(slot));
    }
}

// Base class handler implementation
QPaintDevice* QOpenGLWindow_QBaseRedirected(const QOpenGLWindow* self, QPoint* param1) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Redirected_IsBase(true);
        return vqopenglwindow->redirected(param1);
    } else {
        return ((VirtualQOpenGLWindow*)self)->redirected(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnRedirected(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Redirected_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_ExposeEvent(QOpenGLWindow* self, QExposeEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->exposeEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->exposeEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseExposeEvent(QOpenGLWindow* self, QExposeEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ExposeEvent_IsBase(true);
        vqopenglwindow->exposeEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->exposeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnExposeEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ExposeEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ExposeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWindow_Event(QOpenGLWindow* self, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->event(event);
    } else {
        return ((VirtualQOpenGLWindow*)self)->event(event);
    }
}

// Base class handler implementation
bool QOpenGLWindow_QBaseEvent(QOpenGLWindow* self, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Event_IsBase(true);
        return vqopenglwindow->event(event);
    } else {
        return ((VirtualQOpenGLWindow*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Event_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWindow_SurfaceType(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return static_cast<int>(vqopenglwindow->surfaceType());
    } else {
        return static_cast<int>(self->QOpenGLWindow::surfaceType());
    }
}

// Base class handler implementation
int QOpenGLWindow_QBaseSurfaceType(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_SurfaceType_IsBase(true);
        return static_cast<int>(vqopenglwindow->surfaceType());
    } else {
        return static_cast<int>(self->QOpenGLWindow::surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSurfaceType(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_SurfaceType_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_SurfaceType_Callback>(slot));
    }
}

// Derived class handler implementation
QSurfaceFormat* QOpenGLWindow_Format(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return new QSurfaceFormat(vqopenglwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQOpenGLWindow*)self)->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QOpenGLWindow_QBaseFormat(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Format_IsBase(true);
        return new QSurfaceFormat(vqopenglwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQOpenGLWindow*)self)->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFormat(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Format_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QOpenGLWindow_Size(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return new QSize(vqopenglwindow->size());
    } else {
        return new QSize(((VirtualQOpenGLWindow*)self)->size());
    }
}

// Base class handler implementation
QSize* QOpenGLWindow_QBaseSize(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Size_IsBase(true);
        return new QSize(vqopenglwindow->size());
    } else {
        return new QSize(((VirtualQOpenGLWindow*)self)->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSize(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Size_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Size_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QOpenGLWindow_AccessibleRoot(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->accessibleRoot();
    } else {
        return self->QOpenGLWindow::accessibleRoot();
    }
}

// Base class handler implementation
QAccessibleInterface* QOpenGLWindow_QBaseAccessibleRoot(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_AccessibleRoot_IsBase(true);
        return vqopenglwindow->accessibleRoot();
    } else {
        return self->QOpenGLWindow::accessibleRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnAccessibleRoot(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_AccessibleRoot_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_AccessibleRoot_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLWindow_FocusObject(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->focusObject();
    } else {
        return self->QOpenGLWindow::focusObject();
    }
}

// Base class handler implementation
QObject* QOpenGLWindow_QBaseFocusObject(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_FocusObject_IsBase(true);
        return vqopenglwindow->focusObject();
    } else {
        return self->QOpenGLWindow::focusObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFocusObject(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_FocusObject_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_FocusObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_MoveEvent(QOpenGLWindow* self, QMoveEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->moveEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->moveEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseMoveEvent(QOpenGLWindow* self, QMoveEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MoveEvent_IsBase(true);
        vqopenglwindow->moveEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMoveEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MoveEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_FocusInEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->focusInEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseFocusInEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_FocusInEvent_IsBase(true);
        vqopenglwindow->focusInEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFocusInEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_FocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->focusOutEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseFocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_FocusOutEvent_IsBase(true);
        vqopenglwindow->focusOutEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFocusOutEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_ShowEvent(QOpenGLWindow* self, QShowEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->showEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseShowEvent(QOpenGLWindow* self, QShowEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ShowEvent_IsBase(true);
        vqopenglwindow->showEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnShowEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ShowEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_HideEvent(QOpenGLWindow* self, QHideEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->hideEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseHideEvent(QOpenGLWindow* self, QHideEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_HideEvent_IsBase(true);
        vqopenglwindow->hideEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnHideEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_HideEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_CloseEvent(QOpenGLWindow* self, QCloseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->closeEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseCloseEvent(QOpenGLWindow* self, QCloseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_CloseEvent_IsBase(true);
        vqopenglwindow->closeEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnCloseEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_CloseEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_KeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->keyPressEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseKeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_KeyPressEvent_IsBase(true);
        vqopenglwindow->keyPressEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnKeyPressEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_KeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseKeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_KeyReleaseEvent_IsBase(true);
        vqopenglwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnKeyReleaseEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_MousePressEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->mousePressEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseMousePressEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MousePressEvent_IsBase(true);
        vqopenglwindow->mousePressEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMousePressEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_MouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseMouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MouseReleaseEvent_IsBase(true);
        vqopenglwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMouseReleaseEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_MouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseMouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MouseDoubleClickEvent_IsBase(true);
        vqopenglwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMouseDoubleClickEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_MouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseMouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MouseMoveEvent_IsBase(true);
        vqopenglwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMouseMoveEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_WheelEvent(QOpenGLWindow* self, QWheelEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->wheelEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseWheelEvent(QOpenGLWindow* self, QWheelEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_WheelEvent_IsBase(true);
        vqopenglwindow->wheelEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnWheelEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_WheelEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_TouchEvent(QOpenGLWindow* self, QTouchEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->touchEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->touchEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseTouchEvent(QOpenGLWindow* self, QTouchEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_TouchEvent_IsBase(true);
        vqopenglwindow->touchEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->touchEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnTouchEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_TouchEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_TouchEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_TabletEvent(QOpenGLWindow* self, QTabletEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->tabletEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->tabletEvent(param1);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseTabletEvent(QOpenGLWindow* self, QTabletEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_TabletEvent_IsBase(true);
        vqopenglwindow->tabletEvent(param1);
    } else {
        ((VirtualQOpenGLWindow*)self)->tabletEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnTabletEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_TabletEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWindow_NativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQOpenGLWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QOpenGLWindow_QBaseNativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_NativeEvent_IsBase(true);
        return vqopenglwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQOpenGLWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnNativeEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_NativeEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWindow_EventFilter(QOpenGLWindow* self, QObject* watched, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->eventFilter(watched, event);
    } else {
        return self->QOpenGLWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLWindow_QBaseEventFilter(QOpenGLWindow* self, QObject* watched, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_EventFilter_IsBase(true);
        return vqopenglwindow->eventFilter(watched, event);
    } else {
        return self->QOpenGLWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnEventFilter(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_TimerEvent(QOpenGLWindow* self, QTimerEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->timerEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseTimerEvent(QOpenGLWindow* self, QTimerEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_TimerEvent_IsBase(true);
        vqopenglwindow->timerEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnTimerEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_ChildEvent(QOpenGLWindow* self, QChildEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->childEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseChildEvent(QOpenGLWindow* self, QChildEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ChildEvent_IsBase(true);
        vqopenglwindow->childEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnChildEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_CustomEvent(QOpenGLWindow* self, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->customEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseCustomEvent(QOpenGLWindow* self, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_CustomEvent_IsBase(true);
        vqopenglwindow->customEvent(event);
    } else {
        ((VirtualQOpenGLWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnCustomEvent(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_ConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ConnectNotify_IsBase(true);
        vqopenglwindow->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnConnectNotify(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_DisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseDisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_DisconnectNotify_IsBase(true);
        vqopenglwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnDisconnectNotify(QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWindow_DevType(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->devType();
    } else {
        return self->QOpenGLWindow::devType();
    }
}

// Base class handler implementation
int QOpenGLWindow_QBaseDevType(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_DevType_IsBase(true);
        return vqopenglwindow->devType();
    } else {
        return self->QOpenGLWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnDevType(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_DevType_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLWindow_InitPainter(const QOpenGLWindow* self, QPainter* painter) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->initPainter(painter);
    } else {
        ((VirtualQOpenGLWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QOpenGLWindow_QBaseInitPainter(const QOpenGLWindow* self, QPainter* painter) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_InitPainter_IsBase(true);
        vqopenglwindow->initPainter(painter);
    } else {
        ((VirtualQOpenGLWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnInitPainter(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_InitPainter_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QOpenGLWindow_SharedPainter(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->sharedPainter();
    } else {
        return ((VirtualQOpenGLWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QOpenGLWindow_QBaseSharedPainter(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_SharedPainter_IsBase(true);
        return vqopenglwindow->sharedPainter();
    } else {
        return ((VirtualQOpenGLWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSharedPainter(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_SharedPainter_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void* QOpenGLWindow_ResolveInterface(const QOpenGLWindow* self, const char* name, int revision) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQOpenGLWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QOpenGLWindow_QBaseResolveInterface(const QOpenGLWindow* self, const char* name, int revision) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ResolveInterface_IsBase(true);
        return vqopenglwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQOpenGLWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResolveInterface(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_ResolveInterface_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLWindow_Sender(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->sender();
    } else {
        return ((VirtualQOpenGLWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLWindow_QBaseSender(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Sender_IsBase(true);
        return vqopenglwindow->sender();
    } else {
        return ((VirtualQOpenGLWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSender(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Sender_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWindow_SenderSignalIndex(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLWindow_QBaseSenderSignalIndex(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_SenderSignalIndex_IsBase(true);
        return vqopenglwindow->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSenderSignalIndex(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLWindow_Receivers(const QOpenGLWindow* self, const char* signal) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->receivers(signal);
    } else {
        return ((VirtualQOpenGLWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLWindow_QBaseReceivers(const QOpenGLWindow* self, const char* signal) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Receivers_IsBase(true);
        return vqopenglwindow->receivers(signal);
    } else {
        return ((VirtualQOpenGLWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnReceivers(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_Receivers_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLWindow_IsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLWindow_QBaseIsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_IsSignalConnected_IsBase(true);
        return vqopenglwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnIsSignalConnected(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QOpenGLWindow_GetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        return vqopenglwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQOpenGLWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QOpenGLWindow_QBaseGetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_GetDecodedMetricF_IsBase(true);
        return vqopenglwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQOpenGLWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnGetDecodedMetricF(const QOpenGLWindow* self, intptr_t slot) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
        vqopenglwindow->setQOpenGLWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_GetDecodedMetricF_Callback>(slot));
    }
}

void QOpenGLWindow_Delete(QOpenGLWindow* self) {
    delete self;
}
