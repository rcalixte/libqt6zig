#include <QDesignerSettingsInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <abstractsettings.h>
#include "libabstractsettings.h"
#include "libabstractsettings.hxx"

QDesignerSettingsInterface* QDesignerSettingsInterface_new() {
    return new VirtualQDesignerSettingsInterface();
}

void QDesignerSettingsInterface_BeginGroup(QDesignerSettingsInterface* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->beginGroup(prefix_QString);
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->beginGroup(prefix_QString);
    }
}

void QDesignerSettingsInterface_EndGroup(QDesignerSettingsInterface* self) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->endGroup();
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->endGroup();
    }
}

bool QDesignerSettingsInterface_Contains(const QDesignerSettingsInterface* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqdesignersettingsinterface = dynamic_cast<const VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        return vqdesignersettingsinterface->contains(key_QString);
    } else {
        return ((VirtualQDesignerSettingsInterface*)self)->contains(key_QString);
    }
}

void QDesignerSettingsInterface_SetValue(QDesignerSettingsInterface* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setValue(key_QString, *value);
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->setValue(key_QString, *value);
    }
}

QVariant* QDesignerSettingsInterface_Value(const QDesignerSettingsInterface* self, const libqt_string key, const QVariant* defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqdesignersettingsinterface = dynamic_cast<const VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        return new QVariant(vqdesignersettingsinterface->value(key_QString, *defaultValue));
    } else {
        return new QVariant(((VirtualQDesignerSettingsInterface*)self)->value(key_QString, *defaultValue));
    }
}

void QDesignerSettingsInterface_Remove(QDesignerSettingsInterface* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->remove(key_QString);
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->remove(key_QString);
    }
}

// Base class handler implementation
void QDesignerSettingsInterface_QBaseBeginGroup(QDesignerSettingsInterface* self, const libqt_string prefix) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_BeginGroup_IsBase(true);
        vqdesignersettingsinterface->beginGroup(prefix_QString);
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->beginGroup(prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnBeginGroup(QDesignerSettingsInterface* self, intptr_t slot) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_BeginGroup_Callback(reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_BeginGroup_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerSettingsInterface_QBaseEndGroup(QDesignerSettingsInterface* self) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_EndGroup_IsBase(true);
        vqdesignersettingsinterface->endGroup();
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->endGroup();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnEndGroup(QDesignerSettingsInterface* self, intptr_t slot) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_EndGroup_Callback(reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_EndGroup_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerSettingsInterface_QBaseContains(const QDesignerSettingsInterface* self, const libqt_string key) {
    auto* vqdesignersettingsinterface = const_cast<VirtualQDesignerSettingsInterface*>(dynamic_cast<const VirtualQDesignerSettingsInterface*>(self));
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_Contains_IsBase(true);
        return vqdesignersettingsinterface->contains(key_QString);
    } else {
        return ((VirtualQDesignerSettingsInterface*)self)->contains(key_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnContains(const QDesignerSettingsInterface* self, intptr_t slot) {
    auto* vqdesignersettingsinterface = const_cast<VirtualQDesignerSettingsInterface*>(dynamic_cast<const VirtualQDesignerSettingsInterface*>(self));
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_Contains_Callback(reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_Contains_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerSettingsInterface_QBaseSetValue(QDesignerSettingsInterface* self, const libqt_string key, const QVariant* value) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_SetValue_IsBase(true);
        vqdesignersettingsinterface->setValue(key_QString, *value);
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->setValue(key_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnSetValue(QDesignerSettingsInterface* self, intptr_t slot) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_SetValue_Callback(reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_SetValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QDesignerSettingsInterface_QBaseValue(const QDesignerSettingsInterface* self, const libqt_string key, const QVariant* defaultValue) {
    auto* vqdesignersettingsinterface = const_cast<VirtualQDesignerSettingsInterface*>(dynamic_cast<const VirtualQDesignerSettingsInterface*>(self));
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_Value_IsBase(true);
        return new QVariant(vqdesignersettingsinterface->value(key_QString, *defaultValue));
    } else {
        return new QVariant(((VirtualQDesignerSettingsInterface*)self)->value(key_QString, *defaultValue));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnValue(const QDesignerSettingsInterface* self, intptr_t slot) {
    auto* vqdesignersettingsinterface = const_cast<VirtualQDesignerSettingsInterface*>(dynamic_cast<const VirtualQDesignerSettingsInterface*>(self));
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_Value_Callback(reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_Value_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerSettingsInterface_QBaseRemove(QDesignerSettingsInterface* self, const libqt_string key) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_Remove_IsBase(true);
        vqdesignersettingsinterface->remove(key_QString);
    } else {
        ((VirtualQDesignerSettingsInterface*)self)->remove(key_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerSettingsInterface_OnRemove(QDesignerSettingsInterface* self, intptr_t slot) {
    auto* vqdesignersettingsinterface = dynamic_cast<VirtualQDesignerSettingsInterface*>(self);
    if (vqdesignersettingsinterface && vqdesignersettingsinterface->isVirtualQDesignerSettingsInterface) {
        vqdesignersettingsinterface->setQDesignerSettingsInterface_Remove_Callback(reinterpret_cast<VirtualQDesignerSettingsInterface::QDesignerSettingsInterface_Remove_Callback>(slot));
    }
}

void QDesignerSettingsInterface_Delete(QDesignerSettingsInterface* self) {
    delete self;
}
