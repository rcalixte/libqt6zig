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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLWidget_Tr(const char* s) {
    auto _ret = QOpenGLWidget::tr(s);
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
    QOpenGLWidget::connect(self,
                           static_cast<void (QOpenGLWidget::*)()>(&QOpenGLWidget::aboutToCompose),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QOpenGLWidget_FrameSwapped(QOpenGLWidget* self) {
    self->frameSwapped();
}

void QOpenGLWidget_Connect_FrameSwapped(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self,
                           static_cast<void (QOpenGLWidget::*)()>(&QOpenGLWidget::frameSwapped),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QOpenGLWidget_AboutToResize(QOpenGLWidget* self) {
    self->aboutToResize();
}

void QOpenGLWidget_Connect_AboutToResize(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self,
                           static_cast<void (QOpenGLWidget::*)()>(&QOpenGLWidget::aboutToResize),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QOpenGLWidget_Resized(QOpenGLWidget* self) {
    self->resized();
}

void QOpenGLWidget_Connect_Resized(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self,
                           static_cast<void (QOpenGLWidget::*)()>(&QOpenGLWidget::resized),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QOpenGLWidget_InitializeGL(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->initializeGL();
    }
}

void QOpenGLWidget_ResizeGL(QOpenGLWidget* self, int w, int h) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->resizeGL(static_cast<int>(w), static_cast<int>(h));
    }
}

void QOpenGLWidget_PaintGL(QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->paintGL();
    }
}

void QOpenGLWidget_PaintEvent(QOpenGLWidget* self, QPaintEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->paintEvent(e);
    }
}

void QOpenGLWidget_ResizeEvent(QOpenGLWidget* self, QResizeEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->resizeEvent(e);
    }
}

bool QOpenGLWidget_Event(QOpenGLWidget* self, QEvent* e) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        return vqopenglwidget->event(e);
    }
    qFatal("Error: Protected method QOpenGLWidget::event called without a directly constructed type");
}

int QOpenGLWidget_Metric(const QOpenGLWidget* self, int metric) {
    auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        return vqopenglwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    qFatal("Error: Protected method QOpenGLWidget::metric called without a directly constructed type");
}

QPaintDevice* QOpenGLWidget_Redirected(const QOpenGLWidget* self, QPoint* p) {
    auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        return vqopenglwidget->redirected(p);
    }
    qFatal("Error: Protected method QOpenGLWidget::redirected called without a directly constructed type");
}

QPaintEngine* QOpenGLWidget_PaintEngine(const QOpenGLWidget* self) {
    auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        return vqopenglwidget->paintEngine();
    }
    qFatal("Error: Protected method QOpenGLWidget::paintEngine called without a directly constructed type");
}

