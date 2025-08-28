#include <KConfig>
#include <KConfigGroup>
#include <KCoreConfigSkeleton>
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum__Choice
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPassword
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPath
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPathList
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <kcoreconfigskeleton.h>
#include "libkcoreconfigskeleton.h"
#include "libkcoreconfigskeleton.hxx"

KConfigSkeletonItem* KConfigSkeletonItem_new(const libqt_string _group, const libqt_string _key) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKConfigSkeletonItem(_group_QString, _key_QString);
}

KConfigSkeletonItem* KConfigSkeletonItem_new2(const KConfigSkeletonItem* param1) {
    return new VirtualKConfigSkeletonItem(*param1);
}

void KConfigSkeletonItem_SetGroup(KConfigSkeletonItem* self, const libqt_string _group) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    self->setGroup(_group_QString);
}

libqt_string KConfigSkeletonItem_Group(const KConfigSkeletonItem* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigSkeletonItem_SetGroup2(KConfigSkeletonItem* self, const KConfigGroup* cg) {
    self->setGroup(*cg);
}

KConfigGroup* KConfigSkeletonItem_ConfigGroup(const KConfigSkeletonItem* self, KConfig* config) {
    return new KConfigGroup(self->configGroup(config));
}

void KConfigSkeletonItem_SetKey(KConfigSkeletonItem* self, const libqt_string _key) {
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    self->setKey(_key_QString);
}

libqt_string KConfigSkeletonItem_Key(const KConfigSkeletonItem* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigSkeletonItem_SetName(KConfigSkeletonItem* self, const libqt_string _name) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    self->setName(_name_QString);
}

libqt_string KConfigSkeletonItem_Name(const KConfigSkeletonItem* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigSkeletonItem_SetLabel(KConfigSkeletonItem* self, const libqt_string l) {
    QString l_QString = QString::fromUtf8(l.data, l.len);
    self->setLabel(l_QString);
}

libqt_string KConfigSkeletonItem_Label(const KConfigSkeletonItem* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigSkeletonItem_SetToolTip(KConfigSkeletonItem* self, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    self->setToolTip(t_QString);
}

libqt_string KConfigSkeletonItem_ToolTip(const KConfigSkeletonItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigSkeletonItem_SetWhatsThis(KConfigSkeletonItem* self, const libqt_string w) {
    QString w_QString = QString::fromUtf8(w.data, w.len);
    self->setWhatsThis(w_QString);
}

libqt_string KConfigSkeletonItem_WhatsThis(const KConfigSkeletonItem* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigSkeletonItem_SetWriteFlags(KConfigSkeletonItem* self, int flags) {
    self->setWriteFlags(static_cast<KConfigBase::WriteConfigFlags>(flags));
}

int KConfigSkeletonItem_WriteFlags(const KConfigSkeletonItem* self) {
    return static_cast<int>(self->writeFlags());
}

void KConfigSkeletonItem_ReadConfig(KConfigSkeletonItem* self, KConfig* param1) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->readConfig(param1);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->readConfig(param1);
    }
}

void KConfigSkeletonItem_WriteConfig(KConfigSkeletonItem* self, KConfig* param1) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->writeConfig(param1);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->writeConfig(param1);
    }
}

void KConfigSkeletonItem_ReadDefault(KConfigSkeletonItem* self, KConfig* param1) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->readDefault(param1);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->readDefault(param1);
    }
}

void KConfigSkeletonItem_SetProperty(KConfigSkeletonItem* self, const QVariant* p) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setProperty(*p);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->setProperty(*p);
    }
}

bool KConfigSkeletonItem_IsEqual(const KConfigSkeletonItem* self, const QVariant* p) {
    auto* vkconfigskeletonitem = dynamic_cast<const VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        return vkconfigskeletonitem->isEqual(*p);
    } else {
        return ((VirtualKConfigSkeletonItem*)self)->isEqual(*p);
    }
}

QVariant* KConfigSkeletonItem_Property(const KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<const VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        return new QVariant(vkconfigskeletonitem->property());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItem*)self)->property());
    }
}

QVariant* KConfigSkeletonItem_MinValue(const KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<const VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        return new QVariant(self->minValue());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItem*)self)->minValue());
    }
}

QVariant* KConfigSkeletonItem_MaxValue(const KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<const VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        return new QVariant(self->maxValue());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItem*)self)->maxValue());
    }
}

void KConfigSkeletonItem_SetDefault(KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setDefault();
    } else {
        ((VirtualKConfigSkeletonItem*)self)->setDefault();
    }
}

void KConfigSkeletonItem_SwapDefault(KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->swapDefault();
    } else {
        ((VirtualKConfigSkeletonItem*)self)->swapDefault();
    }
}

bool KConfigSkeletonItem_IsImmutable(const KConfigSkeletonItem* self) {
    return self->isImmutable();
}

bool KConfigSkeletonItem_IsDefault(const KConfigSkeletonItem* self) {
    return self->isDefault();
}

bool KConfigSkeletonItem_IsSaveNeeded(const KConfigSkeletonItem* self) {
    return self->isSaveNeeded();
}

