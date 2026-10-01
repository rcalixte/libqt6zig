#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerObjectInspectorInterface>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <abstractobjectinspector.h>
#include "libabstractobjectinspector.h"
#include "libabstractobjectinspector.hxx"

QDesignerObjectInspectorInterface* QDesignerObjectInspectorInterface_new(QWidget* parent) {
    return new VirtualQDesignerObjectInspectorInterface(parent);
}

QDesignerObjectInspectorInterface* QDesignerObjectInspectorInterface_new2(QWidget* parent, int flags) {
    return new VirtualQDesignerObjectInspectorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDesignerObjectInspectorInterface_MetaObject(const QDesignerObjectInspectorInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerObjectInspectorInterface_Metacast(QDesignerObjectInspectorInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerObjectInspectorInterface_Metacall(QDesignerObjectInspectorInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerObjectInspectorInterface_Tr(const char* s) {
    auto _ret = QDesignerObjectInspectorInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_Core(const QDesignerObjectInspectorInterface* self) {
    return self->core();
}

void QDesignerObjectInspectorInterface_SetFormWindow(QDesignerObjectInspectorInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->setFormWindow(formWindow);
}

libqt_string QDesignerObjectInspectorInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerObjectInspectorInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerObjectInspectorInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerObjectInspectorInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerObjectInspectorInterface_SuperMetaObject(const QDesignerObjectInspectorInterface* self) {
    return (QMetaObject*)self->QDesignerObjectInspectorInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetaObject(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerObjectInspectorInterface_SuperMetacast(QDesignerObjectInspectorInterface* self, const char* param1) {
    return self->QDesignerObjectInspectorInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetacast(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_metacast_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperMetacall(QDesignerObjectInspectorInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerObjectInspectorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetacall(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_metacall_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Metacall_Callback>(slot);
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_SuperCore(const QDesignerObjectInspectorInterface* self) {
    return self->QDesignerObjectInspectorInterface::core();
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCore(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_core_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Core_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSetFormWindow(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_setformwindow_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SetFormWindow_Callback>(slot);
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_DevType(const QDesignerObjectInspectorInterface* self) {
    return self->devType();
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperDevType(const QDesignerObjectInspectorInterface* self) {
    return self->QDesignerObjectInspectorInterface::devType();
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDevType(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_devtype_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_SetVisible(QDesignerObjectInspectorInterface* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperSetVisible(QDesignerObjectInspectorInterface* self, bool visible) {
    self->QDesignerObjectInspectorInterface::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSetVisible(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_setvisible_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerObjectInspectorInterface_SizeHint(const QDesignerObjectInspectorInterface* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDesignerObjectInspectorInterface_SuperSizeHint(const QDesignerObjectInspectorInterface* self) {
    return new QSize(self->QDesignerObjectInspectorInterface::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSizeHint(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_sizehint_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerObjectInspectorInterface_MinimumSizeHint(const QDesignerObjectInspectorInterface* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDesignerObjectInspectorInterface_SuperMinimumSizeHint(const QDesignerObjectInspectorInterface* self) {
    return new QSize(self->QDesignerObjectInspectorInterface::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMinimumSizeHint(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_minimumsizehint_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_HeightForWidth(const QDesignerObjectInspectorInterface* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperHeightForWidth(const QDesignerObjectInspectorInterface* self, int param1) {
    return self->QDesignerObjectInspectorInterface::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnHeightForWidth(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_heightforwidth_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_HasHeightForWidth(const QDesignerObjectInspectorInterface* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperHasHeightForWidth(const QDesignerObjectInspectorInterface* self) {
    return self->QDesignerObjectInspectorInterface::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnHasHeightForWidth(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_hasheightforwidth_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDesignerObjectInspectorInterface_PaintEngine(const QDesignerObjectInspectorInterface* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDesignerObjectInspectorInterface_SuperPaintEngine(const QDesignerObjectInspectorInterface* self) {
    return self->QDesignerObjectInspectorInterface::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnPaintEngine(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_paintengine_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_Event(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        return vqdesignerobjectinspectorinterface->event(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        return vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::event(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_event_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Event_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMousePressEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_mousepressevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMouseReleaseEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_mousereleaseevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMouseMoveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_mousemoveevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_WheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperWheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnWheelEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_wheelevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_KeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperKeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnKeyPressEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_keypressevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_KeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperKeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnKeyReleaseEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_keyreleaseevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_FocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperFocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusInEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_focusinevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_FocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperFocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusOutEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_focusoutevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_EnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperEnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnEnterEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_enterevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_LeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperLeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnLeaveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_leaveevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_PaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperPaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnPaintEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_paintevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMoveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_moveevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnResizeEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_resizeevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_CloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperCloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCloseEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_closeevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnContextMenuEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_contextmenuevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_TabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperTabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnTabletEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_tabletevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnActionEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_actionevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDragEnterEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_dragenterevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDragMoveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_dragmoveevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDragLeaveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_dragleaveevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDropEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_dropevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnShowEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_showevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_HideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperHideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnHideEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_hideevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_NativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        return vqdesignerobjectinspectorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperNativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        return vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnNativeEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_nativeevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnChangeEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_changeevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_Metric(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface) {
        return vqdesignerobjectinspectorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperMetric(const QDesignerObjectInspectorInterface* self, int param1) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetric(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_metric_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_InitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperInitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnInitPainter(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_initpainter_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDesignerObjectInspectorInterface_Redirected(const QDesignerObjectInspectorInterface* self, QPoint* offset) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface) {
        return vqdesignerobjectinspectorinterface->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDesignerObjectInspectorInterface_SuperRedirected(const QDesignerObjectInspectorInterface* self, QPoint* offset) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnRedirected(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_redirected_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDesignerObjectInspectorInterface_SharedPainter(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface) {
        return vqdesignerobjectinspectorinterface->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDesignerObjectInspectorInterface_SuperSharedPainter(const QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSharedPainter(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_sharedpainter_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_InputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperInputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnInputMethodEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_inputmethodevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDesignerObjectInspectorInterface_InputMethodQuery(const QDesignerObjectInspectorInterface* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDesignerObjectInspectorInterface_SuperInputMethodQuery(const QDesignerObjectInspectorInterface* self, int param1) {
    return new QVariant(self->QDesignerObjectInspectorInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnInputMethodQuery(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self)))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_inputmethodquery_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_FocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        return vqdesignerobjectinspectorinterface->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperFocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        return vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusNextPrevChild(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_focusnextprevchild_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_EventFilter(QDesignerObjectInspectorInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperEventFilter(QDesignerObjectInspectorInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerObjectInspectorInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnEventFilter(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_TimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperTimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnTimerEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnChildEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_childevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_CustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperCustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCustomEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_customevent_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnConnectNotify(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface) {
        vqdesignerobjectinspectorinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->QDesignerObjectInspectorInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerObjectInspectorInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDisconnectNotify(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self))
        vqdesignerobjectinspectorinterface->qdesignerobjectinspectorinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDesignerObjectInspectorInterface_UpdateMicroFocus(QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerObjectInspectorInterface_Create(QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::create();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerObjectInspectorInterface_Destroy(QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::destroy();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerObjectInspectorInterface_FocusNextChild(QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::focusNextChild();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerObjectInspectorInterface_FocusPreviousChild(QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self)) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDesignerObjectInspectorInterface_Sender(const QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerObjectInspectorInterface_SenderSignalIndex(const QDesignerObjectInspectorInterface* self) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerObjectInspectorInterface_Receivers(const QDesignerObjectInspectorInterface* self, const char* signal) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerObjectInspectorInterface_IsSignalConnected(const QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDesignerObjectInspectorInterface_GetDecodedMetricF(const QDesignerObjectInspectorInterface* self, int metricA, int metricB) {
    if (auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self))) {
        return vqdesignerobjectinspectorinterface->VirtualQDesignerObjectInspectorInterface::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDesignerObjectInspectorInterface::getDecodedMetricF called without a directly constructed type");
}

void QDesignerObjectInspectorInterface_Delete(QDesignerObjectInspectorInterface* self) {
    delete self;
}
