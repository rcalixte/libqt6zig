#include <QDesignerDynamicPropertySheetExtension>
#include <QString>
#include <QVariant>
#include <dynamicpropertysheet.h>
#include "libdynamicpropertysheet.h"
#include "libdynamicpropertysheet.hxx"

QDesignerDynamicPropertySheetExtension* QDesignerDynamicPropertySheetExtension_new() {
    return new VirtualQDesignerDynamicPropertySheetExtension();
}

bool QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self) {
    return self->dynamicPropertiesAllowed();
}

int QDesignerDynamicPropertySheetExtension_AddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    return self->addDynamicProperty(propertyName_QString, *value);
}

bool QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index) {
    return self->removeDynamicProperty(static_cast<int>(index));
}

bool QDesignerDynamicPropertySheetExtension_IsDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index) {
    return self->isDynamicProperty(static_cast<int>(index));
}

bool QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    return self->canAddDynamicProperty(propertyName_QString);
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self)))
        vqdesignerdynamicpropertysheetextension->qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback = reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self))
        vqdesignerdynamicpropertysheetextension->qdesignerdynamicpropertysheetextension_adddynamicproperty_callback = reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerdynamicpropertysheetextension = dynamic_cast<VirtualQDesignerDynamicPropertySheetExtension*>(self))
        vqdesignerdynamicpropertysheetextension->qdesignerdynamicpropertysheetextension_removedynamicproperty_callback = reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self)))
        vqdesignerdynamicpropertysheetextension->qdesignerdynamicpropertysheetextension_isdynamicproperty_callback = reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerdynamicpropertysheetextension = const_cast<VirtualQDesignerDynamicPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerDynamicPropertySheetExtension*>(self)))
        vqdesignerdynamicpropertysheetextension->qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback = reinterpret_cast<VirtualQDesignerDynamicPropertySheetExtension::QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback>(slot);
}

void QDesignerDynamicPropertySheetExtension_Delete(QDesignerDynamicPropertySheetExtension* self) {
    delete self;
}
