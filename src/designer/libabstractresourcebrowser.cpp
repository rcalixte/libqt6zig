#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerResourceBrowserInterface>
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
#include <abstractresourcebrowser.h>
#include "libabstractresourcebrowser.h"
#include "libabstractresourcebrowser.hxx"

QDesignerResourceBrowserInterface* QDesignerResourceBrowserInterface_new(QWidget* parent) {
    return new VirtualQDesignerResourceBrowserInterface(parent);
}

QDesignerResourceBrowserInterface* QDesignerResourceBrowserInterface_new2() {
    return new VirtualQDesignerResourceBrowserInterface();
}

QMetaObject* QDesignerResourceBrowserInterface_MetaObject(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerResourceBrowserInterface*)self)->metaObject();
    }
}

void* QDesignerResourceBrowserInterface_Metacast(QDesignerResourceBrowserInterface* self, const char* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerResourceBrowserInterface_Metacall(QDesignerResourceBrowserInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QDesignerResourceBrowserInterface_SetCurrentPath(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setCurrentPath(filePath_QString);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->setCurrentPath(filePath_QString);
    }
}

libqt_string QDesignerResourceBrowserInterface_CurrentPath(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        QString _ret = vqdesignerresourcebrowserinterface->currentPath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerResourceBrowserInterface*)self)->currentPath();
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

void QDesignerResourceBrowserInterface_CurrentPathChanged(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->currentPathChanged(filePath_QString);
}

void QDesignerResourceBrowserInterface_Connect_CurrentPathChanged(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerResourceBrowserInterface*, const char*) = reinterpret_cast<void (*)(QDesignerResourceBrowserInterface*, const char*)>(slot);
    QDesignerResourceBrowserInterface::connect(self, &QDesignerResourceBrowserInterface::currentPathChanged, [self, slotFunc](const QString& filePath) {
        const QString filePath_ret = filePath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray filePath_b = filePath_ret.toUtf8();
        auto filePath_str_len = filePath_b.length();
        const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
        memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
        ((char*)filePath_str)[filePath_str_len] = '\0';
        const char* sigval1 = filePath_str;
        slotFunc(self, sigval1);
        libqt_free(filePath_str);
    });
}

void QDesignerResourceBrowserInterface_PathActivated(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->pathActivated(filePath_QString);
}

void QDesignerResourceBrowserInterface_Connect_PathActivated(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerResourceBrowserInterface*, const char*) = reinterpret_cast<void (*)(QDesignerResourceBrowserInterface*, const char*)>(slot);
    QDesignerResourceBrowserInterface::connect(self, &QDesignerResourceBrowserInterface::pathActivated, [self, slotFunc](const QString& filePath) {
        const QString filePath_ret = filePath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray filePath_b = filePath_ret.toUtf8();
        auto filePath_str_len = filePath_b.length();
        const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
        memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
        ((char*)filePath_str)[filePath_str_len] = '\0';
        const char* sigval1 = filePath_str;
        slotFunc(self, sigval1);
        libqt_free(filePath_str);
    });
}