QVariant* KConfigSkeletonItem_GetDefault(const KConfigSkeletonItem* self) {
    return new QVariant(self->getDefault());
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseReadConfig(KConfigSkeletonItem* self, KConfig* param1) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_ReadConfig_IsBase(true);
        vkconfigskeletonitem->readConfig(param1);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->readConfig(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnReadConfig(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_ReadConfig_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseWriteConfig(KConfigSkeletonItem* self, KConfig* param1) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_WriteConfig_IsBase(true);
        vkconfigskeletonitem->writeConfig(param1);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->writeConfig(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnWriteConfig(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_WriteConfig_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_WriteConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseReadDefault(KConfigSkeletonItem* self, KConfig* param1) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_ReadDefault_IsBase(true);
        vkconfigskeletonitem->readDefault(param1);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->readDefault(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnReadDefault(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_ReadDefault_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_ReadDefault_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseSetProperty(KConfigSkeletonItem* self, const QVariant* p) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_SetProperty_IsBase(true);
        vkconfigskeletonitem->setProperty(*p);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnSetProperty(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_SetProperty_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigSkeletonItem_QBaseIsEqual(const KConfigSkeletonItem* self, const QVariant* p) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_IsEqual_IsBase(true);
        return vkconfigskeletonitem->isEqual(*p);
    } else {
        return ((VirtualKConfigSkeletonItem*)self)->isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnIsEqual(const KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_IsEqual_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KConfigSkeletonItem_QBaseProperty(const KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_Property_IsBase(true);
        return new QVariant(vkconfigskeletonitem->property());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItem*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnProperty(const KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_Property_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_Property_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KConfigSkeletonItem_QBaseMinValue(const KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_MinValue_IsBase(true);
        return new QVariant(vkconfigskeletonitem->minValue());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItem*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnMinValue(const KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_MinValue_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_MinValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KConfigSkeletonItem_QBaseMaxValue(const KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_MaxValue_IsBase(true);
        return new QVariant(vkconfigskeletonitem->maxValue());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItem*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnMaxValue(const KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self));
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_MaxValue_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_MaxValue_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseSetDefault(KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_SetDefault_IsBase(true);
        vkconfigskeletonitem->setDefault();
    } else {
        ((VirtualKConfigSkeletonItem*)self)->setDefault();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnSetDefault(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_SetDefault_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_SetDefault_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseSwapDefault(KConfigSkeletonItem* self) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_SwapDefault_IsBase(true);
        vkconfigskeletonitem->swapDefault();
    } else {
        ((VirtualKConfigSkeletonItem*)self)->swapDefault();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnSwapDefault(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_SwapDefault_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_SwapDefault_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeletonItem_ReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->readImmutability(*group);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->readImmutability(*group);
    }
}

// Base class handler implementation
void KConfigSkeletonItem_QBaseReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_ReadImmutability_IsBase(true);
        vkconfigskeletonitem->readImmutability(*group);
    } else {
        ((VirtualKConfigSkeletonItem*)self)->readImmutability(*group);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnReadImmutability(KConfigSkeletonItem* self, intptr_t slot) {
    auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self);
    if (vkconfigskeletonitem && vkconfigskeletonitem->isVirtualKConfigSkeletonItem) {
        vkconfigskeletonitem->setKConfigSkeletonItem_ReadImmutability_Callback(reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_ReadImmutability_Callback>(slot));
    }
}

void KConfigSkeletonItem_Delete(KConfigSkeletonItem* self) {
    delete self;
}

KPropertySkeletonItem* KPropertySkeletonItem_new(QObject* object, const libqt_string propertyName, const QVariant* defaultValue) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    return new VirtualKPropertySkeletonItem(object, propertyName_QByteArray, *defaultValue);
}

KPropertySkeletonItem* KPropertySkeletonItem_new2(const KPropertySkeletonItem* param1) {
    return new VirtualKPropertySkeletonItem(*param1);
}

QVariant* KPropertySkeletonItem_Property(const KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = dynamic_cast<const VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKPropertySkeletonItem*)self)->property());
    }
}

void KPropertySkeletonItem_SetProperty(KPropertySkeletonItem* self, const QVariant* p) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        self->setProperty(*p);
    } else {
        ((VirtualKPropertySkeletonItem*)self)->setProperty(*p);
    }
}

bool KPropertySkeletonItem_IsEqual(const KPropertySkeletonItem* self, const QVariant* p) {
    auto* vkpropertyskeletonitem = dynamic_cast<const VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKPropertySkeletonItem*)self)->isEqual(*p);
    }
}

void KPropertySkeletonItem_ReadConfig(KPropertySkeletonItem* self, KConfig* param1) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        self->readConfig(param1);
    } else {
        ((VirtualKPropertySkeletonItem*)self)->readConfig(param1);
    }
}

void KPropertySkeletonItem_WriteConfig(KPropertySkeletonItem* self, KConfig* param1) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        self->writeConfig(param1);
    } else {
        ((VirtualKPropertySkeletonItem*)self)->writeConfig(param1);
    }
}

void KPropertySkeletonItem_ReadDefault(KPropertySkeletonItem* self, KConfig* param1) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        self->readDefault(param1);
    } else {
        ((VirtualKPropertySkeletonItem*)self)->readDefault(param1);
    }
}

void KPropertySkeletonItem_SetDefault(KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        self->setDefault();
    } else {
        ((VirtualKPropertySkeletonItem*)self)->setDefault();
    }
}

void KPropertySkeletonItem_SwapDefault(KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        self->swapDefault();
    } else {
        ((VirtualKPropertySkeletonItem*)self)->swapDefault();
    }
}

