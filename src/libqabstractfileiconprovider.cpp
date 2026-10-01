#include <QAbstractFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <qabstractfileiconprovider.h>
#include "libqabstractfileiconprovider.h"
#include "libqabstractfileiconprovider.hxx"

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
    return new VirtualQAbstractFileIconProvider();
}

QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1) {
    return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
}

QIcon* QAbstractFileIconProvider_Icon2(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    return new QIcon(self->icon(*param1));
}

libqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    auto _ret = self->type(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options) {
    self->setOptions(static_cast<QAbstractFileIconProvider::Options>(options));
}

int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self) {
    return static_cast<int>(self->options());
}

// Base class handler implementation
QIcon* QAbstractFileIconProvider_SuperIcon(const QAbstractFileIconProvider* self, int param1) {
    return new QIcon(self->QAbstractFileIconProvider::icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnIcon(QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self)))
        vqabstractfileiconprovider->qabstractfileiconprovider_icon_callback = reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Icon_Callback>(slot);
}

// Base class handler implementation
QIcon* QAbstractFileIconProvider_SuperIcon2(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    return new QIcon(self->QAbstractFileIconProvider::icon(*param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnIcon2(QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self)))
        vqabstractfileiconprovider->qabstractfileiconprovider_icon2_callback = reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Icon2_Callback>(slot);
}

// Base class handler implementation
libqt_string QAbstractFileIconProvider_SuperType(const QAbstractFileIconProvider* self, const QFileInfo* param1) {
    auto _ret = self->QAbstractFileIconProvider::type(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnType(QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self)))
        vqabstractfileiconprovider->qabstractfileiconprovider_type_callback = reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Type_Callback>(slot);
}

// Base class handler implementation
void QAbstractFileIconProvider_SuperSetOptions(QAbstractFileIconProvider* self, int options) {
    self->QAbstractFileIconProvider::setOptions(static_cast<QAbstractFileIconProvider::Options>(options));
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnSetOptions(QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self))
        vqabstractfileiconprovider->qabstractfileiconprovider_setoptions_callback = reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_SetOptions_Callback>(slot);
}

// Base class handler implementation
int QAbstractFileIconProvider_SuperOptions(const QAbstractFileIconProvider* self) {
    return static_cast<int>(self->QAbstractFileIconProvider::options());
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnOptions(QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self)))
        vqabstractfileiconprovider->qabstractfileiconprovider_options_callback = reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Options_Callback>(slot);
}

void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self) {
    delete self;
}
