#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerPropertyEditorInterface>
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
#include <abstractpropertyeditor.h>
#include "libabstractpropertyeditor.h"
#include "libabstractpropertyeditor.hxx"

QDesignerPropertyEditorInterface* QDesignerPropertyEditorInterface_new(QWidget* parent) {
    return new VirtualQDesignerPropertyEditorInterface(parent);
}

QDesignerPropertyEditorInterface* QDesignerPropertyEditorInterface_new2(QWidget* parent, int flags) {
    return new VirtualQDesignerPropertyEditorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDesignerPropertyEditorInterface_MetaObject(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerPropertyEditorInterface*)self)->metaObject();
    }
}

void* QDesignerPropertyEditorInterface_Metacast(QDesignerPropertyEditorInterface* self, const char* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerPropertyEditorInterface_Metacall(QDesignerPropertyEditorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_Core(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return self->core();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->core();
    }
}

bool QDesignerPropertyEditorInterface_IsReadOnly(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->isReadOnly();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->isReadOnly();
    }
}

QObject* QDesignerPropertyEditorInterface_Object(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->object();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->object();
    }
}

libqt_string QDesignerPropertyEditorInterface_CurrentPropertyName(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        QString _ret = vqdesignerpropertyeditorinterface->currentPropertyName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerPropertyEditorInterface*)self)->currentPropertyName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void QDesignerPropertyEditorInterface_PropertyChanged(QDesignerPropertyEditorInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->propertyChanged(name_QString, *value);
}

void QDesignerPropertyEditorInterface_Connect_PropertyChanged(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerPropertyEditorInterface*, const char*, QVariant*) = reinterpret_cast<void (*)(QDesignerPropertyEditorInterface*, const char*, QVariant*)>(slot);
    QDesignerPropertyEditorInterface::connect(self, &QDesignerPropertyEditorInterface::propertyChanged, [self, slotFunc](const QString& name, const QVariant& value) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        auto name_str_len = name_b.length();
        const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
        memcpy((void*)name_str, name_b.data(), name_str_len);
        ((char*)name_str)[name_str_len] = '\0';
        const char* sigval1 = name_str;
        const QVariant& value_ret = value;
        // Cast returned reference into pointer
        QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
        slotFunc(self, sigval1, sigval2);
        libqt_free(name_str);
    });
}

void QDesignerPropertyEditorInterface_SetObject(QDesignerPropertyEditorInterface* self, QObject* object) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setObject(object);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->setObject(object);
    }
}

void QDesignerPropertyEditorInterface_SetPropertyValue(QDesignerPropertyEditorInterface* self, const libqt_string name, const QVariant* value, bool changed) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setPropertyValue(name_QString, *value, changed);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->setPropertyValue(name_QString, *value, changed);
    }
}

void QDesignerPropertyEditorInterface_SetReadOnly(QDesignerPropertyEditorInterface* self, bool readOnly) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setReadOnly(readOnly);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->setReadOnly(readOnly);
    }
}

