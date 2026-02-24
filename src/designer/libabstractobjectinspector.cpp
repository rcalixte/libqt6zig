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
#include <QByteArray>
#include <cstring>
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
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerObjectInspectorInterface*)self)->metaObject();
    }
}

void* QDesignerObjectInspectorInterface_Metacast(QDesignerObjectInspectorInterface* self, const char* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerObjectInspectorInterface_Metacall(QDesignerObjectInspectorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_Core(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return self->core();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->core();
    }
}

void QDesignerObjectInspectorInterface_SetFormWindow(QDesignerObjectInspectorInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setFormWindow(formWindow);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->setFormWindow(formWindow);
    }
}

// Base class handler implementation
QMetaObject* QDesignerObjectInspectorInterface_SuperMetaObject(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerobjectinspectorinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerObjectInspectorInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetaObject(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerObjectInspectorInterface_SuperMetacast(QDesignerObjectInspectorInterface* self, const char* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Metacast_IsBase(true);
        return vqdesignerobjectinspectorinterface->qt_metacast(param1);
    } else {
        return self->QDesignerObjectInspectorInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetacast(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperMetacall(QDesignerObjectInspectorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Metacall_IsBase(true);
        return vqdesignerobjectinspectorinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerObjectInspectorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetacall(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_SuperCore(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Core_IsBase(true);
        return vqdesignerobjectinspectorinterface->core();
    } else {
        return self->QDesignerObjectInspectorInterface::core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCore(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Core_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Core_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperSetFormWindow(QDesignerObjectInspectorInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SetFormWindow_IsBase(true);
        vqdesignerobjectinspectorinterface->setFormWindow(formWindow);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->setFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSetFormWindow(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SetFormWindow_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SetFormWindow_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_DevType(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->devType();
    } else {
        return self->QDesignerObjectInspectorInterface::devType();
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperDevType(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DevType_IsBase(true);
        return vqdesignerobjectinspectorinterface->devType();
    } else {
        return self->QDesignerObjectInspectorInterface::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDevType(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DevType_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_SetVisible(QDesignerObjectInspectorInterface* self, bool visible) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setVisible(visible);
    } else {
        self->QDesignerObjectInspectorInterface::setVisible(visible);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperSetVisible(QDesignerObjectInspectorInterface* self, bool visible) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SetVisible_IsBase(true);
        vqdesignerobjectinspectorinterface->setVisible(visible);
    } else {
        self->QDesignerObjectInspectorInterface::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSetVisible(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SetVisible_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerObjectInspectorInterface_SizeHint(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return new QSize(vqdesignerobjectinspectorinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerObjectInspectorInterface*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerObjectInspectorInterface_SuperSizeHint(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SizeHint_IsBase(true);
        return new QSize(vqdesignerobjectinspectorinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerObjectInspectorInterface*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSizeHint(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SizeHint_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerObjectInspectorInterface_MinimumSizeHint(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return new QSize(vqdesignerobjectinspectorinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerObjectInspectorInterface*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerObjectInspectorInterface_SuperMinimumSizeHint(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MinimumSizeHint_IsBase(true);
        return new QSize(vqdesignerobjectinspectorinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerObjectInspectorInterface*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMinimumSizeHint(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_HeightForWidth(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerObjectInspectorInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperHeightForWidth(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_HeightForWidth_IsBase(true);
        return vqdesignerobjectinspectorinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerObjectInspectorInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnHeightForWidth(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_HeightForWidth_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_HasHeightForWidth(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->hasHeightForWidth();
    } else {
        return self->QDesignerObjectInspectorInterface::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperHasHeightForWidth(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_HasHeightForWidth_IsBase(true);
        return vqdesignerobjectinspectorinterface->hasHeightForWidth();
    } else {
        return self->QDesignerObjectInspectorInterface::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnHasHeightForWidth(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDesignerObjectInspectorInterface_PaintEngine(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->paintEngine();
    } else {
        return self->QDesignerObjectInspectorInterface::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDesignerObjectInspectorInterface_SuperPaintEngine(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_PaintEngine_IsBase(true);
        return vqdesignerobjectinspectorinterface->paintEngine();
    } else {
        return self->QDesignerObjectInspectorInterface::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnPaintEngine(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_PaintEngine_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_Event(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->event(event);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->event(event);
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Event_IsBase(true);
        return vqdesignerobjectinspectorinterface->event(event);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Event_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MousePressEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMousePressEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MousePressEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MouseReleaseEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMouseReleaseEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MouseDoubleClickEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MouseMoveEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMouseMoveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_WheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperWheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_WheelEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnWheelEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_WheelEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_KeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperKeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_KeyPressEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnKeyPressEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_KeyPressEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_KeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperKeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_KeyReleaseEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnKeyReleaseEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_FocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperFocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusInEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusInEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusInEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_FocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperFocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusOutEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusOutEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusOutEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_EnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperEnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_EnterEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnEnterEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_EnterEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_LeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperLeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_LeaveEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnLeaveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_LeaveEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_PaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperPaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_PaintEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnPaintEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_PaintEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_MoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperMoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MoveEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMoveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_MoveEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ResizeEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnResizeEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ResizeEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_CloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperCloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_CloseEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCloseEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_CloseEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ContextMenuEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnContextMenuEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_TabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperTabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_TabletEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnTabletEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_TabletEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ActionEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnActionEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ActionEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DragEnterEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDragEnterEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DragEnterEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DragMoveEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDragMoveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DragMoveEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DragLeaveEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDragLeaveEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DropEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDropEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DropEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->showEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ShowEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->showEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnShowEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ShowEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_HideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperHideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_HideEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnHideEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_HideEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_NativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperNativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_NativeEvent_IsBase(true);
        return vqdesignerobjectinspectorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnNativeEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_NativeEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ChangeEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnChangeEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ChangeEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_Metric(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperMetric(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Metric_IsBase(true);
        return vqdesignerobjectinspectorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnMetric(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Metric_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_InitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperInitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_InitPainter_IsBase(true);
        vqdesignerobjectinspectorinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnInitPainter(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_InitPainter_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDesignerObjectInspectorInterface_Redirected(const QDesignerObjectInspectorInterface* self, QPoint* offset) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDesignerObjectInspectorInterface_SuperRedirected(const QDesignerObjectInspectorInterface* self, QPoint* offset) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Redirected_IsBase(true);
        return vqdesignerobjectinspectorinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnRedirected(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Redirected_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDesignerObjectInspectorInterface_SharedPainter(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDesignerObjectInspectorInterface_SuperSharedPainter(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SharedPainter_IsBase(true);
        return vqdesignerobjectinspectorinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSharedPainter(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SharedPainter_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_InputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperInputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_InputMethodEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnInputMethodEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_InputMethodEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDesignerObjectInspectorInterface_InputMethodQuery(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return new QVariant(vqdesignerobjectinspectorinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerObjectInspectorInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDesignerObjectInspectorInterface_SuperInputMethodQuery(const QDesignerObjectInspectorInterface* self, int param1) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_InputMethodQuery_IsBase(true);
        return new QVariant(vqdesignerobjectinspectorinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerObjectInspectorInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnInputMethodQuery(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_InputMethodQuery_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_FocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperFocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusNextPrevChild_IsBase(true);
        return vqdesignerobjectinspectorinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusNextPrevChild(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_EventFilter(QDesignerObjectInspectorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerObjectInspectorInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperEventFilter(QDesignerObjectInspectorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_EventFilter_IsBase(true);
        return vqdesignerobjectinspectorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerObjectInspectorInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnEventFilter(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_TimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperTimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_TimerEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnTimerEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ChildEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnChildEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_CustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperCustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_CustomEvent_IsBase(true);
        vqdesignerobjectinspectorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCustomEvent(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_ConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ConnectNotify_IsBase(true);
        vqdesignerobjectinspectorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnConnectNotify(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_DisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DisconnectNotify_IsBase(true);
        vqdesignerobjectinspectorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDisconnectNotify(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_UpdateMicroFocus(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperUpdateMicroFocus(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_UpdateMicroFocus_IsBase(true);
        vqdesignerobjectinspectorinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnUpdateMicroFocus(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_Create(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->create();
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->create();
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperCreate(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Create_IsBase(true);
        vqdesignerobjectinspectorinterface->create();
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnCreate(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Create_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerObjectInspectorInterface_Destroy(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->destroy();
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->destroy();
    }
}

// Base class handler implementation
void QDesignerObjectInspectorInterface_SuperDestroy(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Destroy_IsBase(true);
        vqdesignerobjectinspectorinterface->destroy();
    } else {
        ((VirtualQDesignerObjectInspectorInterface*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnDestroy(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Destroy_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_FocusNextChild(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperFocusNextChild(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusNextChild_IsBase(true);
        return vqdesignerobjectinspectorinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusNextChild(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusNextChild_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_FocusPreviousChild(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperFocusPreviousChild(QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusPreviousChild_IsBase(true);
        return vqdesignerobjectinspectorinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnFocusPreviousChild(QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = dynamic_cast<VirtualQDesignerObjectInspectorInterface*>(self);
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerObjectInspectorInterface_Sender(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->sender();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerObjectInspectorInterface_SuperSender(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Sender_IsBase(true);
        return vqdesignerobjectinspectorinterface->sender();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSender(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_SenderSignalIndex(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperSenderSignalIndex(const QDesignerObjectInspectorInterface* self) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerobjectinspectorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnSenderSignalIndex(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerObjectInspectorInterface_Receivers(const QDesignerObjectInspectorInterface* self, const char* signal) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerObjectInspectorInterface_SuperReceivers(const QDesignerObjectInspectorInterface* self, const char* signal) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Receivers_IsBase(true);
        return vqdesignerobjectinspectorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnReceivers(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerObjectInspectorInterface_IsSignalConnected(const QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerObjectInspectorInterface_SuperIsSignalConnected(const QDesignerObjectInspectorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_IsSignalConnected_IsBase(true);
        return vqdesignerobjectinspectorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnIsSignalConnected(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDesignerObjectInspectorInterface_GetDecodedMetricF(const QDesignerObjectInspectorInterface* self, int metricA, int metricB) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        return vqdesignerobjectinspectorinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDesignerObjectInspectorInterface_SuperGetDecodedMetricF(const QDesignerObjectInspectorInterface* self, int metricA, int metricB) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_GetDecodedMetricF_IsBase(true);
        return vqdesignerobjectinspectorinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerObjectInspectorInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerObjectInspectorInterface_OnGetDecodedMetricF(const QDesignerObjectInspectorInterface* self, intptr_t slot) {
    auto* vqdesignerobjectinspectorinterface = const_cast<VirtualQDesignerObjectInspectorInterface*>(dynamic_cast<const VirtualQDesignerObjectInspectorInterface*>(self));
    if (vqdesignerobjectinspectorinterface && vqdesignerobjectinspectorinterface->isVirtualQDesignerObjectInspectorInterface) {
        vqdesignerobjectinspectorinterface->setQDesignerObjectInspectorInterface_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDesignerObjectInspectorInterface::QDesignerObjectInspectorInterface_GetDecodedMetricF_Callback>(slot));
    }
}

void QDesignerObjectInspectorInterface_Delete(QDesignerObjectInspectorInterface* self) {
    delete self;
}
