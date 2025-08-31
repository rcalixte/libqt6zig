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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <QSvgWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsvgwidget.h>
#include "libqsvgwidget.h"
#include "libqsvgwidget.hxx"

QSvgWidget* QSvgWidget_new(QWidget* parent) {
    return new VirtualQSvgWidget(parent);
}

QSvgWidget* QSvgWidget_new2() {
    return new VirtualQSvgWidget();
}

QSvgWidget* QSvgWidget_new3(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualQSvgWidget(file_QString);
}

QSvgWidget* QSvgWidget_new4(const libqt_string file, QWidget* parent) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualQSvgWidget(file_QString, parent);
}

QMetaObject* QSvgWidget_MetaObject(const QSvgWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSvgWidget_Metacast(QSvgWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSvgWidget_Metacall(QSvgWidget* self, int param1, int param2, void** param3) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSvgWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSvgWidget_Tr(const char* s) {
    QString _ret = QSvgWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSvgRenderer* QSvgWidget_Renderer(const QSvgWidget* self) {
    return self->renderer();
}

QSize* QSvgWidget_SizeHint(const QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<const VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQSvgWidget*)self)->sizeHint());
    }
}

uint32_t QSvgWidget_Options(const QSvgWidget* self) {
    return static_cast<uint32_t>(self->options());
}

void QSvgWidget_SetOptions(QSvgWidget* self, uint32_t options) {
    self->setOptions(static_cast<QtSvg::Options>(options));
}

void QSvgWidget_Load(QSvgWidget* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->load(file_QString);
}

void QSvgWidget_Load2(QSvgWidget* self, const libqt_string contents) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    self->load(contents_QByteArray);
}

void QSvgWidget_PaintEvent(QSvgWidget* self, QPaintEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->paintEvent(event);
    }
}

