#include <QDesignerSettingsInterface>
#include <QString>
#include <QVariant>
#include <abstractsettings.h>
#include "libabstractsettings.h"
#include "libabstractsettings.hxx"

QDesignerSettingsInterface* QDesignerSettingsInterface_new() {
    return new VirtualQDesignerSettingsInterface();
}

void QDesignerSettingsInterface_BeginGroup(QDesignerSettingsInterface* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->beginGroup(prefix_QString);
}

void QDesignerSettingsInterface_EndGroup(QDesignerSettingsInterface* self) {
    self->endGroup();
}

bool QDesignerSettingsInterface_Contains(const QDesignerSettingsInterface* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

void QDesignerSettingsInterface_SetValue(QDesignerSettingsInterface* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setValue(key_QString, *value);
}

QVariant* QDesignerSettingsInterface_Value(const QDesignerSettingsInterface* self, const libqt_string key, const QVariant* defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString, *defaultValue));
}

void QDesignerSettingsInterface_Remove(QDesignerSettingsInterface* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->remove(key_QString);
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnBeginGroup(QDesignerSettingsInterface* self, intptr_t slot) {
    if (auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self))
        vqdesignersettingsinterface->qdesignersettingsinterface_begingroup_callback = reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_BeginGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnEndGroup(QDesignerSettingsInterface* self, intptr_t slot) {
    if (auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self))
        vqdesignersettingsinterface->qdesignersettingsinterface_endgroup_callback = reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_EndGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnContains(QDesignerSettingsInterface* self, intptr_t slot) {
    if (auto* vqdesignersettingsinterface = const_cast<VirtualQDesignerSettingsInterface*>(dynamic_cast<const VirtualQDesignerSettingsInterface*>(self)))
        vqdesignersettingsinterface->qdesignersettingsinterface_contains_callback = reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_Contains_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnSetValue(QDesignerSettingsInterface* self, intptr_t slot) {
    if (auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self))
        vqdesignersettingsinterface->qdesignersettingsinterface_setvalue_callback = reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_SetValue_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnValue(QDesignerSettingsInterface* self, intptr_t slot) {
    if (auto* vqdesignersettingsinterface = const_cast<VirtualQDesignerSettingsInterface*>(dynamic_cast<const VirtualQDesignerSettingsInterface*>(self)))
        vqdesignersettingsinterface->qdesignersettingsinterface_value_callback = reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_Value_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnRemove(QDesignerSettingsInterface* self, intptr_t slot) {
    if (auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self))
        vqdesignersettingsinterface->qdesignersettingsinterface_remove_callback = reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_Remove_Callback>(slot);
}

void QDesignerSettingsInterface_Delete(QDesignerSettingsInterface* self) {
    delete self;
}