// Base class handler implementation
QVariant* KPropertySkeletonItem_QBaseProperty(const KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_Property_IsBase(true);
        return new QVariant(vkpropertyskeletonitem->property());
    } else {
        return new QVariant(((VirtualKPropertySkeletonItem*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnProperty(const KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_Property_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_Property_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseSetProperty(KPropertySkeletonItem* self, const QVariant* p) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_SetProperty_IsBase(true);
        vkpropertyskeletonitem->setProperty(*p);
    } else {
        self->KPropertySkeletonItem::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnSetProperty(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_SetProperty_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KPropertySkeletonItem_QBaseIsEqual(const KPropertySkeletonItem* self, const QVariant* p) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_IsEqual_IsBase(true);
        return vkpropertyskeletonitem->isEqual(*p);
    } else {
        return self->KPropertySkeletonItem::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnIsEqual(const KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_IsEqual_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseReadConfig(KPropertySkeletonItem* self, KConfig* param1) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_ReadConfig_IsBase(true);
        vkpropertyskeletonitem->readConfig(param1);
    } else {
        self->KPropertySkeletonItem::readConfig(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnReadConfig(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_ReadConfig_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseWriteConfig(KPropertySkeletonItem* self, KConfig* param1) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_WriteConfig_IsBase(true);
        vkpropertyskeletonitem->writeConfig(param1);
    } else {
        self->KPropertySkeletonItem::writeConfig(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnWriteConfig(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_WriteConfig_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_WriteConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseReadDefault(KPropertySkeletonItem* self, KConfig* param1) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_ReadDefault_IsBase(true);
        vkpropertyskeletonitem->readDefault(param1);
    } else {
        self->KPropertySkeletonItem::readDefault(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnReadDefault(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_ReadDefault_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_ReadDefault_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseSetDefault(KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_SetDefault_IsBase(true);
        vkpropertyskeletonitem->setDefault();
    } else {
        self->KPropertySkeletonItem::setDefault();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnSetDefault(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_SetDefault_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_SetDefault_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseSwapDefault(KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_SwapDefault_IsBase(true);
        vkpropertyskeletonitem->swapDefault();
    } else {
        self->KPropertySkeletonItem::swapDefault();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnSwapDefault(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_SwapDefault_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_SwapDefault_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPropertySkeletonItem_MinValue(const KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        return new QVariant(vkpropertyskeletonitem->minValue());
    } else {
        return new QVariant(((VirtualKPropertySkeletonItem*)self)->minValue());
    }
}

// Base class handler implementation
QVariant* KPropertySkeletonItem_QBaseMinValue(const KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_MinValue_IsBase(true);
        return new QVariant(vkpropertyskeletonitem->minValue());
    } else {
        return new QVariant(((VirtualKPropertySkeletonItem*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnMinValue(const KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_MinValue_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_MinValue_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPropertySkeletonItem_MaxValue(const KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        return new QVariant(vkpropertyskeletonitem->maxValue());
    } else {
        return new QVariant(((VirtualKPropertySkeletonItem*)self)->maxValue());
    }
}

// Base class handler implementation
QVariant* KPropertySkeletonItem_QBaseMaxValue(const KPropertySkeletonItem* self) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_MaxValue_IsBase(true);
        return new QVariant(vkpropertyskeletonitem->maxValue());
    } else {
        return new QVariant(((VirtualKPropertySkeletonItem*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnMaxValue(const KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self));
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_MaxValue_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_MaxValue_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertySkeletonItem_ReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->readImmutability(*group);
    } else {
        ((VirtualKPropertySkeletonItem*)self)->readImmutability(*group);
    }
}

// Base class handler implementation
void KPropertySkeletonItem_QBaseReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_ReadImmutability_IsBase(true);
        vkpropertyskeletonitem->readImmutability(*group);
    } else {
        ((VirtualKPropertySkeletonItem*)self)->readImmutability(*group);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnReadImmutability(KPropertySkeletonItem* self, intptr_t slot) {
    auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self);
    if (vkpropertyskeletonitem && vkpropertyskeletonitem->isVirtualKPropertySkeletonItem) {
        vkpropertyskeletonitem->setKPropertySkeletonItem_ReadImmutability_Callback(reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_ReadImmutability_Callback>(slot));
    }
}

void KPropertySkeletonItem_Delete(KPropertySkeletonItem* self) {
    delete self;
}

void KConfigCompilerSignallingItem_ReadConfig(KConfigCompilerSignallingItem* self, KConfig* param1) {
    self->readConfig(param1);
}

void KConfigCompilerSignallingItem_WriteConfig(KConfigCompilerSignallingItem* self, KConfig* param1) {
    self->writeConfig(param1);
}

void KConfigCompilerSignallingItem_ReadDefault(KConfigCompilerSignallingItem* self, KConfig* param1) {
    self->readDefault(param1);
}

void KConfigCompilerSignallingItem_SetProperty(KConfigCompilerSignallingItem* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KConfigCompilerSignallingItem_IsEqual(const KConfigCompilerSignallingItem* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KConfigCompilerSignallingItem_Property(const KConfigCompilerSignallingItem* self) {
    return new QVariant(self->property());
}

QVariant* KConfigCompilerSignallingItem_MinValue(const KConfigCompilerSignallingItem* self) {
    return new QVariant(self->minValue());
}

QVariant* KConfigCompilerSignallingItem_MaxValue(const KConfigCompilerSignallingItem* self) {
    return new QVariant(self->maxValue());
}

void KConfigCompilerSignallingItem_SetDefault(KConfigCompilerSignallingItem* self) {
    self->setDefault();
}

void KConfigCompilerSignallingItem_SwapDefault(KConfigCompilerSignallingItem* self) {
    self->swapDefault();
}

void KConfigCompilerSignallingItem_SetWriteFlags(KConfigCompilerSignallingItem* self, int flags) {
    self->setWriteFlags(static_cast<KConfigBase::WriteConfigFlags>(flags));
}

int KConfigCompilerSignallingItem_WriteFlags(const KConfigCompilerSignallingItem* self) {
    return static_cast<int>(self->writeFlags());
}

void KConfigCompilerSignallingItem_SetGroup(KConfigCompilerSignallingItem* self, const KConfigGroup* cg) {
    self->setGroup(*cg);
}

KConfigGroup* KConfigCompilerSignallingItem_ConfigGroup(const KConfigCompilerSignallingItem* self, KConfig* config) {
    return new KConfigGroup(self->configGroup(config));
}

void KConfigCompilerSignallingItem_Delete(KConfigCompilerSignallingItem* self) {
    delete self;
}

KCoreConfigSkeleton* KCoreConfigSkeleton_new() {
    return new VirtualKCoreConfigSkeleton();
}

KCoreConfigSkeleton* KCoreConfigSkeleton_new2(const libqt_string configname) {
    QString configname_QString = QString::fromUtf8(configname.data, configname.len);
    return new VirtualKCoreConfigSkeleton(configname_QString);
}

KCoreConfigSkeleton* KCoreConfigSkeleton_new3(const libqt_string configname, QObject* parent) {
    QString configname_QString = QString::fromUtf8(configname.data, configname.len);
    return new VirtualKCoreConfigSkeleton(configname_QString, parent);
}

QMetaObject* KCoreConfigSkeleton_MetaObject(const KCoreConfigSkeleton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCoreConfigSkeleton_Metacast(KCoreConfigSkeleton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCoreConfigSkeleton_Metacall(KCoreConfigSkeleton* self, int param1, int param2, void** param3) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCoreConfigSkeleton_Tr(const char* s) {
    QString _ret = KCoreConfigSkeleton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCoreConfigSkeleton_SetDefaults(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        self->setDefaults();
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->setDefaults();
    }
}

void KCoreConfigSkeleton_Load(KCoreConfigSkeleton* self) {
    self->load();
}

void KCoreConfigSkeleton_Read(KCoreConfigSkeleton* self) {
    self->read();
}

bool KCoreConfigSkeleton_IsDefaults(const KCoreConfigSkeleton* self) {
    return self->isDefaults();
}

bool KCoreConfigSkeleton_IsSaveNeeded(const KCoreConfigSkeleton* self) {
    return self->isSaveNeeded();
}

void KCoreConfigSkeleton_SetCurrentGroup(KCoreConfigSkeleton* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setCurrentGroup(group_QString);
}

libqt_string KCoreConfigSkeleton_CurrentGroup(const KCoreConfigSkeleton* self) {
    QString _ret = self->currentGroup();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCoreConfigSkeleton_AddItem(KCoreConfigSkeleton* self, KConfigSkeletonItem* item) {
    self->addItem(item);
}

KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    return self->addItemPassword(name_QString, reference_QString);
}

KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    return self->addItemPath(name_QString, reference_QString);
}

KConfig* KCoreConfigSkeleton_Config(KCoreConfigSkeleton* self) {
    return self->config();
}

KConfig* KCoreConfigSkeleton_Config2(const KCoreConfigSkeleton* self) {
    return (KConfig*)self->config();
}

libqt_list /* of KConfigSkeletonItem* */ KCoreConfigSkeleton_Items(const KCoreConfigSkeleton* self) {
    QList<KConfigSkeletonItem*> _ret = self->items();
    // Convert QList<> from C++ memory to manually-managed C memory
    KConfigSkeletonItem** _arr = static_cast<KConfigSkeletonItem**>(malloc(sizeof(KConfigSkeletonItem*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCoreConfigSkeleton_RemoveItem(KCoreConfigSkeleton* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->removeItem(name_QString);
}

void KCoreConfigSkeleton_ClearItems(KCoreConfigSkeleton* self) {
    self->clearItems();
}

bool KCoreConfigSkeleton_IsImmutable(const KCoreConfigSkeleton* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->isImmutable(name_QString);
}

KConfigSkeletonItem* KCoreConfigSkeleton_FindItem(const KCoreConfigSkeleton* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->findItem(name_QString);
}

bool KCoreConfigSkeleton_UseDefaults(KCoreConfigSkeleton* self, bool b) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return self->useDefaults(b);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->useDefaults(b);
    }
}

bool KCoreConfigSkeleton_Save(KCoreConfigSkeleton* self) {
    return self->save();
}

void KCoreConfigSkeleton_ConfigChanged(KCoreConfigSkeleton* self) {
    self->configChanged();
}

void KCoreConfigSkeleton_Connect_ConfigChanged(KCoreConfigSkeleton* self, intptr_t slot) {
    void (*slotFunc)(KCoreConfigSkeleton*) = reinterpret_cast<void (*)(KCoreConfigSkeleton*)>(slot);
    KCoreConfigSkeleton::connect(self, &KCoreConfigSkeleton::configChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool KCoreConfigSkeleton_UsrUseDefaults(KCoreConfigSkeleton* self, bool b) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->usrUseDefaults(b);
    }
    return {};
}

void KCoreConfigSkeleton_UsrSetDefaults(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->usrSetDefaults();
    }
}

void KCoreConfigSkeleton_UsrRead(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->usrRead();
    }
}

bool KCoreConfigSkeleton_UsrSave(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->usrSave();
    }
    return {};
}

libqt_string KCoreConfigSkeleton_Tr2(const char* s, const char* c) {
    QString _ret = KCoreConfigSkeleton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCoreConfigSkeleton_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCoreConfigSkeleton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCoreConfigSkeleton_AddItem2(KCoreConfigSkeleton* self, KConfigSkeletonItem* item, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addItem(item, name_QString);
}

KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return self->addItemPassword(name_QString, reference_QString, defaultValue_QString);
}

KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemPassword(name_QString, reference_QString, defaultValue_QString, key_QString);
}

KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return self->addItemPath(name_QString, reference_QString, defaultValue_QString);
}

KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemPath(name_QString, reference_QString, defaultValue_QString, key_QString);
}

// Base class handler implementation
int KCoreConfigSkeleton_QBaseMetacall(KCoreConfigSkeleton* self, int param1, int param2, void** param3) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Metacall_IsBase(true);
        return vkcoreconfigskeleton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCoreConfigSkeleton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnMetacall(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Metacall_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseSetDefaults(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_SetDefaults_IsBase(true);
        vkcoreconfigskeleton->setDefaults();
    } else {
        self->KCoreConfigSkeleton::setDefaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnSetDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_SetDefaults_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_SetDefaults_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton_QBaseUseDefaults(KCoreConfigSkeleton* self, bool b) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UseDefaults_IsBase(true);
        return vkcoreconfigskeleton->useDefaults(b);
    } else {
        return self->KCoreConfigSkeleton::useDefaults(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUseDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UseDefaults_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UseDefaults_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton_QBaseUsrUseDefaults(KCoreConfigSkeleton* self, bool b) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrUseDefaults_IsBase(true);
        return vkcoreconfigskeleton->usrUseDefaults(b);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->usrUseDefaults(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrUseDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrUseDefaults_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrUseDefaults_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseUsrSetDefaults(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrSetDefaults_IsBase(true);
        vkcoreconfigskeleton->usrSetDefaults();
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->usrSetDefaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrSetDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrSetDefaults_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrSetDefaults_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseUsrRead(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrRead_IsBase(true);
        vkcoreconfigskeleton->usrRead();
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->usrRead();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrRead(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrRead_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrRead_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton_QBaseUsrSave(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrSave_IsBase(true);
        return vkcoreconfigskeleton->usrSave();
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->usrSave();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrSave(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_UsrSave_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrSave_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton_Event(KCoreConfigSkeleton* self, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->event(event);
    } else {
        return self->KCoreConfigSkeleton::event(event);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton_QBaseEvent(KCoreConfigSkeleton* self, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Event_IsBase(true);
        return vkcoreconfigskeleton->event(event);
    } else {
        return self->KCoreConfigSkeleton::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Event_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton_EventFilter(KCoreConfigSkeleton* self, QObject* watched, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->eventFilter(watched, event);
    } else {
        return self->KCoreConfigSkeleton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton_QBaseEventFilter(KCoreConfigSkeleton* self, QObject* watched, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_EventFilter_IsBase(true);
        return vkcoreconfigskeleton->eventFilter(watched, event);
    } else {
        return self->KCoreConfigSkeleton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnEventFilter(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_EventFilter_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton_TimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->timerEvent(event);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseTimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_TimerEvent_IsBase(true);
        vkcoreconfigskeleton->timerEvent(event);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnTimerEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_TimerEvent_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton_ChildEvent(KCoreConfigSkeleton* self, QChildEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->childEvent(event);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseChildEvent(KCoreConfigSkeleton* self, QChildEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_ChildEvent_IsBase(true);
        vkcoreconfigskeleton->childEvent(event);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnChildEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_ChildEvent_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton_CustomEvent(KCoreConfigSkeleton* self, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->customEvent(event);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseCustomEvent(KCoreConfigSkeleton* self, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_CustomEvent_IsBase(true);
        vkcoreconfigskeleton->customEvent(event);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnCustomEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_CustomEvent_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton_ConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->connectNotify(*signal);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_ConnectNotify_IsBase(true);
        vkcoreconfigskeleton->connectNotify(*signal);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnConnectNotify(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_ConnectNotify_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton_DisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->disconnectNotify(*signal);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_QBaseDisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_DisconnectNotify_IsBase(true);
        vkcoreconfigskeleton->disconnectNotify(*signal);
    } else {
        ((VirtualKCoreConfigSkeleton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnDisconnectNotify(KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_DisconnectNotify_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCoreConfigSkeleton_Sender(const KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->sender();
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCoreConfigSkeleton_QBaseSender(const KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Sender_IsBase(true);
        return vkcoreconfigskeleton->sender();
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnSender(const KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Sender_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCoreConfigSkeleton_SenderSignalIndex(const KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->senderSignalIndex();
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCoreConfigSkeleton_QBaseSenderSignalIndex(const KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_SenderSignalIndex_IsBase(true);
        return vkcoreconfigskeleton->senderSignalIndex();
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnSenderSignalIndex(const KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCoreConfigSkeleton_Receivers(const KCoreConfigSkeleton* self, const char* signal) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->receivers(signal);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCoreConfigSkeleton_QBaseReceivers(const KCoreConfigSkeleton* self, const char* signal) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Receivers_IsBase(true);
        return vkcoreconfigskeleton->receivers(signal);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnReceivers(const KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_Receivers_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton_IsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        return vkcoreconfigskeleton->isSignalConnected(*signal);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton_QBaseIsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_IsSignalConnected_IsBase(true);
        return vkcoreconfigskeleton->isSignalConnected(*signal);
    } else {
        return ((VirtualKCoreConfigSkeleton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnIsSignalConnected(const KCoreConfigSkeleton* self, intptr_t slot) {
    auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self));
    if (vkcoreconfigskeleton && vkcoreconfigskeleton->isVirtualKCoreConfigSkeleton) {
        vkcoreconfigskeleton->setKCoreConfigSkeleton_IsSignalConnected_Callback(reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_IsSignalConnected_Callback>(slot));
    }
}

void KCoreConfigSkeleton_Delete(KCoreConfigSkeleton* self) {
    delete self;
}

KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton__ItemPassword_new(const libqt_string _group, const libqt_string _key, libqt_string reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    return new VirtualKCoreConfigSkeletonItemPassword(_group_QString, _key_QString, reference_QString);
}

KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton__ItemPassword_new2(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return new VirtualKCoreConfigSkeletonItemPassword(_group_QString, _key_QString, reference_QString, defaultValue_QString);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPassword_WriteConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPassword::writeConfig(config);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPassword_QBaseWriteConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitempassword->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPassword::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnWriteConfig(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPassword_ReadConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPassword::readConfig(config);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPassword_QBaseReadConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitempassword->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPassword::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnReadConfig(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPassword_SetProperty(KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPassword::setProperty(*p);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPassword_QBaseSetProperty(KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_SetProperty_IsBase(true);
        vkcoreconfigskeletonitempassword->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPassword::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnSetProperty(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self);
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_SetProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemPassword_IsEqual(const KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self));
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        return vkcoreconfigskeletonitempassword->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPassword::isEqual(*p);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPassword_QBaseIsEqual(const KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self));
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitempassword->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPassword::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnIsEqual(const KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self));
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_IsEqual_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemPassword_Property(const KCoreConfigSkeleton__ItemPassword* self) {
    auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self));
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        return new QVariant(vkcoreconfigskeletonitempassword->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPassword*)self)->property());
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPassword_QBaseProperty(const KCoreConfigSkeleton__ItemPassword* self) {
    auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self));
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitempassword->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPassword*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnProperty(const KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self));
    if (vkcoreconfigskeletonitempassword && vkcoreconfigskeletonitempassword->isVirtualKCoreConfigSkeletonItemPassword) {
        vkcoreconfigskeletonitempassword->setKCoreConfigSkeleton__ItemPassword_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemPassword_Delete(KCoreConfigSkeleton__ItemPassword* self) {
    delete self;
}

KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton__ItemPath_new(const libqt_string _group, const libqt_string _key, libqt_string reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    return new VirtualKCoreConfigSkeletonItemPath(_group_QString, _key_QString, reference_QString);
}

KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton__ItemPath_new2(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return new VirtualKCoreConfigSkeletonItemPath(_group_QString, _key_QString, reference_QString, defaultValue_QString);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPath_WriteConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPath::writeConfig(config);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPath_QBaseWriteConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitempath->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPath::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnWriteConfig(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_WriteConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPath_ReadConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPath::readConfig(config);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPath_QBaseReadConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitempath->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPath::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnReadConfig(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_ReadConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPath_SetProperty(KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPath::setProperty(*p);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPath_QBaseSetProperty(KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_SetProperty_IsBase(true);
        vkcoreconfigskeletonitempath->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPath::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnSetProperty(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self);
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_SetProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemPath_IsEqual(const KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self));
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        return vkcoreconfigskeletonitempath->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPath::isEqual(*p);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPath_QBaseIsEqual(const KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self));
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitempath->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPath::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnIsEqual(const KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self));
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_IsEqual_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemPath_Property(const KCoreConfigSkeleton__ItemPath* self) {
    auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self));
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        return new QVariant(vkcoreconfigskeletonitempath->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPath*)self)->property());
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPath_QBaseProperty(const KCoreConfigSkeleton__ItemPath* self) {
    auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self));
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitempath->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPath*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnProperty(const KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self));
    if (vkcoreconfigskeletonitempath && vkcoreconfigskeletonitempath->isVirtualKCoreConfigSkeletonItemPath) {
        vkcoreconfigskeletonitempath->setKCoreConfigSkeleton__ItemPath_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemPath_Delete(KCoreConfigSkeleton__ItemPath* self) {
    delete self;
}

KCoreConfigSkeleton__ItemEnum__Choice* KCoreConfigSkeleton__ItemEnum__Choice_new(const KCoreConfigSkeleton__ItemEnum__Choice* param1) {
    return new KCoreConfigSkeleton::ItemEnum::Choice(*param1);
}

KCoreConfigSkeleton__ItemEnum__Choice* KCoreConfigSkeleton__ItemEnum__Choice_new2() {
    return new KCoreConfigSkeleton::ItemEnum::Choice();
}

libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Name(const KCoreConfigSkeleton__ItemEnum__Choice* self) {
    QString name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void KCoreConfigSkeleton__ItemEnum__Choice_SetName(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Label(const KCoreConfigSkeleton__ItemEnum__Choice* self) {
    QString label_ret = self->label;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray label_b = label_ret.toUtf8();
    libqt_string label_str;
    label_str.len = label_b.length();
    label_str.data = static_cast<const char*>(malloc(label_str.len + 1));
    memcpy((void*)label_str.data, label_b.data(), label_str.len);
    ((char*)label_str.data)[label_str.len] = '\0';
    return label_str;
}

void KCoreConfigSkeleton__ItemEnum__Choice_SetLabel(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->label = label_QString;
}

libqt_string KCoreConfigSkeleton__ItemEnum__Choice_ToolTip(const KCoreConfigSkeleton__ItemEnum__Choice* self) {
    QString toolTip_ret = self->toolTip;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray toolTip_b = toolTip_ret.toUtf8();
    libqt_string toolTip_str;
    toolTip_str.len = toolTip_b.length();
    toolTip_str.data = static_cast<const char*>(malloc(toolTip_str.len + 1));
    memcpy((void*)toolTip_str.data, toolTip_b.data(), toolTip_str.len);
    ((char*)toolTip_str.data)[toolTip_str.len] = '\0';
    return toolTip_str;
}

void KCoreConfigSkeleton__ItemEnum__Choice_SetToolTip(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->toolTip = toolTip_QString;
}

libqt_string KCoreConfigSkeleton__ItemEnum__Choice_WhatsThis(const KCoreConfigSkeleton__ItemEnum__Choice* self) {
    QString whatsThis_ret = self->whatsThis;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray whatsThis_b = whatsThis_ret.toUtf8();
    libqt_string whatsThis_str;
    whatsThis_str.len = whatsThis_b.length();
    whatsThis_str.data = static_cast<const char*>(malloc(whatsThis_str.len + 1));
    memcpy((void*)whatsThis_str.data, whatsThis_b.data(), whatsThis_str.len);
    ((char*)whatsThis_str.data)[whatsThis_str.len] = '\0';
    return whatsThis_str;
}

void KCoreConfigSkeleton__ItemEnum__Choice_SetWhatsThis(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->whatsThis = whatsThis_QString;
}

libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Value(const KCoreConfigSkeleton__ItemEnum__Choice* self) {
    QString value_ret = self->value;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray value_b = value_ret.toUtf8();
    libqt_string value_str;
    value_str.len = value_b.length();
    value_str.data = static_cast<const char*>(malloc(value_str.len + 1));
    memcpy((void*)value_str.data, value_b.data(), value_str.len);
    ((char*)value_str.data)[value_str.len] = '\0';
    return value_str;
}

void KCoreConfigSkeleton__ItemEnum__Choice_SetValue(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->value = value_QString;
}

void KCoreConfigSkeleton__ItemEnum__Choice_OperatorAssign(KCoreConfigSkeleton__ItemEnum__Choice* self, const KCoreConfigSkeleton__ItemEnum__Choice* param1) {
    self->operator=(*param1);
}

void KCoreConfigSkeleton__ItemEnum__Choice_Delete(KCoreConfigSkeleton__ItemEnum__Choice* self) {
    delete self;
}

KCoreConfigSkeleton__ItemEnum* KCoreConfigSkeleton__ItemEnum_new(const libqt_string _group, const libqt_string _key, int* reference, const libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ choices) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<KCoreConfigSkeleton::ItemEnum::Choice> choices_QList;
    choices_QList.reserve(choices.len);
    KCoreConfigSkeleton__ItemEnum__Choice** choices_arr = static_cast<KCoreConfigSkeleton__ItemEnum__Choice**>(choices.data);
    for (size_t i = 0; i < choices.len; ++i) {
        choices_QList.push_back(*(choices_arr[i]));
    }
    return new VirtualKCoreConfigSkeletonItemEnum(_group_QString, _key_QString, static_cast<qint32&>(*reference), choices_QList);
}

KCoreConfigSkeleton__ItemEnum* KCoreConfigSkeleton__ItemEnum_new2(const libqt_string _group, const libqt_string _key, int* reference, const libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ choices, int defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<KCoreConfigSkeleton::ItemEnum::Choice> choices_QList;
    choices_QList.reserve(choices.len);
    KCoreConfigSkeleton__ItemEnum__Choice** choices_arr = static_cast<KCoreConfigSkeleton__ItemEnum__Choice**>(choices.data);
    for (size_t i = 0; i < choices.len; ++i) {
        choices_QList.push_back(*(choices_arr[i]));
    }
    return new VirtualKCoreConfigSkeletonItemEnum(_group_QString, _key_QString, static_cast<qint32&>(*reference), choices_QList, static_cast<qint32>(defaultValue));
}

libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ KCoreConfigSkeleton__ItemEnum_Choices(const KCoreConfigSkeleton__ItemEnum* self) {
    QList<KCoreConfigSkeleton::ItemEnum::Choice> _ret = self->choices();
    // Convert QList<> from C++ memory to manually-managed C memory
    KCoreConfigSkeleton__ItemEnum__Choice** _arr = static_cast<KCoreConfigSkeleton__ItemEnum__Choice**>(malloc(sizeof(KCoreConfigSkeleton__ItemEnum__Choice*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KCoreConfigSkeleton::ItemEnum::Choice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCoreConfigSkeleton__ItemEnum_ReadConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeleton__itemenum && vkcoreconfigskeleton__itemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemEnum*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemEnum_WriteConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeleton__itemenum && vkcoreconfigskeleton__itemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        self->writeConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemEnum*)self)->writeConfig(config);
    }
}

libqt_string KCoreConfigSkeleton__ItemEnum_ValueForChoice(const KCoreConfigSkeleton__ItemEnum* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->valueForChoice(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCoreConfigSkeleton__ItemEnum_SetValueForChoice(KCoreConfigSkeleton__ItemEnum* self, const libqt_string name, const libqt_string valueForChoice) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString valueForChoice_QString = QString::fromUtf8(valueForChoice.data, valueForChoice.len);
    self->setValueForChoice(name_QString, valueForChoice_QString);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemEnum_QBaseReadConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemenum->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemEnum::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnReadConfig(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemEnum_QBaseWriteConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitemenum->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemEnum::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnWriteConfig(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemEnum_SetProperty(KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemEnum::setProperty(*p);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemEnum_QBaseSetProperty(KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemenum->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemEnum::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnSetProperty(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self);
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_SetProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemEnum_IsEqual(const KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        return vkcoreconfigskeletonitemenum->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemEnum::isEqual(*p);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemEnum_QBaseIsEqual(const KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemenum->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemEnum::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnIsEqual(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_IsEqual_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_Property(const KCoreConfigSkeleton__ItemEnum* self) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        return new QVariant(vkcoreconfigskeletonitemenum->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemEnum*)self)->property());
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_QBaseProperty(const KCoreConfigSkeleton__ItemEnum* self) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemenum->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemEnum*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnProperty(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_Property_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_MinValue(const KCoreConfigSkeleton__ItemEnum* self) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        return new QVariant(vkcoreconfigskeletonitemenum->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemEnum*)self)->minValue());
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_QBaseMinValue(const KCoreConfigSkeleton__ItemEnum* self) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_MinValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemenum->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemEnum*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnMinValue(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_MinValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_MinValue_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_MaxValue(const KCoreConfigSkeleton__ItemEnum* self) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        return new QVariant(vkcoreconfigskeletonitemenum->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemEnum*)self)->maxValue());
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_QBaseMaxValue(const KCoreConfigSkeleton__ItemEnum* self) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_MaxValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemenum->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemEnum*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnMaxValue(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self));
    if (vkcoreconfigskeletonitemenum && vkcoreconfigskeletonitemenum->isVirtualKCoreConfigSkeletonItemEnum) {
        vkcoreconfigskeletonitemenum->setKCoreConfigSkeleton__ItemEnum_MaxValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_MaxValue_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemEnum_Delete(KCoreConfigSkeleton__ItemEnum* self) {
    delete self;
}

KCoreConfigSkeleton__ItemPathList* KCoreConfigSkeleton__ItemPathList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<QString> reference_QList;
    reference_QList.reserve(reference.len);
    libqt_string* reference_arr = static_cast<libqt_string*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        QString reference_arr_i_QString = QString::fromUtf8(reference_arr[i].data, reference_arr[i].len);
        reference_QList.push_back(reference_arr_i_QString);
    }
    return new VirtualKCoreConfigSkeletonItemPathList(_group_QString, _key_QString, reference_QList);
}

KCoreConfigSkeleton__ItemPathList* KCoreConfigSkeleton__ItemPathList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<QString> reference_QList;
    reference_QList.reserve(reference.len);
    libqt_string* reference_arr = static_cast<libqt_string*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        QString reference_arr_i_QString = QString::fromUtf8(reference_arr[i].data, reference_arr[i].len);
        reference_QList.push_back(reference_arr_i_QString);
    }
    QList<QString> defaultValue_QList;
    defaultValue_QList.reserve(defaultValue.len);
    libqt_string* defaultValue_arr = static_cast<libqt_string*>(defaultValue.data);
    for (size_t i = 0; i < defaultValue.len; ++i) {
        QString defaultValue_arr_i_QString = QString::fromUtf8(defaultValue_arr[i].data, defaultValue_arr[i].len);
        defaultValue_QList.push_back(defaultValue_arr_i_QString);
    }
    return new VirtualKCoreConfigSkeletonItemPathList(_group_QString, _key_QString, reference_QList, defaultValue_QList);
}

void KCoreConfigSkeleton__ItemPathList_ReadConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeleton__itempathlist && vkcoreconfigskeleton__itempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemPathList*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemPathList_WriteConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeleton__itempathlist && vkcoreconfigskeleton__itempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        self->writeConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemPathList*)self)->writeConfig(config);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPathList_QBaseReadConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitempathlist->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPathList::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnReadConfig(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPathList_QBaseWriteConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitempathlist->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPathList::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnWriteConfig(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPathList_SetProperty(KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPathList::setProperty(*p);
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPathList_QBaseSetProperty(KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_SetProperty_IsBase(true);
        vkcoreconfigskeletonitempathlist->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPathList::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnSetProperty(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self);
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_SetProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemPathList_IsEqual(const KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self));
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        return vkcoreconfigskeletonitempathlist->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPathList::isEqual(*p);
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPathList_QBaseIsEqual(const KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self));
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitempathlist->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPathList::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnIsEqual(const KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self));
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_IsEqual_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemPathList_Property(const KCoreConfigSkeleton__ItemPathList* self) {
    auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self));
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        return new QVariant(vkcoreconfigskeletonitempathlist->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPathList*)self)->property());
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPathList_QBaseProperty(const KCoreConfigSkeleton__ItemPathList* self) {
    auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self));
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitempathlist->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPathList*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnProperty(const KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self));
    if (vkcoreconfigskeletonitempathlist && vkcoreconfigskeletonitempathlist->isVirtualKCoreConfigSkeletonItemPathList) {
        vkcoreconfigskeletonitempathlist->setKCoreConfigSkeleton__ItemPathList_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemPathList_Delete(KCoreConfigSkeleton__ItemPathList* self) {
    delete self;
}
