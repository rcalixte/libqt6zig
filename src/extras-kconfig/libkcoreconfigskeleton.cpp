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
    auto _ret = self->group();
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
    auto _ret = self->key();
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
    auto _ret = self->name();
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
    auto _ret = self->label();
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
    auto _ret = self->toolTip();
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
    auto _ret = self->whatsThis();
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
    self->readConfig(param1);
}

void KConfigSkeletonItem_WriteConfig(KConfigSkeletonItem* self, KConfig* param1) {
    self->writeConfig(param1);
}

void KConfigSkeletonItem_ReadDefault(KConfigSkeletonItem* self, KConfig* param1) {
    self->readDefault(param1);
}

void KConfigSkeletonItem_SetProperty(KConfigSkeletonItem* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KConfigSkeletonItem_IsEqual(const KConfigSkeletonItem* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KConfigSkeletonItem_Property(const KConfigSkeletonItem* self) {
    return new QVariant(self->property());
}

QVariant* KConfigSkeletonItem_MinValue(const KConfigSkeletonItem* self) {
    return new QVariant(self->minValue());
}

QVariant* KConfigSkeletonItem_MaxValue(const KConfigSkeletonItem* self) {
    return new QVariant(self->maxValue());
}

void KConfigSkeletonItem_SetDefault(KConfigSkeletonItem* self) {
    self->setDefault();
}

void KConfigSkeletonItem_SwapDefault(KConfigSkeletonItem* self) {
    self->swapDefault();
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

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnReadConfig(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self))
        vkconfigskeletonitem->kconfigskeletonitem_readconfig_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_ReadConfig_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnWriteConfig(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self))
        vkconfigskeletonitem->kconfigskeletonitem_writeconfig_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_WriteConfig_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnReadDefault(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self))
        vkconfigskeletonitem->kconfigskeletonitem_readdefault_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_ReadDefault_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnSetProperty(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self))
        vkconfigskeletonitem->kconfigskeletonitem_setproperty_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_SetProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnIsEqual(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self)))
        vkconfigskeletonitem->kconfigskeletonitem_isequal_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_IsEqual_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnProperty(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self)))
        vkconfigskeletonitem->kconfigskeletonitem_property_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_Property_Callback>(slot);
}

// Base class handler implementation
QVariant* KConfigSkeletonItem_SuperMinValue(const KConfigSkeletonItem* self) {
    return new QVariant(self->KConfigSkeletonItem::minValue());
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnMinValue(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self)))
        vkconfigskeletonitem->kconfigskeletonitem_minvalue_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_MinValue_Callback>(slot);
}

// Base class handler implementation
QVariant* KConfigSkeletonItem_SuperMaxValue(const KConfigSkeletonItem* self) {
    return new QVariant(self->KConfigSkeletonItem::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnMaxValue(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = const_cast<VirtualKConfigSkeletonItem*>(dynamic_cast<const VirtualKConfigSkeletonItem*>(self)))
        vkconfigskeletonitem->kconfigskeletonitem_maxvalue_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_MaxValue_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnSetDefault(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self))
        vkconfigskeletonitem->kconfigskeletonitem_setdefault_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_SetDefault_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeletonItem_OnSwapDefault(KConfigSkeletonItem* self, intptr_t slot) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self))
        vkconfigskeletonitem->kconfigskeletonitem_swapdefault_callback = reinterpret_cast<VirtualKConfigSkeletonItem::KConfigSkeletonItem_SwapDefault_Callback>(slot);
}

// Derived class protected handler implementation
void KConfigSkeletonItem_ReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group) {
    if (auto* vkconfigskeletonitem = dynamic_cast<VirtualKConfigSkeletonItem*>(self)) {
        vkconfigskeletonitem->VirtualKConfigSkeletonItem::readImmutability(*group);
    } else
        qFatal("Error: Protected method KConfigSkeletonItem::readImmutability called without a directly constructed type");
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
    return new QVariant(self->property());
}

void KPropertySkeletonItem_SetProperty(KPropertySkeletonItem* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KPropertySkeletonItem_IsEqual(const KPropertySkeletonItem* self, const QVariant* p) {
    return self->isEqual(*p);
}

void KPropertySkeletonItem_ReadConfig(KPropertySkeletonItem* self, KConfig* param1) {
    self->readConfig(param1);
}

void KPropertySkeletonItem_WriteConfig(KPropertySkeletonItem* self, KConfig* param1) {
    self->writeConfig(param1);
}

void KPropertySkeletonItem_ReadDefault(KPropertySkeletonItem* self, KConfig* param1) {
    self->readDefault(param1);
}

void KPropertySkeletonItem_SetDefault(KPropertySkeletonItem* self) {
    self->setDefault();
}

void KPropertySkeletonItem_SwapDefault(KPropertySkeletonItem* self) {
    self->swapDefault();
}

void KPropertySkeletonItem_SetNotifyFunction(KPropertySkeletonItem* self, intptr_t impl) {
    auto impl_func = [impl]() -> void {
        reinterpret_cast<void (*)()>(impl)();
    };
    self->setNotifyFunction(impl_func);
}

// Base class handler implementation
QVariant* KPropertySkeletonItem_SuperProperty(const KPropertySkeletonItem* self) {
    return new QVariant(self->KPropertySkeletonItem::property());
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnProperty(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self)))
        vkpropertyskeletonitem->kpropertyskeletonitem_property_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_Property_Callback>(slot);
}

// Base class handler implementation
void KPropertySkeletonItem_SuperSetProperty(KPropertySkeletonItem* self, const QVariant* p) {
    self->KPropertySkeletonItem::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnSetProperty(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self))
        vkpropertyskeletonitem->kpropertyskeletonitem_setproperty_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KPropertySkeletonItem_SuperIsEqual(const KPropertySkeletonItem* self, const QVariant* p) {
    return self->KPropertySkeletonItem::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnIsEqual(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self)))
        vkpropertyskeletonitem->kpropertyskeletonitem_isequal_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_IsEqual_Callback>(slot);
}

// Base class handler implementation
void KPropertySkeletonItem_SuperReadConfig(KPropertySkeletonItem* self, KConfig* param1) {
    self->KPropertySkeletonItem::readConfig(param1);
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnReadConfig(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self))
        vkpropertyskeletonitem->kpropertyskeletonitem_readconfig_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KPropertySkeletonItem_SuperWriteConfig(KPropertySkeletonItem* self, KConfig* param1) {
    self->KPropertySkeletonItem::writeConfig(param1);
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnWriteConfig(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self))
        vkpropertyskeletonitem->kpropertyskeletonitem_writeconfig_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_WriteConfig_Callback>(slot);
}

// Base class handler implementation
void KPropertySkeletonItem_SuperReadDefault(KPropertySkeletonItem* self, KConfig* param1) {
    self->KPropertySkeletonItem::readDefault(param1);
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnReadDefault(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self))
        vkpropertyskeletonitem->kpropertyskeletonitem_readdefault_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_ReadDefault_Callback>(slot);
}