// Base class handler implementation
QMetaObject* QDesignerResourceBrowserInterface_SuperMetaObject(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerresourcebrowserinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerResourceBrowserInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetaObject(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerResourceBrowserInterface_SuperMetacast(QDesignerResourceBrowserInterface* self, const char* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Metacast_IsBase(true);
        return vqdesignerresourcebrowserinterface->qt_metacast(param1);
    } else {
        return self->QDesignerResourceBrowserInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetacast(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperMetacall(QDesignerResourceBrowserInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Metacall_IsBase(true);
        return vqdesignerresourcebrowserinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerResourceBrowserInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetacall(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperSetCurrentPath(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SetCurrentPath_IsBase(true);
        vqdesignerresourcebrowserinterface->setCurrentPath(filePath_QString);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->setCurrentPath(filePath_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSetCurrentPath(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SetCurrentPath_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SetCurrentPath_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerResourceBrowserInterface_SuperCurrentPath(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_CurrentPath_IsBase(true);
        QString _ret = vqdesignerresourcebrowserinterface->currentPath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerResourceBrowserInterface*)self)->currentPath();
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
void QDesignerResourceBrowserInterface_OnCurrentPath(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_CurrentPath_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_CurrentPath_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_DevType(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->devType();
    } else {
        return self->QDesignerResourceBrowserInterface::devType();
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperDevType(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DevType_IsBase(true);
        return vqdesignerresourcebrowserinterface->devType();
    } else {
        return self->QDesignerResourceBrowserInterface::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDevType(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DevType_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_SetVisible(QDesignerResourceBrowserInterface* self, bool visible) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setVisible(visible);
    } else {
        self->QDesignerResourceBrowserInterface::setVisible(visible);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperSetVisible(QDesignerResourceBrowserInterface* self, bool visible) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SetVisible_IsBase(true);
        vqdesignerresourcebrowserinterface->setVisible(visible);
    } else {
        self->QDesignerResourceBrowserInterface::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSetVisible(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SetVisible_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerResourceBrowserInterface_SizeHint(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return new QSize(vqdesignerresourcebrowserinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerResourceBrowserInterface*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerResourceBrowserInterface_SuperSizeHint(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SizeHint_IsBase(true);
        return new QSize(vqdesignerresourcebrowserinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerResourceBrowserInterface*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSizeHint(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SizeHint_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerResourceBrowserInterface_MinimumSizeHint(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return new QSize(vqdesignerresourcebrowserinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerResourceBrowserInterface*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerResourceBrowserInterface_SuperMinimumSizeHint(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MinimumSizeHint_IsBase(true);
        return new QSize(vqdesignerresourcebrowserinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerResourceBrowserInterface*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMinimumSizeHint(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_HeightForWidth(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerResourceBrowserInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperHeightForWidth(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_HeightForWidth_IsBase(true);
        return vqdesignerresourcebrowserinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerResourceBrowserInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnHeightForWidth(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_HeightForWidth_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_HasHeightForWidth(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->hasHeightForWidth();
    } else {
        return self->QDesignerResourceBrowserInterface::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperHasHeightForWidth(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_HasHeightForWidth_IsBase(true);
        return vqdesignerresourcebrowserinterface->hasHeightForWidth();
    } else {
        return self->QDesignerResourceBrowserInterface::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnHasHeightForWidth(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDesignerResourceBrowserInterface_PaintEngine(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->paintEngine();
    } else {
        return self->QDesignerResourceBrowserInterface::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDesignerResourceBrowserInterface_SuperPaintEngine(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_PaintEngine_IsBase(true);
        return vqdesignerresourcebrowserinterface->paintEngine();
    } else {
        return self->QDesignerResourceBrowserInterface::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnPaintEngine(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_PaintEngine_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_Event(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->event(event);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->event(event);
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Event_IsBase(true);
        return vqdesignerresourcebrowserinterface->event(event);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Event_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MousePressEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMousePressEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MousePressEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MouseReleaseEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMouseReleaseEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MouseDoubleClickEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MouseMoveEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMouseMoveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_WheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperWheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_WheelEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnWheelEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_WheelEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_KeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperKeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_KeyPressEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnKeyPressEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_KeyPressEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_KeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperKeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_KeyReleaseEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnKeyReleaseEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_FocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperFocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusInEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusInEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusInEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_FocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperFocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusOutEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusOutEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusOutEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_EnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperEnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_EnterEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnEnterEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_EnterEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_LeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperLeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_LeaveEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnLeaveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_LeaveEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_PaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperPaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_PaintEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnPaintEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_PaintEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MoveEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMoveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_MoveEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ResizeEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnResizeEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ResizeEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_CloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperCloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_CloseEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnCloseEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_CloseEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ContextMenuEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnContextMenuEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_TabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperTabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_TabletEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnTabletEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_TabletEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ActionEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnActionEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ActionEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DragEnterEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDragEnterEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DragEnterEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DragMoveEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDragMoveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DragMoveEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DragLeaveEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDragLeaveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DropEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDropEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DropEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->showEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ShowEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->showEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnShowEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ShowEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_HideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperHideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_HideEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnHideEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_HideEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_NativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperNativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_NativeEvent_IsBase(true);
        return vqdesignerresourcebrowserinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnNativeEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_NativeEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ChangeEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnChangeEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ChangeEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_Metric(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperMetric(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Metric_IsBase(true);
        return vqdesignerresourcebrowserinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetric(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Metric_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_InitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperInitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_InitPainter_IsBase(true);
        vqdesignerresourcebrowserinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnInitPainter(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_InitPainter_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDesignerResourceBrowserInterface_Redirected(const QDesignerResourceBrowserInterface* self, QPoint* offset) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDesignerResourceBrowserInterface_SuperRedirected(const QDesignerResourceBrowserInterface* self, QPoint* offset) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Redirected_IsBase(true);
        return vqdesignerresourcebrowserinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnRedirected(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Redirected_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDesignerResourceBrowserInterface_SharedPainter(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDesignerResourceBrowserInterface_SuperSharedPainter(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SharedPainter_IsBase(true);
        return vqdesignerresourcebrowserinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSharedPainter(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SharedPainter_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_InputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperInputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_InputMethodEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnInputMethodEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_InputMethodEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDesignerResourceBrowserInterface_InputMethodQuery(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return new QVariant(vqdesignerresourcebrowserinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerResourceBrowserInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDesignerResourceBrowserInterface_SuperInputMethodQuery(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_InputMethodQuery_IsBase(true);
        return new QVariant(vqdesignerresourcebrowserinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerResourceBrowserInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnInputMethodQuery(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_InputMethodQuery_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_FocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperFocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusNextPrevChild_IsBase(true);
        return vqdesignerresourcebrowserinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusNextPrevChild(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_EventFilter(QDesignerResourceBrowserInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerResourceBrowserInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperEventFilter(QDesignerResourceBrowserInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_EventFilter_IsBase(true);
        return vqdesignerresourcebrowserinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerResourceBrowserInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnEventFilter(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_TimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperTimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_TimerEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnTimerEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->childEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ChildEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->childEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnChildEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_CustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->customEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperCustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_CustomEvent_IsBase(true);
        vqdesignerresourcebrowserinterface->customEvent(event);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnCustomEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ConnectNotify_IsBase(true);
        vqdesignerresourcebrowserinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnConnectNotify(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DisconnectNotify_IsBase(true);
        vqdesignerresourcebrowserinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDisconnectNotify(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_UpdateMicroFocus(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperUpdateMicroFocus(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_UpdateMicroFocus_IsBase(true);
        vqdesignerresourcebrowserinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnUpdateMicroFocus(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_Create(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->create();
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->create();
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperCreate(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Create_IsBase(true);
        vqdesignerresourcebrowserinterface->create();
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnCreate(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Create_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_Destroy(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->destroy();
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->destroy();
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDestroy(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Destroy_IsBase(true);
        vqdesignerresourcebrowserinterface->destroy();
    } else {
        ((VirtualQDesignerResourceBrowserInterface*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDestroy(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Destroy_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_FocusNextChild(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperFocusNextChild(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusNextChild_IsBase(true);
        return vqdesignerresourcebrowserinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusNextChild(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusNextChild_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_FocusPreviousChild(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperFocusPreviousChild(QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusPreviousChild_IsBase(true);
        return vqdesignerresourcebrowserinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusPreviousChild(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerResourceBrowserInterface_Sender(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->sender();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerResourceBrowserInterface_SuperSender(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Sender_IsBase(true);
        return vqdesignerresourcebrowserinterface->sender();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSender(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_SenderSignalIndex(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperSenderSignalIndex(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerresourcebrowserinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSenderSignalIndex(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_Receivers(const QDesignerResourceBrowserInterface* self, const char* signal) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperReceivers(const QDesignerResourceBrowserInterface* self, const char* signal) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Receivers_IsBase(true);
        return vqdesignerresourcebrowserinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnReceivers(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_IsSignalConnected(const QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperIsSignalConnected(const QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_IsSignalConnected_IsBase(true);
        return vqdesignerresourcebrowserinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnIsSignalConnected(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDesignerResourceBrowserInterface_GetDecodedMetricF(const QDesignerResourceBrowserInterface* self, int metricA, int metricB) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        return vqdesignerresourcebrowserinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDesignerResourceBrowserInterface_SuperGetDecodedMetricF(const QDesignerResourceBrowserInterface* self, int metricA, int metricB) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_GetDecodedMetricF_IsBase(true);
        return vqdesignerresourcebrowserinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerResourceBrowserInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnGetDecodedMetricF(const QDesignerResourceBrowserInterface* self, intptr_t slot) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface && vqdesignerresourcebrowserinterface->isVirtualQDesignerResourceBrowserInterface) {
        vqdesignerresourcebrowserinterface->setQDesignerResourceBrowserInterface_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_GetDecodedMetricF_Callback>(slot));
    }
}

void QDesignerResourceBrowserInterface_Delete(QDesignerResourceBrowserInterface* self) {
    delete self;
}