libqt_string QSvgWidget_Tr2(const char* s, const char* c) {
    QString _ret = QSvgWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSvgWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSvgWidget::tr(s, c, static_cast<int>(n));
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
int QSvgWidget_QBaseMetacall(QSvgWidget* self, int param1, int param2, void** param3) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Metacall_IsBase(true);
        return vqsvgwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSvgWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMetacall(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Metacall_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QSvgWidget_QBaseSizeHint(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SizeHint_IsBase(true);
        return new QSize(vqsvgwidget->sizeHint());
    } else {
        return new QSize(((VirtualQSvgWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSizeHint(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SizeHint_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void QSvgWidget_QBasePaintEvent(QSvgWidget* self, QPaintEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_PaintEvent_IsBase(true);
        vqsvgwidget->paintEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnPaintEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_PaintEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgWidget_DevType(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->devType();
    } else {
        return self->QSvgWidget::devType();
    }
}

// Base class handler implementation
int QSvgWidget_QBaseDevType(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DevType_IsBase(true);
        return vqsvgwidget->devType();
    } else {
        return self->QSvgWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDevType(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DevType_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_SetVisible(QSvgWidget* self, bool visible) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setVisible(visible);
    } else {
        self->QSvgWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseSetVisible(QSvgWidget* self, bool visible) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SetVisible_IsBase(true);
        vqsvgwidget->setVisible(visible);
    } else {
        self->QSvgWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSetVisible(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SetVisible_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSvgWidget_MinimumSizeHint(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return new QSize(vqsvgwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSvgWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSvgWidget_QBaseMinimumSizeHint(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqsvgwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSvgWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMinimumSizeHint(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgWidget_HeightForWidth(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSvgWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSvgWidget_QBaseHeightForWidth(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_HeightForWidth_IsBase(true);
        return vqsvgwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSvgWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnHeightForWidth(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_HasHeightForWidth(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->hasHeightForWidth();
    } else {
        return self->QSvgWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseHasHeightForWidth(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_HasHeightForWidth_IsBase(true);
        return vqsvgwidget->hasHeightForWidth();
    } else {
        return self->QSvgWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnHasHeightForWidth(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSvgWidget_PaintEngine(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->paintEngine();
    } else {
        return self->QSvgWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSvgWidget_QBasePaintEngine(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_PaintEngine_IsBase(true);
        return vqsvgwidget->paintEngine();
    } else {
        return self->QSvgWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnPaintEngine(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_PaintEngine_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_Event(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->event(event);
    } else {
        return ((VirtualQSvgWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Event_IsBase(true);
        return vqsvgwidget->event(event);
    } else {
        return ((VirtualQSvgWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Event_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_MousePressEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->mousePressEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseMousePressEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MousePressEvent_IsBase(true);
        vqsvgwidget->mousePressEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMousePressEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_MouseReleaseEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseMouseReleaseEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MouseReleaseEvent_IsBase(true);
        vqsvgwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMouseReleaseEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_MouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseMouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MouseDoubleClickEvent_IsBase(true);
        vqsvgwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMouseDoubleClickEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_MouseMoveEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseMouseMoveEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MouseMoveEvent_IsBase(true);
        vqsvgwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMouseMoveEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_WheelEvent(QSvgWidget* self, QWheelEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->wheelEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseWheelEvent(QSvgWidget* self, QWheelEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_WheelEvent_IsBase(true);
        vqsvgwidget->wheelEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnWheelEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_WheelEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_KeyPressEvent(QSvgWidget* self, QKeyEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->keyPressEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseKeyPressEvent(QSvgWidget* self, QKeyEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_KeyPressEvent_IsBase(true);
        vqsvgwidget->keyPressEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnKeyPressEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_KeyReleaseEvent(QSvgWidget* self, QKeyEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseKeyReleaseEvent(QSvgWidget* self, QKeyEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_KeyReleaseEvent_IsBase(true);
        vqsvgwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnKeyReleaseEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_FocusInEvent(QSvgWidget* self, QFocusEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->focusInEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseFocusInEvent(QSvgWidget* self, QFocusEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusInEvent_IsBase(true);
        vqsvgwidget->focusInEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusInEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_FocusOutEvent(QSvgWidget* self, QFocusEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->focusOutEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseFocusOutEvent(QSvgWidget* self, QFocusEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusOutEvent_IsBase(true);
        vqsvgwidget->focusOutEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusOutEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_EnterEvent(QSvgWidget* self, QEnterEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->enterEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseEnterEvent(QSvgWidget* self, QEnterEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_EnterEvent_IsBase(true);
        vqsvgwidget->enterEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnEnterEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_EnterEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_LeaveEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->leaveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseLeaveEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_LeaveEvent_IsBase(true);
        vqsvgwidget->leaveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnLeaveEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_MoveEvent(QSvgWidget* self, QMoveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->moveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseMoveEvent(QSvgWidget* self, QMoveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MoveEvent_IsBase(true);
        vqsvgwidget->moveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMoveEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_MoveEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ResizeEvent(QSvgWidget* self, QResizeEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->resizeEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseResizeEvent(QSvgWidget* self, QResizeEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ResizeEvent_IsBase(true);
        vqsvgwidget->resizeEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnResizeEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_CloseEvent(QSvgWidget* self, QCloseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->closeEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseCloseEvent(QSvgWidget* self, QCloseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_CloseEvent_IsBase(true);
        vqsvgwidget->closeEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnCloseEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_CloseEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->contextMenuEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ContextMenuEvent_IsBase(true);
        vqsvgwidget->contextMenuEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnContextMenuEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_TabletEvent(QSvgWidget* self, QTabletEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->tabletEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseTabletEvent(QSvgWidget* self, QTabletEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_TabletEvent_IsBase(true);
        vqsvgwidget->tabletEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnTabletEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_TabletEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ActionEvent(QSvgWidget* self, QActionEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->actionEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseActionEvent(QSvgWidget* self, QActionEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ActionEvent_IsBase(true);
        vqsvgwidget->actionEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnActionEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ActionEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_DragEnterEvent(QSvgWidget* self, QDragEnterEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->dragEnterEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseDragEnterEvent(QSvgWidget* self, QDragEnterEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DragEnterEvent_IsBase(true);
        vqsvgwidget->dragEnterEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDragEnterEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_DragMoveEvent(QSvgWidget* self, QDragMoveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->dragMoveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseDragMoveEvent(QSvgWidget* self, QDragMoveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DragMoveEvent_IsBase(true);
        vqsvgwidget->dragMoveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDragMoveEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_DragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseDragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DragLeaveEvent_IsBase(true);
        vqsvgwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDragLeaveEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_DropEvent(QSvgWidget* self, QDropEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->dropEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseDropEvent(QSvgWidget* self, QDropEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DropEvent_IsBase(true);
        vqsvgwidget->dropEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDropEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DropEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ShowEvent(QSvgWidget* self, QShowEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->showEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseShowEvent(QSvgWidget* self, QShowEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ShowEvent_IsBase(true);
        vqsvgwidget->showEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnShowEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ShowEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_HideEvent(QSvgWidget* self, QHideEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->hideEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseHideEvent(QSvgWidget* self, QHideEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_HideEvent_IsBase(true);
        vqsvgwidget->hideEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnHideEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_HideEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_NativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSvgWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseNativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_NativeEvent_IsBase(true);
        return vqsvgwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSvgWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnNativeEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_NativeEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ChangeEvent(QSvgWidget* self, QEvent* param1) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->changeEvent(param1);
    } else {
        ((VirtualQSvgWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseChangeEvent(QSvgWidget* self, QEvent* param1) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ChangeEvent_IsBase(true);
        vqsvgwidget->changeEvent(param1);
    } else {
        ((VirtualQSvgWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnChangeEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgWidget_Metric(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSvgWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSvgWidget_QBaseMetric(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Metric_IsBase(true);
        return vqsvgwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSvgWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMetric(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Metric_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_InitPainter(const QSvgWidget* self, QPainter* painter) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->initPainter(painter);
    } else {
        ((VirtualQSvgWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseInitPainter(const QSvgWidget* self, QPainter* painter) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_InitPainter_IsBase(true);
        vqsvgwidget->initPainter(painter);
    } else {
        ((VirtualQSvgWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnInitPainter(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_InitPainter_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSvgWidget_Redirected(const QSvgWidget* self, QPoint* offset) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->redirected(offset);
    } else {
        return ((VirtualQSvgWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSvgWidget_QBaseRedirected(const QSvgWidget* self, QPoint* offset) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Redirected_IsBase(true);
        return vqsvgwidget->redirected(offset);
    } else {
        return ((VirtualQSvgWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnRedirected(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Redirected_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSvgWidget_SharedPainter(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->sharedPainter();
    } else {
        return ((VirtualQSvgWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSvgWidget_QBaseSharedPainter(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SharedPainter_IsBase(true);
        return vqsvgwidget->sharedPainter();
    } else {
        return ((VirtualQSvgWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSharedPainter(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SharedPainter_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_InputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQSvgWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseInputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_InputMethodEvent_IsBase(true);
        vqsvgwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQSvgWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnInputMethodEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSvgWidget_InputMethodQuery(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return new QVariant(vqsvgwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSvgWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSvgWidget_QBaseInputMethodQuery(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqsvgwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSvgWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnInputMethodQuery(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_FocusNextPrevChild(QSvgWidget* self, bool next) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQSvgWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseFocusNextPrevChild(QSvgWidget* self, bool next) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusNextPrevChild_IsBase(true);
        return vqsvgwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQSvgWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusNextPrevChild(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_EventFilter(QSvgWidget* self, QObject* watched, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->eventFilter(watched, event);
    } else {
        return self->QSvgWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseEventFilter(QSvgWidget* self, QObject* watched, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_EventFilter_IsBase(true);
        return vqsvgwidget->eventFilter(watched, event);
    } else {
        return self->QSvgWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnEventFilter(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_EventFilter_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_TimerEvent(QSvgWidget* self, QTimerEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->timerEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseTimerEvent(QSvgWidget* self, QTimerEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_TimerEvent_IsBase(true);
        vqsvgwidget->timerEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnTimerEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_TimerEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ChildEvent(QSvgWidget* self, QChildEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->childEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseChildEvent(QSvgWidget* self, QChildEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ChildEvent_IsBase(true);
        vqsvgwidget->childEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnChildEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ChildEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_CustomEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->customEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseCustomEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_CustomEvent_IsBase(true);
        vqsvgwidget->customEvent(event);
    } else {
        ((VirtualQSvgWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnCustomEvent(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_CustomEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_ConnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->connectNotify(*signal);
    } else {
        ((VirtualQSvgWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseConnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ConnectNotify_IsBase(true);
        vqsvgwidget->connectNotify(*signal);
    } else {
        ((VirtualQSvgWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnConnectNotify(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_DisconnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQSvgWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSvgWidget_QBaseDisconnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DisconnectNotify_IsBase(true);
        vqsvgwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQSvgWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDisconnectNotify(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_UpdateMicroFocus(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->updateMicroFocus();
    } else {
        ((VirtualQSvgWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QSvgWidget_QBaseUpdateMicroFocus(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_UpdateMicroFocus_IsBase(true);
        vqsvgwidget->updateMicroFocus();
    } else {
        ((VirtualQSvgWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnUpdateMicroFocus(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_Create(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->create();
    } else {
        ((VirtualQSvgWidget*)self)->create();
    }
}

// Base class handler implementation
void QSvgWidget_QBaseCreate(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Create_IsBase(true);
        vqsvgwidget->create();
    } else {
        ((VirtualQSvgWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnCreate(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Create_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgWidget_Destroy(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->destroy();
    } else {
        ((VirtualQSvgWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QSvgWidget_QBaseDestroy(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Destroy_IsBase(true);
        vqsvgwidget->destroy();
    } else {
        ((VirtualQSvgWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDestroy(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Destroy_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_FocusNextChild(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->focusNextChild();
    } else {
        return ((VirtualQSvgWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseFocusNextChild(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusNextChild_IsBase(true);
        return vqsvgwidget->focusNextChild();
    } else {
        return ((VirtualQSvgWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusNextChild(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_FocusPreviousChild(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->focusPreviousChild();
    } else {
        return ((VirtualQSvgWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseFocusPreviousChild(QSvgWidget* self) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusPreviousChild_IsBase(true);
        return vqsvgwidget->focusPreviousChild();
    } else {
        return ((VirtualQSvgWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusPreviousChild(QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSvgWidget_Sender(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->sender();
    } else {
        return ((VirtualQSvgWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSvgWidget_QBaseSender(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Sender_IsBase(true);
        return vqsvgwidget->sender();
    } else {
        return ((VirtualQSvgWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSender(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Sender_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgWidget_SenderSignalIndex(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->senderSignalIndex();
    } else {
        return ((VirtualQSvgWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSvgWidget_QBaseSenderSignalIndex(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SenderSignalIndex_IsBase(true);
        return vqsvgwidget->senderSignalIndex();
    } else {
        return ((VirtualQSvgWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSenderSignalIndex(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgWidget_Receivers(const QSvgWidget* self, const char* signal) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->receivers(signal);
    } else {
        return ((VirtualQSvgWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSvgWidget_QBaseReceivers(const QSvgWidget* self, const char* signal) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Receivers_IsBase(true);
        return vqsvgwidget->receivers(signal);
    } else {
        return ((VirtualQSvgWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnReceivers(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_Receivers_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgWidget_IsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQSvgWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSvgWidget_QBaseIsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_IsSignalConnected_IsBase(true);
        return vqsvgwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQSvgWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnIsSignalConnected(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QSvgWidget_GetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        return vqsvgwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSvgWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QSvgWidget_QBaseGetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_GetDecodedMetricF_IsBase(true);
        return vqsvgwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSvgWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnGetDecodedMetricF(const QSvgWidget* self, intptr_t slot) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
        vqsvgwidget->setQSvgWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QSvgWidget_Delete(QSvgWidget* self) {
    delete self;
}
