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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLWindow_Tr(const char* s) {
    auto _ret = QOpenGLWindow::tr(s);
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
    QOpenGLWindow::connect(self,
                           static_cast<void (QOpenGLWindow::*)()>(&QOpenGLWindow::frameSwapped),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QOpenGLWindow_InitializeGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->initializeGL();
    }
}

void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->resizeGL(static_cast<int>(w), static_cast<int>(h));
    }
}

void QOpenGLWindow_PaintGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->paintGL();
    }
}

void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->paintUnderGL();
    }
}

void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->paintOverGL();
    }
}

void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->paintEvent(event);
    }
}

void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->resizeEvent(event);
    }
}

int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric) {
    auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        return vqopenglwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    qFatal("Error: Protected method QOpenGLWindow::metric called without a directly constructed type");
}

QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1) {
    auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        return vqopenglwindow->redirected(param1);
    }
    qFatal("Error: Protected method QOpenGLWindow::redirected called without a directly constructed type");
}

libqt_string QOpenGLWindow_Tr2(const char* s, const char* c) {
    auto _ret = QOpenGLWindow::tr(s, c);
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
    auto _ret = QOpenGLWindow::tr(s, c, static_cast<int>(n));
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
QMetaObject* QOpenGLWindow_SuperMetaObject(const QOpenGLWindow* self) {
    return (QMetaObject*)self->QOpenGLWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetaObject(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_metaobject_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOpenGLWindow_SuperMetacast(QOpenGLWindow* self, const char* param1) {
    return self->QOpenGLWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetacast(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_metacast_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOpenGLWindow_SuperMetacall(QOpenGLWindow* self, int param1, int param2, void** param3) {
    return self->QOpenGLWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetacall(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_metacall_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperInitializeGL(QOpenGLWindow* self) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::initializeGL();
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::initializeGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnInitializeGL(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_initializegl_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_InitializeGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperResizeGL(QOpenGLWindow* self, int w, int h) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::resizeGL(static_cast<int>(w), static_cast<int>(h));
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::resizeGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResizeGL(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_resizegl_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResizeGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperPaintGL(QOpenGLWindow* self) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::paintGL();
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::paintGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintGL(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_paintgl_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperPaintUnderGL(QOpenGLWindow* self) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::paintUnderGL();
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::paintUnderGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintUnderGL(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_paintundergl_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintUnderGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperPaintOverGL(QOpenGLWindow* self) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::paintOverGL();
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::paintOverGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintOverGL(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_paintovergl_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintOverGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperPaintEvent(QOpenGLWindow* self, QPaintEvent* event) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_paintevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWindow_SuperResizeEvent(QOpenGLWindow* self, QResizeEvent* event) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResizeEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_resizeevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
int QOpenGLWindow_SuperMetric(const QOpenGLWindow* self, int metric) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->QOpenGLWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetric(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_metric_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Metric_Callback>(slot);
}

// Base class handler implementation
QPaintDevice* QOpenGLWindow_SuperRedirected(const QOpenGLWindow* self, QPoint* param1) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->QOpenGLWindow::redirected(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnRedirected(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_redirected_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Redirected_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_ExposeEvent(QOpenGLWindow* self, QExposeEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->exposeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::exposeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperExposeEvent(QOpenGLWindow* self, QExposeEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::exposeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::exposeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnExposeEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_exposeevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ExposeEvent_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWindow_Event(QOpenGLWindow* self, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        return vqopenglwindow->event(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QOpenGLWindow_SuperEvent(QOpenGLWindow* self, QEvent* event) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        return vqopenglwindow->QOpenGLWindow::event(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_event_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Event_Callback>(slot);
}

// Derived class handler implementation
int QOpenGLWindow_SurfaceType(const QOpenGLWindow* self) {
    return static_cast<int>(self->surfaceType());
}

// Base class handler implementation
int QOpenGLWindow_SuperSurfaceType(const QOpenGLWindow* self) {
    return static_cast<int>(self->QOpenGLWindow::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSurfaceType(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_surfacetype_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_SurfaceType_Callback>(slot);
}

// Derived class handler implementation
QSurfaceFormat* QOpenGLWindow_Format(const QOpenGLWindow* self) {
    return new QSurfaceFormat(self->format());
}

// Base class handler implementation
QSurfaceFormat* QOpenGLWindow_SuperFormat(const QOpenGLWindow* self) {
    return new QSurfaceFormat(self->QOpenGLWindow::format());
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFormat(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_format_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Format_Callback>(slot);
}

// Derived class handler implementation
QSize* QOpenGLWindow_Size(const QOpenGLWindow* self) {
    return new QSize(self->size());
}

// Base class handler implementation
QSize* QOpenGLWindow_SuperSize(const QOpenGLWindow* self) {
    return new QSize(self->QOpenGLWindow::size());
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSize(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_size_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Size_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QOpenGLWindow_AccessibleRoot(const QOpenGLWindow* self) {
    return self->accessibleRoot();
}

// Base class handler implementation
QAccessibleInterface* QOpenGLWindow_SuperAccessibleRoot(const QOpenGLWindow* self) {
    return self->QOpenGLWindow::accessibleRoot();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnAccessibleRoot(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_accessibleroot_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_AccessibleRoot_Callback>(slot);
}

// Derived class handler implementation
QObject* QOpenGLWindow_FocusObject(const QOpenGLWindow* self) {
    return self->focusObject();
}

// Base class handler implementation
QObject* QOpenGLWindow_SuperFocusObject(const QOpenGLWindow* self) {
    return self->QOpenGLWindow::focusObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFocusObject(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_focusobject_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_FocusObject_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_MoveEvent(QOpenGLWindow* self, QMoveEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->moveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperMoveEvent(QOpenGLWindow* self, QMoveEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMoveEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_moveevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_FocusInEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperFocusInEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFocusInEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_focusinevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_FocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperFocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnFocusOutEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_focusoutevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_ShowEvent(QOpenGLWindow* self, QShowEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperShowEvent(QOpenGLWindow* self, QShowEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnShowEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_showevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_HideEvent(QOpenGLWindow* self, QHideEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperHideEvent(QOpenGLWindow* self, QHideEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnHideEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_hideevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_CloseEvent(QOpenGLWindow* self, QCloseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperCloseEvent(QOpenGLWindow* self, QCloseEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnCloseEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_closeevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_KeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperKeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnKeyPressEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_keypressevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_KeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperKeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnKeyReleaseEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_keyreleaseevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_MousePressEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperMousePressEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMousePressEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_mousepressevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_MouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperMouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMouseReleaseEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_mousereleaseevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_MouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperMouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMouseDoubleClickEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_MouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperMouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMouseMoveEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_mousemoveevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_WheelEvent(QOpenGLWindow* self, QWheelEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperWheelEvent(QOpenGLWindow* self, QWheelEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnWheelEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_wheelevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_TouchEvent(QOpenGLWindow* self, QTouchEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->touchEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperTouchEvent(QOpenGLWindow* self, QTouchEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::touchEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnTouchEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_touchevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_TabletEvent(QOpenGLWindow* self, QTabletEvent* param1) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->tabletEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperTabletEvent(QOpenGLWindow* self, QTabletEvent* param1) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::tabletEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnTabletEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_tabletevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWindow_NativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        return vqopenglwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QOpenGLWindow_SuperNativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        return vqopenglwindow->QOpenGLWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnNativeEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_nativeevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWindow_EventFilter(QOpenGLWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOpenGLWindow_SuperEventFilter(QOpenGLWindow* self, QObject* watched, QEvent* event) {
    return self->QOpenGLWindow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnEventFilter(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_eventfilter_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_TimerEvent(QOpenGLWindow* self, QTimerEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperTimerEvent(QOpenGLWindow* self, QTimerEvent* event) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnTimerEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_timerevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_ChildEvent(QOpenGLWindow* self, QChildEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperChildEvent(QOpenGLWindow* self, QChildEvent* event) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnChildEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_childevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_CustomEvent(QOpenGLWindow* self, QEvent* event) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperCustomEvent(QOpenGLWindow* self, QEvent* event) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnCustomEvent(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_customevent_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_ConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnConnectNotify(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_connectnotify_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_DisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
    if (vqopenglwindow) {
        vqopenglwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperDisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self)) {
        vqopenglwindow->QOpenGLWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnDisconnectNotify(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self))
        vqopenglwindow->qopenglwindow_disconnectnotify_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
int QOpenGLWindow_DevType(const QOpenGLWindow* self) {
    return self->devType();
}

// Base class handler implementation
int QOpenGLWindow_SuperDevType(const QOpenGLWindow* self) {
    return self->QOpenGLWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnDevType(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_devtype_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWindow_InitPainter(const QOpenGLWindow* self, QPainter* painter) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow) {
        vqopenglwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWindow_SuperInitPainter(const QOpenGLWindow* self, QPainter* painter) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        vqopenglwindow->QOpenGLWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnInitPainter(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_initpainter_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPainter* QOpenGLWindow_SharedPainter(const QOpenGLWindow* self) {
    auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self));
    if (vqopenglwindow) {
        return vqopenglwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QOpenGLWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QOpenGLWindow_SuperSharedPainter(const QOpenGLWindow* self) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->QOpenGLWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QOpenGLWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnSharedPainter(QOpenGLWindow* self, intptr_t slot) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self)))
        vqopenglwindow->qopenglwindow_sharedpainter_callback = reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
void* QOpenGLWindow_ResolveInterface(const QOpenGLWindow* self, const char* name, int revision) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->VirtualQOpenGLWindow::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QOpenGLWindow::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QOpenGLWindow_Sender(const QOpenGLWindow* self) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->VirtualQOpenGLWindow::sender();
    } else
        qFatal("Error: Protected method QOpenGLWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLWindow_SenderSignalIndex(const QOpenGLWindow* self) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->VirtualQOpenGLWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOpenGLWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLWindow_Receivers(const QOpenGLWindow* self, const char* signal) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->VirtualQOpenGLWindow::receivers(signal);
    } else
        qFatal("Error: Protected method QOpenGLWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLWindow_IsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->VirtualQOpenGLWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOpenGLWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QOpenGLWindow_GetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB) {
    if (auto* vqopenglwindow = const_cast<VirtualQOpenGLWindow*>(dynamic_cast<const VirtualQOpenGLWindow*>(self))) {
        return vqopenglwindow->VirtualQOpenGLWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QOpenGLWindow::getDecodedMetricF called without a directly constructed type");
}

void QOpenGLWindow_Delete(QOpenGLWindow* self) {
    delete self;
}
