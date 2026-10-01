#include <QDesignerPropertySheetExtension>
#include <QString>
#include <QVariant>
#include <propertysheet.h>
#include "libpropertysheet.h"
#include "libpropertysheet.hxx"

QDesignerPropertySheetExtension* QDesignerPropertySheetExtension_new() {
    return new VirtualQDesignerPropertySheetExtension();
}

int QDesignerPropertySheetExtension_Count(const QDesignerPropertySheetExtension* self) {
    return self->count();
}

int QDesignerPropertySheetExtension_IndexOf(const QDesignerPropertySheetExtension* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->indexOf(name_QString);
}

libqt_string QDesignerPropertySheetExtension_PropertyName(const QDesignerPropertySheetExtension* self, int index) {
    auto _ret = self->propertyName(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerPropertySheetExtension_PropertyGroup(const QDesignerPropertySheetExtension* self, int index) {
    auto _ret = self->propertyGroup(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerPropertySheetExtension_SetPropertyGroup(QDesignerPropertySheetExtension* self, int index, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setPropertyGroup(static_cast<int>(index), group_QString);
}

bool QDesignerPropertySheetExtension_HasReset(const QDesignerPropertySheetExtension* self, int index) {
    return self->hasReset(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_Reset(QDesignerPropertySheetExtension* self, int index) {
    return self->reset(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_IsVisible(const QDesignerPropertySheetExtension* self, int index) {
    return self->isVisible(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_SetVisible(QDesignerPropertySheetExtension* self, int index, bool b) {
    self->setVisible(static_cast<int>(index), b);
}

bool QDesignerPropertySheetExtension_IsAttribute(const QDesignerPropertySheetExtension* self, int index) {
    return self->isAttribute(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_SetAttribute(QDesignerPropertySheetExtension* self, int index, bool b) {
    self->setAttribute(static_cast<int>(index), b);
}

QVariant* QDesignerPropertySheetExtension_Property(const QDesignerPropertySheetExtension* self, int index) {
    return new QVariant(self->property(static_cast<int>(index)));
}

void QDesignerPropertySheetExtension_SetProperty(QDesignerPropertySheetExtension* self, int index, const QVariant* value) {
    self->setProperty(static_cast<int>(index), *value);
}

bool QDesignerPropertySheetExtension_IsChanged(const QDesignerPropertySheetExtension* self, int index) {
    return self->isChanged(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_SetChanged(QDesignerPropertySheetExtension* self, int index, bool changed) {
    self->setChanged(static_cast<int>(index), changed);
}

bool QDesignerPropertySheetExtension_IsEnabled(const QDesignerPropertySheetExtension* self, int index) {
    return self->isEnabled(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnCount(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_count_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_Count_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIndexOf(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_indexof_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IndexOf_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnPropertyName(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_propertyname_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_PropertyName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnPropertyGroup(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_propertygroup_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_PropertyGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetPropertyGroup(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_setpropertygroup_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetPropertyGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnHasReset(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_hasreset_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_HasReset_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnReset(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_reset_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_Reset_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsVisible(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_isvisible_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsVisible_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetVisible(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_setvisible_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetVisible_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsAttribute(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_isattribute_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsAttribute_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetAttribute(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_setattribute_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetAttribute_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnProperty(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_property_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_Property_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetProperty(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_setproperty_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsChanged(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_ischanged_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsChanged_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnSetChanged(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = dynamic_cast<VirtualQDesignerPropertySheetExtension*>(self))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_setchanged_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_SetChanged_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertySheetExtension_OnIsEnabled(QDesignerPropertySheetExtension* self, intptr_t slot) {
    if (auto* vqdesignerpropertysheetextension = const_cast<VirtualQDesignerPropertySheetExtension*>(dynamic_cast<const VirtualQDesignerPropertySheetExtension*>(self)))
        vqdesignerpropertysheetextension->qdesignerpropertysheetextension_isenabled_callback = reinterpret_cast<VirtualQDesignerPropertySheetExtension::QDesignerPropertySheetExtension_IsEnabled_Callback>(slot);
}

void QDesignerPropertySheetExtension_Delete(QDesignerPropertySheetExtension* self) {
    delete self;
}