// Base class handler implementation
void KPropertySkeletonItem_SuperSetDefault(KPropertySkeletonItem* self) {
    self->KPropertySkeletonItem::setDefault();
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnSetDefault(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self))
        vkpropertyskeletonitem->kpropertyskeletonitem_setdefault_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_SetDefault_Callback>(slot);
}

// Base class handler implementation
void KPropertySkeletonItem_SuperSwapDefault(KPropertySkeletonItem* self) {
    self->KPropertySkeletonItem::swapDefault();
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnSwapDefault(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self))
        vkpropertyskeletonitem->kpropertyskeletonitem_swapdefault_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_SwapDefault_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPropertySkeletonItem_MinValue(const KPropertySkeletonItem* self) {
    return new QVariant(self->minValue());
}

// Base class handler implementation
QVariant* KPropertySkeletonItem_SuperMinValue(const KPropertySkeletonItem* self) {
    return new QVariant(self->KPropertySkeletonItem::minValue());
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnMinValue(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self)))
        vkpropertyskeletonitem->kpropertyskeletonitem_minvalue_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_MinValue_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPropertySkeletonItem_MaxValue(const KPropertySkeletonItem* self) {
    return new QVariant(self->maxValue());
}

// Base class handler implementation
QVariant* KPropertySkeletonItem_SuperMaxValue(const KPropertySkeletonItem* self) {
    return new QVariant(self->KPropertySkeletonItem::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KPropertySkeletonItem_OnMaxValue(KPropertySkeletonItem* self, intptr_t slot) {
    if (auto* vkpropertyskeletonitem = const_cast<VirtualKPropertySkeletonItem*>(dynamic_cast<const VirtualKPropertySkeletonItem*>(self)))
        vkpropertyskeletonitem->kpropertyskeletonitem_maxvalue_callback = reinterpret_cast<VirtualKPropertySkeletonItem::KPropertySkeletonItem_MaxValue_Callback>(slot);
}

// Derived class protected handler implementation
void KPropertySkeletonItem_ReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group) {
    if (auto* vkpropertyskeletonitem = dynamic_cast<VirtualKPropertySkeletonItem*>(self)) {
        vkpropertyskeletonitem->VirtualKPropertySkeletonItem::readImmutability(*group);
    } else
        qFatal("Error: Protected method KPropertySkeletonItem::readImmutability called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCoreConfigSkeleton_Tr(const char* s) {
    auto _ret = KCoreConfigSkeleton::tr(s);
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
    self->setDefaults();
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
    auto _ret = self->currentGroup();
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
    KConfigSkeletonItem** _arr = static_cast<KConfigSkeletonItem**>(malloc(sizeof(KConfigSkeletonItem*) * (_ret.size())));
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
    return self->useDefaults(b);
}

bool KCoreConfigSkeleton_Save(KCoreConfigSkeleton* self) {
    return self->save();
}

void KCoreConfigSkeleton_ConfigChanged(KCoreConfigSkeleton* self) {
    self->configChanged();
}

void KCoreConfigSkeleton_Connect_ConfigChanged(KCoreConfigSkeleton* self, intptr_t slot) {
    void (*slotFunc)(KCoreConfigSkeleton*) = reinterpret_cast<void (*)(KCoreConfigSkeleton*)>(slot);
    KCoreConfigSkeleton::connect(self,
                                 static_cast<void (KCoreConfigSkeleton::*)()>(&KCoreConfigSkeleton::configChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

bool KCoreConfigSkeleton_UsrUseDefaults(KCoreConfigSkeleton* self, bool b) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        return vkcoreconfigskeleton->usrUseDefaults(b);
    }
    qFatal("Error: Protected method KCoreConfigSkeleton::usrUseDefaults called without a directly constructed type");
}

void KCoreConfigSkeleton_UsrSetDefaults(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->usrSetDefaults();
    }
}

void KCoreConfigSkeleton_UsrRead(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->usrRead();
    }
}

bool KCoreConfigSkeleton_UsrSave(KCoreConfigSkeleton* self) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        return vkcoreconfigskeleton->usrSave();
    }
    qFatal("Error: Protected method KCoreConfigSkeleton::usrSave called without a directly constructed type");
}

