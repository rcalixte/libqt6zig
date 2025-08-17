#include <QByteArray>
#include <QItemEditorCreatorBase>
#include <QItemEditorFactory>
#include <QWidget>
#include <qitemeditorfactory.h>
#include "libqitemeditorfactory.h"
#include "libqitemeditorfactory.hxx"

QWidget* QItemEditorCreatorBase_CreateWidget(const QItemEditorCreatorBase* self, QWidget* parent) {
    return self->createWidget(parent);
}

libqt_string QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self) {
    QByteArray _qb = self->valuePropertyName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, const QItemEditorCreatorBase* param1) {
    self->operator=(*param1);
}

void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self) {
    delete self;
}

QItemEditorFactory* QItemEditorFactory_new() {
    return new VirtualQItemEditorFactory();
}

QItemEditorFactory* QItemEditorFactory_new2(const QItemEditorFactory* param1) {
    return new VirtualQItemEditorFactory(*param1);
}

void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator) {
    self->registerEditor(static_cast<int>(userType), creator);
}

QItemEditorFactory* QItemEditorFactory_DefaultFactory() {
    return (QItemEditorFactory*)QItemEditorFactory::defaultFactory();
}

void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory) {
    QItemEditorFactory::setDefaultFactory(factory);
}

// Derived class handler implementation
QWidget* QItemEditorFactory_CreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent) {
    auto* vqitemeditorfactory = const_cast<VirtualQItemEditorFactory*>(dynamic_cast<const VirtualQItemEditorFactory*>(self));
    if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
        return vqitemeditorfactory->createEditor(static_cast<int>(userType), parent);
    } else {
        return self->QItemEditorFactory::createEditor(static_cast<int>(userType), parent);
    }
}

// Base class handler implementation
QWidget* QItemEditorFactory_QBaseCreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent) {
    auto* vqitemeditorfactory = const_cast<VirtualQItemEditorFactory*>(dynamic_cast<const VirtualQItemEditorFactory*>(self));
    if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
        vqitemeditorfactory->setQItemEditorFactory_CreateEditor_IsBase(true);
        return vqitemeditorfactory->createEditor(static_cast<int>(userType), parent);
    } else {
        return self->QItemEditorFactory::createEditor(static_cast<int>(userType), parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemEditorFactory_OnCreateEditor(const QItemEditorFactory* self, intptr_t slot) {
    auto* vqitemeditorfactory = const_cast<VirtualQItemEditorFactory*>(dynamic_cast<const VirtualQItemEditorFactory*>(self));
    if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
        vqitemeditorfactory->setQItemEditorFactory_CreateEditor_Callback(reinterpret_cast<VirtualQItemEditorFactory::QItemEditorFactory_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType) {
    auto* vqitemeditorfactory = const_cast<VirtualQItemEditorFactory*>(dynamic_cast<const VirtualQItemEditorFactory*>(self));
    if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
        QByteArray _qb = vqitemeditorfactory->valuePropertyName(static_cast<int>(userType));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = self->QItemEditorFactory::valuePropertyName(static_cast<int>(userType));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QItemEditorFactory_QBaseValuePropertyName(const QItemEditorFactory* self, int userType) {
    auto* vqitemeditorfactory = const_cast<VirtualQItemEditorFactory*>(dynamic_cast<const VirtualQItemEditorFactory*>(self));
    if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
        vqitemeditorfactory->setQItemEditorFactory_ValuePropertyName_IsBase(true);
        QByteArray _qb = vqitemeditorfactory->valuePropertyName(static_cast<int>(userType));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = self->QItemEditorFactory::valuePropertyName(static_cast<int>(userType));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QItemEditorFactory_OnValuePropertyName(const QItemEditorFactory* self, intptr_t slot) {
    auto* vqitemeditorfactory = const_cast<VirtualQItemEditorFactory*>(dynamic_cast<const VirtualQItemEditorFactory*>(self));
    if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
        vqitemeditorfactory->setQItemEditorFactory_ValuePropertyName_Callback(reinterpret_cast<VirtualQItemEditorFactory::QItemEditorFactory_ValuePropertyName_Callback>(slot));
    }
}

void QItemEditorFactory_Delete(QItemEditorFactory* self) {
    delete self;
}