libqt_string QOpenGLWidget_Tr2(const char* s, const char* c) {
    auto _ret = QOpenGLWidget::tr(s, c);
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
    auto _ret = QOpenGLWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QOpenGLWidget_SuperMetaObject(const QOpenGLWidget* self) {
    return (QMetaObject*)self->QOpenGLWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetaObject(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_metaobject_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOpenGLWidget_SuperMetacast(QOpenGLWidget* self, const char* param1) {
    return self->QOpenGLWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetacast(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_metacast_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOpenGLWidget_SuperMetacall(QOpenGLWidget* self, int param1, int param2, void** param3) {
    return self->QOpenGLWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetacall(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_metacall_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWidget_SuperInitializeGL(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::initializeGL();
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::initializeGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInitializeGL(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_initializegl_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InitializeGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWidget_SuperResizeGL(QOpenGLWidget* self, int w, int h) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::resizeGL(static_cast<int>(w), static_cast<int>(h));
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::resizeGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnResizeGL(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_resizegl_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ResizeGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWidget_SuperPaintGL(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::paintGL();
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::paintGL called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintGL(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_paintgl_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintGL_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWidget_SuperPaintEvent(QOpenGLWidget* self, QPaintEvent* e) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_paintevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QOpenGLWidget_SuperResizeEvent(QOpenGLWidget* self, QResizeEvent* e) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnResizeEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_resizeevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
bool QOpenGLWidget_SuperEvent(QOpenGLWidget* self, QEvent* e) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        return vqopenglwidget->QOpenGLWidget::event(e);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_event_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Event_Callback>(slot);
}

// Base class handler implementation
int QOpenGLWidget_SuperMetric(const QOpenGLWidget* self, int metric) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->QOpenGLWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetric(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_metric_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Metric_Callback>(slot);
}

// Base class handler implementation
QPaintDevice* QOpenGLWidget_SuperRedirected(const QOpenGLWidget* self, QPoint* p) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->QOpenGLWidget::redirected(p);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnRedirected(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_redirected_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Redirected_Callback>(slot);
}

// Base class handler implementation
QPaintEngine* QOpenGLWidget_SuperPaintEngine(const QOpenGLWidget* self) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->QOpenGLWidget::paintEngine();
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::paintEngine called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintEngine(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_paintengine_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
int QOpenGLWidget_DevType(const QOpenGLWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QOpenGLWidget_SuperDevType(const QOpenGLWidget* self) {
    return self->QOpenGLWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDevType(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_devtype_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_SetVisible(QOpenGLWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QOpenGLWidget_SuperSetVisible(QOpenGLWidget* self, bool visible) {
    self->QOpenGLWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSetVisible(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_setvisible_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QOpenGLWidget_SizeHint(const QOpenGLWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QOpenGLWidget_SuperSizeHint(const QOpenGLWidget* self) {
    return new QSize(self->QOpenGLWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSizeHint(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_sizehint_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QOpenGLWidget_MinimumSizeHint(const QOpenGLWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QOpenGLWidget_SuperMinimumSizeHint(const QOpenGLWidget* self) {
    return new QSize(self->QOpenGLWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMinimumSizeHint(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_minimumsizehint_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QOpenGLWidget_HeightForWidth(const QOpenGLWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QOpenGLWidget_SuperHeightForWidth(const QOpenGLWidget* self, int param1) {
    return self->QOpenGLWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnHeightForWidth(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_heightforwidth_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWidget_HasHeightForWidth(const QOpenGLWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QOpenGLWidget_SuperHasHeightForWidth(const QOpenGLWidget* self) {
    return self->QOpenGLWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnHasHeightForWidth(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_MousePressEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperMousePressEvent(QOpenGLWidget* self, QMouseEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMousePressEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_mousepressevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_MouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperMouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMouseReleaseEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_MouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperMouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMouseDoubleClickEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_MouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperMouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMouseMoveEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_mousemoveevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_WheelEvent(QOpenGLWidget* self, QWheelEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperWheelEvent(QOpenGLWidget* self, QWheelEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnWheelEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_wheelevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_KeyPressEvent(QOpenGLWidget* self, QKeyEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperKeyPressEvent(QOpenGLWidget* self, QKeyEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnKeyPressEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_keypressevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_KeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperKeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnKeyReleaseEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_FocusInEvent(QOpenGLWidget* self, QFocusEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperFocusInEvent(QOpenGLWidget* self, QFocusEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusInEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_focusinevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_FocusOutEvent(QOpenGLWidget* self, QFocusEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperFocusOutEvent(QOpenGLWidget* self, QFocusEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusOutEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_focusoutevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_EnterEvent(QOpenGLWidget* self, QEnterEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperEnterEvent(QOpenGLWidget* self, QEnterEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEnterEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_enterevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_LeaveEvent(QOpenGLWidget* self, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperLeaveEvent(QOpenGLWidget* self, QEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnLeaveEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_leaveevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_MoveEvent(QOpenGLWidget* self, QMoveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperMoveEvent(QOpenGLWidget* self, QMoveEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMoveEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_moveevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_CloseEvent(QOpenGLWidget* self, QCloseEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperCloseEvent(QOpenGLWidget* self, QCloseEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnCloseEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_closeevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_ContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnContextMenuEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_contextmenuevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_TabletEvent(QOpenGLWidget* self, QTabletEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperTabletEvent(QOpenGLWidget* self, QTabletEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnTabletEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_tabletevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_ActionEvent(QOpenGLWidget* self, QActionEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperActionEvent(QOpenGLWidget* self, QActionEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnActionEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_actionevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_DragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperDragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDragEnterEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_dragenterevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_DragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperDragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDragMoveEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_dragmoveevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_DragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperDragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDragLeaveEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_dragleaveevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_DropEvent(QOpenGLWidget* self, QDropEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperDropEvent(QOpenGLWidget* self, QDropEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDropEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_dropevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_ShowEvent(QOpenGLWidget* self, QShowEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperShowEvent(QOpenGLWidget* self, QShowEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnShowEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_showevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_HideEvent(QOpenGLWidget* self, QHideEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperHideEvent(QOpenGLWidget* self, QHideEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnHideEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_hideevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWidget_NativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        return vqopenglwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QOpenGLWidget_SuperNativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        return vqopenglwidget->QOpenGLWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnNativeEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_nativeevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_ChangeEvent(QOpenGLWidget* self, QEvent* param1) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperChangeEvent(QOpenGLWidget* self, QEvent* param1) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnChangeEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_changeevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_InitPainter(const QOpenGLWidget* self, QPainter* painter) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget) {
        vqopenglwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperInitPainter(const QOpenGLWidget* self, QPainter* painter) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        vqopenglwidget->QOpenGLWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInitPainter(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_initpainter_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPainter* QOpenGLWidget_SharedPainter(const QOpenGLWidget* self) {
    auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self));
    if (vqopenglwidget) {
        return vqopenglwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QOpenGLWidget_SuperSharedPainter(const QOpenGLWidget* self) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->QOpenGLWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnSharedPainter(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_sharedpainter_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_InputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperInputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInputMethodEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_inputmethodevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QOpenGLWidget_InputMethodQuery(const QOpenGLWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QOpenGLWidget_SuperInputMethodQuery(const QOpenGLWidget* self, int param1) {
    return new QVariant(self->QOpenGLWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInputMethodQuery(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self)))
        vqopenglwidget->qopenglwidget_inputmethodquery_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWidget_FocusNextPrevChild(QOpenGLWidget* self, bool next) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        return vqopenglwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QOpenGLWidget_SuperFocusNextPrevChild(QOpenGLWidget* self, bool next) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        return vqopenglwidget->QOpenGLWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnFocusNextPrevChild(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLWidget_EventFilter(QOpenGLWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOpenGLWidget_SuperEventFilter(QOpenGLWidget* self, QObject* watched, QEvent* event) {
    return self->QOpenGLWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEventFilter(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_eventfilter_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_TimerEvent(QOpenGLWidget* self, QTimerEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperTimerEvent(QOpenGLWidget* self, QTimerEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnTimerEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_timerevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_ChildEvent(QOpenGLWidget* self, QChildEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperChildEvent(QOpenGLWidget* self, QChildEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnChildEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_childevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_CustomEvent(QOpenGLWidget* self, QEvent* event) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperCustomEvent(QOpenGLWidget* self, QEvent* event) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnCustomEvent(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_customevent_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_ConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnConnectNotify(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_connectnotify_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLWidget_DisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
    if (vqopenglwidget) {
        vqopenglwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLWidget_SuperDisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->QOpenGLWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnDisconnectNotify(QOpenGLWidget* self, intptr_t slot) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self))
        vqopenglwidget->qopenglwidget_disconnectnotify_callback = reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QOpenGLWidget_UpdateMicroFocus(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->VirtualQOpenGLWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QOpenGLWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QOpenGLWidget_Create(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->VirtualQOpenGLWidget::create();
    } else
        qFatal("Error: Protected method QOpenGLWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QOpenGLWidget_Destroy(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        vqopenglwidget->VirtualQOpenGLWidget::destroy();
    } else
        qFatal("Error: Protected method QOpenGLWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLWidget_FocusNextChild(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        return vqopenglwidget->VirtualQOpenGLWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QOpenGLWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLWidget_FocusPreviousChild(QOpenGLWidget* self) {
    if (auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self)) {
        return vqopenglwidget->VirtualQOpenGLWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QOpenGLWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QOpenGLWidget_Sender(const QOpenGLWidget* self) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->VirtualQOpenGLWidget::sender();
    } else
        qFatal("Error: Protected method QOpenGLWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLWidget_SenderSignalIndex(const QOpenGLWidget* self) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->VirtualQOpenGLWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOpenGLWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLWidget_Receivers(const QOpenGLWidget* self, const char* signal) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->VirtualQOpenGLWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QOpenGLWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLWidget_IsSignalConnected(const QOpenGLWidget* self, const QMetaMethod* signal) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->VirtualQOpenGLWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOpenGLWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QOpenGLWidget_GetDecodedMetricF(const QOpenGLWidget* self, int metricA, int metricB) {
    if (auto* vqopenglwidget = const_cast<VirtualQOpenGLWidget*>(dynamic_cast<const VirtualQOpenGLWidget*>(self))) {
        return vqopenglwidget->VirtualQOpenGLWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QOpenGLWidget::getDecodedMetricF called without a directly constructed type");
}

void QOpenGLWidget_Delete(QOpenGLWidget* self) {
    delete self;
}
