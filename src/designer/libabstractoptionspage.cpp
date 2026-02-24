#include <QDesignerOptionsPageInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractoptionspage.h>
#include "libabstractoptionspage.h"
#include "libabstractoptionspage.hxx"

QDesignerOptionsPageInterface* QDesignerOptionsPageInterface_new() {
    return new VirtualQDesignerOptionsPageInterface();
}

libqt_string QDesignerOptionsPageInterface_Name(const QDesignerOptionsPageInterface* self) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<const VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        QString _ret = vqdesigneroptionspageinterface->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerOptionsPageInterface*)self)->name();
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

QWidget* QDesignerOptionsPageInterface_CreatePage(QDesignerOptionsPageInterface* self, QWidget* parent) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        return vqdesigneroptionspageinterface->createPage(parent);
    } else {
        return ((VirtualQDesignerOptionsPageInterface*)self)->createPage(parent);
    }
}

void QDesignerOptionsPageInterface_Apply(QDesignerOptionsPageInterface* self) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->apply();
    } else {
        ((VirtualQDesignerOptionsPageInterface*)self)->apply();
    }
}

void QDesignerOptionsPageInterface_Finish(QDesignerOptionsPageInterface* self) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->finish();
    } else {
        ((VirtualQDesignerOptionsPageInterface*)self)->finish();
    }
}

// Base class handler implementation
libqt_string QDesignerOptionsPageInterface_SuperName(const QDesignerOptionsPageInterface* self) {
    auto* vqdesigneroptionspageinterface = const_cast<VirtualQDesignerOptionsPageInterface*>(dynamic_cast<const VirtualQDesignerOptionsPageInterface*>(self));
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_Name_IsBase(true);
        QString _ret = vqdesigneroptionspageinterface->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerOptionsPageInterface*)self)->name();
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
void QDesignerOptionsPageInterface_OnName(const QDesignerOptionsPageInterface* self, intptr_t slot) {
    auto* vqdesigneroptionspageinterface = const_cast<VirtualQDesignerOptionsPageInterface*>(dynamic_cast<const VirtualQDesignerOptionsPageInterface*>(self));
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_Name_Callback(reinterpret_cast<VirtualQDesignerOptionsPageInterface::QDesignerOptionsPageInterface_Name_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerOptionsPageInterface_SuperCreatePage(QDesignerOptionsPageInterface* self, QWidget* parent) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_CreatePage_IsBase(true);
        return vqdesigneroptionspageinterface->createPage(parent);
    } else {
        return ((VirtualQDesignerOptionsPageInterface*)self)->createPage(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerOptionsPageInterface_OnCreatePage(QDesignerOptionsPageInterface* self, intptr_t slot) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_CreatePage_Callback(reinterpret_cast<VirtualQDesignerOptionsPageInterface::QDesignerOptionsPageInterface_CreatePage_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerOptionsPageInterface_SuperApply(QDesignerOptionsPageInterface* self) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_Apply_IsBase(true);
        vqdesigneroptionspageinterface->apply();
    } else {
        ((VirtualQDesignerOptionsPageInterface*)self)->apply();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerOptionsPageInterface_OnApply(QDesignerOptionsPageInterface* self, intptr_t slot) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_Apply_Callback(reinterpret_cast<VirtualQDesignerOptionsPageInterface::QDesignerOptionsPageInterface_Apply_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerOptionsPageInterface_SuperFinish(QDesignerOptionsPageInterface* self) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_Finish_IsBase(true);
        vqdesigneroptionspageinterface->finish();
    } else {
        ((VirtualQDesignerOptionsPageInterface*)self)->finish();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerOptionsPageInterface_OnFinish(QDesignerOptionsPageInterface* self, intptr_t slot) {
    auto* vqdesigneroptionspageinterface = dynamic_cast<VirtualQDesignerOptionsPageInterface*>(self);
    if (vqdesigneroptionspageinterface && vqdesigneroptionspageinterface->isVirtualQDesignerOptionsPageInterface) {
        vqdesigneroptionspageinterface->setQDesignerOptionsPageInterface_Finish_Callback(reinterpret_cast<VirtualQDesignerOptionsPageInterface::QDesignerOptionsPageInterface_Finish_Callback>(slot));
    }
}

void QDesignerOptionsPageInterface_Delete(QDesignerOptionsPageInterface* self) {
    delete self;
}
