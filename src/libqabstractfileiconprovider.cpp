#include <QAbstractFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractfileiconprovider.h>
#include "libqabstractfileiconprovider.h"
#include "libqabstractfileiconprovider.hxx"

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
    return new VirtualQAbstractFileIconProvider();
}

QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    } else {
        return new QIcon(((VirtualQAbstractFileIconProvider*)self)->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractFileIconProvider_OnIcon(const QAbstractFileIconProvider* self, intptr_t slot) {
    auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self));
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Icon_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Icon_Callback>(slot));
    }
}

// Virtual base class handler implementation
QIcon* QAbstractFileIconProvider_QBaseIcon(const QAbstractFileIconProvider* self, int param1) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Icon_IsBase(true);
        return new QIcon(vqabstractfileiconprovider->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    } else {
        return new QIcon(((VirtualQAbstractFileIconProvider*)self)->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    }
}

QIcon* QAbstractFileIconProvider_Icon2(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        return new QIcon(self->icon(*param1));
    } else {
        return new QIcon(((VirtualQAbstractFileIconProvider*)self)->icon(*param1));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractFileIconProvider_OnIcon2(const QAbstractFileIconProvider* self, intptr_t slot) {
    auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self));
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Icon2_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Icon2_Callback>(slot));
    }
}

// Virtual base class handler implementation
QIcon* QAbstractFileIconProvider_QBaseIcon2(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Icon2_IsBase(true);
        return new QIcon(vqabstractfileiconprovider->icon(*param1));
    } else {
        return new QIcon(((VirtualQAbstractFileIconProvider*)self)->icon(*param1));
    }
}

libqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        QString _ret = self->type(*param1);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQAbstractFileIconProvider*)self)->type(*param1);
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

// Subclass method to allow providing a virtual method re-implementation
void QAbstractFileIconProvider_OnType(const QAbstractFileIconProvider* self, intptr_t slot) {
    auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self));
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Type_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Type_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_string QAbstractFileIconProvider_QBaseType(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Type_IsBase(true);
        QString _ret = vqabstractfileiconprovider->type(*param1);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQAbstractFileIconProvider*)self)->type(*param1);
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

void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options) {
    auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        self->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    } else {
        ((VirtualQAbstractFileIconProvider*)self)->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractFileIconProvider_OnSetOptions(QAbstractFileIconProvider* self, intptr_t slot) {
    auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_SetOptions_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_SetOptions_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QAbstractFileIconProvider_QBaseSetOptions(QAbstractFileIconProvider* self, int options) {
    auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_SetOptions_IsBase(true);
        vqabstractfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    } else {
        ((VirtualQAbstractFileIconProvider*)self)->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    }
}

int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        return static_cast<int>(self->options());
    } else {
        return static_cast<int>(((VirtualQAbstractFileIconProvider*)self)->options());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractFileIconProvider_OnOptions(const QAbstractFileIconProvider* self, intptr_t slot) {
    auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self));
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Options_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Options_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractFileIconProvider_QBaseOptions(const QAbstractFileIconProvider* self) {
    auto* vqabstractfileiconprovider = dynamic_cast<const VirtualQAbstractFileIconProvider*>(self);
    if (vqabstractfileiconprovider && vqabstractfileiconprovider->isVirtualQAbstractFileIconProvider) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Options_IsBase(true);
        return static_cast<int>(vqabstractfileiconprovider->options());
    } else {
        return static_cast<int>(((VirtualQAbstractFileIconProvider*)self)->options());
    }
}

void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self) {
    delete self;
}
