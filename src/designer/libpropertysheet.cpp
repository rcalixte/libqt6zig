#include <QDesignerPropertySheetExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <propertysheet.h>
#include "libpropertysheet.h"
#include "libpropertysheet.hxx"

QDesignerPropertySheetExtension* QDesignerPropertySheetExtension_new() {
    return new VirtualQDesignerPropertySheetExtension();
}

int QDesignerPropertySheetExtension_Count(const QDesignerPropertySheetExtension* self) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->count();
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->count();
    }
}

int QDesignerPropertySheetExtension_IndexOf(const QDesignerPropertySheetExtension* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->indexOf(name_QString);
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->indexOf(name_QString);
    }
}

libqt_string QDesignerPropertySheetExtension_PropertyName(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        QString _ret = vqdesignerpropertysheetextension->propertyName(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerPropertySheetExtension*)self)->propertyName(static_cast<int>(index));
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

libqt_string QDesignerPropertySheetExtension_PropertyGroup(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        QString _ret = vqdesignerpropertysheetextension->propertyGroup(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerPropertySheetExtension*)self)->propertyGroup(static_cast<int>(index));
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

void QDesignerPropertySheetExtension_SetPropertyGroup(QDesignerPropertySheetExtension* self, int index, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setPropertyGroup(static_cast<int>(index), group_QString);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setPropertyGroup(static_cast<int>(index), group_QString);
    }
}

bool QDesignerPropertySheetExtension_HasReset(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->hasReset(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->hasReset(static_cast<int>(index));
    }
}

bool QDesignerPropertySheetExtension_Reset(QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->reset(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->reset(static_cast<int>(index));
    }
}

bool QDesignerPropertySheetExtension_IsVisible(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->isVisible(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isVisible(static_cast<int>(index));
    }
}

void QDesignerPropertySheetExtension_SetVisible(QDesignerPropertySheetExtension* self, int index, bool b) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setVisible(static_cast<int>(index), b);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setVisible(static_cast<int>(index), b);
    }
}

bool QDesignerPropertySheetExtension_IsAttribute(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->isAttribute(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isAttribute(static_cast<int>(index));
    }
}

void QDesignerPropertySheetExtension_SetAttribute(QDesignerPropertySheetExtension* self, int index, bool b) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setAttribute(static_cast<int>(index), b);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setAttribute(static_cast<int>(index), b);
    }
}

QVariant* QDesignerPropertySheetExtension_Property(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return new QVariant(vqdesignerpropertysheetextension->property(static_cast<int>(index)));
    } else {
        return new QVariant(((VirtualQDesignerPropertySheetExtension*)self)->property(static_cast<int>(index)));
    }
}

void QDesignerPropertySheetExtension_SetProperty(QDesignerPropertySheetExtension* self, int index, const QVariant* value) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setProperty(static_cast<int>(index), *value);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setProperty(static_cast<int>(index), *value);
    }
}

bool QDesignerPropertySheetExtension_IsChanged(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->isChanged(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isChanged(static_cast<int>(index));
    }
}

void QDesignerPropertySheetExtension_SetChanged(QDesignerPropertySheetExtension* self, int index, bool changed) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setChanged(static_cast<int>(index), changed);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setChanged(static_cast<int>(index), changed);
    }
}

bool QDesignerPropertySheetExtension_IsEnabled(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        return vqdesignerpropertysheetextension->isEnabled(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isEnabled(static_cast<int>(index));
    }
}