libqt_string KCoreConfigSkeleton_Tr2(const char* s, const char* c) {
    auto _ret = KCoreConfigSkeleton::tr(s, c);
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
    auto _ret = KCoreConfigSkeleton::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCoreConfigSkeleton_SuperMetaObject(const KCoreConfigSkeleton* self) {
    return (QMetaObject*)self->KCoreConfigSkeleton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnMetaObject(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self)))
        vkcoreconfigskeleton->kcoreconfigskeleton_metaobject_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCoreConfigSkeleton_SuperMetacast(KCoreConfigSkeleton* self, const char* param1) {
    return self->KCoreConfigSkeleton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnMetacast(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_metacast_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCoreConfigSkeleton_SuperMetacall(KCoreConfigSkeleton* self, int param1, int param2, void** param3) {
    return self->KCoreConfigSkeleton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnMetacall(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_metacall_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Metacall_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperSetDefaults(KCoreConfigSkeleton* self) {
    self->KCoreConfigSkeleton::setDefaults();
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnSetDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_setdefaults_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_SetDefaults_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton_SuperUseDefaults(KCoreConfigSkeleton* self, bool b) {
    return self->KCoreConfigSkeleton::useDefaults(b);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUseDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_usedefaults_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UseDefaults_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton_SuperUsrUseDefaults(KCoreConfigSkeleton* self, bool b) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        return vkcoreconfigskeleton->KCoreConfigSkeleton::usrUseDefaults(b);
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::usrUseDefaults called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrUseDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_usrusedefaults_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrUseDefaults_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperUsrSetDefaults(KCoreConfigSkeleton* self) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::usrSetDefaults();
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::usrSetDefaults called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrSetDefaults(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_usrsetdefaults_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrSetDefaults_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperUsrRead(KCoreConfigSkeleton* self) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::usrRead();
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::usrRead called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrRead(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_usrread_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrRead_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton_SuperUsrSave(KCoreConfigSkeleton* self) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        return vkcoreconfigskeleton->KCoreConfigSkeleton::usrSave();
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::usrSave called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnUsrSave(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_usrsave_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_UsrSave_Callback>(slot);
}

// Derived class handler implementation
bool KCoreConfigSkeleton_Event(KCoreConfigSkeleton* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCoreConfigSkeleton_SuperEvent(KCoreConfigSkeleton* self, QEvent* event) {
    return self->KCoreConfigSkeleton::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_event_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCoreConfigSkeleton_EventFilter(KCoreConfigSkeleton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCoreConfigSkeleton_SuperEventFilter(KCoreConfigSkeleton* self, QObject* watched, QEvent* event) {
    return self->KCoreConfigSkeleton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnEventFilter(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_eventfilter_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton_TimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperTimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnTimerEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_timerevent_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton_ChildEvent(KCoreConfigSkeleton* self, QChildEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperChildEvent(KCoreConfigSkeleton* self, QChildEvent* event) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnChildEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_childevent_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton_CustomEvent(KCoreConfigSkeleton* self, QEvent* event) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperCustomEvent(KCoreConfigSkeleton* self, QEvent* event) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnCustomEvent(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_customevent_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton_ConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnConnectNotify(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_connectnotify_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton_DisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self);
    if (vkcoreconfigskeleton) {
        vkcoreconfigskeleton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreConfigSkeleton_SuperDisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self)) {
        vkcoreconfigskeleton->KCoreConfigSkeleton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCoreConfigSkeleton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton_OnDisconnectNotify(KCoreConfigSkeleton* self, intptr_t slot) {
    if (auto* vkcoreconfigskeleton = dynamic_cast<VirtualKCoreConfigSkeleton*>(self))
        vkcoreconfigskeleton->kcoreconfigskeleton_disconnectnotify_callback = reinterpret_cast<VirtualKCoreConfigSkeleton::KCoreConfigSkeleton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KCoreConfigSkeleton_Sender(const KCoreConfigSkeleton* self) {
    if (auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self))) {
        return vkcoreconfigskeleton->VirtualKCoreConfigSkeleton::sender();
    } else
        qFatal("Error: Protected method KCoreConfigSkeleton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCoreConfigSkeleton_SenderSignalIndex(const KCoreConfigSkeleton* self) {
    if (auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self))) {
        return vkcoreconfigskeleton->VirtualKCoreConfigSkeleton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCoreConfigSkeleton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCoreConfigSkeleton_Receivers(const KCoreConfigSkeleton* self, const char* signal) {
    if (auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self))) {
        return vkcoreconfigskeleton->VirtualKCoreConfigSkeleton::receivers(signal);
    } else
        qFatal("Error: Protected method KCoreConfigSkeleton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCoreConfigSkeleton_IsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal) {
    if (auto* vkcoreconfigskeleton = const_cast<VirtualKCoreConfigSkeleton*>(dynamic_cast<const VirtualKCoreConfigSkeleton*>(self))) {
        return vkcoreconfigskeleton->VirtualKCoreConfigSkeleton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCoreConfigSkeleton::isSignalConnected called without a directly constructed type");
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
    self->writeConfig(config);
}

void KCoreConfigSkeleton__ItemString_ReadConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemString_SetProperty(KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemString_IsEqual(const KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemString_Property(const KCoreConfigSkeleton__ItemString* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemString_SuperWriteConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemString::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnWriteConfig(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self))
        vkcoreconfigskeletonitemstring->kcoreconfigskeleton__itemstring_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_WriteConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemString_SuperReadConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemString::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnReadConfig(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self))
        vkcoreconfigskeletonitemstring->kcoreconfigskeleton__itemstring_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemString_SuperSetProperty(KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemString::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnSetProperty(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstring = dynamic_cast<VirtualKCoreConfigSkeletonItemString*>(self))
        vkcoreconfigskeletonitemstring->kcoreconfigskeleton__itemstring_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemString_SuperIsEqual(const KCoreConfigSkeleton__ItemString* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemString::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnIsEqual(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstring = const_cast<VirtualKCoreConfigSkeletonItemString*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self)))
        vkcoreconfigskeletonitemstring->kcoreconfigskeleton__itemstring_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemString_SuperProperty(const KCoreConfigSkeleton__ItemString* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemString::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemString_OnProperty(KCoreConfigSkeleton__ItemString* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstring = const_cast<VirtualKCoreConfigSkeletonItemString*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemString*>(self)))
        vkcoreconfigskeletonitemstring->kcoreconfigskeleton__itemstring_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemString::KCoreConfigSkeleton__ItemString_Property_Callback>(slot);
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
    self->writeConfig(config);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPassword_SuperWriteConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPassword::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnWriteConfig(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self))
        vkcoreconfigskeletonitempassword->kcoreconfigskeleton__itempassword_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPassword_ReadConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    self->readConfig(config);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPassword_SuperReadConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPassword::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnReadConfig(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self))
        vkcoreconfigskeletonitempassword->kcoreconfigskeleton__itempassword_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPassword_SetProperty(KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    self->setProperty(*p);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPassword_SuperSetProperty(KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemPassword::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnSetProperty(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempassword = dynamic_cast<VirtualKCoreConfigSkeletonItemPassword*>(self))
        vkcoreconfigskeletonitempassword->kcoreconfigskeleton__itempassword_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_SetProperty_Callback>(slot);
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemPassword_IsEqual(const KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    return self->isEqual(*p);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPassword_SuperIsEqual(const KCoreConfigSkeleton__ItemPassword* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemPassword::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnIsEqual(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self)))
        vkcoreconfigskeletonitempassword->kcoreconfigskeleton__itempassword_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_IsEqual_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemPassword_Property(const KCoreConfigSkeleton__ItemPassword* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPassword_SuperProperty(const KCoreConfigSkeleton__ItemPassword* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemPassword::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPassword_OnProperty(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempassword = const_cast<VirtualKCoreConfigSkeletonItemPassword*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPassword*>(self)))
        vkcoreconfigskeletonitempassword->kcoreconfigskeleton__itempassword_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPassword::KCoreConfigSkeleton__ItemPassword_Property_Callback>(slot);
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
    self->writeConfig(config);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPath_SuperWriteConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPath::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnWriteConfig(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self))
        vkcoreconfigskeletonitempath->kcoreconfigskeleton__itempath_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_WriteConfig_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPath_ReadConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    self->readConfig(config);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPath_SuperReadConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPath::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnReadConfig(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self))
        vkcoreconfigskeletonitempath->kcoreconfigskeleton__itempath_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_ReadConfig_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPath_SetProperty(KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    self->setProperty(*p);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPath_SuperSetProperty(KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemPath::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnSetProperty(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempath = dynamic_cast<VirtualKCoreConfigSkeletonItemPath*>(self))
        vkcoreconfigskeletonitempath->kcoreconfigskeleton__itempath_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_SetProperty_Callback>(slot);
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemPath_IsEqual(const KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    return self->isEqual(*p);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPath_SuperIsEqual(const KCoreConfigSkeleton__ItemPath* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemPath::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnIsEqual(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self)))
        vkcoreconfigskeletonitempath->kcoreconfigskeleton__itempath_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_IsEqual_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemPath_Property(const KCoreConfigSkeleton__ItemPath* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPath_SuperProperty(const KCoreConfigSkeleton__ItemPath* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemPath::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPath_OnProperty(KCoreConfigSkeleton__ItemPath* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempath = const_cast<VirtualKCoreConfigSkeletonItemPath*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPath*>(self)))
        vkcoreconfigskeletonitempath->kcoreconfigskeleton__itempath_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPath::KCoreConfigSkeleton__ItemPath_Property_Callback>(slot);
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
    self->writeConfig(config);
}

void KCoreConfigSkeleton__ItemUrl_ReadConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemUrl_SetProperty(KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemUrl_IsEqual(const KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemUrl_Property(const KCoreConfigSkeleton__ItemUrl* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrl_SuperWriteConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemUrl::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnWriteConfig(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self))
        vkcoreconfigskeletonitemurl->kcoreconfigskeleton__itemurl_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrl_SuperReadConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemUrl::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnReadConfig(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self))
        vkcoreconfigskeletonitemurl->kcoreconfigskeleton__itemurl_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrl_SuperSetProperty(KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemUrl::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnSetProperty(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurl = dynamic_cast<VirtualKCoreConfigSkeletonItemUrl*>(self))
        vkcoreconfigskeletonitemurl->kcoreconfigskeleton__itemurl_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemUrl_SuperIsEqual(const KCoreConfigSkeleton__ItemUrl* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemUrl::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnIsEqual(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurl = const_cast<VirtualKCoreConfigSkeletonItemUrl*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self)))
        vkcoreconfigskeletonitemurl->kcoreconfigskeleton__itemurl_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUrl_SuperProperty(const KCoreConfigSkeleton__ItemUrl* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemUrl::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrl_OnProperty(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurl = const_cast<VirtualKCoreConfigSkeletonItemUrl*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrl*>(self)))
        vkcoreconfigskeletonitemurl->kcoreconfigskeleton__itemurl_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrl::KCoreConfigSkeleton__ItemUrl_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemProperty_SetProperty(KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemProperty_IsEqual(const KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemProperty_Property(const KCoreConfigSkeleton__ItemProperty* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemProperty_SuperReadConfig(KCoreConfigSkeleton__ItemProperty* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemProperty::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnReadConfig(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self))
        vkcoreconfigskeletonitemproperty->kcoreconfigskeleton__itemproperty_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemProperty_SuperSetProperty(KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemProperty::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnSetProperty(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemproperty = dynamic_cast<VirtualKCoreConfigSkeletonItemProperty*>(self))
        vkcoreconfigskeletonitemproperty->kcoreconfigskeleton__itemproperty_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemProperty_SuperIsEqual(const KCoreConfigSkeleton__ItemProperty* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemProperty::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnIsEqual(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemproperty = const_cast<VirtualKCoreConfigSkeletonItemProperty*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self)))
        vkcoreconfigskeletonitemproperty->kcoreconfigskeleton__itemproperty_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemProperty_SuperProperty(const KCoreConfigSkeleton__ItemProperty* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemProperty::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemProperty_OnProperty(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemproperty = const_cast<VirtualKCoreConfigSkeletonItemProperty*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemProperty*>(self)))
        vkcoreconfigskeletonitemproperty->kcoreconfigskeleton__itemproperty_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemProperty::KCoreConfigSkeleton__ItemProperty_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemBool_SetProperty(KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemBool_IsEqual(const KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemBool_Property(const KCoreConfigSkeleton__ItemBool* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemBool_SuperReadConfig(KCoreConfigSkeleton__ItemBool* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemBool::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnReadConfig(KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self))
        vkcoreconfigskeletonitembool->kcoreconfigskeleton__itembool_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemBool_SuperSetProperty(KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemBool::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnSetProperty(KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitembool = dynamic_cast<VirtualKCoreConfigSkeletonItemBool*>(self))
        vkcoreconfigskeletonitembool->kcoreconfigskeleton__itembool_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemBool_SuperIsEqual(const KCoreConfigSkeleton__ItemBool* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemBool::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnIsEqual(KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitembool = const_cast<VirtualKCoreConfigSkeletonItemBool*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self)))
        vkcoreconfigskeletonitembool->kcoreconfigskeleton__itembool_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemBool_SuperProperty(const KCoreConfigSkeleton__ItemBool* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemBool::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemBool_OnProperty(KCoreConfigSkeleton__ItemBool* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitembool = const_cast<VirtualKCoreConfigSkeletonItemBool*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemBool*>(self)))
        vkcoreconfigskeletonitembool->kcoreconfigskeleton__itembool_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemBool::KCoreConfigSkeleton__ItemBool_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemInt_SetProperty(KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemInt_IsEqual(const KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemInt_Property(const KCoreConfigSkeleton__ItemInt* self) {
    return new QVariant(self->property());
}

QVariant* KCoreConfigSkeleton__ItemInt_MinValue(const KCoreConfigSkeleton__ItemInt* self) {
    return new QVariant(self->minValue());
}

QVariant* KCoreConfigSkeleton__ItemInt_MaxValue(const KCoreConfigSkeleton__ItemInt* self) {
    return new QVariant(self->maxValue());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemInt_SuperReadConfig(KCoreConfigSkeleton__ItemInt* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemInt::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnReadConfig(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self))
        vkcoreconfigskeletonitemint->kcoreconfigskeleton__itemint_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemInt_SuperSetProperty(KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemInt::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnSetProperty(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemint = dynamic_cast<VirtualKCoreConfigSkeletonItemInt*>(self))
        vkcoreconfigskeletonitemint->kcoreconfigskeleton__itemint_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemInt_SuperIsEqual(const KCoreConfigSkeleton__ItemInt* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemInt::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnIsEqual(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self)))
        vkcoreconfigskeletonitemint->kcoreconfigskeleton__itemint_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemInt_SuperProperty(const KCoreConfigSkeleton__ItemInt* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemInt::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnProperty(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self)))
        vkcoreconfigskeletonitemint->kcoreconfigskeleton__itemint_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_Property_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemInt_SuperMinValue(const KCoreConfigSkeleton__ItemInt* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemInt::minValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnMinValue(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self)))
        vkcoreconfigskeletonitemint->kcoreconfigskeleton__itemint_minvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_MinValue_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemInt_SuperMaxValue(const KCoreConfigSkeleton__ItemInt* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemInt::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemInt_OnMaxValue(KCoreConfigSkeleton__ItemInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemint = const_cast<VirtualKCoreConfigSkeletonItemInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemInt*>(self)))
        vkcoreconfigskeletonitemint->kcoreconfigskeleton__itemint_maxvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemInt::KCoreConfigSkeleton__ItemInt_MaxValue_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemLongLong_SetProperty(KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemLongLong_IsEqual(const KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemLongLong_Property(const KCoreConfigSkeleton__ItemLongLong* self) {
    return new QVariant(self->property());
}

QVariant* KCoreConfigSkeleton__ItemLongLong_MinValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    return new QVariant(self->minValue());
}

QVariant* KCoreConfigSkeleton__ItemLongLong_MaxValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    return new QVariant(self->maxValue());
}

void KCoreConfigSkeleton__ItemLongLong_SetMinValue(KCoreConfigSkeleton__ItemLongLong* self, long long minValue) {
    self->setMinValue(static_cast<qint64>(minValue));
}

void KCoreConfigSkeleton__ItemLongLong_SetMaxValue(KCoreConfigSkeleton__ItemLongLong* self, long long maxValue) {
    self->setMaxValue(static_cast<qint64>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemLongLong_SuperReadConfig(KCoreConfigSkeleton__ItemLongLong* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemLongLong::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnReadConfig(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self))
        vkcoreconfigskeletonitemlonglong->kcoreconfigskeleton__itemlonglong_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemLongLong_SuperSetProperty(KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemLongLong::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnSetProperty(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemlonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemLongLong*>(self))
        vkcoreconfigskeletonitemlonglong->kcoreconfigskeleton__itemlonglong_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemLongLong_SuperIsEqual(const KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemLongLong::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnIsEqual(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self)))
        vkcoreconfigskeletonitemlonglong->kcoreconfigskeleton__itemlonglong_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemLongLong_SuperProperty(const KCoreConfigSkeleton__ItemLongLong* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemLongLong::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnProperty(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self)))
        vkcoreconfigskeletonitemlonglong->kcoreconfigskeleton__itemlonglong_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_Property_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemLongLong_SuperMinValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemLongLong::minValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnMinValue(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self)))
        vkcoreconfigskeletonitemlonglong->kcoreconfigskeleton__itemlonglong_minvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_MinValue_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemLongLong_SuperMaxValue(const KCoreConfigSkeleton__ItemLongLong* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemLongLong::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemLongLong_OnMaxValue(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemlonglong = const_cast<VirtualKCoreConfigSkeletonItemLongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemLongLong*>(self)))
        vkcoreconfigskeletonitemlonglong->kcoreconfigskeleton__itemlonglong_maxvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemLongLong::KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback>(slot);
}

void KCoreConfigSkeleton__ItemLongLong_Delete(KCoreConfigSkeleton__ItemLongLong* self) {
    delete self;
}

KCoreConfigSkeleton__ItemEnum__Choice* KCoreConfigSkeleton__ItemEnum__Choice_new() {
    return new KCoreConfigSkeleton::ItemEnum::Choice();
}

KCoreConfigSkeleton__ItemEnum__Choice* KCoreConfigSkeleton__ItemEnum__Choice_new2(const KCoreConfigSkeleton__ItemEnum__Choice* param1) {
    return new KCoreConfigSkeleton::ItemEnum::Choice(*param1);
}

libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Name(const KCoreConfigSkeleton__ItemEnum__Choice* self) {
    auto name_ret = self->name;
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
    auto label_ret = self->label;
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
    auto toolTip_ret = self->toolTip;
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
    auto whatsThis_ret = self->whatsThis;
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
    auto value_ret = self->value;
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
    KCoreConfigSkeleton__ItemEnum__Choice** _arr = static_cast<KCoreConfigSkeleton__ItemEnum__Choice**>(malloc(sizeof(KCoreConfigSkeleton__ItemEnum__Choice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KCoreConfigSkeleton::ItemEnum::Choice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCoreConfigSkeleton__ItemEnum_ReadConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemEnum_WriteConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    self->writeConfig(config);
}

libqt_string KCoreConfigSkeleton__ItemEnum_ValueForChoice(const KCoreConfigSkeleton__ItemEnum* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto _ret = self->valueForChoice(name_QString);
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
void KCoreConfigSkeleton__ItemEnum_SuperReadConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemEnum::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnReadConfig(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemEnum_SuperWriteConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemEnum::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnWriteConfig(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemEnum_SetProperty(KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    self->setProperty(*p);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemEnum_SuperSetProperty(KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemEnum::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnSetProperty(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = dynamic_cast<VirtualKCoreConfigSkeletonItemEnum*>(self))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_SetProperty_Callback>(slot);
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemEnum_IsEqual(const KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    return self->isEqual(*p);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemEnum_SuperIsEqual(const KCoreConfigSkeleton__ItemEnum* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemEnum::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnIsEqual(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self)))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_IsEqual_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_Property(const KCoreConfigSkeleton__ItemEnum* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_SuperProperty(const KCoreConfigSkeleton__ItemEnum* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemEnum::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnProperty(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self)))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_Property_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_MinValue(const KCoreConfigSkeleton__ItemEnum* self) {
    return new QVariant(self->minValue());
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_SuperMinValue(const KCoreConfigSkeleton__ItemEnum* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemEnum::minValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnMinValue(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self)))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_minvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_MinValue_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_MaxValue(const KCoreConfigSkeleton__ItemEnum* self) {
    return new QVariant(self->maxValue());
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemEnum_SuperMaxValue(const KCoreConfigSkeleton__ItemEnum* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemEnum::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemEnum_OnMaxValue(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemenum = const_cast<VirtualKCoreConfigSkeletonItemEnum*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemEnum*>(self)))
        vkcoreconfigskeletonitemenum->kcoreconfigskeleton__itemenum_maxvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemEnum::KCoreConfigSkeleton__ItemEnum_MaxValue_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemUInt_SetProperty(KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemUInt_IsEqual(const KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemUInt_Property(const KCoreConfigSkeleton__ItemUInt* self) {
    return new QVariant(self->property());
}

QVariant* KCoreConfigSkeleton__ItemUInt_MinValue(const KCoreConfigSkeleton__ItemUInt* self) {
    return new QVariant(self->minValue());
}

QVariant* KCoreConfigSkeleton__ItemUInt_MaxValue(const KCoreConfigSkeleton__ItemUInt* self) {
    return new QVariant(self->maxValue());
}

void KCoreConfigSkeleton__ItemUInt_SetMinValue(KCoreConfigSkeleton__ItemUInt* self, unsigned int minValue) {
    self->setMinValue(static_cast<quint32>(minValue));
}

void KCoreConfigSkeleton__ItemUInt_SetMaxValue(KCoreConfigSkeleton__ItemUInt* self, unsigned int maxValue) {
    self->setMaxValue(static_cast<quint32>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUInt_SuperReadConfig(KCoreConfigSkeleton__ItemUInt* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemUInt::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnReadConfig(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self))
        vkcoreconfigskeletonitemuint->kcoreconfigskeleton__itemuint_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUInt_SuperSetProperty(KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemUInt::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnSetProperty(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemuint = dynamic_cast<VirtualKCoreConfigSkeletonItemUInt*>(self))
        vkcoreconfigskeletonitemuint->kcoreconfigskeleton__itemuint_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemUInt_SuperIsEqual(const KCoreConfigSkeleton__ItemUInt* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemUInt::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnIsEqual(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self)))
        vkcoreconfigskeletonitemuint->kcoreconfigskeleton__itemuint_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUInt_SuperProperty(const KCoreConfigSkeleton__ItemUInt* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemUInt::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnProperty(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self)))
        vkcoreconfigskeletonitemuint->kcoreconfigskeleton__itemuint_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_Property_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUInt_SuperMinValue(const KCoreConfigSkeleton__ItemUInt* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemUInt::minValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnMinValue(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self)))
        vkcoreconfigskeletonitemuint->kcoreconfigskeleton__itemuint_minvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_MinValue_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUInt_SuperMaxValue(const KCoreConfigSkeleton__ItemUInt* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemUInt::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUInt_OnMaxValue(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemuint = const_cast<VirtualKCoreConfigSkeletonItemUInt*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUInt*>(self)))
        vkcoreconfigskeletonitemuint->kcoreconfigskeleton__itemuint_maxvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUInt::KCoreConfigSkeleton__ItemUInt_MaxValue_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemULongLong_SetProperty(KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemULongLong_IsEqual(const KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemULongLong_Property(const KCoreConfigSkeleton__ItemULongLong* self) {
    return new QVariant(self->property());
}

QVariant* KCoreConfigSkeleton__ItemULongLong_MinValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    return new QVariant(self->minValue());
}

QVariant* KCoreConfigSkeleton__ItemULongLong_MaxValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    return new QVariant(self->maxValue());
}

void KCoreConfigSkeleton__ItemULongLong_SetMinValue(KCoreConfigSkeleton__ItemULongLong* self, unsigned long long minValue) {
    self->setMinValue(static_cast<quint64>(minValue));
}

void KCoreConfigSkeleton__ItemULongLong_SetMaxValue(KCoreConfigSkeleton__ItemULongLong* self, unsigned long long maxValue) {
    self->setMaxValue(static_cast<quint64>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemULongLong_SuperReadConfig(KCoreConfigSkeleton__ItemULongLong* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemULongLong::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnReadConfig(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self))
        vkcoreconfigskeletonitemulonglong->kcoreconfigskeleton__itemulonglong_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemULongLong_SuperSetProperty(KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemULongLong::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnSetProperty(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemulonglong = dynamic_cast<VirtualKCoreConfigSkeletonItemULongLong*>(self))
        vkcoreconfigskeletonitemulonglong->kcoreconfigskeleton__itemulonglong_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemULongLong_SuperIsEqual(const KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemULongLong::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnIsEqual(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self)))
        vkcoreconfigskeletonitemulonglong->kcoreconfigskeleton__itemulonglong_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemULongLong_SuperProperty(const KCoreConfigSkeleton__ItemULongLong* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemULongLong::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnProperty(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self)))
        vkcoreconfigskeletonitemulonglong->kcoreconfigskeleton__itemulonglong_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_Property_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemULongLong_SuperMinValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemULongLong::minValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnMinValue(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self)))
        vkcoreconfigskeletonitemulonglong->kcoreconfigskeleton__itemulonglong_minvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_MinValue_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemULongLong_SuperMaxValue(const KCoreConfigSkeleton__ItemULongLong* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemULongLong::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemULongLong_OnMaxValue(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemulonglong = const_cast<VirtualKCoreConfigSkeletonItemULongLong*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemULongLong*>(self)))
        vkcoreconfigskeletonitemulonglong->kcoreconfigskeleton__itemulonglong_maxvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemULongLong::KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemDouble_SetProperty(KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemDouble_IsEqual(const KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemDouble_Property(const KCoreConfigSkeleton__ItemDouble* self) {
    return new QVariant(self->property());
}

QVariant* KCoreConfigSkeleton__ItemDouble_MinValue(const KCoreConfigSkeleton__ItemDouble* self) {
    return new QVariant(self->minValue());
}

QVariant* KCoreConfigSkeleton__ItemDouble_MaxValue(const KCoreConfigSkeleton__ItemDouble* self) {
    return new QVariant(self->maxValue());
}

void KCoreConfigSkeleton__ItemDouble_SetMinValue(KCoreConfigSkeleton__ItemDouble* self, double minValue) {
    self->setMinValue(static_cast<double>(minValue));
}

void KCoreConfigSkeleton__ItemDouble_SetMaxValue(KCoreConfigSkeleton__ItemDouble* self, double maxValue) {
    self->setMaxValue(static_cast<double>(maxValue));
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDouble_SuperReadConfig(KCoreConfigSkeleton__ItemDouble* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemDouble::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnReadConfig(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self))
        vkcoreconfigskeletonitemdouble->kcoreconfigskeleton__itemdouble_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDouble_SuperSetProperty(KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemDouble::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnSetProperty(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdouble = dynamic_cast<VirtualKCoreConfigSkeletonItemDouble*>(self))
        vkcoreconfigskeletonitemdouble->kcoreconfigskeleton__itemdouble_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemDouble_SuperIsEqual(const KCoreConfigSkeleton__ItemDouble* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemDouble::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnIsEqual(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self)))
        vkcoreconfigskeletonitemdouble->kcoreconfigskeleton__itemdouble_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDouble_SuperProperty(const KCoreConfigSkeleton__ItemDouble* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemDouble::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnProperty(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self)))
        vkcoreconfigskeletonitemdouble->kcoreconfigskeleton__itemdouble_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_Property_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDouble_SuperMinValue(const KCoreConfigSkeleton__ItemDouble* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemDouble::minValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnMinValue(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self)))
        vkcoreconfigskeletonitemdouble->kcoreconfigskeleton__itemdouble_minvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_MinValue_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDouble_SuperMaxValue(const KCoreConfigSkeleton__ItemDouble* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemDouble::maxValue());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDouble_OnMaxValue(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdouble = const_cast<VirtualKCoreConfigSkeletonItemDouble*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDouble*>(self)))
        vkcoreconfigskeletonitemdouble->kcoreconfigskeleton__itemdouble_maxvalue_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDouble::KCoreConfigSkeleton__ItemDouble_MaxValue_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemRect_SetProperty(KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemRect_IsEqual(const KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemRect_Property(const KCoreConfigSkeleton__ItemRect* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRect_SuperReadConfig(KCoreConfigSkeleton__ItemRect* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemRect::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnReadConfig(KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self))
        vkcoreconfigskeletonitemrect->kcoreconfigskeleton__itemrect_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRect_SuperSetProperty(KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemRect::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnSetProperty(KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrect = dynamic_cast<VirtualKCoreConfigSkeletonItemRect*>(self))
        vkcoreconfigskeletonitemrect->kcoreconfigskeleton__itemrect_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemRect_SuperIsEqual(const KCoreConfigSkeleton__ItemRect* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemRect::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnIsEqual(KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrect = const_cast<VirtualKCoreConfigSkeletonItemRect*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self)))
        vkcoreconfigskeletonitemrect->kcoreconfigskeleton__itemrect_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemRect_SuperProperty(const KCoreConfigSkeleton__ItemRect* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemRect::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRect_OnProperty(KCoreConfigSkeleton__ItemRect* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrect = const_cast<VirtualKCoreConfigSkeletonItemRect*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRect*>(self)))
        vkcoreconfigskeletonitemrect->kcoreconfigskeleton__itemrect_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRect::KCoreConfigSkeleton__ItemRect_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemRectF_SetProperty(KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemRectF_IsEqual(const KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemRectF_Property(const KCoreConfigSkeleton__ItemRectF* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRectF_SuperReadConfig(KCoreConfigSkeleton__ItemRectF* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemRectF::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnReadConfig(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self))
        vkcoreconfigskeletonitemrectf->kcoreconfigskeleton__itemrectf_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemRectF_SuperSetProperty(KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemRectF::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnSetProperty(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrectf = dynamic_cast<VirtualKCoreConfigSkeletonItemRectF*>(self))
        vkcoreconfigskeletonitemrectf->kcoreconfigskeleton__itemrectf_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemRectF_SuperIsEqual(const KCoreConfigSkeleton__ItemRectF* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemRectF::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnIsEqual(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrectf = const_cast<VirtualKCoreConfigSkeletonItemRectF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self)))
        vkcoreconfigskeletonitemrectf->kcoreconfigskeleton__itemrectf_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemRectF_SuperProperty(const KCoreConfigSkeleton__ItemRectF* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemRectF::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemRectF_OnProperty(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemrectf = const_cast<VirtualKCoreConfigSkeletonItemRectF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemRectF*>(self)))
        vkcoreconfigskeletonitemrectf->kcoreconfigskeleton__itemrectf_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemRectF::KCoreConfigSkeleton__ItemRectF_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemPoint_SetProperty(KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemPoint_IsEqual(const KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemPoint_Property(const KCoreConfigSkeleton__ItemPoint* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPoint_SuperReadConfig(KCoreConfigSkeleton__ItemPoint* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPoint::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnReadConfig(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self))
        vkcoreconfigskeletonitempoint->kcoreconfigskeleton__itempoint_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPoint_SuperSetProperty(KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemPoint::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnSetProperty(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempoint = dynamic_cast<VirtualKCoreConfigSkeletonItemPoint*>(self))
        vkcoreconfigskeletonitempoint->kcoreconfigskeleton__itempoint_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPoint_SuperIsEqual(const KCoreConfigSkeleton__ItemPoint* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemPoint::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnIsEqual(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempoint = const_cast<VirtualKCoreConfigSkeletonItemPoint*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self)))
        vkcoreconfigskeletonitempoint->kcoreconfigskeleton__itempoint_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPoint_SuperProperty(const KCoreConfigSkeleton__ItemPoint* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemPoint::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPoint_OnProperty(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempoint = const_cast<VirtualKCoreConfigSkeletonItemPoint*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPoint*>(self)))
        vkcoreconfigskeletonitempoint->kcoreconfigskeleton__itempoint_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPoint::KCoreConfigSkeleton__ItemPoint_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemPointF_SetProperty(KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemPointF_IsEqual(const KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemPointF_Property(const KCoreConfigSkeleton__ItemPointF* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPointF_SuperReadConfig(KCoreConfigSkeleton__ItemPointF* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPointF::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnReadConfig(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self))
        vkcoreconfigskeletonitempointf->kcoreconfigskeleton__itempointf_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPointF_SuperSetProperty(KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemPointF::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnSetProperty(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempointf = dynamic_cast<VirtualKCoreConfigSkeletonItemPointF*>(self))
        vkcoreconfigskeletonitempointf->kcoreconfigskeleton__itempointf_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPointF_SuperIsEqual(const KCoreConfigSkeleton__ItemPointF* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemPointF::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnIsEqual(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempointf = const_cast<VirtualKCoreConfigSkeletonItemPointF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self)))
        vkcoreconfigskeletonitempointf->kcoreconfigskeleton__itempointf_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPointF_SuperProperty(const KCoreConfigSkeleton__ItemPointF* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemPointF::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPointF_OnProperty(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempointf = const_cast<VirtualKCoreConfigSkeletonItemPointF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPointF*>(self)))
        vkcoreconfigskeletonitempointf->kcoreconfigskeleton__itempointf_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPointF::KCoreConfigSkeleton__ItemPointF_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemSize_SetProperty(KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemSize_IsEqual(const KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemSize_Property(const KCoreConfigSkeleton__ItemSize* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSize_SuperReadConfig(KCoreConfigSkeleton__ItemSize* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemSize::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnReadConfig(KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self))
        vkcoreconfigskeletonitemsize->kcoreconfigskeleton__itemsize_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSize_SuperSetProperty(KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemSize::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnSetProperty(KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsize = dynamic_cast<VirtualKCoreConfigSkeletonItemSize*>(self))
        vkcoreconfigskeletonitemsize->kcoreconfigskeleton__itemsize_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemSize_SuperIsEqual(const KCoreConfigSkeleton__ItemSize* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemSize::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnIsEqual(KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsize = const_cast<VirtualKCoreConfigSkeletonItemSize*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self)))
        vkcoreconfigskeletonitemsize->kcoreconfigskeleton__itemsize_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemSize_SuperProperty(const KCoreConfigSkeleton__ItemSize* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemSize::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSize_OnProperty(KCoreConfigSkeleton__ItemSize* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsize = const_cast<VirtualKCoreConfigSkeletonItemSize*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSize*>(self)))
        vkcoreconfigskeletonitemsize->kcoreconfigskeleton__itemsize_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSize::KCoreConfigSkeleton__ItemSize_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemSizeF_SetProperty(KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemSizeF_IsEqual(const KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemSizeF_Property(const KCoreConfigSkeleton__ItemSizeF* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSizeF_SuperReadConfig(KCoreConfigSkeleton__ItemSizeF* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemSizeF::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnReadConfig(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self))
        vkcoreconfigskeletonitemsizef->kcoreconfigskeleton__itemsizef_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemSizeF_SuperSetProperty(KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemSizeF::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnSetProperty(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsizef = dynamic_cast<VirtualKCoreConfigSkeletonItemSizeF*>(self))
        vkcoreconfigskeletonitemsizef->kcoreconfigskeleton__itemsizef_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemSizeF_SuperIsEqual(const KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemSizeF::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnIsEqual(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsizef = const_cast<VirtualKCoreConfigSkeletonItemSizeF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self)))
        vkcoreconfigskeletonitemsizef->kcoreconfigskeleton__itemsizef_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemSizeF_SuperProperty(const KCoreConfigSkeleton__ItemSizeF* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemSizeF::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemSizeF_OnProperty(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemsizef = const_cast<VirtualKCoreConfigSkeletonItemSizeF*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemSizeF*>(self)))
        vkcoreconfigskeletonitemsizef->kcoreconfigskeleton__itemsizef_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemSizeF::KCoreConfigSkeleton__ItemSizeF_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemDateTime_SetProperty(KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemDateTime_IsEqual(const KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemDateTime_Property(const KCoreConfigSkeleton__ItemDateTime* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDateTime_SuperReadConfig(KCoreConfigSkeleton__ItemDateTime* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemDateTime::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnReadConfig(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self))
        vkcoreconfigskeletonitemdatetime->kcoreconfigskeleton__itemdatetime_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemDateTime_SuperSetProperty(KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemDateTime::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnSetProperty(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdatetime = dynamic_cast<VirtualKCoreConfigSkeletonItemDateTime*>(self))
        vkcoreconfigskeletonitemdatetime->kcoreconfigskeleton__itemdatetime_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemDateTime_SuperIsEqual(const KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemDateTime::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnIsEqual(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdatetime = const_cast<VirtualKCoreConfigSkeletonItemDateTime*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self)))
        vkcoreconfigskeletonitemdatetime->kcoreconfigskeleton__itemdatetime_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemDateTime_SuperProperty(const KCoreConfigSkeleton__ItemDateTime* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemDateTime::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemDateTime_OnProperty(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemdatetime = const_cast<VirtualKCoreConfigSkeletonItemDateTime*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemDateTime*>(self)))
        vkcoreconfigskeletonitemdatetime->kcoreconfigskeleton__itemdatetime_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemDateTime::KCoreConfigSkeleton__ItemDateTime_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemStringList_SetProperty(KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemStringList_IsEqual(const KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemStringList_Property(const KCoreConfigSkeleton__ItemStringList* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemStringList_SuperReadConfig(KCoreConfigSkeleton__ItemStringList* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemStringList::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnReadConfig(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self))
        vkcoreconfigskeletonitemstringlist->kcoreconfigskeleton__itemstringlist_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemStringList_SuperSetProperty(KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemStringList::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnSetProperty(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstringlist = dynamic_cast<VirtualKCoreConfigSkeletonItemStringList*>(self))
        vkcoreconfigskeletonitemstringlist->kcoreconfigskeleton__itemstringlist_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemStringList_SuperIsEqual(const KCoreConfigSkeleton__ItemStringList* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemStringList::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnIsEqual(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstringlist = const_cast<VirtualKCoreConfigSkeletonItemStringList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self)))
        vkcoreconfigskeletonitemstringlist->kcoreconfigskeleton__itemstringlist_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemStringList_SuperProperty(const KCoreConfigSkeleton__ItemStringList* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemStringList::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemStringList_OnProperty(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemstringlist = const_cast<VirtualKCoreConfigSkeletonItemStringList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemStringList*>(self)))
        vkcoreconfigskeletonitemstringlist->kcoreconfigskeleton__itemstringlist_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemStringList::KCoreConfigSkeleton__ItemStringList_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemPathList_WriteConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    self->writeConfig(config);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPathList_SuperReadConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPathList::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnReadConfig(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self))
        vkcoreconfigskeletonitempathlist->kcoreconfigskeleton__itempathlist_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPathList_SuperWriteConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemPathList::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnWriteConfig(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self))
        vkcoreconfigskeletonitempathlist->kcoreconfigskeleton__itempathlist_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback>(slot);
}

// Derived class handler implementation
void KCoreConfigSkeleton__ItemPathList_SetProperty(KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    self->setProperty(*p);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemPathList_SuperSetProperty(KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemPathList::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnSetProperty(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempathlist = dynamic_cast<VirtualKCoreConfigSkeletonItemPathList*>(self))
        vkcoreconfigskeletonitempathlist->kcoreconfigskeleton__itempathlist_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_SetProperty_Callback>(slot);
}

// Derived class handler implementation
bool KCoreConfigSkeleton__ItemPathList_IsEqual(const KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    return self->isEqual(*p);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemPathList_SuperIsEqual(const KCoreConfigSkeleton__ItemPathList* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemPathList::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnIsEqual(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self)))
        vkcoreconfigskeletonitempathlist->kcoreconfigskeleton__itempathlist_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_IsEqual_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCoreConfigSkeleton__ItemPathList_Property(const KCoreConfigSkeleton__ItemPathList* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemPathList_SuperProperty(const KCoreConfigSkeleton__ItemPathList* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemPathList::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemPathList_OnProperty(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitempathlist = const_cast<VirtualKCoreConfigSkeletonItemPathList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemPathList*>(self)))
        vkcoreconfigskeletonitempathlist->kcoreconfigskeleton__itempathlist_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemPathList::KCoreConfigSkeleton__ItemPathList_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemUrlList_WriteConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    self->writeConfig(config);
}

void KCoreConfigSkeleton__ItemUrlList_SetProperty(KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemUrlList_IsEqual(const KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemUrlList_Property(const KCoreConfigSkeleton__ItemUrlList* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrlList_SuperReadConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemUrlList::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnReadConfig(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self))
        vkcoreconfigskeletonitemurllist->kcoreconfigskeleton__itemurllist_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrlList_SuperWriteConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemUrlList::writeConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnWriteConfig(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self))
        vkcoreconfigskeletonitemurllist->kcoreconfigskeleton__itemurllist_writeconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemUrlList_SuperSetProperty(KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemUrlList::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnSetProperty(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurllist = dynamic_cast<VirtualKCoreConfigSkeletonItemUrlList*>(self))
        vkcoreconfigskeletonitemurllist->kcoreconfigskeleton__itemurllist_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemUrlList_SuperIsEqual(const KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemUrlList::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnIsEqual(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurllist = const_cast<VirtualKCoreConfigSkeletonItemUrlList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self)))
        vkcoreconfigskeletonitemurllist->kcoreconfigskeleton__itemurllist_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemUrlList_SuperProperty(const KCoreConfigSkeleton__ItemUrlList* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemUrlList::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemUrlList_OnProperty(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemurllist = const_cast<VirtualKCoreConfigSkeletonItemUrlList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemUrlList*>(self)))
        vkcoreconfigskeletonitemurllist->kcoreconfigskeleton__itemurllist_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemUrlList::KCoreConfigSkeleton__ItemUrlList_Property_Callback>(slot);
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
    self->readConfig(config);
}

void KCoreConfigSkeleton__ItemIntList_SetProperty(KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KCoreConfigSkeleton__ItemIntList_IsEqual(const KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KCoreConfigSkeleton__ItemIntList_Property(const KCoreConfigSkeleton__ItemIntList* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemIntList_SuperReadConfig(KCoreConfigSkeleton__ItemIntList* self, KConfig* config) {
    self->KCoreConfigSkeleton::ItemIntList::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnReadConfig(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self))
        vkcoreconfigskeletonitemintlist->kcoreconfigskeleton__itemintlist_readconfig_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KCoreConfigSkeleton__ItemIntList_SuperSetProperty(KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    self->KCoreConfigSkeleton::ItemIntList::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnSetProperty(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemintlist = dynamic_cast<VirtualKCoreConfigSkeletonItemIntList*>(self))
        vkcoreconfigskeletonitemintlist->kcoreconfigskeleton__itemintlist_setproperty_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KCoreConfigSkeleton__ItemIntList_SuperIsEqual(const KCoreConfigSkeleton__ItemIntList* self, const QVariant* p) {
    return self->KCoreConfigSkeleton::ItemIntList::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnIsEqual(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemintlist = const_cast<VirtualKCoreConfigSkeletonItemIntList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self)))
        vkcoreconfigskeletonitemintlist->kcoreconfigskeleton__itemintlist_isequal_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KCoreConfigSkeleton__ItemIntList_SuperProperty(const KCoreConfigSkeleton__ItemIntList* self) {
    return new QVariant(self->KCoreConfigSkeleton::ItemIntList::property());
}

// Auxiliary method to allow providing re-implementation
void KCoreConfigSkeleton__ItemIntList_OnProperty(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot) {
    if (auto* vkcoreconfigskeletonitemintlist = const_cast<VirtualKCoreConfigSkeletonItemIntList*>(dynamic_cast<const VirtualKCoreConfigSkeletonItemIntList*>(self)))
        vkcoreconfigskeletonitemintlist->kcoreconfigskeleton__itemintlist_property_callback = reinterpret_cast<VirtualKCoreConfigSkeletonItemIntList::KCoreConfigSkeleton__ItemIntList_Property_Callback>(slot);
}

void KCoreConfigSkeleton__ItemIntList_Delete(KCoreConfigSkeleton__ItemIntList* self) {
    delete self;
}
