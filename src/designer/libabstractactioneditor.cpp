#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerActionEditorInterface>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
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
#include <abstractactioneditor.h>
#include "libabstractactioneditor.h"
#include "libabstractactioneditor.hxx"

QDesignerActionEditorInterface* QDesignerActionEditorInterface_new(QWidget* parent) {
    return new VirtualQDesignerActionEditorInterface(parent);
}

QDesignerActionEditorInterface* QDesignerActionEditorInterface_new2(QWidget* parent, int flags) {
    return new VirtualQDesignerActionEditorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDesignerActionEditorInterface_MetaObject(const QDesignerActionEditorInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerActionEditorInterface_Metacast(QDesignerActionEditorInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerActionEditorInterface_Metacall(QDesignerActionEditorInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerActionEditorInterface_Tr(const char* s) {
    auto _ret = QDesignerActionEditorInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerFormEditorInterface* QDesignerActionEditorInterface_Core(const QDesignerActionEditorInterface* self) {
    return self->core();
}

void QDesignerActionEditorInterface_ManageAction(QDesignerActionEditorInterface* self, QAction* action) {
    self->manageAction(action);
}

void QDesignerActionEditorInterface_UnmanageAction(QDesignerActionEditorInterface* self, QAction* action) {
    self->unmanageAction(action);
}

void QDesignerActionEditorInterface_SetFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->setFormWindow(formWindow);
}

libqt_string QDesignerActionEditorInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerActionEditorInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerActionEditorInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerActionEditorInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerActionEditorInterface_SuperMetaObject(const QDesignerActionEditorInterface* self) {
    return (QMetaObject*)self->QDesignerActionEditorInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetaObject(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerActionEditorInterface_SuperMetacast(QDesignerActionEditorInterface* self, const char* param1) {
    return self->QDesignerActionEditorInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetacast(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_metacast_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerActionEditorInterface_SuperMetacall(QDesignerActionEditorInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerActionEditorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetacall(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_metacall_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Metacall_Callback>(slot);
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerActionEditorInterface_SuperCore(const QDesignerActionEditorInterface* self) {
    return self->QDesignerActionEditorInterface::core();
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCore(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_core_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Core_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnManageAction(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_manageaction_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ManageAction_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnUnmanageAction(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_unmanageaction_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_UnmanageAction_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSetFormWindow(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_setformwindow_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SetFormWindow_Callback>(slot);
}

// Derived class handler implementation
int QDesignerActionEditorInterface_DevType(const QDesignerActionEditorInterface* self) {
    return self->devType();
}

// Base class handler implementation
int QDesignerActionEditorInterface_SuperDevType(const QDesignerActionEditorInterface* self) {
    return self->QDesignerActionEditorInterface::devType();
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDevType(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_devtype_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_SetVisible(QDesignerActionEditorInterface* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperSetVisible(QDesignerActionEditorInterface* self, bool visible) {
    self->QDesignerActionEditorInterface::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSetVisible(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_setvisible_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerActionEditorInterface_SizeHint(const QDesignerActionEditorInterface* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDesignerActionEditorInterface_SuperSizeHint(const QDesignerActionEditorInterface* self) {
    return new QSize(self->QDesignerActionEditorInterface::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSizeHint(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_sizehint_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerActionEditorInterface_MinimumSizeHint(const QDesignerActionEditorInterface* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDesignerActionEditorInterface_SuperMinimumSizeHint(const QDesignerActionEditorInterface* self) {
    return new QSize(self->QDesignerActionEditorInterface::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMinimumSizeHint(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_minimumsizehint_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDesignerActionEditorInterface_HeightForWidth(const QDesignerActionEditorInterface* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDesignerActionEditorInterface_SuperHeightForWidth(const QDesignerActionEditorInterface* self, int param1) {
    return self->QDesignerActionEditorInterface::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnHeightForWidth(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_heightforwidth_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_HasHeightForWidth(const QDesignerActionEditorInterface* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDesignerActionEditorInterface_SuperHasHeightForWidth(const QDesignerActionEditorInterface* self) {
    return self->QDesignerActionEditorInterface::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnHasHeightForWidth(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_hasheightforwidth_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDesignerActionEditorInterface_PaintEngine(const QDesignerActionEditorInterface* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDesignerActionEditorInterface_SuperPaintEngine(const QDesignerActionEditorInterface* self) {
    return self->QDesignerActionEditorInterface::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnPaintEngine(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_paintengine_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_Event(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        return vqdesigneractioneditorinterface->event(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_SuperEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        return vqdesigneractioneditorinterface->QDesignerActionEditorInterface::event(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_event_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Event_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperMousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMousePressEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_mousepressevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperMouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMouseReleaseEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_mousereleaseevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperMouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMouseDoubleClickEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperMouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMouseMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_mousemoveevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_WheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperWheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnWheelEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_wheelevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_KeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperKeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnKeyPressEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_keypressevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_KeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperKeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnKeyReleaseEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_keyreleaseevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_FocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperFocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusInEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_focusinevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_FocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperFocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusOutEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_focusoutevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_EnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperEnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnEnterEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_enterevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_LeaveEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperLeaveEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnLeaveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_leaveevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_PaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperPaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnPaintEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_paintevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperMoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_moveevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnResizeEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_resizeevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_CloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperCloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCloseEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_closeevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnContextMenuEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_contextmenuevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_TabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperTabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnTabletEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_tabletevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnActionEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_actionevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperDragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDragEnterEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_dragenterevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperDragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDragMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_dragmoveevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperDragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDragLeaveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_dragleaveevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DropEvent(QDesignerActionEditorInterface* self, QDropEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperDropEvent(QDesignerActionEditorInterface* self, QDropEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDropEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_dropevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnShowEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_showevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_HideEvent(QDesignerActionEditorInterface* self, QHideEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperHideEvent(QDesignerActionEditorInterface* self, QHideEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnHideEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_hideevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_NativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        return vqdesigneractioneditorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_SuperNativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        return vqdesigneractioneditorinterface->QDesignerActionEditorInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnNativeEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_nativeevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnChangeEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_changeevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDesignerActionEditorInterface_Metric(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface) {
        return vqdesigneractioneditorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_SuperMetric(const QDesignerActionEditorInterface* self, int param1) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->QDesignerActionEditorInterface::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetric(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_metric_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_InitPainter(const QDesignerActionEditorInterface* self, QPainter* painter) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperInitPainter(const QDesignerActionEditorInterface* self, QPainter* painter) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnInitPainter(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_initpainter_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDesignerActionEditorInterface_Redirected(const QDesignerActionEditorInterface* self, QPoint* offset) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface) {
        return vqdesigneractioneditorinterface->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDesignerActionEditorInterface_SuperRedirected(const QDesignerActionEditorInterface* self, QPoint* offset) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->QDesignerActionEditorInterface::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnRedirected(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_redirected_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDesignerActionEditorInterface_SharedPainter(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface) {
        return vqdesigneractioneditorinterface->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDesignerActionEditorInterface_SuperSharedPainter(const QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->QDesignerActionEditorInterface::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSharedPainter(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_sharedpainter_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_InputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperInputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnInputMethodEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_inputmethodevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDesignerActionEditorInterface_InputMethodQuery(const QDesignerActionEditorInterface* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDesignerActionEditorInterface_SuperInputMethodQuery(const QDesignerActionEditorInterface* self, int param1) {
    return new QVariant(self->QDesignerActionEditorInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnInputMethodQuery(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self)))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_inputmethodquery_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_FocusNextPrevChild(QDesignerActionEditorInterface* self, bool next) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        return vqdesigneractioneditorinterface->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_SuperFocusNextPrevChild(QDesignerActionEditorInterface* self, bool next) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        return vqdesigneractioneditorinterface->QDesignerActionEditorInterface::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusNextPrevChild(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_focusnextprevchild_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_EventFilter(QDesignerActionEditorInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerActionEditorInterface_SuperEventFilter(QDesignerActionEditorInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerActionEditorInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnEventFilter(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_TimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperTimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnTimerEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnChildEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_childevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_CustomEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperCustomEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCustomEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_customevent_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnConnectNotify(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface) {
        vqdesigneractioneditorinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_SuperDisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->QDesignerActionEditorInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerActionEditorInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDisconnectNotify(QDesignerActionEditorInterface* self, intptr_t slot) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self))
        vqdesigneractioneditorinterface->qdesigneractioneditorinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDesignerActionEditorInterface_UpdateMicroFocus(QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerActionEditorInterface_Create(QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::create();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerActionEditorInterface_Destroy(QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::destroy();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerActionEditorInterface_FocusNextChild(QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::focusNextChild();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerActionEditorInterface_FocusPreviousChild(QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self)) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDesignerActionEditorInterface_Sender(const QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerActionEditorInterface_SenderSignalIndex(const QDesignerActionEditorInterface* self) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerActionEditorInterface_Receivers(const QDesignerActionEditorInterface* self, const char* signal) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerActionEditorInterface_IsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDesignerActionEditorInterface_GetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB) {
    if (auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self))) {
        return vqdesigneractioneditorinterface->VirtualQDesignerActionEditorInterface::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDesignerActionEditorInterface::getDecodedMetricF called without a directly constructed type");
}

void QDesignerActionEditorInterface_Delete(QDesignerActionEditorInterface* self) {
    delete self;
}
