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
#include <QByteArray>
#include <cstring>
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
    auto* vqdesigneractioneditorinterface = dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerActionEditorInterface*)self)->metaObject();
    }
}

void* QDesignerActionEditorInterface_Metacast(QDesignerActionEditorInterface* self, const char* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerActionEditorInterface_Metacall(QDesignerActionEditorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerFormEditorInterface* QDesignerActionEditorInterface_Core(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return self->core();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->core();
    }
}

void QDesignerActionEditorInterface_ManageAction(QDesignerActionEditorInterface* self, QAction* action) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->manageAction(action);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->manageAction(action);
    }
}

void QDesignerActionEditorInterface_UnmanageAction(QDesignerActionEditorInterface* self, QAction* action) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->unmanageAction(action);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->unmanageAction(action);
    }
}

void QDesignerActionEditorInterface_SetFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setFormWindow(formWindow);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->setFormWindow(formWindow);
    }
}

// Base class handler implementation
QMetaObject* QDesignerActionEditorInterface_QBaseMetaObject(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesigneractioneditorinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerActionEditorInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetaObject(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerActionEditorInterface_QBaseMetacast(QDesignerActionEditorInterface* self, const char* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Metacast_IsBase(true);
        return vqdesigneractioneditorinterface->qt_metacast(param1);
    } else {
        return self->QDesignerActionEditorInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetacast(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_QBaseMetacall(QDesignerActionEditorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Metacall_IsBase(true);
        return vqdesigneractioneditorinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerActionEditorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetacall(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerActionEditorInterface_QBaseCore(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Core_IsBase(true);
        return vqdesigneractioneditorinterface->core();
    } else {
        return self->QDesignerActionEditorInterface::core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCore(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Core_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Core_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseManageAction(QDesignerActionEditorInterface* self, QAction* action) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ManageAction_IsBase(true);
        vqdesigneractioneditorinterface->manageAction(action);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->manageAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnManageAction(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ManageAction_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ManageAction_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseUnmanageAction(QDesignerActionEditorInterface* self, QAction* action) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_UnmanageAction_IsBase(true);
        vqdesigneractioneditorinterface->unmanageAction(action);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->unmanageAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnUnmanageAction(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_UnmanageAction_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_UnmanageAction_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseSetFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SetFormWindow_IsBase(true);
        vqdesigneractioneditorinterface->setFormWindow(formWindow);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->setFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSetFormWindow(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SetFormWindow_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SetFormWindow_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerActionEditorInterface_DevType(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->devType();
    } else {
        return self->QDesignerActionEditorInterface::devType();
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_QBaseDevType(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DevType_IsBase(true);
        return vqdesigneractioneditorinterface->devType();
    } else {
        return self->QDesignerActionEditorInterface::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDevType(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DevType_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_SetVisible(QDesignerActionEditorInterface* self, bool visible) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setVisible(visible);
    } else {
        self->QDesignerActionEditorInterface::setVisible(visible);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseSetVisible(QDesignerActionEditorInterface* self, bool visible) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SetVisible_IsBase(true);
        vqdesigneractioneditorinterface->setVisible(visible);
    } else {
        self->QDesignerActionEditorInterface::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSetVisible(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SetVisible_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerActionEditorInterface_SizeHint(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return new QSize(vqdesigneractioneditorinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerActionEditorInterface*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerActionEditorInterface_QBaseSizeHint(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SizeHint_IsBase(true);
        return new QSize(vqdesigneractioneditorinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerActionEditorInterface*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSizeHint(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SizeHint_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerActionEditorInterface_MinimumSizeHint(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return new QSize(vqdesigneractioneditorinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerActionEditorInterface*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerActionEditorInterface_QBaseMinimumSizeHint(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MinimumSizeHint_IsBase(true);
        return new QSize(vqdesigneractioneditorinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerActionEditorInterface*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMinimumSizeHint(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerActionEditorInterface_HeightForWidth(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerActionEditorInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_QBaseHeightForWidth(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_HeightForWidth_IsBase(true);
        return vqdesigneractioneditorinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerActionEditorInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnHeightForWidth(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_HeightForWidth_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_HasHeightForWidth(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->hasHeightForWidth();
    } else {
        return self->QDesignerActionEditorInterface::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseHasHeightForWidth(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_HasHeightForWidth_IsBase(true);
        return vqdesigneractioneditorinterface->hasHeightForWidth();
    } else {
        return self->QDesignerActionEditorInterface::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnHasHeightForWidth(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDesignerActionEditorInterface_PaintEngine(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->paintEngine();
    } else {
        return self->QDesignerActionEditorInterface::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDesignerActionEditorInterface_QBasePaintEngine(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_PaintEngine_IsBase(true);
        return vqdesigneractioneditorinterface->paintEngine();
    } else {
        return self->QDesignerActionEditorInterface::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnPaintEngine(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_PaintEngine_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_Event(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->event(event);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->event(event);
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Event_IsBase(true);
        return vqdesigneractioneditorinterface->event(event);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Event_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseMousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MousePressEvent_IsBase(true);
        vqdesigneractioneditorinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMousePressEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MousePressEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseMouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MouseReleaseEvent_IsBase(true);
        vqdesigneractioneditorinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMouseReleaseEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseMouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MouseDoubleClickEvent_IsBase(true);
        vqdesigneractioneditorinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMouseDoubleClickEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseMouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MouseMoveEvent_IsBase(true);
        vqdesigneractioneditorinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMouseMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_WheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseWheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_WheelEvent_IsBase(true);
        vqdesigneractioneditorinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnWheelEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_WheelEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_KeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseKeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_KeyPressEvent_IsBase(true);
        vqdesigneractioneditorinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnKeyPressEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_KeyPressEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_KeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseKeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_KeyReleaseEvent_IsBase(true);
        vqdesigneractioneditorinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnKeyReleaseEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_FocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseFocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusInEvent_IsBase(true);
        vqdesigneractioneditorinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusInEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusInEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_FocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseFocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusOutEvent_IsBase(true);
        vqdesigneractioneditorinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusOutEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusOutEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_EnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseEnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_EnterEvent_IsBase(true);
        vqdesigneractioneditorinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnEnterEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_EnterEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_LeaveEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseLeaveEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_LeaveEvent_IsBase(true);
        vqdesigneractioneditorinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnLeaveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_LeaveEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_PaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBasePaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_PaintEvent_IsBase(true);
        vqdesigneractioneditorinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnPaintEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_PaintEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_MoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseMoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MoveEvent_IsBase(true);
        vqdesigneractioneditorinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_MoveEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ResizeEvent_IsBase(true);
        vqdesigneractioneditorinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnResizeEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ResizeEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_CloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseCloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_CloseEvent_IsBase(true);
        vqdesigneractioneditorinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCloseEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_CloseEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ContextMenuEvent_IsBase(true);
        vqdesigneractioneditorinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnContextMenuEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_TabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseTabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_TabletEvent_IsBase(true);
        vqdesigneractioneditorinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnTabletEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_TabletEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ActionEvent_IsBase(true);
        vqdesigneractioneditorinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnActionEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ActionEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseDragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DragEnterEvent_IsBase(true);
        vqdesigneractioneditorinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDragEnterEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DragEnterEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseDragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DragMoveEvent_IsBase(true);
        vqdesigneractioneditorinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDragMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DragMoveEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseDragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DragLeaveEvent_IsBase(true);
        vqdesigneractioneditorinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDragLeaveEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DropEvent(QDesignerActionEditorInterface* self, QDropEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseDropEvent(QDesignerActionEditorInterface* self, QDropEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DropEvent_IsBase(true);
        vqdesigneractioneditorinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDropEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DropEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->showEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ShowEvent_IsBase(true);
        vqdesigneractioneditorinterface->showEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnShowEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ShowEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_HideEvent(QDesignerActionEditorInterface* self, QHideEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseHideEvent(QDesignerActionEditorInterface* self, QHideEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_HideEvent_IsBase(true);
        vqdesigneractioneditorinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnHideEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_HideEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_NativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseNativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_NativeEvent_IsBase(true);
        return vqdesigneractioneditorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnNativeEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_NativeEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ChangeEvent_IsBase(true);
        vqdesigneractioneditorinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnChangeEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ChangeEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerActionEditorInterface_Metric(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_QBaseMetric(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Metric_IsBase(true);
        return vqdesigneractioneditorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnMetric(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Metric_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_InitPainter(const QDesignerActionEditorInterface* self, QPainter* painter) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseInitPainter(const QDesignerActionEditorInterface* self, QPainter* painter) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_InitPainter_IsBase(true);
        vqdesigneractioneditorinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnInitPainter(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_InitPainter_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDesignerActionEditorInterface_Redirected(const QDesignerActionEditorInterface* self, QPoint* offset) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDesignerActionEditorInterface_QBaseRedirected(const QDesignerActionEditorInterface* self, QPoint* offset) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Redirected_IsBase(true);
        return vqdesigneractioneditorinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnRedirected(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Redirected_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDesignerActionEditorInterface_SharedPainter(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDesignerActionEditorInterface_QBaseSharedPainter(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SharedPainter_IsBase(true);
        return vqdesigneractioneditorinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSharedPainter(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SharedPainter_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_InputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseInputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_InputMethodEvent_IsBase(true);
        vqdesigneractioneditorinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnInputMethodEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_InputMethodEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDesignerActionEditorInterface_InputMethodQuery(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return new QVariant(vqdesigneractioneditorinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerActionEditorInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDesignerActionEditorInterface_QBaseInputMethodQuery(const QDesignerActionEditorInterface* self, int param1) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_InputMethodQuery_IsBase(true);
        return new QVariant(vqdesigneractioneditorinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerActionEditorInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnInputMethodQuery(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_InputMethodQuery_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_FocusNextPrevChild(QDesignerActionEditorInterface* self, bool next) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseFocusNextPrevChild(QDesignerActionEditorInterface* self, bool next) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusNextPrevChild_IsBase(true);
        return vqdesigneractioneditorinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusNextPrevChild(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_EventFilter(QDesignerActionEditorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerActionEditorInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseEventFilter(QDesignerActionEditorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_EventFilter_IsBase(true);
        return vqdesigneractioneditorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerActionEditorInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnEventFilter(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_TimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseTimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_TimerEvent_IsBase(true);
        vqdesigneractioneditorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnTimerEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ChildEvent_IsBase(true);
        vqdesigneractioneditorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnChildEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_CustomEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseCustomEvent(QDesignerActionEditorInterface* self, QEvent* event) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_CustomEvent_IsBase(true);
        vqdesigneractioneditorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCustomEvent(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_ConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ConnectNotify_IsBase(true);
        vqdesigneractioneditorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnConnectNotify(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_DisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseDisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DisconnectNotify_IsBase(true);
        vqdesigneractioneditorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDisconnectNotify(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_UpdateMicroFocus(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseUpdateMicroFocus(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_UpdateMicroFocus_IsBase(true);
        vqdesigneractioneditorinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnUpdateMicroFocus(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_Create(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->create();
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->create();
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseCreate(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Create_IsBase(true);
        vqdesigneractioneditorinterface->create();
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnCreate(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Create_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerActionEditorInterface_Destroy(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->destroy();
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->destroy();
    }
}

// Base class handler implementation
void QDesignerActionEditorInterface_QBaseDestroy(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Destroy_IsBase(true);
        vqdesigneractioneditorinterface->destroy();
    } else {
        ((VirtualQDesignerActionEditorInterface*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnDestroy(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Destroy_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_FocusNextChild(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseFocusNextChild(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusNextChild_IsBase(true);
        return vqdesigneractioneditorinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusNextChild(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusNextChild_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_FocusPreviousChild(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseFocusPreviousChild(QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusPreviousChild_IsBase(true);
        return vqdesigneractioneditorinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnFocusPreviousChild(QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = dynamic_cast<VirtualQDesignerActionEditorInterface*>(self);
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerActionEditorInterface_Sender(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->sender();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerActionEditorInterface_QBaseSender(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Sender_IsBase(true);
        return vqdesigneractioneditorinterface->sender();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSender(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerActionEditorInterface_SenderSignalIndex(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_QBaseSenderSignalIndex(const QDesignerActionEditorInterface* self) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SenderSignalIndex_IsBase(true);
        return vqdesigneractioneditorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnSenderSignalIndex(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerActionEditorInterface_Receivers(const QDesignerActionEditorInterface* self, const char* signal) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerActionEditorInterface_QBaseReceivers(const QDesignerActionEditorInterface* self, const char* signal) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Receivers_IsBase(true);
        return vqdesigneractioneditorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnReceivers(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerActionEditorInterface_IsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerActionEditorInterface_QBaseIsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_IsSignalConnected_IsBase(true);
        return vqdesigneractioneditorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnIsSignalConnected(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDesignerActionEditorInterface_GetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        return vqdesigneractioneditorinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDesignerActionEditorInterface_QBaseGetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_GetDecodedMetricF_IsBase(true);
        return vqdesigneractioneditorinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerActionEditorInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerActionEditorInterface_OnGetDecodedMetricF(const QDesignerActionEditorInterface* self, intptr_t slot) {
    auto* vqdesigneractioneditorinterface = const_cast<VirtualQDesignerActionEditorInterface*>(dynamic_cast<const VirtualQDesignerActionEditorInterface*>(self));
    if (vqdesigneractioneditorinterface && vqdesigneractioneditorinterface->isVirtualQDesignerActionEditorInterface) {
        vqdesigneractioneditorinterface->setQDesignerActionEditorInterface_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDesignerActionEditorInterface::QDesignerActionEditorInterface_GetDecodedMetricF_Callback>(slot));
    }
}

void QDesignerActionEditorInterface_Delete(QDesignerActionEditorInterface* self) {
    delete self;
}