// Base class handler implementation
int QDesignerPropertySheetExtension_QBaseCount(const QDesignerPropertySheetExtension* self) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_Count_IsBase(true);
        return vqdesignerpropertysheetextension->count();
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnCount(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_Count_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_Count_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerPropertySheetExtension_QBaseIndexOf(const QDesignerPropertySheetExtension* self, const libqt_string name) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IndexOf_IsBase(true);
        return vqdesignerpropertysheetextension->indexOf(name_QString);
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->indexOf(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIndexOf(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IndexOf_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IndexOf_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerPropertySheetExtension_QBasePropertyName(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_PropertyName_IsBase(true);
        QString _ret = vqdesignerpropertysheetextension->propertyName(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerPropertySheetExtension*)self)->propertyName(static_cast<int>(index));
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
void QDesignerPropertySheetExtension_OnPropertyName(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_PropertyName_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_PropertyName_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerPropertySheetExtension_QBasePropertyGroup(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_PropertyGroup_IsBase(true);
        QString _ret = vqdesignerpropertysheetextension->propertyGroup(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerPropertySheetExtension*)self)->propertyGroup(static_cast<int>(index));
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
void QDesignerPropertySheetExtension_OnPropertyGroup(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_PropertyGroup_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_PropertyGroup_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertySheetExtension_QBaseSetPropertyGroup(QDesignerPropertySheetExtension* self, int index, const libqt_string group) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetPropertyGroup_IsBase(true);
        vqdesignerpropertysheetextension->setPropertyGroup(static_cast<int>(index), group_QString);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setPropertyGroup(static_cast<int>(index), group_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetPropertyGroup(QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetPropertyGroup_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetPropertyGroup_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertySheetExtension_QBaseHasReset(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_HasReset_IsBase(true);
        return vqdesignerpropertysheetextension->hasReset(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->hasReset(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnHasReset(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_HasReset_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_HasReset_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertySheetExtension_QBaseReset(QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_Reset_IsBase(true);
        return vqdesignerpropertysheetextension->reset(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->reset(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnReset(QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_Reset_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_Reset_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertySheetExtension_QBaseIsVisible(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsVisible_IsBase(true);
        return vqdesignerpropertysheetextension->isVisible(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isVisible(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsVisible(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsVisible_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsVisible_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertySheetExtension_QBaseSetVisible(QDesignerPropertySheetExtension* self, int index, bool b) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetVisible_IsBase(true);
        vqdesignerpropertysheetextension->setVisible(static_cast<int>(index), b);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setVisible(static_cast<int>(index), b);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetVisible(QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetVisible_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetVisible_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertySheetExtension_QBaseIsAttribute(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsAttribute_IsBase(true);
        return vqdesignerpropertysheetextension->isAttribute(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isAttribute(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsAttribute(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsAttribute_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsAttribute_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertySheetExtension_QBaseSetAttribute(QDesignerPropertySheetExtension* self, int index, bool b) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetAttribute_IsBase(true);
        vqdesignerpropertysheetextension->setAttribute(static_cast<int>(index), b);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setAttribute(static_cast<int>(index), b);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetAttribute(QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetAttribute_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetAttribute_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QDesignerPropertySheetExtension_QBaseProperty(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_Property_IsBase(true);
        return new QVariant(vqdesignerpropertysheetextension->property(static_cast<int>(index)));
    } else {
        return new QVariant(((VirtualQDesignerPropertySheetExtension*)self)->property(static_cast<int>(index)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnProperty(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_Property_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_Property_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertySheetExtension_QBaseSetProperty(QDesignerPropertySheetExtension* self, int index, const QVariant* value) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetProperty_IsBase(true);
        vqdesignerpropertysheetextension->setProperty(static_cast<int>(index), *value);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setProperty(static_cast<int>(index), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetProperty(QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetProperty_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertySheetExtension_QBaseIsChanged(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsChanged_IsBase(true);
        return vqdesignerpropertysheetextension->isChanged(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isChanged(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsChanged(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsChanged_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerPropertySheetExtension_QBaseSetChanged(QDesignerPropertySheetExtension* self, int index, bool changed) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetChanged_IsBase(true);
        vqdesignerpropertysheetextension->setChanged(static_cast<int>(index), changed);
    } else {
        ((VirtualQDesignerPropertySheetExtension*)self)->setChanged(static_cast<int>(index), changed);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetChanged(QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self);
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_SetChanged_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetChanged_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerPropertySheetExtension_QBaseIsEnabled(const QDesignerPropertySheetExtension* self, int index) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsEnabled_IsBase(true);
        return vqdesignerpropertysheetextension->isEnabled(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerPropertySheetExtension*)self)->isEnabled(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsEnabled(const QDesignerPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self));
    if (vqdesignerpropertysheetextension && vqdesignerpropertysheetextension->isVirtualQDesignerPropertySheetExtension) {
        vqdesignerpropertysheetextension->setQDesignerPropertySheetExtension_IsEnabled_Callback(reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsEnabled_Callback>(slot));
    }
}

void QDesignerPropertySheetExtension_Delete(QDesignerPropertySheetExtension* self) {
    delete self;
}
