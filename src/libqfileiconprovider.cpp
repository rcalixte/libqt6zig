#include <QAbstractFileIconProvider>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfileiconprovider.h>
#include "libqfileiconprovider.h"
#include "libqfileiconprovider.hxx"

QFileIconProvider* QFileIconProvider_new() {
    return new VirtualQFileIconProvider();
}

QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal) {
    auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
    } else {
        return new QIcon(((VirtualQFileIconProvider*)self)->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileIconProvider_OnIcon(const QFileIconProvider* self, intptr_t slot) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Icon_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_Icon_Callback>(slot));
    }
}

// Virtual base class handler implementation
QIcon* QFileIconProvider_QBaseIcon(const QFileIconProvider* self, int typeVal) {
    auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Icon_IsBase(true);
        return new QIcon(vqfileiconprovider->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
    } else {
        return new QIcon(((VirtualQFileIconProvider*)self)->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
    }
}

QIcon* QFileIconProvider_Icon2(const QFileIconProvider* self, const QFileInfo* info) {
    auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        return new QIcon(self->icon(*info));
    } else {
        return new QIcon(((VirtualQFileIconProvider*)self)->icon(*info));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileIconProvider_OnIcon2(const QFileIconProvider* self, intptr_t slot) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Icon2_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_Icon2_Callback>(slot));
    }
}

// Virtual base class handler implementation
QIcon* QFileIconProvider_QBaseIcon2(const QFileIconProvider* self, const QFileInfo* info) {
    auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Icon2_IsBase(true);
        return new QIcon(vqfileiconprovider->icon(*info));
    } else {
        return new QIcon(((VirtualQFileIconProvider*)self)->icon(*info));
    }
}

// Derived class handler implementation
libqt_string QFileIconProvider_Type(const QFileIconProvider* self, const QFileInfo* param1) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        QString _ret = vqfileiconprovider->type(*param1);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QFileIconProvider::type(*param1);
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

// Base class handler implementation
libqt_string QFileIconProvider_QBaseType(const QFileIconProvider* self, const QFileInfo* param1) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Type_IsBase(true);
        QString _ret = vqfileiconprovider->type(*param1);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QFileIconProvider::type(*param1);
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
void QFileIconProvider_OnType(const QFileIconProvider* self, intptr_t slot) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Type_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileIconProvider_SetOptions(QFileIconProvider* self, int options) {
    auto* vqfileiconprovider = dynamic_cast<VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    } else {
        self->QFileIconProvider::setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    }
}

// Base class handler implementation
void QFileIconProvider_QBaseSetOptions(QFileIconProvider* self, int options) {
    auto* vqfileiconprovider = dynamic_cast<VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_SetOptions_IsBase(true);
        vqfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    } else {
        self->QFileIconProvider::setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileIconProvider_OnSetOptions(QFileIconProvider* self, intptr_t slot) {
    auto* vqfileiconprovider = dynamic_cast<VirtualQFileIconProvider*>(self);
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_SetOptions_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_SetOptions_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileIconProvider_Options(const QFileIconProvider* self) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        return static_cast<int>(vqfileiconprovider->options());
    } else {
        return static_cast<int>(self->QFileIconProvider::options());
    }
}

// Base class handler implementation
int QFileIconProvider_QBaseOptions(const QFileIconProvider* self) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Options_IsBase(true);
        return static_cast<int>(vqfileiconprovider->options());
    } else {
        return static_cast<int>(self->QFileIconProvider::options());
    }
}

// Auxiliary method to allow providing re-implementation
void QFileIconProvider_OnOptions(const QFileIconProvider* self, intptr_t slot) {
    auto* vqfileiconprovider = const_cast<VirtualQFileIconProvider*>(dynamic_cast<const VirtualQFileIconProvider*>(self));
    if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
        vqfileiconprovider->setQFileIconProvider_Options_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_Options_Callback>(slot));
    }
}

void QFileIconProvider_Delete(QFileIconProvider* self) {
    delete self;
}
