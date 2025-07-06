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
#include <QByteArray>
#include <cstring>
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
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRasterWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRasterWindow_OnMetacall(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Metacall_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRasterWindow_QBaseMetacall(QRasterWindow* self, int param1, int param2, void** param3) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Metacall_IsBase(true);
        return vqrasterwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRasterWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRasterWindow_Tr(const char* s) {
    QString _ret = QRasterWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRasterWindow_Tr2(const char* s, const char* c) {
    QString _ret = QRasterWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QRasterWindow_Metric(const QRasterWindow* self, int metric) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQRasterWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Base class handler implementation
int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Metric_IsBase(true);
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQRasterWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetric(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Metric_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->redirected(param1);
    } else {
        return ((VirtualQRasterWindow*)self)->redirected(param1);
    }
}

// Base class handler implementation
QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Redirected_IsBase(true);
        return vqrasterwindow->redirected(param1);
    } else {
        return ((VirtualQRasterWindow*)self)->redirected(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnRedirected(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Redirected_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->resizeEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ResizeEvent_IsBase(true);
        vqrasterwindow->resizeEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnResizeEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ExposeEvent(QRasterWindow* self, QExposeEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->exposeEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->exposeEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseExposeEvent(QRasterWindow* self, QExposeEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ExposeEvent_IsBase(true);
        vqrasterwindow->exposeEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->exposeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnExposeEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ExposeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ExposeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_PaintEvent(QRasterWindow* self, QPaintEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->paintEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBasePaintEvent(QRasterWindow* self, QPaintEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_PaintEvent_IsBase(true);
        vqrasterwindow->paintEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnPaintEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_PaintEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_Event(QRasterWindow* self, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->event(event);
    } else {
        return ((VirtualQRasterWindow*)self)->event(event);
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseEvent(QRasterWindow* self, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Event_IsBase(true);
        return vqrasterwindow->event(event);
    } else {
        return ((VirtualQRasterWindow*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Event_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_SurfaceType(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return static_cast<int>(vqrasterwindow->surfaceType());
    } else {
        return static_cast<int>(self->QRasterWindow::surfaceType());
    }
}

// Base class handler implementation
int QRasterWindow_QBaseSurfaceType(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_SurfaceType_IsBase(true);
        return static_cast<int>(vqrasterwindow->surfaceType());
    } else {
        return static_cast<int>(self->QRasterWindow::surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSurfaceType(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_SurfaceType_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SurfaceType_Callback>(slot));
    }
}

// Derived class handler implementation
QSurfaceFormat* QRasterWindow_Format(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return new QSurfaceFormat(vqrasterwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQRasterWindow*)self)->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QRasterWindow_QBaseFormat(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Format_IsBase(true);
        return new QSurfaceFormat(vqrasterwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQRasterWindow*)self)->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFormat(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Format_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRasterWindow_Size(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return new QSize(vqrasterwindow->size());
    } else {
        return new QSize(((VirtualQRasterWindow*)self)->size());
    }
}

// Base class handler implementation
QSize* QRasterWindow_QBaseSize(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Size_IsBase(true);
        return new QSize(vqrasterwindow->size());
    } else {
        return new QSize(((VirtualQRasterWindow*)self)->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSize(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Size_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Size_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QRasterWindow_AccessibleRoot(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->accessibleRoot();
    } else {
        return self->QRasterWindow::accessibleRoot();
    }
}

// Base class handler implementation
QAccessibleInterface* QRasterWindow_QBaseAccessibleRoot(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_AccessibleRoot_IsBase(true);
        return vqrasterwindow->accessibleRoot();
    } else {
        return self->QRasterWindow::accessibleRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnAccessibleRoot(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_AccessibleRoot_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_AccessibleRoot_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRasterWindow_FocusObject(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->focusObject();
    } else {
        return self->QRasterWindow::focusObject();
    }
}

// Base class handler implementation
QObject* QRasterWindow_QBaseFocusObject(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_FocusObject_IsBase(true);
        return vqrasterwindow->focusObject();
    } else {
        return self->QRasterWindow::focusObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusObject(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_FocusObject_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MoveEvent(QRasterWindow* self, QMoveEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->moveEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->moveEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMoveEvent(QRasterWindow* self, QMoveEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MoveEvent_IsBase(true);
        vqrasterwindow->moveEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMoveEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MoveEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_FocusInEvent(QRasterWindow* self, QFocusEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->focusInEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseFocusInEvent(QRasterWindow* self, QFocusEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_FocusInEvent_IsBase(true);
        vqrasterwindow->focusInEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusInEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_FocusOutEvent(QRasterWindow* self, QFocusEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->focusOutEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseFocusOutEvent(QRasterWindow* self, QFocusEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_FocusOutEvent_IsBase(true);
        vqrasterwindow->focusOutEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusOutEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ShowEvent(QRasterWindow* self, QShowEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->showEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseShowEvent(QRasterWindow* self, QShowEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ShowEvent_IsBase(true);
        vqrasterwindow->showEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnShowEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ShowEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_HideEvent(QRasterWindow* self, QHideEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->hideEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseHideEvent(QRasterWindow* self, QHideEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_HideEvent_IsBase(true);
        vqrasterwindow->hideEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnHideEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_HideEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_CloseEvent(QRasterWindow* self, QCloseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->closeEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseCloseEvent(QRasterWindow* self, QCloseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_CloseEvent_IsBase(true);
        vqrasterwindow->closeEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnCloseEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_CloseEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_KeyPressEvent(QRasterWindow* self, QKeyEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->keyPressEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseKeyPressEvent(QRasterWindow* self, QKeyEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_KeyPressEvent_IsBase(true);
        vqrasterwindow->keyPressEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnKeyPressEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_KeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseKeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_KeyReleaseEvent_IsBase(true);
        vqrasterwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnKeyReleaseEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MousePressEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->mousePressEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMousePressEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MousePressEvent_IsBase(true);
        vqrasterwindow->mousePressEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMousePressEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MouseReleaseEvent_IsBase(true);
        vqrasterwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseReleaseEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MouseDoubleClickEvent_IsBase(true);
        vqrasterwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseDoubleClickEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MouseMoveEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMouseMoveEvent(QRasterWindow* self, QMouseEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MouseMoveEvent_IsBase(true);
        vqrasterwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseMoveEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_WheelEvent(QRasterWindow* self, QWheelEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->wheelEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseWheelEvent(QRasterWindow* self, QWheelEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_WheelEvent_IsBase(true);
        vqrasterwindow->wheelEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnWheelEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_WheelEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_TouchEvent(QRasterWindow* self, QTouchEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->touchEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->touchEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseTouchEvent(QRasterWindow* self, QTouchEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_TouchEvent_IsBase(true);
        vqrasterwindow->touchEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->touchEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTouchEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_TouchEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TouchEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_TabletEvent(QRasterWindow* self, QTabletEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->tabletEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->tabletEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseTabletEvent(QRasterWindow* self, QTabletEvent* param1) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_TabletEvent_IsBase(true);
        vqrasterwindow->tabletEvent(param1);
    } else {
        ((VirtualQRasterWindow*)self)->tabletEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTabletEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_TabletEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_NativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQRasterWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseNativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_NativeEvent_IsBase(true);
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQRasterWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnNativeEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_NativeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_EventFilter(QRasterWindow* self, QObject* watched, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->eventFilter(watched, event);
    } else {
        return self->QRasterWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseEventFilter(QRasterWindow* self, QObject* watched, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_EventFilter_IsBase(true);
        return vqrasterwindow->eventFilter(watched, event);
    } else {
        return self->QRasterWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnEventFilter(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_EventFilter_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_TimerEvent(QRasterWindow* self, QTimerEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->timerEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseTimerEvent(QRasterWindow* self, QTimerEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_TimerEvent_IsBase(true);
        vqrasterwindow->timerEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTimerEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_TimerEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ChildEvent(QRasterWindow* self, QChildEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->childEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseChildEvent(QRasterWindow* self, QChildEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ChildEvent_IsBase(true);
        vqrasterwindow->childEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnChildEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ChildEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_CustomEvent(QRasterWindow* self, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->customEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseCustomEvent(QRasterWindow* self, QEvent* event) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_CustomEvent_IsBase(true);
        vqrasterwindow->customEvent(event);
    } else {
        ((VirtualQRasterWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnCustomEvent(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_CustomEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ConnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->connectNotify(*signal);
    } else {
        ((VirtualQRasterWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseConnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ConnectNotify_IsBase(true);
        vqrasterwindow->connectNotify(*signal);
    } else {
        ((VirtualQRasterWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnConnectNotify(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_DisconnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQRasterWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseDisconnectNotify(QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_DisconnectNotify_IsBase(true);
        vqrasterwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQRasterWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnDisconnectNotify(QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_DevType(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->devType();
    } else {
        return self->QRasterWindow::devType();
    }
}

// Base class handler implementation
int QRasterWindow_QBaseDevType(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_DevType_IsBase(true);
        return vqrasterwindow->devType();
    } else {
        return self->QRasterWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnDevType(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_DevType_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_InitPainter(const QRasterWindow* self, QPainter* painter) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->initPainter(painter);
    } else {
        ((VirtualQRasterWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseInitPainter(const QRasterWindow* self, QPainter* painter) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_InitPainter_IsBase(true);
        vqrasterwindow->initPainter(painter);
    } else {
        ((VirtualQRasterWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnInitPainter(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_InitPainter_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QRasterWindow_SharedPainter(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->sharedPainter();
    } else {
        return ((VirtualQRasterWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QRasterWindow_QBaseSharedPainter(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_SharedPainter_IsBase(true);
        return vqrasterwindow->sharedPainter();
    } else {
        return ((VirtualQRasterWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSharedPainter(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_SharedPainter_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void* QRasterWindow_ResolveInterface(const QRasterWindow* self, const char* name, int revision) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQRasterWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QRasterWindow_QBaseResolveInterface(const QRasterWindow* self, const char* name, int revision) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ResolveInterface_IsBase(true);
        return vqrasterwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQRasterWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnResolveInterface(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_ResolveInterface_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRasterWindow_Sender(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->sender();
    } else {
        return ((VirtualQRasterWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* QRasterWindow_QBaseSender(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Sender_IsBase(true);
        return vqrasterwindow->sender();
    } else {
        return ((VirtualQRasterWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSender(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Sender_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_SenderSignalIndex(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->senderSignalIndex();
    } else {
        return ((VirtualQRasterWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QRasterWindow_QBaseSenderSignalIndex(const QRasterWindow* self) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_SenderSignalIndex_IsBase(true);
        return vqrasterwindow->senderSignalIndex();
    } else {
        return ((VirtualQRasterWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSenderSignalIndex(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_Receivers(const QRasterWindow* self, const char* signal) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->receivers(signal);
    } else {
        return ((VirtualQRasterWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QRasterWindow_QBaseReceivers(const QRasterWindow* self, const char* signal) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Receivers_IsBase(true);
        return vqrasterwindow->receivers(signal);
    } else {
        return ((VirtualQRasterWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnReceivers(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_Receivers_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_IsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQRasterWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseIsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_IsSignalConnected_IsBase(true);
        return vqrasterwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQRasterWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnIsSignalConnected(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QRasterWindow_GetDecodedMetricF(const QRasterWindow* self, int metricA, int metricB) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        return vqrasterwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQRasterWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QRasterWindow_QBaseGetDecodedMetricF(const QRasterWindow* self, int metricA, int metricB) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_GetDecodedMetricF_IsBase(true);
        return vqrasterwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQRasterWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnGetDecodedMetricF(const QRasterWindow* self, intptr_t slot) {
    auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self));
    if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
        vqrasterwindow->setQRasterWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_GetDecodedMetricF_Callback>(slot));
    }
}

void QRasterWindow_Delete(QRasterWindow* self) {
    delete self;
}
