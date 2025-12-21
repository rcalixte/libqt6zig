#include <QDesignerDynamicPropertySheetExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <dynamicpropertysheet.h>
#include "libdynamicpropertysheet.h"
#include "libdynamicpropertysheet.hxx"

QDesignerDynamicPropertySheetExtension* QDesignerDynamicPropertySheetExtension_new() {
    return new VirtualQDesignerDynamicPropertySheetExtension();
}

bool QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        return vqdesignerdynamicpropertysheetextension->dynamicPropertiesAllowed();
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->dynamicPropertiesAllowed();
    }
}

int QDesignerDynamicPropertySheetExtension_AddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        return vqdesignerdynamicpropertysheetextension->addDynamicProperty(propertyName_QString, *value);
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->addDynamicProperty(propertyName_QString, *value);
    }
}

bool QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        return vqdesignerdynamicpropertysheetextension->removeDynamicProperty(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->removeDynamicProperty(static_cast<int>(index));
    }
}

bool QDesignerDynamicPropertySheetExtension_IsDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        return vqdesignerdynamicpropertysheetextension->isDynamicProperty(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->isDynamicProperty(static_cast<int>(index));
    }
}

bool QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        return vqdesignerdynamicpropertysheetextension->canAddDynamicProperty(propertyName_QString);
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->canAddDynamicProperty(propertyName_QString);
    }
}

// Base class handler implementation
bool QDesignerDynamicPropertySheetExtension_QBaseDynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self) {
    auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self));
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_IsBase(true);
        return vqdesignerdynamicpropertysheetextension->dynamicPropertiesAllowed();
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->dynamicPropertiesAllowed();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self));
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback(reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerDynamicPropertySheetExtension_QBaseAddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName, const QVariant* value) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_AddDynamicProperty_IsBase(true);
        return vqdesignerdynamicpropertysheetextension->addDynamicProperty(propertyName_QString, *value);
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->addDynamicProperty(propertyName_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerDynamicPropertySheetExtension_QBaseRemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_IsBase(true);
        return vqdesignerdynamicpropertysheetextension->removeDynamicProperty(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->removeDynamicProperty(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerDynamicPropertySheetExtension_QBaseIsDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index) {
    auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self));
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_IsDynamicProperty_IsBase(true);
        return vqdesignerdynamicpropertysheetextension->isDynamicProperty(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->isDynamicProperty(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self));
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerDynamicPropertySheetExtension_QBaseCanAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName) {
    auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self));
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_IsBase(true);
        return vqdesignerdynamicpropertysheetextension->canAddDynamicProperty(propertyName_QString);
    } else {
        return ((VirtualQDesignerDynamicPropertySheetExtension*)self)->canAddDynamicProperty(propertyName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self));
    if (vqdesignerdynamicpropertysheetextension && vqdesignerdynamicpropertysheetextension->isVirtualQDesignerDynamicPropertySheetExtension) {
        vqdesignerdynamicpropertysheetextension->setQDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback(reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback>(slot));
    }
}

void QDesignerDynamicPropertySheetExtension_Delete(QDesignerDynamicPropertySheetExtension* self) {
    delete self;
}
