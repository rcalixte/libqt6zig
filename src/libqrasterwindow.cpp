#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRasterWindow>
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
#include <qrasterwindow.h>
#include "libqrasterwindow.h"
#include "libqrasterwindow.hxx"

QRasterWindow* QRasterWindow_new() {
    return new VirtualQRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
    return new VirtualQRasterWindow(parent);
}

QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRasterWindow_Metacall(QRasterWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QRasterWindow_Tr(const char* s) {
    auto _ret = QRasterWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QRasterWindow_Metric(const QRasterWindow* self, int metric) {
    auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    qFatal("Error: Protected method QRasterWindow::metric called without a directly constructed type");
}

QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1) {
    auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        return vqrasterwindow->redirected(param1);
    }
    qFatal("Error: Protected method QRasterWindow::redirected called without a directly constructed type");
}

void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->resizeEvent(event);
    }
}

libqt_string QRasterWindow_Tr2(const char* s, const char* c) {
    auto _ret = QRasterWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
    auto _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
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
QMetaObject* QRasterWindow_SuperMetaObject(const QRasterWindow* self) {
    return (QMetaObject*)self->QRasterWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetaObject(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_metaobject_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QRasterWindow_SuperMetacast(QRasterWindow* self, const char* param1) {
    return self->QRasterWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetacast(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_metacast_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int QRasterWindow_SuperMetacall(QRasterWindow* self, int param1, int param2, void** param3) {
    return self->QRasterWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetacall(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_metacall_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
int QRasterWindow_SuperMetric(const QRasterWindow* self, int metric) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->QRasterWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else
        qFatal("Error: Protected virtual method QRasterWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetric(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_metric_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metric_Callback>(slot);
}

// Base class handler implementation
QPaintDevice* QRasterWindow_SuperRedirected(const QRasterWindow* self, QPoint* param1) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->QRasterWindow::redirected(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnRedirected(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_redirected_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Redirected_Callback>(slot);
}

// Base class handler implementation
void QRasterWindow_SuperResizeEvent(QRasterWindow* self, QResizeEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnResizeEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_resizeevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_ExposeEvent(QRasterWindow* self, QExposeEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->exposeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::exposeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperExposeEvent(QRasterWindow* self, QExposeEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::exposeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::exposeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnExposeEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_exposeevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ExposeEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_PaintEvent(QRasterWindow* self, QPaintEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperPaintEvent(QRasterWindow* self, QPaintEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnPaintEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_paintevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
bool QRasterWindow_Event(QRasterWindow* self, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        return vqrasterwindow->event(event);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QRasterWindow_SuperEvent(QRasterWindow* self, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        return vqrasterwindow->QRasterWindow::event(event);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_event_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Event_Callback>(slot);
}

// Derived class handler implementation
int QRasterWindow_SurfaceType(const QRasterWindow* self) {
    return static_cast<int>(self->surfaceType());
}

// Base class handler implementation
int QRasterWindow_SuperSurfaceType(const QRasterWindow* self) {
    return static_cast<int>(self->QRasterWindow::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSurfaceType(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_surfacetype_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SurfaceType_Callback>(slot);
}

// Derived class handler implementation
QSurfaceFormat* QRasterWindow_Format(const QRasterWindow* self) {
    return new QSurfaceFormat(self->format());
}

// Base class handler implementation
QSurfaceFormat* QRasterWindow_SuperFormat(const QRasterWindow* self) {
    return new QSurfaceFormat(self->QRasterWindow::format());
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFormat(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_format_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Format_Callback>(slot);
}

// Derived class handler implementation
QSize* QRasterWindow_Size(const QRasterWindow* self) {
    return new QSize(self->size());
}

// Base class handler implementation
QSize* QRasterWindow_SuperSize(const QRasterWindow* self) {
    return new QSize(self->QRasterWindow::size());
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSize(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_size_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Size_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QRasterWindow_AccessibleRoot(const QRasterWindow* self) {
    return self->accessibleRoot();
}

// Base class handler implementation
QAccessibleInterface* QRasterWindow_SuperAccessibleRoot(const QRasterWindow* self) {
    return self->QRasterWindow::accessibleRoot();
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnAccessibleRoot(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_accessibleroot_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_AccessibleRoot_Callback>(slot);
}

// Derived class handler implementation
QObject* QRasterWindow_FocusObject(const QRasterWindow* self) {
    return self->focusObject();
}

// Base class handler implementation
QObject* QRasterWindow_SuperFocusObject(const QRasterWindow* self) {
    return self->QRasterWindow::focusObject();
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusObject(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_focusobject_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusObject_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_MoveEvent(QRasterWindow* self, QMoveEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->moveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperMoveEvent(QRasterWindow* self, QMoveEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMoveEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_moveevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_FocusInEvent(QRasterWindow* self, QFocusEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperFocusInEvent(QRasterWindow* self, QFocusEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusInEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_focusinevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_FocusOutEvent(QRasterWindow* self, QFocusEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperFocusOutEvent(QRasterWindow* self, QFocusEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusOutEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_focusoutevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_ShowEvent(QRasterWindow* self, QShowEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperShowEvent(QRasterWindow* self, QShowEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnShowEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_showevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_HideEvent(QRasterWindow* self, QHideEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperHideEvent(QRasterWindow* self, QHideEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnHideEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_hideevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_CloseEvent(QRasterWindow* self, QCloseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperCloseEvent(QRasterWindow* self, QCloseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnCloseEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_closeevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_KeyPressEvent(QRasterWindow* self, QKeyEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperKeyPressEvent(QRasterWindow* self, QKeyEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnKeyPressEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_keypressevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_KeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperKeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnKeyReleaseEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_keyreleaseevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_MousePressEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperMousePressEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMousePressEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_mousepressevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_MouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperMouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseReleaseEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_mousereleaseevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_MouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperMouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseDoubleClickEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_MouseMoveEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperMouseMoveEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseMoveEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_mousemoveevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_WheelEvent(QRasterWindow* self, QWheelEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperWheelEvent(QRasterWindow* self, QWheelEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnWheelEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_wheelevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_TouchEvent(QRasterWindow* self, QTouchEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->touchEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperTouchEvent(QRasterWindow* self, QTouchEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::touchEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTouchEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_touchevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_TabletEvent(QRasterWindow* self, QTabletEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->tabletEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperTabletEvent(QRasterWindow* self, QTabletEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::tabletEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTabletEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_tabletevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
bool QRasterWindow_NativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QRasterWindow_SuperNativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        return vqrasterwindow->QRasterWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QRasterWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnNativeEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_nativeevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
bool QRasterWindow_EventFilter(QRasterWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QRasterWindow_SuperEventFilter(QRasterWindow* self, QObject* watched, QEvent* event) {
    return self->QRasterWindow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnEventFilter(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_eventfilter_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_TimerEvent(QRasterWindow* self, QTimerEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperTimerEvent(QRasterWindow* self, QTimerEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTimerEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_timerevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_ChildEvent(QRasterWindow* self, QChildEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperChildEvent(QRasterWindow* self, QChildEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnChildEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_childevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_CustomEvent(QRasterWindow* self, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperCustomEvent(QRasterWindow* self, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnCustomEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_customevent_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_ConnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperConnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnConnectNotify(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_connectnotify_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_DisconnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow) {
        vqrasterwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperDisconnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->QRasterWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnDisconnectNotify(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self))
        vqrasterwindow->qrasterwindow_disconnectnotify_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
int QRasterWindow_DevType(const QRasterWindow* self) {
    return self->devType();
}

// Base class handler implementation
int QRasterWindow_SuperDevType(const QRasterWindow* self) {
    return self->QRasterWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnDevType(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_devtype_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void QRasterWindow_InitPainter(const QRasterWindow* self, QPainter* painter) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow) {
        vqrasterwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QRasterWindow_SuperInitPainter(const QRasterWindow* self, QPainter* painter) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->QRasterWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QRasterWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnInitPainter(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_initpainter_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPainter* QRasterWindow_SharedPainter(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow) {
        return vqrasterwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QRasterWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QRasterWindow_SuperSharedPainter(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->QRasterWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QRasterWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSharedPainter(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self)))
        vqrasterwindow->qrasterwindow_sharedpainter_callback = reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
void* QRasterWindow_ResolveInterface(const QRasterWindow* self, const char* name, int revision) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->VirtualQRasterWindow::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QRasterWindow::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QRasterWindow_Sender(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->VirtualQRasterWindow::sender();
    } else
        qFatal("Error: Protected method QRasterWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QRasterWindow_SenderSignalIndex(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->VirtualQRasterWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method QRasterWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QRasterWindow_Receivers(const QRasterWindow* self, const char* signal) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->VirtualQRasterWindow::receivers(signal);
    } else
        qFatal("Error: Protected method QRasterWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRasterWindow_IsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->VirtualQRasterWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QRasterWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QRasterWindow_GetDecodedMetricF(const QRasterWindow* self, int metricA, int metricB) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->VirtualQRasterWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QRasterWindow::getDecodedMetricF called without a directly constructed type");
}

void QRasterWindow_Delete(QRasterWindow* self) {
    delete self;
}
