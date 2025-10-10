#include <KConfig>
#include <KConfigGroup>
#include <KCoreConfigSkeleton>
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemBool
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemDateTime
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemDouble
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum__Choice
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemInt
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemIntList
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemLongLong
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPassword
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPath
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPathList
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPoint
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPointF
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemProperty
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemRect
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemRectF
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemSize
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemSizeF
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemString
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemStringList
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemUInt
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemULongLong
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemUrl
#define WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemUrlList
#include <QByteArray>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
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

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton_AddItemString(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    return self->addItemString(name_QString, reference_QString);
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

KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton_AddItemProperty(KCoreConfigSkeleton* self, const libqt_string name, QVariant* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemProperty(name_QString, *reference);
}

KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton_AddItemBool(KCoreConfigSkeleton* self, const libqt_string name, bool* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemBool(name_QString, *reference);
}

KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton_AddItemInt(KCoreConfigSkeleton* self, const libqt_string name, int* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemInt(name_QString, static_cast<qint32&>(*reference));
}

KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton_AddItemUInt(KCoreConfigSkeleton* self, const libqt_string name, unsigned int* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemUInt(name_QString, static_cast<quint32&>(*reference));
}

KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton_AddItemLongLong(KCoreConfigSkeleton* self, const libqt_string name, long long* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemLongLong(name_QString, static_cast<qint64&>(*reference));
}

KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton_AddItemULongLong(KCoreConfigSkeleton* self, const libqt_string name, unsigned long long* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemULongLong(name_QString, static_cast<quint64&>(*reference));
}

KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton_AddItemDouble(KCoreConfigSkeleton* self, const libqt_string name, double* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemDouble(name_QString, static_cast<double&>(*reference));
}

KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton_AddItemRect(KCoreConfigSkeleton* self, const libqt_string name, QRect* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemRect(name_QString, *reference);
}

KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton_AddItemRectF(KCoreConfigSkeleton* self, const libqt_string name, QRectF* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemRectF(name_QString, *reference);
}

KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton_AddItemPoint(KCoreConfigSkeleton* self, const libqt_string name, QPoint* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemPoint(name_QString, *reference);
}

KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton_AddItemPointF(KCoreConfigSkeleton* self, const libqt_string name, QPointF* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemPointF(name_QString, *reference);
}

KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton_AddItemSize(KCoreConfigSkeleton* self, const libqt_string name, QSize* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemSize(name_QString, *reference);
}

KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton_AddItemSizeF(KCoreConfigSkeleton* self, const libqt_string name, QSizeF* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemSizeF(name_QString, *reference);
}

KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton_AddItemDateTime(KCoreConfigSkeleton* self, const libqt_string name, QDateTime* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemDateTime(name_QString, *reference);
}

KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton_AddItemStringList(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of libqt_string */ reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> reference_QList;
    reference_QList.reserve(reference.len);
    libqt_string* reference_arr = static_cast<libqt_string*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        QString reference_arr_i_QString = QString::fromUtf8(reference_arr[i].data, reference_arr[i].len);
        reference_QList.push_back(reference_arr_i_QString);
    }
    return self->addItemStringList(name_QString, reference_QList);
}

KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton_AddItemIntList(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of int */ reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<int> reference_QList;
    reference_QList.reserve(reference.len);
    int* reference_arr = static_cast<int*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(static_cast<int>(reference_arr[i]));
    }
    return self->addItemIntList(name_QString, reference_QList);
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

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton_AddItemString3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return self->addItemString(name_QString, reference_QString, defaultValue_QString);
}

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton_AddItemString4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemString(name_QString, reference_QString, defaultValue_QString, key_QString);
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

KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton_AddItemProperty3(KCoreConfigSkeleton* self, const libqt_string name, QVariant* reference, const QVariant* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemProperty(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton_AddItemProperty4(KCoreConfigSkeleton* self, const libqt_string name, QVariant* reference, const QVariant* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemProperty(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton_AddItemBool3(KCoreConfigSkeleton* self, const libqt_string name, bool* reference, bool defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemBool(name_QString, *reference, defaultValue);
}

KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton_AddItemBool4(KCoreConfigSkeleton* self, const libqt_string name, bool* reference, bool defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemBool(name_QString, *reference, defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton_AddItemInt3(KCoreConfigSkeleton* self, const libqt_string name, int* reference, int defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemInt(name_QString, static_cast<qint32&>(*reference), static_cast<qint32>(defaultValue));
}

KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton_AddItemInt4(KCoreConfigSkeleton* self, const libqt_string name, int* reference, int defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemInt(name_QString, static_cast<qint32&>(*reference), static_cast<qint32>(defaultValue), key_QString);
}

KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton_AddItemUInt3(KCoreConfigSkeleton* self, const libqt_string name, unsigned int* reference, unsigned int defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemUInt(name_QString, static_cast<quint32&>(*reference), static_cast<quint32>(defaultValue));
}

KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton_AddItemUInt4(KCoreConfigSkeleton* self, const libqt_string name, unsigned int* reference, unsigned int defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemUInt(name_QString, static_cast<quint32&>(*reference), static_cast<quint32>(defaultValue), key_QString);
}

KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton_AddItemLongLong3(KCoreConfigSkeleton* self, const libqt_string name, long long* reference, long long defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemLongLong(name_QString, static_cast<qint64&>(*reference), static_cast<qint64>(defaultValue));
}

KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton_AddItemLongLong4(KCoreConfigSkeleton* self, const libqt_string name, long long* reference, long long defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemLongLong(name_QString, static_cast<qint64&>(*reference), static_cast<qint64>(defaultValue), key_QString);
}

KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton_AddItemULongLong3(KCoreConfigSkeleton* self, const libqt_string name, unsigned long long* reference, unsigned long long defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemULongLong(name_QString, static_cast<quint64&>(*reference), static_cast<quint64>(defaultValue));
}

KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton_AddItemULongLong4(KCoreConfigSkeleton* self, const libqt_string name, unsigned long long* reference, unsigned long long defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemULongLong(name_QString, static_cast<quint64&>(*reference), static_cast<quint64>(defaultValue), key_QString);
}

KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton_AddItemDouble3(KCoreConfigSkeleton* self, const libqt_string name, double* reference, double defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemDouble(name_QString, static_cast<double&>(*reference), static_cast<double>(defaultValue));
}

KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton_AddItemDouble4(KCoreConfigSkeleton* self, const libqt_string name, double* reference, double defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemDouble(name_QString, static_cast<double&>(*reference), static_cast<double>(defaultValue), key_QString);
}

KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton_AddItemRect3(KCoreConfigSkeleton* self, const libqt_string name, QRect* reference, const QRect* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemRect(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton_AddItemRect4(KCoreConfigSkeleton* self, const libqt_string name, QRect* reference, const QRect* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemRect(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton_AddItemRectF3(KCoreConfigSkeleton* self, const libqt_string name, QRectF* reference, const QRectF* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemRectF(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton_AddItemRectF4(KCoreConfigSkeleton* self, const libqt_string name, QRectF* reference, const QRectF* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemRectF(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton_AddItemPoint3(KCoreConfigSkeleton* self, const libqt_string name, QPoint* reference, const QPoint* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemPoint(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton_AddItemPoint4(KCoreConfigSkeleton* self, const libqt_string name, QPoint* reference, const QPoint* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemPoint(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton_AddItemPointF3(KCoreConfigSkeleton* self, const libqt_string name, QPointF* reference, const QPointF* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemPointF(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton_AddItemPointF4(KCoreConfigSkeleton* self, const libqt_string name, QPointF* reference, const QPointF* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemPointF(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton_AddItemSize3(KCoreConfigSkeleton* self, const libqt_string name, QSize* reference, const QSize* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemSize(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton_AddItemSize4(KCoreConfigSkeleton* self, const libqt_string name, QSize* reference, const QSize* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemSize(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton_AddItemSizeF3(KCoreConfigSkeleton* self, const libqt_string name, QSizeF* reference, const QSizeF* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemSizeF(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton_AddItemSizeF4(KCoreConfigSkeleton* self, const libqt_string name, QSizeF* reference, const QSizeF* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemSizeF(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton_AddItemDateTime3(KCoreConfigSkeleton* self, const libqt_string name, QDateTime* reference, const QDateTime* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemDateTime(name_QString, *reference, *defaultValue);
}

KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton_AddItemDateTime4(KCoreConfigSkeleton* self, const libqt_string name, QDateTime* reference, const QDateTime* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemDateTime(name_QString, *reference, *defaultValue, key_QString);
}

KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton_AddItemStringList3(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
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
    return self->addItemStringList(name_QString, reference_QList, defaultValue_QList);
}

KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton_AddItemStringList4(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
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
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemStringList(name_QString, reference_QList, defaultValue_QList, key_QString);
}

KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton_AddItemIntList3(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of int */ reference, const libqt_list /* of int */ defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<int> reference_QList;
    reference_QList.reserve(reference.len);
    int* reference_arr = static_cast<int*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(static_cast<int>(reference_arr[i]));
    }
    QList<int> defaultValue_QList;
    defaultValue_QList.reserve(defaultValue.len);
    int* defaultValue_arr = static_cast<int*>(defaultValue.data);
    for (size_t i = 0; i < defaultValue.len; ++i) {
        defaultValue_QList.push_back(static_cast<int>(defaultValue_arr[i]));
    }
    return self->addItemIntList(name_QString, reference_QList, defaultValue_QList);
}

KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton_AddItemIntList4(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of int */ reference, const libqt_list /* of int */ defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<int> reference_QList;
    reference_QList.reserve(reference.len);
    int* reference_arr = static_cast<int*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(static_cast<int>(reference_arr[i]));
    }
    QList<int> defaultValue_QList;
    defaultValue_QList.reserve(defaultValue.len);
    int* defaultValue_arr = static_cast<int*>(defaultValue.data);
    for (size_t i = 0; i < defaultValue.len; ++i) {
        defaultValue_QList.push_back(static_cast<int>(defaultValue_arr[i]));
    }
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemIntList(name_QString, reference_QList, defaultValue_QList, key_QString);
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

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton__ItemString_new(const libqt_string _group, const libqt_string _key, libqt_string reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    return new VirtualKCoreConfigSkeletonItemString(_group_QString, _key_QString, reference_QString);
}

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton__ItemString_new2(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return new VirtualKCoreConfigSkeletonItemString(_group_QString, _key_QString, reference_QString, defaultValue_QString);
}

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton__ItemString_new3(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue, int typeVal) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return new VirtualKCoreConfigSkeletonItemString(_group_QString, _key_QString, reference_QString, defaultValue_QString, static_cast<KCoreConfigSkeleton::ItemString::Type>(typeVal));
}

void KCoreConfigSkeleton__ItemString_WriteConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeleton__itemstring && vkcoreconfigskeleton__itemstring->isVirtualKCoreConfigSkeletonItemString) {
        self->writeConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemString*)self)->writeConfig(config);
    }
}

void KCoreConfigSkeleton__ItemString_ReadConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeleton__itemstring && vkcoreconfigskeleton__itemstring->isVirtualKCoreConfigSkeletonItemString) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemString*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemString_SetProperty(KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeleton__itemstring && vkcoreconfigskeleton__itemstring->isVirtualKCoreConfigSkeletonItemString) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemString*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemString_IsEqual(const KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemstring = dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeleton__itemstring && vkcoreconfigskeleton__itemstring->isVirtualKCoreConfigSkeletonItemString) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemString*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemString_Property(const KCoreConfigSkeleton__ItemString* self) {
    auto* vkcoreconfigskeleton__itemstring = dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeleton__itemstring && vkcoreconfigskeleton__itemstring->isVirtualKCoreConfigSkeletonItemString) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemString*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemString_QBaseWriteConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitemstring->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemString::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnWriteConfig(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_WriteConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemString_QBaseReadConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemstring->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemString::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnReadConfig(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemString_QBaseSetProperty(KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemstring->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemString::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnSetProperty(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self);
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemString_QBaseIsEqual(const KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemstring = const_cast<VirtualKCoreConfigSkeletonItemString*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self));
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemstring->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemString::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnIsEqual(const KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstring = const_cast<VirtualKCoreConfigSkeletonItemString*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self));
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemString_QBaseProperty(const KCoreConfigSkeleton__ItemString* self) {
    auto* vkcoreconfigskeletonitemstring = const_cast<VirtualKCoreConfigSkeletonItemString*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self));
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemstring->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemString*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnProperty(const KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstring = const_cast<VirtualKCoreConfigSkeletonItemString*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self));
    if (vkcoreconfigskeletonitemstring && vkcoreconfigskeletonitemstring->isVirtualKCoreConfigSkeletonItemString) {
        vkcoreconfigskeletonitemstring->setKCoreConfigSkeleton__ItemString_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemString_Delete(KCoreConfigSkeleton__ItemString* self) {
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

KCoreConfigSkeleton__ItemUrl* KCoreConfigSkeleton__ItemUrl_new(const libqt_string _group, const libqt_string _key, QUrl* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemUrl(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemUrl* KCoreConfigSkeleton__ItemUrl_new2(const libqt_string _group, const libqt_string _key, QUrl* reference, const QUrl* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemUrl(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemUrl_WriteConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeleton__itemurl && vkcoreconfigskeleton__itemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        self->writeConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemUrl*)self)->writeConfig(config);
    }
}

void KCoreConfigSkeleton__ItemUrl_ReadConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeleton__itemurl && vkcoreconfigskeleton__itemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemUrl*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemUrl_SetProperty(KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeleton__itemurl && vkcoreconfigskeleton__itemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemUrl*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemUrl_IsEqual(const KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemurl = dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeleton__itemurl && vkcoreconfigskeleton__itemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemUrl*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemUrl_Property(const KCoreConfigSkeleton__ItemUrl* self) {
    auto* vkcoreconfigskeleton__itemurl = dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeleton__itemurl && vkcoreconfigskeleton__itemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUrl*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrl_QBaseWriteConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitemurl->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemUrl::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnWriteConfig(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrl_QBaseReadConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemurl->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemUrl::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnReadConfig(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrl_QBaseSetProperty(KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemurl->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemUrl::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnSetProperty(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self);
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemUrl_QBaseIsEqual(const KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemurl = const_cast<VirtualKCoreConfigSkeletonItemUrl*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self));
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemurl->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemUrl::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnIsEqual(const KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurl = const_cast<VirtualKCoreConfigSkeletonItemUrl*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self));
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUrl_QBaseProperty(const KCoreConfigSkeleton__ItemUrl* self) {
    auto* vkcoreconfigskeletonitemurl = const_cast<VirtualKCoreConfigSkeletonItemUrl*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self));
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemurl->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUrl*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnProperty(const KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurl = const_cast<VirtualKCoreConfigSkeletonItemUrl*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self));
    if (vkcoreconfigskeletonitemurl && vkcoreconfigskeletonitemurl->isVirtualKCoreConfigSkeletonItemUrl) {
        vkcoreconfigskeletonitemurl->setKCoreConfigSkeleton__ItemUrl_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemUrl_Delete(KCoreConfigSkeleton__ItemUrl* self) {
    delete self;
}

KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton__ItemProperty_new(const libqt_string _group, const libqt_string _key, QVariant* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemProperty(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton__ItemProperty_new2(const libqt_string _group, const libqt_string _key, QVariant* reference, const QVariant* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemProperty(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemProperty_ReadConfig(KCoreConfigSkeleton__ItemProperty* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeleton__itemproperty && vkcoreconfigskeleton__itemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemProperty*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemProperty_SetProperty(KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeleton__itemproperty && vkcoreconfigskeleton__itemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemProperty*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemProperty_IsEqual(const KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemproperty = dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeleton__itemproperty && vkcoreconfigskeleton__itemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemProperty*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemProperty_Property(const KCoreConfigSkeleton__ItemProperty* self) {
    auto* vkcoreconfigskeleton__itemproperty = dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeleton__itemproperty && vkcoreconfigskeleton__itemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemProperty*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemProperty_QBaseReadConfig(KCoreConfigSkeleton__ItemProperty* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemproperty->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemProperty::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnReadConfig(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemProperty_QBaseSetProperty(KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemproperty->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemProperty::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnSetProperty(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self);
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemProperty_QBaseIsEqual(const KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemproperty = const_cast<VirtualKCoreConfigSkeletonItemProperty*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self));
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemproperty->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemProperty::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnIsEqual(const KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemproperty = const_cast<VirtualKCoreConfigSkeletonItemProperty*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self));
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemProperty_QBaseProperty(const KCoreConfigSkeleton__ItemProperty* self) {
    auto* vkcoreconfigskeletonitemproperty = const_cast<VirtualKCoreConfigSkeletonItemProperty*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self));
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemproperty->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemProperty*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnProperty(const KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemproperty = const_cast<VirtualKCoreConfigSkeletonItemProperty*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self));
    if (vkcoreconfigskeletonitemproperty && vkcoreconfigskeletonitemproperty->isVirtualKCoreConfigSkeletonItemProperty) {
        vkcoreconfigskeletonitemproperty->setKCoreConfigSkeleton__ItemProperty_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemProperty_Delete(KCoreConfigSkeleton__ItemProperty* self) {
    delete self;
}

KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton__ItemBool_new(const libqt_string _group, const libqt_string _key, bool* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemBool(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton__ItemBool_new2(const libqt_string _group, const libqt_string _key, bool* reference, bool defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemBool(_group_QString, _key_QString, *reference, defaultValue);
}

void KCoreConfigSkeleton__ItemBool_ReadConfig(KCoreConfigSkeleton__ItemBool* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeleton__itembool && vkcoreconfigskeleton__itembool->isVirtualKCoreConfigSkeletonItemBool) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemBool*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemBool_SetProperty(KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeleton__itembool && vkcoreconfigskeleton__itembool->isVirtualKCoreConfigSkeletonItemBool) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemBool*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemBool_IsEqual(const KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itembool = dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeleton__itembool && vkcoreconfigskeleton__itembool->isVirtualKCoreConfigSkeletonItemBool) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemBool*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemBool_Property(const KCoreConfigSkeleton__ItemBool* self) {
    auto* vkcoreconfigskeleton__itembool = dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeleton__itembool && vkcoreconfigskeleton__itembool->isVirtualKCoreConfigSkeletonItemBool) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemBool*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemBool_QBaseReadConfig(KCoreConfigSkeleton__ItemBool* self, KConfig* config) {
    auto* vkcoreconfigskeletonitembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitembool->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemBool::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnReadConfig(KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemBool_QBaseSetProperty(KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_SetProperty_IsBase(true);
        vkcoreconfigskeletonitembool->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemBool::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnSetProperty(KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self);
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemBool_QBaseIsEqual(const KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitembool = const_cast<VirtualKCoreConfigSkeletonItemBool*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self));
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitembool->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemBool::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnIsEqual(const KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitembool = const_cast<VirtualKCoreConfigSkeletonItemBool*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self));
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemBool_QBaseProperty(const KCoreConfigSkeleton__ItemBool* self) {
    auto* vkcoreconfigskeletonitembool = const_cast<VirtualKCoreConfigSkeletonItemBool*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self));
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitembool->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemBool*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnProperty(const KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitembool = const_cast<VirtualKCoreConfigSkeletonItemBool*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self));
    if (vkcoreconfigskeletonitembool && vkcoreconfigskeletonitembool->isVirtualKCoreConfigSkeletonItemBool) {
        vkcoreconfigskeletonitembool->setKCoreConfigSkeleton__ItemBool_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemBool_Delete(KCoreConfigSkeleton__ItemBool* self) {
    delete self;
}

KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton__ItemInt_new(const libqt_string _group, const libqt_string _key, int* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemInt(_group_QString, _key_QString, static_cast<qint32&>(*reference));
}

KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton__ItemInt_new2(const libqt_string _group, const libqt_string _key, int* reference, int defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemInt(_group_QString, _key_QString, static_cast<qint32&>(*reference), static_cast<qint32>(defaultValue));
}

void KCoreConfigSkeleton__ItemInt_ReadConfig(KCoreConfigSkeleton__ItemInt* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeleton__itemint && vkcoreconfigskeleton__itemint->isVirtualKCoreConfigSkeletonItemInt) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemInt*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemInt_SetProperty(KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeleton__itemint && vkcoreconfigskeleton__itemint->isVirtualKCoreConfigSkeletonItemInt) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemInt*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemInt_IsEqual(const KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemint = dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeleton__itemint && vkcoreconfigskeleton__itemint->isVirtualKCoreConfigSkeletonItemInt) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemInt*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemInt_Property(const KCoreConfigSkeleton__ItemInt* self) {
    auto* vkcoreconfigskeleton__itemint = dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeleton__itemint && vkcoreconfigskeleton__itemint->isVirtualKCoreConfigSkeletonItemInt) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemInt*)self)->property());
    }
}

QVariant* KCoreConfigSkeleton__ItemInt_MinValue(const KCoreConfigSkeleton__ItemInt* self) {
    auto* vkcoreconfigskeleton__itemint = dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeleton__itemint && vkcoreconfigskeleton__itemint->isVirtualKCoreConfigSkeletonItemInt) {
        return new QVariant(self->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemInt*)self)->minValue());
    }
}

QVariant* KCoreConfigSkeleton__ItemInt_MaxValue(const KCoreConfigSkeleton__ItemInt* self) {
    auto* vkcoreconfigskeleton__itemint = dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeleton__itemint && vkcoreconfigskeleton__itemint->isVirtualKCoreConfigSkeletonItemInt) {
        return new QVariant(self->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemInt*)self)->maxValue());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemInt_QBaseReadConfig(KCoreConfigSkeleton__ItemInt* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemint->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemInt::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnReadConfig(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemInt_QBaseSetProperty(KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemint->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemInt::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnSetProperty(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self);
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemInt_QBaseIsEqual(const KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemint->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemInt::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnIsEqual(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemInt_QBaseProperty(const KCoreConfigSkeleton__ItemInt* self) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemint->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemInt*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnProperty(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_Property_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemInt_QBaseMinValue(const KCoreConfigSkeleton__ItemInt* self) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_MinValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemint->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemInt*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnMinValue(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_MinValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_MinValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemInt_QBaseMaxValue(const KCoreConfigSkeleton__ItemInt* self) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_MaxValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemint->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemInt*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnMaxValue(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self));
    if (vkcoreconfigskeletonitemint && vkcoreconfigskeletonitemint->isVirtualKCoreConfigSkeletonItemInt) {
        vkcoreconfigskeletonitemint->setKCoreConfigSkeleton__ItemInt_MaxValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_MaxValue_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemInt_Delete(KCoreConfigSkeleton__ItemInt* self) {
    delete self;
}

KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton__ItemLongLong_new(const libqt_string _group, const libqt_string _key, long long* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemLongLong(_group_QString, _key_QString, static_cast<qint64&>(*reference));
}

KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton__ItemLongLong_new2(const libqt_string _group, const libqt_string _key, long long* reference, long long defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemLongLong(_group_QString, _key_QString, static_cast<qint64&>(*reference), static_cast<qint64>(defaultValue));
}

void KCoreConfigSkeleton__ItemLongLong_ReadConfig(KCoreConfigSkeleton__ItemLongLong* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeleton__itemlonglong && vkcoreconfigskeleton__itemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemLongLong*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemLongLong_SetProperty(KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeleton__itemlonglong && vkcoreconfigskeleton__itemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemLongLong*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemLongLong_IsEqual(const KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemlonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeleton__itemlonglong && vkcoreconfigskeleton__itemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemLongLong*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemLongLong_Property(const KCoreConfigSkeleton__ItemLongLong* self) {
    auto* vkcoreconfigskeleton__itemlonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeleton__itemlonglong && vkcoreconfigskeleton__itemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemLongLong*)self)->property());
    }
}

QVariant* KCoreConfigSkeleton__ItemLongLong_MinValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    auto* vkcoreconfigskeleton__itemlonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeleton__itemlonglong && vkcoreconfigskeleton__itemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        return new QVariant(self->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemLongLong*)self)->minValue());
    }
}

QVariant* KCoreConfigSkeleton__ItemLongLong_MaxValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    auto* vkcoreconfigskeleton__itemlonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeleton__itemlonglong && vkcoreconfigskeleton__itemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        return new QVariant(self->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemLongLong*)self)->maxValue());
    }
}

void KCoreConfigSkeleton__ItemLongLong_SetMinValue(KCoreConfigSkeleton__ItemLongLong* self, long long minValue) {
    self->setMinValue(static_cast<long long>(minValue));
}

void KCoreConfigSkeleton__ItemLongLong_SetMaxValue(KCoreConfigSkeleton__ItemLongLong* self, long long maxValue) {
    self->setMaxValue(static_cast<long long>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemLongLong_QBaseReadConfig(KCoreConfigSkeleton__ItemLongLong* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemlonglong->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemLongLong::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnReadConfig(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemLongLong_QBaseSetProperty(KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemlonglong->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemLongLong::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnSetProperty(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self);
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemLongLong_QBaseIsEqual(const KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemlonglong->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemLongLong::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnIsEqual(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemLongLong_QBaseProperty(const KCoreConfigSkeleton__ItemLongLong* self) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemlonglong->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemLongLong*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnProperty(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_Property_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemLongLong_QBaseMinValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_MinValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemlonglong->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemLongLong*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnMinValue(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_MinValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_MinValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemLongLong_QBaseMaxValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_MaxValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemlonglong->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemLongLong*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnMaxValue(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self));
    if (vkcoreconfigskeletonitemlonglong && vkcoreconfigskeletonitemlonglong->isVirtualKCoreConfigSkeletonItemLongLong) {
        vkcoreconfigskeletonitemlonglong->setKCoreConfigSkeleton__ItemLongLong_MaxValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemLongLong_Delete(KCoreConfigSkeleton__ItemLongLong* self) {
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

KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton__ItemUInt_new(const libqt_string _group, const libqt_string _key, unsigned int* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemUInt(_group_QString, _key_QString, static_cast<quint32&>(*reference));
}

KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton__ItemUInt_new2(const libqt_string _group, const libqt_string _key, unsigned int* reference, unsigned int defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemUInt(_group_QString, _key_QString, static_cast<quint32&>(*reference), static_cast<quint32>(defaultValue));
}

void KCoreConfigSkeleton__ItemUInt_ReadConfig(KCoreConfigSkeleton__ItemUInt* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeleton__itemuint && vkcoreconfigskeleton__itemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemUInt*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemUInt_SetProperty(KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeleton__itemuint && vkcoreconfigskeleton__itemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemUInt*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemUInt_IsEqual(const KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemuint = dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeleton__itemuint && vkcoreconfigskeleton__itemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemUInt*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemUInt_Property(const KCoreConfigSkeleton__ItemUInt* self) {
    auto* vkcoreconfigskeleton__itemuint = dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeleton__itemuint && vkcoreconfigskeleton__itemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUInt*)self)->property());
    }
}

QVariant* KCoreConfigSkeleton__ItemUInt_MinValue(const KCoreConfigSkeleton__ItemUInt* self) {
    auto* vkcoreconfigskeleton__itemuint = dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeleton__itemuint && vkcoreconfigskeleton__itemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        return new QVariant(self->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUInt*)self)->minValue());
    }
}

QVariant* KCoreConfigSkeleton__ItemUInt_MaxValue(const KCoreConfigSkeleton__ItemUInt* self) {
    auto* vkcoreconfigskeleton__itemuint = dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeleton__itemuint && vkcoreconfigskeleton__itemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        return new QVariant(self->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUInt*)self)->maxValue());
    }
}

void KCoreConfigSkeleton__ItemUInt_SetMinValue(KCoreConfigSkeleton__ItemUInt* self, unsigned int minValue) {
    self->setMinValue(static_cast<unsigned int>(minValue));
}

void KCoreConfigSkeleton__ItemUInt_SetMaxValue(KCoreConfigSkeleton__ItemUInt* self, unsigned int maxValue) {
    self->setMaxValue(static_cast<unsigned int>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUInt_QBaseReadConfig(KCoreConfigSkeleton__ItemUInt* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemuint->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemUInt::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnReadConfig(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUInt_QBaseSetProperty(KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemuint->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemUInt::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnSetProperty(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self);
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemUInt_QBaseIsEqual(const KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemuint->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemUInt::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnIsEqual(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUInt_QBaseProperty(const KCoreConfigSkeleton__ItemUInt* self) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemuint->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUInt*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnProperty(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_Property_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUInt_QBaseMinValue(const KCoreConfigSkeleton__ItemUInt* self) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_MinValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemuint->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUInt*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnMinValue(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_MinValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_MinValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUInt_QBaseMaxValue(const KCoreConfigSkeleton__ItemUInt* self) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_MaxValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemuint->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUInt*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnMaxValue(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self));
    if (vkcoreconfigskeletonitemuint && vkcoreconfigskeletonitemuint->isVirtualKCoreConfigSkeletonItemUInt) {
        vkcoreconfigskeletonitemuint->setKCoreConfigSkeleton__ItemUInt_MaxValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_MaxValue_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemUInt_Delete(KCoreConfigSkeleton__ItemUInt* self) {
    delete self;
}

KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton__ItemULongLong_new(const libqt_string _group, const libqt_string _key, unsigned long long* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemULongLong(_group_QString, _key_QString, static_cast<quint64&>(*reference));
}

KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton__ItemULongLong_new2(const libqt_string _group, const libqt_string _key, unsigned long long* reference, unsigned long long defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemULongLong(_group_QString, _key_QString, static_cast<quint64&>(*reference), static_cast<quint64>(defaultValue));
}

void KCoreConfigSkeleton__ItemULongLong_ReadConfig(KCoreConfigSkeleton__ItemULongLong* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeleton__itemulonglong && vkcoreconfigskeleton__itemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemULongLong*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemULongLong_SetProperty(KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeleton__itemulonglong && vkcoreconfigskeleton__itemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemULongLong*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemULongLong_IsEqual(const KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemulonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeleton__itemulonglong && vkcoreconfigskeleton__itemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemULongLong*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemULongLong_Property(const KCoreConfigSkeleton__ItemULongLong* self) {
    auto* vkcoreconfigskeleton__itemulonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeleton__itemulonglong && vkcoreconfigskeleton__itemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemULongLong*)self)->property());
    }
}

QVariant* KCoreConfigSkeleton__ItemULongLong_MinValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    auto* vkcoreconfigskeleton__itemulonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeleton__itemulonglong && vkcoreconfigskeleton__itemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        return new QVariant(self->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemULongLong*)self)->minValue());
    }
}

QVariant* KCoreConfigSkeleton__ItemULongLong_MaxValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    auto* vkcoreconfigskeleton__itemulonglong = dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeleton__itemulonglong && vkcoreconfigskeleton__itemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        return new QVariant(self->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemULongLong*)self)->maxValue());
    }
}

void KCoreConfigSkeleton__ItemULongLong_SetMinValue(KCoreConfigSkeleton__ItemULongLong* self, unsigned long long minValue) {
    self->setMinValue(static_cast<unsigned long long>(minValue));
}

void KCoreConfigSkeleton__ItemULongLong_SetMaxValue(KCoreConfigSkeleton__ItemULongLong* self, unsigned long long maxValue) {
    self->setMaxValue(static_cast<unsigned long long>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemULongLong_QBaseReadConfig(KCoreConfigSkeleton__ItemULongLong* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemulonglong->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemULongLong::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnReadConfig(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemULongLong_QBaseSetProperty(KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemulonglong->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemULongLong::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnSetProperty(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self);
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemULongLong_QBaseIsEqual(const KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemulonglong->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemULongLong::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnIsEqual(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemULongLong_QBaseProperty(const KCoreConfigSkeleton__ItemULongLong* self) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemulonglong->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemULongLong*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnProperty(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_Property_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemULongLong_QBaseMinValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_MinValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemulonglong->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemULongLong*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnMinValue(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_MinValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_MinValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemULongLong_QBaseMaxValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_MaxValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemulonglong->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemULongLong*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnMaxValue(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self));
    if (vkcoreconfigskeletonitemulonglong && vkcoreconfigskeletonitemulonglong->isVirtualKCoreConfigSkeletonItemULongLong) {
        vkcoreconfigskeletonitemulonglong->setKCoreConfigSkeleton__ItemULongLong_MaxValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemULongLong_Delete(KCoreConfigSkeleton__ItemULongLong* self) {
    delete self;
}

KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton__ItemDouble_new(const libqt_string _group, const libqt_string _key, double* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemDouble(_group_QString, _key_QString, static_cast<double&>(*reference));
}

KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton__ItemDouble_new2(const libqt_string _group, const libqt_string _key, double* reference, double defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemDouble(_group_QString, _key_QString, static_cast<double&>(*reference), static_cast<double>(defaultValue));
}

void KCoreConfigSkeleton__ItemDouble_ReadConfig(KCoreConfigSkeleton__ItemDouble* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeleton__itemdouble && vkcoreconfigskeleton__itemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemDouble*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemDouble_SetProperty(KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeleton__itemdouble && vkcoreconfigskeleton__itemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemDouble*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemDouble_IsEqual(const KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemdouble = dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeleton__itemdouble && vkcoreconfigskeleton__itemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemDouble*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemDouble_Property(const KCoreConfigSkeleton__ItemDouble* self) {
    auto* vkcoreconfigskeleton__itemdouble = dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeleton__itemdouble && vkcoreconfigskeleton__itemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDouble*)self)->property());
    }
}

QVariant* KCoreConfigSkeleton__ItemDouble_MinValue(const KCoreConfigSkeleton__ItemDouble* self) {
    auto* vkcoreconfigskeleton__itemdouble = dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeleton__itemdouble && vkcoreconfigskeleton__itemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        return new QVariant(self->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDouble*)self)->minValue());
    }
}

QVariant* KCoreConfigSkeleton__ItemDouble_MaxValue(const KCoreConfigSkeleton__ItemDouble* self) {
    auto* vkcoreconfigskeleton__itemdouble = dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeleton__itemdouble && vkcoreconfigskeleton__itemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        return new QVariant(self->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDouble*)self)->maxValue());
    }
}

void KCoreConfigSkeleton__ItemDouble_SetMinValue(KCoreConfigSkeleton__ItemDouble* self, double minValue) {
    self->setMinValue(static_cast<double>(minValue));
}

void KCoreConfigSkeleton__ItemDouble_SetMaxValue(KCoreConfigSkeleton__ItemDouble* self, double maxValue) {
    self->setMaxValue(static_cast<double>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDouble_QBaseReadConfig(KCoreConfigSkeleton__ItemDouble* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemdouble->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemDouble::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnReadConfig(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDouble_QBaseSetProperty(KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemdouble->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemDouble::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnSetProperty(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self);
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemDouble_QBaseIsEqual(const KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemdouble->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemDouble::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnIsEqual(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDouble_QBaseProperty(const KCoreConfigSkeleton__ItemDouble* self) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemdouble->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDouble*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnProperty(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_Property_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDouble_QBaseMinValue(const KCoreConfigSkeleton__ItemDouble* self) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_MinValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemdouble->minValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDouble*)self)->minValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnMinValue(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_MinValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_MinValue_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDouble_QBaseMaxValue(const KCoreConfigSkeleton__ItemDouble* self) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_MaxValue_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemdouble->maxValue());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDouble*)self)->maxValue());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnMaxValue(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self));
    if (vkcoreconfigskeletonitemdouble && vkcoreconfigskeletonitemdouble->isVirtualKCoreConfigSkeletonItemDouble) {
        vkcoreconfigskeletonitemdouble->setKCoreConfigSkeleton__ItemDouble_MaxValue_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_MaxValue_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemDouble_Delete(KCoreConfigSkeleton__ItemDouble* self) {
    delete self;
}

KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton__ItemRect_new(const libqt_string _group, const libqt_string _key, QRect* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemRect(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton__ItemRect_new2(const libqt_string _group, const libqt_string _key, QRect* reference, const QRect* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemRect(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemRect_ReadConfig(KCoreConfigSkeleton__ItemRect* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeleton__itemrect && vkcoreconfigskeleton__itemrect->isVirtualKCoreConfigSkeletonItemRect) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemRect*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemRect_SetProperty(KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeleton__itemrect && vkcoreconfigskeleton__itemrect->isVirtualKCoreConfigSkeletonItemRect) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemRect*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemRect_IsEqual(const KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemrect = dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeleton__itemrect && vkcoreconfigskeleton__itemrect->isVirtualKCoreConfigSkeletonItemRect) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemRect*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemRect_Property(const KCoreConfigSkeleton__ItemRect* self) {
    auto* vkcoreconfigskeleton__itemrect = dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeleton__itemrect && vkcoreconfigskeleton__itemrect->isVirtualKCoreConfigSkeletonItemRect) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemRect*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRect_QBaseReadConfig(KCoreConfigSkeleton__ItemRect* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemrect->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemRect::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnReadConfig(KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRect_QBaseSetProperty(KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemrect->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemRect::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnSetProperty(KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self);
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemRect_QBaseIsEqual(const KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemrect = const_cast<VirtualKCoreConfigSkeletonItemRect*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self));
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemrect->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemRect::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnIsEqual(const KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrect = const_cast<VirtualKCoreConfigSkeletonItemRect*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self));
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemRect_QBaseProperty(const KCoreConfigSkeleton__ItemRect* self) {
    auto* vkcoreconfigskeletonitemrect = const_cast<VirtualKCoreConfigSkeletonItemRect*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self));
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemrect->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemRect*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnProperty(const KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrect = const_cast<VirtualKCoreConfigSkeletonItemRect*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self));
    if (vkcoreconfigskeletonitemrect && vkcoreconfigskeletonitemrect->isVirtualKCoreConfigSkeletonItemRect) {
        vkcoreconfigskeletonitemrect->setKCoreConfigSkeleton__ItemRect_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemRect_Delete(KCoreConfigSkeleton__ItemRect* self) {
    delete self;
}

KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton__ItemRectF_new(const libqt_string _group, const libqt_string _key, QRectF* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemRectF(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton__ItemRectF_new2(const libqt_string _group, const libqt_string _key, QRectF* reference, const QRectF* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemRectF(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemRectF_ReadConfig(KCoreConfigSkeleton__ItemRectF* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeleton__itemrectf && vkcoreconfigskeleton__itemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemRectF*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemRectF_SetProperty(KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeleton__itemrectf && vkcoreconfigskeleton__itemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemRectF*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemRectF_IsEqual(const KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemrectf = dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeleton__itemrectf && vkcoreconfigskeleton__itemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemRectF*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemRectF_Property(const KCoreConfigSkeleton__ItemRectF* self) {
    auto* vkcoreconfigskeleton__itemrectf = dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeleton__itemrectf && vkcoreconfigskeleton__itemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemRectF*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRectF_QBaseReadConfig(KCoreConfigSkeleton__ItemRectF* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemrectf->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemRectF::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnReadConfig(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRectF_QBaseSetProperty(KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemrectf->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemRectF::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnSetProperty(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self);
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemRectF_QBaseIsEqual(const KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemrectf = const_cast<VirtualKCoreConfigSkeletonItemRectF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self));
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemrectf->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemRectF::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnIsEqual(const KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrectf = const_cast<VirtualKCoreConfigSkeletonItemRectF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self));
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemRectF_QBaseProperty(const KCoreConfigSkeleton__ItemRectF* self) {
    auto* vkcoreconfigskeletonitemrectf = const_cast<VirtualKCoreConfigSkeletonItemRectF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self));
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemrectf->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemRectF*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnProperty(const KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemrectf = const_cast<VirtualKCoreConfigSkeletonItemRectF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self));
    if (vkcoreconfigskeletonitemrectf && vkcoreconfigskeletonitemrectf->isVirtualKCoreConfigSkeletonItemRectF) {
        vkcoreconfigskeletonitemrectf->setKCoreConfigSkeleton__ItemRectF_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemRectF_Delete(KCoreConfigSkeleton__ItemRectF* self) {
    delete self;
}

KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton__ItemPoint_new(const libqt_string _group, const libqt_string _key, QPoint* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemPoint(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton__ItemPoint_new2(const libqt_string _group, const libqt_string _key, QPoint* reference, const QPoint* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemPoint(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemPoint_ReadConfig(KCoreConfigSkeleton__ItemPoint* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeleton__itempoint && vkcoreconfigskeleton__itempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemPoint*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemPoint_SetProperty(KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeleton__itempoint && vkcoreconfigskeleton__itempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemPoint*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemPoint_IsEqual(const KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itempoint = dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeleton__itempoint && vkcoreconfigskeleton__itempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemPoint*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemPoint_Property(const KCoreConfigSkeleton__ItemPoint* self) {
    auto* vkcoreconfigskeleton__itempoint = dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeleton__itempoint && vkcoreconfigskeleton__itempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPoint*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPoint_QBaseReadConfig(KCoreConfigSkeleton__ItemPoint* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitempoint->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPoint::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnReadConfig(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPoint_QBaseSetProperty(KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_SetProperty_IsBase(true);
        vkcoreconfigskeletonitempoint->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPoint::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnSetProperty(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self);
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPoint_QBaseIsEqual(const KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempoint = const_cast<VirtualKCoreConfigSkeletonItemPoint*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self));
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitempoint->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPoint::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnIsEqual(const KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempoint = const_cast<VirtualKCoreConfigSkeletonItemPoint*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self));
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPoint_QBaseProperty(const KCoreConfigSkeleton__ItemPoint* self) {
    auto* vkcoreconfigskeletonitempoint = const_cast<VirtualKCoreConfigSkeletonItemPoint*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self));
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitempoint->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPoint*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnProperty(const KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempoint = const_cast<VirtualKCoreConfigSkeletonItemPoint*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self));
    if (vkcoreconfigskeletonitempoint && vkcoreconfigskeletonitempoint->isVirtualKCoreConfigSkeletonItemPoint) {
        vkcoreconfigskeletonitempoint->setKCoreConfigSkeleton__ItemPoint_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemPoint_Delete(KCoreConfigSkeleton__ItemPoint* self) {
    delete self;
}

KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton__ItemPointF_new(const libqt_string _group, const libqt_string _key, QPointF* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemPointF(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton__ItemPointF_new2(const libqt_string _group, const libqt_string _key, QPointF* reference, const QPointF* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemPointF(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemPointF_ReadConfig(KCoreConfigSkeleton__ItemPointF* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeleton__itempointf && vkcoreconfigskeleton__itempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemPointF*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemPointF_SetProperty(KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeleton__itempointf && vkcoreconfigskeleton__itempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemPointF*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemPointF_IsEqual(const KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itempointf = dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeleton__itempointf && vkcoreconfigskeleton__itempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemPointF*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemPointF_Property(const KCoreConfigSkeleton__ItemPointF* self) {
    auto* vkcoreconfigskeleton__itempointf = dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeleton__itempointf && vkcoreconfigskeleton__itempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPointF*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPointF_QBaseReadConfig(KCoreConfigSkeleton__ItemPointF* self, KConfig* config) {
    auto* vkcoreconfigskeletonitempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitempointf->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemPointF::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnReadConfig(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPointF_QBaseSetProperty(KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_SetProperty_IsBase(true);
        vkcoreconfigskeletonitempointf->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemPointF::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnSetProperty(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self);
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPointF_QBaseIsEqual(const KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitempointf = const_cast<VirtualKCoreConfigSkeletonItemPointF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self));
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitempointf->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemPointF::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnIsEqual(const KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempointf = const_cast<VirtualKCoreConfigSkeletonItemPointF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self));
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPointF_QBaseProperty(const KCoreConfigSkeleton__ItemPointF* self) {
    auto* vkcoreconfigskeletonitempointf = const_cast<VirtualKCoreConfigSkeletonItemPointF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self));
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitempointf->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemPointF*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnProperty(const KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitempointf = const_cast<VirtualKCoreConfigSkeletonItemPointF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self));
    if (vkcoreconfigskeletonitempointf && vkcoreconfigskeletonitempointf->isVirtualKCoreConfigSkeletonItemPointF) {
        vkcoreconfigskeletonitempointf->setKCoreConfigSkeleton__ItemPointF_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemPointF_Delete(KCoreConfigSkeleton__ItemPointF* self) {
    delete self;
}

KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton__ItemSize_new(const libqt_string _group, const libqt_string _key, QSize* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemSize(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton__ItemSize_new2(const libqt_string _group, const libqt_string _key, QSize* reference, const QSize* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemSize(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemSize_ReadConfig(KCoreConfigSkeleton__ItemSize* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeleton__itemsize && vkcoreconfigskeleton__itemsize->isVirtualKCoreConfigSkeletonItemSize) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemSize*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemSize_SetProperty(KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeleton__itemsize && vkcoreconfigskeleton__itemsize->isVirtualKCoreConfigSkeletonItemSize) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemSize*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemSize_IsEqual(const KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemsize = dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeleton__itemsize && vkcoreconfigskeleton__itemsize->isVirtualKCoreConfigSkeletonItemSize) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemSize*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemSize_Property(const KCoreConfigSkeleton__ItemSize* self) {
    auto* vkcoreconfigskeleton__itemsize = dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeleton__itemsize && vkcoreconfigskeleton__itemsize->isVirtualKCoreConfigSkeletonItemSize) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemSize*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSize_QBaseReadConfig(KCoreConfigSkeleton__ItemSize* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemsize->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemSize::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnReadConfig(KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSize_QBaseSetProperty(KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemsize->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemSize::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnSetProperty(KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self);
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemSize_QBaseIsEqual(const KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemsize = const_cast<VirtualKCoreConfigSkeletonItemSize*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self));
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemsize->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemSize::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnIsEqual(const KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsize = const_cast<VirtualKCoreConfigSkeletonItemSize*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self));
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemSize_QBaseProperty(const KCoreConfigSkeleton__ItemSize* self) {
    auto* vkcoreconfigskeletonitemsize = const_cast<VirtualKCoreConfigSkeletonItemSize*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self));
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemsize->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemSize*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnProperty(const KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsize = const_cast<VirtualKCoreConfigSkeletonItemSize*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self));
    if (vkcoreconfigskeletonitemsize && vkcoreconfigskeletonitemsize->isVirtualKCoreConfigSkeletonItemSize) {
        vkcoreconfigskeletonitemsize->setKCoreConfigSkeleton__ItemSize_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemSize_Delete(KCoreConfigSkeleton__ItemSize* self) {
    delete self;
}

KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton__ItemSizeF_new(const libqt_string _group, const libqt_string _key, QSizeF* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemSizeF(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton__ItemSizeF_new2(const libqt_string _group, const libqt_string _key, QSizeF* reference, const QSizeF* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemSizeF(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemSizeF_ReadConfig(KCoreConfigSkeleton__ItemSizeF* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeleton__itemsizef && vkcoreconfigskeleton__itemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemSizeF*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemSizeF_SetProperty(KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeleton__itemsizef && vkcoreconfigskeleton__itemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemSizeF*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemSizeF_IsEqual(const KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemsizef = dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeleton__itemsizef && vkcoreconfigskeleton__itemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemSizeF*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemSizeF_Property(const KCoreConfigSkeleton__ItemSizeF* self) {
    auto* vkcoreconfigskeleton__itemsizef = dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeleton__itemsizef && vkcoreconfigskeleton__itemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemSizeF*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSizeF_QBaseReadConfig(KCoreConfigSkeleton__ItemSizeF* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemsizef->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemSizeF::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnReadConfig(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSizeF_QBaseSetProperty(KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemsizef->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemSizeF::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnSetProperty(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self);
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemSizeF_QBaseIsEqual(const KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemsizef = const_cast<VirtualKCoreConfigSkeletonItemSizeF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self));
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemsizef->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemSizeF::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnIsEqual(const KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsizef = const_cast<VirtualKCoreConfigSkeletonItemSizeF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self));
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemSizeF_QBaseProperty(const KCoreConfigSkeleton__ItemSizeF* self) {
    auto* vkcoreconfigskeletonitemsizef = const_cast<VirtualKCoreConfigSkeletonItemSizeF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self));
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemsizef->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemSizeF*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnProperty(const KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemsizef = const_cast<VirtualKCoreConfigSkeletonItemSizeF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self));
    if (vkcoreconfigskeletonitemsizef && vkcoreconfigskeletonitemsizef->isVirtualKCoreConfigSkeletonItemSizeF) {
        vkcoreconfigskeletonitemsizef->setKCoreConfigSkeleton__ItemSizeF_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemSizeF_Delete(KCoreConfigSkeleton__ItemSizeF* self) {
    delete self;
}

KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton__ItemDateTime_new(const libqt_string _group, const libqt_string _key, QDateTime* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemDateTime(_group_QString, _key_QString, *reference);
}

KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton__ItemDateTime_new2(const libqt_string _group, const libqt_string _key, QDateTime* reference, const QDateTime* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKCoreConfigSkeletonItemDateTime(_group_QString, _key_QString, *reference, *defaultValue);
}

void KCoreConfigSkeleton__ItemDateTime_ReadConfig(KCoreConfigSkeleton__ItemDateTime* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeleton__itemdatetime && vkcoreconfigskeleton__itemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemDateTime*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemDateTime_SetProperty(KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeleton__itemdatetime && vkcoreconfigskeleton__itemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemDateTime*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemDateTime_IsEqual(const KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemdatetime = dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeleton__itemdatetime && vkcoreconfigskeleton__itemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemDateTime*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemDateTime_Property(const KCoreConfigSkeleton__ItemDateTime* self) {
    auto* vkcoreconfigskeleton__itemdatetime = dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeleton__itemdatetime && vkcoreconfigskeleton__itemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDateTime*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDateTime_QBaseReadConfig(KCoreConfigSkeleton__ItemDateTime* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemdatetime->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemDateTime::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnReadConfig(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDateTime_QBaseSetProperty(KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemdatetime->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemDateTime::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnSetProperty(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self);
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemDateTime_QBaseIsEqual(const KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemdatetime = const_cast<VirtualKCoreConfigSkeletonItemDateTime*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self));
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemdatetime->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemDateTime::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnIsEqual(const KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdatetime = const_cast<VirtualKCoreConfigSkeletonItemDateTime*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self));
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDateTime_QBaseProperty(const KCoreConfigSkeleton__ItemDateTime* self) {
    auto* vkcoreconfigskeletonitemdatetime = const_cast<VirtualKCoreConfigSkeletonItemDateTime*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self));
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemdatetime->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemDateTime*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnProperty(const KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemdatetime = const_cast<VirtualKCoreConfigSkeletonItemDateTime*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self));
    if (vkcoreconfigskeletonitemdatetime && vkcoreconfigskeletonitemdatetime->isVirtualKCoreConfigSkeletonItemDateTime) {
        vkcoreconfigskeletonitemdatetime->setKCoreConfigSkeleton__ItemDateTime_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemDateTime_Delete(KCoreConfigSkeleton__ItemDateTime* self) {
    delete self;
}

KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton__ItemStringList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<QString> reference_QList;
    reference_QList.reserve(reference.len);
    libqt_string* reference_arr = static_cast<libqt_string*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        QString reference_arr_i_QString = QString::fromUtf8(reference_arr[i].data, reference_arr[i].len);
        reference_QList.push_back(reference_arr_i_QString);
    }
    return new VirtualKCoreConfigSkeletonItemStringList(_group_QString, _key_QString, reference_QList);
}

KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton__ItemStringList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue) {
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
    return new VirtualKCoreConfigSkeletonItemStringList(_group_QString, _key_QString, reference_QList, defaultValue_QList);
}

void KCoreConfigSkeleton__ItemStringList_ReadConfig(KCoreConfigSkeleton__ItemStringList* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeleton__itemstringlist && vkcoreconfigskeleton__itemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemStringList*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemStringList_SetProperty(KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeleton__itemstringlist && vkcoreconfigskeleton__itemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemStringList*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemStringList_IsEqual(const KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemstringlist = dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeleton__itemstringlist && vkcoreconfigskeleton__itemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemStringList*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemStringList_Property(const KCoreConfigSkeleton__ItemStringList* self) {
    auto* vkcoreconfigskeleton__itemstringlist = dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeleton__itemstringlist && vkcoreconfigskeleton__itemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemStringList*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemStringList_QBaseReadConfig(KCoreConfigSkeleton__ItemStringList* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemstringlist->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemStringList::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnReadConfig(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemStringList_QBaseSetProperty(KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemstringlist->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemStringList::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnSetProperty(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self);
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemStringList_QBaseIsEqual(const KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemstringlist = const_cast<VirtualKCoreConfigSkeletonItemStringList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self));
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemstringlist->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemStringList::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnIsEqual(const KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstringlist = const_cast<VirtualKCoreConfigSkeletonItemStringList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self));
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemStringList_QBaseProperty(const KCoreConfigSkeleton__ItemStringList* self) {
    auto* vkcoreconfigskeletonitemstringlist = const_cast<VirtualKCoreConfigSkeletonItemStringList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self));
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemstringlist->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemStringList*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnProperty(const KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemstringlist = const_cast<VirtualKCoreConfigSkeletonItemStringList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self));
    if (vkcoreconfigskeletonitemstringlist && vkcoreconfigskeletonitemstringlist->isVirtualKCoreConfigSkeletonItemStringList) {
        vkcoreconfigskeletonitemstringlist->setKCoreConfigSkeleton__ItemStringList_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemStringList_Delete(KCoreConfigSkeleton__ItemStringList* self) {
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

KCoreConfigSkeleton__ItemUrlList* KCoreConfigSkeleton__ItemUrlList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of QUrl* */ reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<QUrl> reference_QList;
    reference_QList.reserve(reference.len);
    QUrl** reference_arr = static_cast<QUrl**>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(*(reference_arr[i]));
    }
    return new VirtualKCoreConfigSkeletonItemUrlList(_group_QString, _key_QString, reference_QList);
}

KCoreConfigSkeleton__ItemUrlList* KCoreConfigSkeleton__ItemUrlList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of QUrl* */ reference, const libqt_list /* of QUrl* */ defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<QUrl> reference_QList;
    reference_QList.reserve(reference.len);
    QUrl** reference_arr = static_cast<QUrl**>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(*(reference_arr[i]));
    }
    QList<QUrl> defaultValue_QList;
    defaultValue_QList.reserve(defaultValue.len);
    QUrl** defaultValue_arr = static_cast<QUrl**>(defaultValue.data);
    for (size_t i = 0; i < defaultValue.len; ++i) {
        defaultValue_QList.push_back(*(defaultValue_arr[i]));
    }
    return new VirtualKCoreConfigSkeletonItemUrlList(_group_QString, _key_QString, reference_QList, defaultValue_QList);
}

void KCoreConfigSkeleton__ItemUrlList_ReadConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeleton__itemurllist && vkcoreconfigskeleton__itemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemUrlList*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemUrlList_WriteConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeleton__itemurllist && vkcoreconfigskeleton__itemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        self->writeConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemUrlList*)self)->writeConfig(config);
    }
}

void KCoreConfigSkeleton__ItemUrlList_SetProperty(KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeleton__itemurllist && vkcoreconfigskeleton__itemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemUrlList*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemUrlList_IsEqual(const KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemurllist = dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeleton__itemurllist && vkcoreconfigskeleton__itemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemUrlList*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemUrlList_Property(const KCoreConfigSkeleton__ItemUrlList* self) {
    auto* vkcoreconfigskeleton__itemurllist = dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeleton__itemurllist && vkcoreconfigskeleton__itemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUrlList*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrlList_QBaseReadConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemurllist->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemUrlList::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnReadConfig(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrlList_QBaseWriteConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_WriteConfig_IsBase(true);
        vkcoreconfigskeletonitemurllist->writeConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemUrlList::writeConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnWriteConfig(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrlList_QBaseSetProperty(KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemurllist->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemUrlList::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnSetProperty(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self);
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemUrlList_QBaseIsEqual(const KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemurllist = const_cast<VirtualKCoreConfigSkeletonItemUrlList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self));
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemurllist->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemUrlList::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnIsEqual(const KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurllist = const_cast<VirtualKCoreConfigSkeletonItemUrlList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self));
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUrlList_QBaseProperty(const KCoreConfigSkeleton__ItemUrlList* self) {
    auto* vkcoreconfigskeletonitemurllist = const_cast<VirtualKCoreConfigSkeletonItemUrlList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self));
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemurllist->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemUrlList*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnProperty(const KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemurllist = const_cast<VirtualKCoreConfigSkeletonItemUrlList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self));
    if (vkcoreconfigskeletonitemurllist && vkcoreconfigskeletonitemurllist->isVirtualKCoreConfigSkeletonItemUrlList) {
        vkcoreconfigskeletonitemurllist->setKCoreConfigSkeleton__ItemUrlList_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemUrlList_Delete(KCoreConfigSkeleton__ItemUrlList* self) {
    delete self;
}

KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton__ItemIntList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of int */ reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<int> reference_QList;
    reference_QList.reserve(reference.len);
    int* reference_arr = static_cast<int*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(static_cast<int>(reference_arr[i]));
    }
    return new VirtualKCoreConfigSkeletonItemIntList(_group_QString, _key_QString, reference_QList);
}

KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton__ItemIntList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of int */ reference, const libqt_list /* of int */ defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    QList<int> reference_QList;
    reference_QList.reserve(reference.len);
    int* reference_arr = static_cast<int*>(reference.data);
    for (size_t i = 0; i < reference.len; ++i) {
        reference_QList.push_back(static_cast<int>(reference_arr[i]));
    }
    QList<int> defaultValue_QList;
    defaultValue_QList.reserve(defaultValue.len);
    int* defaultValue_arr = static_cast<int*>(defaultValue.data);
    for (size_t i = 0; i < defaultValue.len; ++i) {
        defaultValue_QList.push_back(static_cast<int>(defaultValue_arr[i]));
    }
    return new VirtualKCoreConfigSkeletonItemIntList(_group_QString, _key_QString, reference_QList, defaultValue_QList);
}

void KCoreConfigSkeleton__ItemIntList_ReadConfig(KCoreConfigSkeleton__ItemIntList* self, KConfig* config) {
    auto* vkcoreconfigskeleton__itemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeleton__itemintlist && vkcoreconfigskeleton__itemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        self->readConfig(config);
    } else {
        ((VirtualKCoreConfigSkeletonItemIntList*)self)->readConfig(config);
    }
}

void KCoreConfigSkeleton__ItemIntList_SetProperty(KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeleton__itemintlist && vkcoreconfigskeleton__itemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        self->setProperty(*p);
    } else {
        ((VirtualKCoreConfigSkeletonItemIntList*)self)->setProperty(*p);
    }
}

bool KCoreConfigSkeleton__ItemIntList_IsEqual(const KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    auto* vkcoreconfigskeleton__itemintlist = dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeleton__itemintlist && vkcoreconfigskeleton__itemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKCoreConfigSkeletonItemIntList*)self)->isEqual(*p);
    }
}

QVariant* KCoreConfigSkeleton__ItemIntList_Property(const KCoreConfigSkeleton__ItemIntList* self) {
    auto* vkcoreconfigskeleton__itemintlist = dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeleton__itemintlist && vkcoreconfigskeleton__itemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemIntList*)self)->property());
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemIntList_QBaseReadConfig(KCoreConfigSkeleton__ItemIntList* self, KConfig* config) {
    auto* vkcoreconfigskeletonitemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_ReadConfig_IsBase(true);
        vkcoreconfigskeletonitemintlist->readConfig(config);
    } else {
        self->KCoreConfigSkeleton::ItemIntList::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnReadConfig(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_ReadConfig_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemIntList_QBaseSetProperty(KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_SetProperty_IsBase(true);
        vkcoreconfigskeletonitemintlist->setProperty(*p);
    } else {
        self->KCoreConfigSkeleton::ItemIntList::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnSetProperty(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self);
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_SetProperty_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemIntList_QBaseIsEqual(const KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    auto* vkcoreconfigskeletonitemintlist = const_cast<VirtualKCoreConfigSkeletonItemIntList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self));
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_IsEqual_IsBase(true);
        return vkcoreconfigskeletonitemintlist->isEqual(*p);
    } else {
        return self->KCoreConfigSkeleton::ItemIntList::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnIsEqual(const KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemintlist = const_cast<VirtualKCoreConfigSkeletonItemIntList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self));
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_IsEqual_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemIntList_QBaseProperty(const KCoreConfigSkeleton__ItemIntList* self) {
    auto* vkcoreconfigskeletonitemintlist = const_cast<VirtualKCoreConfigSkeletonItemIntList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self));
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_Property_IsBase(true);
        return new QVariant(vkcoreconfigskeletonitemintlist->property());
    } else {
        return new QVariant(((VirtualKCoreConfigSkeletonItemIntList*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnProperty(const KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    auto* vkcoreconfigskeletonitemintlist = const_cast<VirtualKCoreConfigSkeletonItemIntList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self));
    if (vkcoreconfigskeletonitemintlist && vkcoreconfigskeletonitemintlist->isVirtualKCoreConfigSkeletonItemIntList) {
        vkcoreconfigskeletonitemintlist->setKCoreConfigSkeleton__ItemIntList_Property_Callback(reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_Property_Callback>(slot));
    }
}

void KCoreConfigSkeleton__ItemIntList_Delete(KCoreConfigSkeleton__ItemIntList* self) {
    delete self;
}
