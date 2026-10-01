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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSvgWidget_Tr(const char* s) {
    auto _ret = QSvgWidget::tr(s);
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
    return new QSize(self->sizeHint());
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
    if (vqsvgwidget) {
        vqsvgwidget->paintEvent(event);
    }
}

libqt_string QSvgWidget_Tr2(const char* s, const char* c) {
    auto _ret = QSvgWidget::tr(s, c);
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
    auto _ret = QSvgWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSvgWidget_SuperMetaObject(const QSvgWidget* self) {
    return (QMetaObject*)self->QSvgWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMetaObject(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_metaobject_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSvgWidget_SuperMetacast(QSvgWidget* self, const char* param1) {
    return self->QSvgWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMetacast(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_metacast_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSvgWidget_SuperMetacall(QSvgWidget* self, int param1, int param2, void** param3) {
    return self->QSvgWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMetacall(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_metacall_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QSvgWidget_SuperSizeHint(const QSvgWidget* self) {
    return new QSize(self->QSvgWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSizeHint(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_sizehint_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QSvgWidget_SuperPaintEvent(QSvgWidget* self, QPaintEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnPaintEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_paintevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int QSvgWidget_DevType(const QSvgWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QSvgWidget_SuperDevType(const QSvgWidget* self) {
    return self->QSvgWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDevType(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_devtype_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_SetVisible(QSvgWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QSvgWidget_SuperSetVisible(QSvgWidget* self, bool visible) {
    self->QSvgWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSetVisible(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_setvisible_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QSvgWidget_MinimumSizeHint(const QSvgWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QSvgWidget_SuperMinimumSizeHint(const QSvgWidget* self) {
    return new QSize(self->QSvgWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMinimumSizeHint(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_minimumsizehint_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QSvgWidget_HeightForWidth(const QSvgWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSvgWidget_SuperHeightForWidth(const QSvgWidget* self, int param1) {
    return self->QSvgWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnHeightForWidth(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_heightforwidth_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSvgWidget_HasHeightForWidth(const QSvgWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSvgWidget_SuperHasHeightForWidth(const QSvgWidget* self) {
    return self->QSvgWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnHasHeightForWidth(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSvgWidget_PaintEngine(const QSvgWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSvgWidget_SuperPaintEngine(const QSvgWidget* self) {
    return self->QSvgWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnPaintEngine(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_paintengine_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QSvgWidget_Event(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        return vqsvgwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSvgWidget_SuperEvent(QSvgWidget* self, QEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        return vqsvgwidget->QSvgWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_event_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_MousePressEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperMousePressEvent(QSvgWidget* self, QMouseEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMousePressEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_mousepressevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_MouseReleaseEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperMouseReleaseEvent(QSvgWidget* self, QMouseEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMouseReleaseEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_MouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperMouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMouseDoubleClickEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_MouseMoveEvent(QSvgWidget* self, QMouseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperMouseMoveEvent(QSvgWidget* self, QMouseEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMouseMoveEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_mousemoveevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_WheelEvent(QSvgWidget* self, QWheelEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperWheelEvent(QSvgWidget* self, QWheelEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnWheelEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_wheelevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_KeyPressEvent(QSvgWidget* self, QKeyEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperKeyPressEvent(QSvgWidget* self, QKeyEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnKeyPressEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_keypressevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_KeyReleaseEvent(QSvgWidget* self, QKeyEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperKeyReleaseEvent(QSvgWidget* self, QKeyEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnKeyReleaseEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_FocusInEvent(QSvgWidget* self, QFocusEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperFocusInEvent(QSvgWidget* self, QFocusEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusInEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_focusinevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_FocusOutEvent(QSvgWidget* self, QFocusEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperFocusOutEvent(QSvgWidget* self, QFocusEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusOutEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_focusoutevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_EnterEvent(QSvgWidget* self, QEnterEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperEnterEvent(QSvgWidget* self, QEnterEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnEnterEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_enterevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_LeaveEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperLeaveEvent(QSvgWidget* self, QEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnLeaveEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_leaveevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_MoveEvent(QSvgWidget* self, QMoveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperMoveEvent(QSvgWidget* self, QMoveEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMoveEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_moveevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ResizeEvent(QSvgWidget* self, QResizeEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperResizeEvent(QSvgWidget* self, QResizeEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnResizeEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_resizeevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_CloseEvent(QSvgWidget* self, QCloseEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperCloseEvent(QSvgWidget* self, QCloseEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnCloseEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_closeevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnContextMenuEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_contextmenuevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_TabletEvent(QSvgWidget* self, QTabletEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperTabletEvent(QSvgWidget* self, QTabletEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnTabletEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_tabletevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ActionEvent(QSvgWidget* self, QActionEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperActionEvent(QSvgWidget* self, QActionEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnActionEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_actionevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_DragEnterEvent(QSvgWidget* self, QDragEnterEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperDragEnterEvent(QSvgWidget* self, QDragEnterEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDragEnterEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_dragenterevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_DragMoveEvent(QSvgWidget* self, QDragMoveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperDragMoveEvent(QSvgWidget* self, QDragMoveEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDragMoveEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_dragmoveevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_DragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperDragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDragLeaveEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_dragleaveevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_DropEvent(QSvgWidget* self, QDropEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperDropEvent(QSvgWidget* self, QDropEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDropEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_dropevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ShowEvent(QSvgWidget* self, QShowEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperShowEvent(QSvgWidget* self, QShowEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnShowEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_showevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_HideEvent(QSvgWidget* self, QHideEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperHideEvent(QSvgWidget* self, QHideEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnHideEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_hideevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSvgWidget_NativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        return vqsvgwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSvgWidget_SuperNativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        return vqsvgwidget->QSvgWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSvgWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnNativeEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_nativeevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ChangeEvent(QSvgWidget* self, QEvent* param1) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperChangeEvent(QSvgWidget* self, QEvent* param1) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnChangeEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_changeevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSvgWidget_Metric(const QSvgWidget* self, int param1) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget) {
        return vqsvgwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSvgWidget_SuperMetric(const QSvgWidget* self, int param1) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->QSvgWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSvgWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnMetric(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_metric_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_InitPainter(const QSvgWidget* self, QPainter* painter) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget) {
        vqsvgwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperInitPainter(const QSvgWidget* self, QPainter* painter) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        vqsvgwidget->QSvgWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnInitPainter(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_initpainter_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSvgWidget_Redirected(const QSvgWidget* self, QPoint* offset) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget) {
        return vqsvgwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSvgWidget_SuperRedirected(const QSvgWidget* self, QPoint* offset) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->QSvgWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnRedirected(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_redirected_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSvgWidget_SharedPainter(const QSvgWidget* self) {
    auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self));
    if (vqsvgwidget) {
        return vqsvgwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSvgWidget_SuperSharedPainter(const QSvgWidget* self) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->QSvgWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSvgWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSharedPainter(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_sharedpainter_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_InputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperInputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnInputMethodEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_inputmethodevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSvgWidget_InputMethodQuery(const QSvgWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSvgWidget_SuperInputMethodQuery(const QSvgWidget* self, int param1) {
    return new QVariant(self->QSvgWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnInputMethodQuery(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self)))
        vqsvgwidget->qsvgwidget_inputmethodquery_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QSvgWidget_FocusNextPrevChild(QSvgWidget* self, bool next) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        return vqsvgwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSvgWidget_SuperFocusNextPrevChild(QSvgWidget* self, bool next) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        return vqsvgwidget->QSvgWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnFocusNextPrevChild(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QSvgWidget_EventFilter(QSvgWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSvgWidget_SuperEventFilter(QSvgWidget* self, QObject* watched, QEvent* event) {
    return self->QSvgWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnEventFilter(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_eventfilter_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_TimerEvent(QSvgWidget* self, QTimerEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperTimerEvent(QSvgWidget* self, QTimerEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnTimerEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_timerevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ChildEvent(QSvgWidget* self, QChildEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperChildEvent(QSvgWidget* self, QChildEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnChildEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_childevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_CustomEvent(QSvgWidget* self, QEvent* event) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperCustomEvent(QSvgWidget* self, QEvent* event) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnCustomEvent(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_customevent_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_ConnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperConnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnConnectNotify(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_connectnotify_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSvgWidget_DisconnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
    if (vqsvgwidget) {
        vqsvgwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSvgWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgWidget_SuperDisconnectNotify(QSvgWidget* self, const QMetaMethod* signal) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->QSvgWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSvgWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnDisconnectNotify(QSvgWidget* self, intptr_t slot) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self))
        vqsvgwidget->qsvgwidget_disconnectnotify_callback = reinterpret_cast<VirtualQSvgWidget::QSvgWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSvgWidget_UpdateMicroFocus(QSvgWidget* self) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->VirtualQSvgWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSvgWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSvgWidget_Create(QSvgWidget* self) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->VirtualQSvgWidget::create();
    } else
        qFatal("Error: Protected method QSvgWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSvgWidget_Destroy(QSvgWidget* self) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        vqsvgwidget->VirtualQSvgWidget::destroy();
    } else
        qFatal("Error: Protected method QSvgWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSvgWidget_FocusNextChild(QSvgWidget* self) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        return vqsvgwidget->VirtualQSvgWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QSvgWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSvgWidget_FocusPreviousChild(QSvgWidget* self) {
    if (auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self)) {
        return vqsvgwidget->VirtualQSvgWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSvgWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSvgWidget_Sender(const QSvgWidget* self) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->VirtualQSvgWidget::sender();
    } else
        qFatal("Error: Protected method QSvgWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSvgWidget_SenderSignalIndex(const QSvgWidget* self) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->VirtualQSvgWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSvgWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSvgWidget_Receivers(const QSvgWidget* self, const char* signal) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->VirtualQSvgWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QSvgWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSvgWidget_IsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->VirtualQSvgWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSvgWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSvgWidget_GetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB) {
    if (auto* vqsvgwidget = const_cast<VirtualQSvgWidget*>(dynamic_cast<const VirtualQSvgWidget*>(self))) {
        return vqsvgwidget->VirtualQSvgWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSvgWidget::getDecodedMetricF called without a directly constructed type");
}

void QSvgWidget_Delete(QSvgWidget* self) {
    delete self;
}