// Base class handler implementation
QMetaObject* QDesignerPropertyEditorInterface_QBaseMetaObject(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerpropertyeditorinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerPropertyEditorInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetaObject(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerPropertyEditorInterface_QBaseMetacast(QDesignerPropertyEditorInterface* self, const char* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Metacast_IsBase(true);
        return vqdesignerpropertyeditorinterface->qt_metacast(param1);
    } else {
        return self->QDesignerPropertyEditorInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetacast(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_QBaseMetacall(QDesignerPropertyEditorInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Metacall_IsBase(true);
        return vqdesignerpropertyeditorinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerPropertyEditorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetacall(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_QBaseCore(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Core_IsBase(true);
        return vqdesignerpropertyeditorinterface->core();
    } else {
        return self->QDesignerPropertyEditorInterface::core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCore(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Core_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Core_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseIsReadOnly(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_IsReadOnly_IsBase(true);
        return vqdesignerpropertyeditorinterface->isReadOnly();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->isReadOnly();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnIsReadOnly(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_IsReadOnly_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_IsReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
QObject* QDesignerPropertyEditorInterface_QBaseObject(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Object_IsBase(true);
        return vqdesignerpropertyeditorinterface->object();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->object();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnObject(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Object_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Object_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerPropertyEditorInterface_QBaseCurrentPropertyName(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_CurrentPropertyName_IsBase(true);
        QString _ret = vqdesignerpropertyeditorinterface->currentPropertyName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerPropertyEditorInterface*)self)->currentPropertyName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCurrentPropertyName(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_CurrentPropertyName_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_CurrentPropertyName_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseSetObject(QDesignerPropertyEditorInterface* self, QObject* object) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetObject_IsBase(true);
        vqdesignerpropertyeditorinterface->setObject(object);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->setObject(object);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetObject(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetObject_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetObject_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseSetPropertyValue(QDesignerPropertyEditorInterface* self, const libqt_string name, const QVariant* value, bool changed) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetPropertyValue_IsBase(true);
        vqdesignerpropertyeditorinterface->setPropertyValue(name_QString, *value, changed);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->setPropertyValue(name_QString, *value, changed);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetPropertyValue(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetPropertyValue_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetPropertyValue_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseSetReadOnly(QDesignerPropertyEditorInterface* self, bool readOnly) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetReadOnly_IsBase(true);
        vqdesignerpropertyeditorinterface->setReadOnly(readOnly);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetReadOnly(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetReadOnly_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetReadOnly_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_DevType(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->devType();
    } else {
        return self->QDesignerPropertyEditorInterface::devType();
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_QBaseDevType(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DevType_IsBase(true);
        return vqdesignerpropertyeditorinterface->devType();
    } else {
        return self->QDesignerPropertyEditorInterface::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDevType(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DevType_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_SetVisible(QDesignerPropertyEditorInterface* self, bool visible) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setVisible(visible);
    } else {
        self->QDesignerPropertyEditorInterface::setVisible(visible);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseSetVisible(QDesignerPropertyEditorInterface* self, bool visible) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetVisible_IsBase(true);
        vqdesignerpropertyeditorinterface->setVisible(visible);
    } else {
        self->QDesignerPropertyEditorInterface::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetVisible(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SetVisible_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerPropertyEditorInterface_SizeHint(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return new QSize(vqdesignerpropertyeditorinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerPropertyEditorInterface*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerPropertyEditorInterface_QBaseSizeHint(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SizeHint_IsBase(true);
        return new QSize(vqdesignerpropertyeditorinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerPropertyEditorInterface*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSizeHint(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SizeHint_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerPropertyEditorInterface_MinimumSizeHint(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return new QSize(vqdesignerpropertyeditorinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerPropertyEditorInterface*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerPropertyEditorInterface_QBaseMinimumSizeHint(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MinimumSizeHint_IsBase(true);
        return new QSize(vqdesignerpropertyeditorinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerPropertyEditorInterface*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMinimumSizeHint(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_HeightForWidth(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerPropertyEditorInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_QBaseHeightForWidth(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_HeightForWidth_IsBase(true);
        return vqdesignerpropertyeditorinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerPropertyEditorInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnHeightForWidth(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_HeightForWidth_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_HasHeightForWidth(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->hasHeightForWidth();
    } else {
        return self->QDesignerPropertyEditorInterface::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseHasHeightForWidth(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_HasHeightForWidth_IsBase(true);
        return vqdesignerpropertyeditorinterface->hasHeightForWidth();
    } else {
        return self->QDesignerPropertyEditorInterface::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnHasHeightForWidth(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDesignerPropertyEditorInterface_PaintEngine(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->paintEngine();
    } else {
        return self->QDesignerPropertyEditorInterface::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDesignerPropertyEditorInterface_QBasePaintEngine(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_PaintEngine_IsBase(true);
        return vqdesignerpropertyeditorinterface->paintEngine();
    } else {
        return self->QDesignerPropertyEditorInterface::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnPaintEngine(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_PaintEngine_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_Event(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->event(event);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->event(event);
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Event_IsBase(true);
        return vqdesignerpropertyeditorinterface->event(event);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Event_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseMousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MousePressEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMousePressEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MousePressEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseMouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MouseReleaseEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMouseReleaseEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseMouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MouseDoubleClickEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseMouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MouseMoveEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMouseMoveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_WheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseWheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_WheelEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnWheelEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_WheelEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_KeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseKeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_KeyPressEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnKeyPressEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_KeyPressEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_KeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseKeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_KeyReleaseEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnKeyReleaseEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_FocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseFocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusInEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusInEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusInEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_FocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseFocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusOutEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusOutEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusOutEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_EnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseEnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_EnterEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnEnterEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_EnterEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_LeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseLeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_LeaveEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnLeaveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_LeaveEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_PaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBasePaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_PaintEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnPaintEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_PaintEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseMoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MoveEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMoveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_MoveEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ResizeEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnResizeEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ResizeEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_CloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseCloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_CloseEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCloseEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_CloseEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ContextMenuEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnContextMenuEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_TabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseTabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_TabletEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnTabletEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_TabletEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ActionEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnActionEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ActionEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseDragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DragEnterEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDragEnterEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DragEnterEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseDragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DragMoveEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDragMoveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DragMoveEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseDragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DragLeaveEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDragLeaveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseDropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DropEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDropEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DropEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->showEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ShowEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->showEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnShowEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ShowEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_HideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseHideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_HideEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnHideEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_HideEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_NativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseNativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_NativeEvent_IsBase(true);
        return vqdesignerpropertyeditorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnNativeEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_NativeEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ChangeEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnChangeEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ChangeEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_Metric(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_QBaseMetric(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Metric_IsBase(true);
        return vqdesignerpropertyeditorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetric(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Metric_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_InitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseInitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_InitPainter_IsBase(true);
        vqdesignerpropertyeditorinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnInitPainter(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_InitPainter_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDesignerPropertyEditorInterface_Redirected(const QDesignerPropertyEditorInterface* self, QPoint* offset) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDesignerPropertyEditorInterface_QBaseRedirected(const QDesignerPropertyEditorInterface* self, QPoint* offset) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Redirected_IsBase(true);
        return vqdesignerpropertyeditorinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnRedirected(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Redirected_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDesignerPropertyEditorInterface_SharedPainter(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDesignerPropertyEditorInterface_QBaseSharedPainter(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SharedPainter_IsBase(true);
        return vqdesignerpropertyeditorinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSharedPainter(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SharedPainter_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_InputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseInputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_InputMethodEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnInputMethodEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_InputMethodEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDesignerPropertyEditorInterface_InputMethodQuery(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return new QVariant(vqdesignerpropertyeditorinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerPropertyEditorInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDesignerPropertyEditorInterface_QBaseInputMethodQuery(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_InputMethodQuery_IsBase(true);
        return new QVariant(vqdesignerpropertyeditorinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerPropertyEditorInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnInputMethodQuery(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_InputMethodQuery_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_FocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseFocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusNextPrevChild_IsBase(true);
        return vqdesignerpropertyeditorinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusNextPrevChild(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_EventFilter(QDesignerPropertyEditorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerPropertyEditorInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseEventFilter(QDesignerPropertyEditorInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_EventFilter_IsBase(true);
        return vqdesignerpropertyeditorinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerPropertyEditorInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnEventFilter(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_TimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseTimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_TimerEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnTimerEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ChildEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->childEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnChildEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_CustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseCustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_CustomEvent_IsBase(true);
        vqdesignerpropertyeditorinterface->customEvent(event);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCustomEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ConnectNotify_IsBase(true);
        vqdesignerpropertyeditorinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnConnectNotify(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseDisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DisconnectNotify_IsBase(true);
        vqdesignerpropertyeditorinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDisconnectNotify(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_UpdateMicroFocus(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseUpdateMicroFocus(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_UpdateMicroFocus_IsBase(true);
        vqdesignerpropertyeditorinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnUpdateMicroFocus(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_Create(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->create();
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->create();
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseCreate(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Create_IsBase(true);
        vqdesignerpropertyeditorinterface->create();
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCreate(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Create_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_Destroy(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->destroy();
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->destroy();
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_QBaseDestroy(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Destroy_IsBase(true);
        vqdesignerpropertyeditorinterface->destroy();
    } else {
        ((VirtualQDesignerPropertyEditorInterface*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDestroy(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Destroy_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_FocusNextChild(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseFocusNextChild(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusNextChild_IsBase(true);
        return vqdesignerpropertyeditorinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusNextChild(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusNextChild_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_FocusPreviousChild(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseFocusPreviousChild(QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusPreviousChild_IsBase(true);
        return vqdesignerpropertyeditorinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusPreviousChild(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerPropertyEditorInterface_Sender(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->sender();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerPropertyEditorInterface_QBaseSender(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Sender_IsBase(true);
        return vqdesignerpropertyeditorinterface->sender();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSender(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_SenderSignalIndex(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_QBaseSenderSignalIndex(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerpropertyeditorinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSenderSignalIndex(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_Receivers(const QDesignerPropertyEditorInterface* self, const char* signal) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_QBaseReceivers(const QDesignerPropertyEditorInterface* self, const char* signal) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Receivers_IsBase(true);
        return vqdesignerpropertyeditorinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnReceivers(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_IsSignalConnected(const QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_QBaseIsSignalConnected(const QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_IsSignalConnected_IsBase(true);
        return vqdesignerpropertyeditorinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnIsSignalConnected(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDesignerPropertyEditorInterface_GetDecodedMetricF(const QDesignerPropertyEditorInterface* self, int metricA, int metricB) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        return vqdesignerpropertyeditorinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDesignerPropertyEditorInterface_QBaseGetDecodedMetricF(const QDesignerPropertyEditorInterface* self, int metricA, int metricB) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_GetDecodedMetricF_IsBase(true);
        return vqdesignerpropertyeditorinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerPropertyEditorInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnGetDecodedMetricF(const QDesignerPropertyEditorInterface* self, intptr_t slot) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface && vqdesignerpropertyeditorinterface->isVirtualQDesignerPropertyEditorInterface) {
        vqdesignerpropertyeditorinterface->setQDesignerPropertyEditorInterface_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_GetDecodedMetricF_Callback>(slot));
    }
}

void QDesignerPropertyEditorInterface_Delete(QDesignerPropertyEditorInterface* self) {
    delete self;
}
