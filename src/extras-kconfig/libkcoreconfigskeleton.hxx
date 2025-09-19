#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCORECONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCORECONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigSkeletonItem so that we can call protected methods
class VirtualKConfigSkeletonItem : public KConfigSkeletonItem {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigSkeletonItem = true;

    // Virtual class public types (including callbacks)
    using KConfigSkeletonItem_ReadConfig_Callback = void (*)(KConfigSkeletonItem*, KConfig*);
    using KConfigSkeletonItem_WriteConfig_Callback = void (*)(KConfigSkeletonItem*, KConfig*);
    using KConfigSkeletonItem_ReadDefault_Callback = void (*)(KConfigSkeletonItem*, KConfig*);
    using KConfigSkeletonItem_SetProperty_Callback = void (*)(KConfigSkeletonItem*, QVariant*);
    using KConfigSkeletonItem_IsEqual_Callback = bool (*)(const KConfigSkeletonItem*, QVariant*);
    using KConfigSkeletonItem_Property_Callback = QVariant* (*)();
    using KConfigSkeletonItem_MinValue_Callback = QVariant* (*)();
    using KConfigSkeletonItem_MaxValue_Callback = QVariant* (*)();
    using KConfigSkeletonItem_SetDefault_Callback = void (*)();
    using KConfigSkeletonItem_SwapDefault_Callback = void (*)();
    using KConfigSkeletonItem_ReadImmutability_Callback = void (*)(KConfigSkeletonItem*, KConfigGroup*);

  protected:
    // Instance callback storage
    KConfigSkeletonItem_ReadConfig_Callback kconfigskeletonitem_readconfig_callback = nullptr;
    KConfigSkeletonItem_WriteConfig_Callback kconfigskeletonitem_writeconfig_callback = nullptr;
    KConfigSkeletonItem_ReadDefault_Callback kconfigskeletonitem_readdefault_callback = nullptr;
    KConfigSkeletonItem_SetProperty_Callback kconfigskeletonitem_setproperty_callback = nullptr;
    KConfigSkeletonItem_IsEqual_Callback kconfigskeletonitem_isequal_callback = nullptr;
    KConfigSkeletonItem_Property_Callback kconfigskeletonitem_property_callback = nullptr;
    KConfigSkeletonItem_MinValue_Callback kconfigskeletonitem_minvalue_callback = nullptr;
    KConfigSkeletonItem_MaxValue_Callback kconfigskeletonitem_maxvalue_callback = nullptr;
    KConfigSkeletonItem_SetDefault_Callback kconfigskeletonitem_setdefault_callback = nullptr;
    KConfigSkeletonItem_SwapDefault_Callback kconfigskeletonitem_swapdefault_callback = nullptr;
    KConfigSkeletonItem_ReadImmutability_Callback kconfigskeletonitem_readimmutability_callback = nullptr;

    // Instance base flags
    mutable bool kconfigskeletonitem_readconfig_isbase = false;
    mutable bool kconfigskeletonitem_writeconfig_isbase = false;
    mutable bool kconfigskeletonitem_readdefault_isbase = false;
    mutable bool kconfigskeletonitem_setproperty_isbase = false;
    mutable bool kconfigskeletonitem_isequal_isbase = false;
    mutable bool kconfigskeletonitem_property_isbase = false;
    mutable bool kconfigskeletonitem_minvalue_isbase = false;
    mutable bool kconfigskeletonitem_maxvalue_isbase = false;
    mutable bool kconfigskeletonitem_setdefault_isbase = false;
    mutable bool kconfigskeletonitem_swapdefault_isbase = false;
    mutable bool kconfigskeletonitem_readimmutability_isbase = false;

  public:
    VirtualKConfigSkeletonItem(const QString& _group, const QString& _key) : KConfigSkeletonItem(_group, _key) {};
    VirtualKConfigSkeletonItem(const KConfigSkeletonItem& param1) : KConfigSkeletonItem(param1) {};

    ~VirtualKConfigSkeletonItem() {
        kconfigskeletonitem_readconfig_callback = nullptr;
        kconfigskeletonitem_writeconfig_callback = nullptr;
        kconfigskeletonitem_readdefault_callback = nullptr;
        kconfigskeletonitem_setproperty_callback = nullptr;
        kconfigskeletonitem_isequal_callback = nullptr;
        kconfigskeletonitem_property_callback = nullptr;
        kconfigskeletonitem_minvalue_callback = nullptr;
        kconfigskeletonitem_maxvalue_callback = nullptr;
        kconfigskeletonitem_setdefault_callback = nullptr;
        kconfigskeletonitem_swapdefault_callback = nullptr;
        kconfigskeletonitem_readimmutability_callback = nullptr;
    }

    // Callback setters
    inline void setKConfigSkeletonItem_ReadConfig_Callback(KConfigSkeletonItem_ReadConfig_Callback cb) { kconfigskeletonitem_readconfig_callback = cb; }
    inline void setKConfigSkeletonItem_WriteConfig_Callback(KConfigSkeletonItem_WriteConfig_Callback cb) { kconfigskeletonitem_writeconfig_callback = cb; }
    inline void setKConfigSkeletonItem_ReadDefault_Callback(KConfigSkeletonItem_ReadDefault_Callback cb) { kconfigskeletonitem_readdefault_callback = cb; }
    inline void setKConfigSkeletonItem_SetProperty_Callback(KConfigSkeletonItem_SetProperty_Callback cb) { kconfigskeletonitem_setproperty_callback = cb; }
    inline void setKConfigSkeletonItem_IsEqual_Callback(KConfigSkeletonItem_IsEqual_Callback cb) { kconfigskeletonitem_isequal_callback = cb; }
    inline void setKConfigSkeletonItem_Property_Callback(KConfigSkeletonItem_Property_Callback cb) { kconfigskeletonitem_property_callback = cb; }
    inline void setKConfigSkeletonItem_MinValue_Callback(KConfigSkeletonItem_MinValue_Callback cb) { kconfigskeletonitem_minvalue_callback = cb; }
    inline void setKConfigSkeletonItem_MaxValue_Callback(KConfigSkeletonItem_MaxValue_Callback cb) { kconfigskeletonitem_maxvalue_callback = cb; }
    inline void setKConfigSkeletonItem_SetDefault_Callback(KConfigSkeletonItem_SetDefault_Callback cb) { kconfigskeletonitem_setdefault_callback = cb; }
    inline void setKConfigSkeletonItem_SwapDefault_Callback(KConfigSkeletonItem_SwapDefault_Callback cb) { kconfigskeletonitem_swapdefault_callback = cb; }
    inline void setKConfigSkeletonItem_ReadImmutability_Callback(KConfigSkeletonItem_ReadImmutability_Callback cb) { kconfigskeletonitem_readimmutability_callback = cb; }

    // Base flag setters
    inline void setKConfigSkeletonItem_ReadConfig_IsBase(bool value) const { kconfigskeletonitem_readconfig_isbase = value; }
    inline void setKConfigSkeletonItem_WriteConfig_IsBase(bool value) const { kconfigskeletonitem_writeconfig_isbase = value; }
    inline void setKConfigSkeletonItem_ReadDefault_IsBase(bool value) const { kconfigskeletonitem_readdefault_isbase = value; }
    inline void setKConfigSkeletonItem_SetProperty_IsBase(bool value) const { kconfigskeletonitem_setproperty_isbase = value; }
    inline void setKConfigSkeletonItem_IsEqual_IsBase(bool value) const { kconfigskeletonitem_isequal_isbase = value; }
    inline void setKConfigSkeletonItem_Property_IsBase(bool value) const { kconfigskeletonitem_property_isbase = value; }
    inline void setKConfigSkeletonItem_MinValue_IsBase(bool value) const { kconfigskeletonitem_minvalue_isbase = value; }
    inline void setKConfigSkeletonItem_MaxValue_IsBase(bool value) const { kconfigskeletonitem_maxvalue_isbase = value; }
    inline void setKConfigSkeletonItem_SetDefault_IsBase(bool value) const { kconfigskeletonitem_setdefault_isbase = value; }
    inline void setKConfigSkeletonItem_SwapDefault_IsBase(bool value) const { kconfigskeletonitem_swapdefault_isbase = value; }
    inline void setKConfigSkeletonItem_ReadImmutability_IsBase(bool value) const { kconfigskeletonitem_readimmutability_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* param1) override {
        if (kconfigskeletonitem_readconfig_callback != nullptr) {
            KConfig* cbval1 = param1;

            kconfigskeletonitem_readconfig_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* param1) override {
        if (kconfigskeletonitem_writeconfig_callback != nullptr) {
            KConfig* cbval1 = param1;

            kconfigskeletonitem_writeconfig_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readDefault(KConfig* param1) override {
        if (kconfigskeletonitem_readdefault_callback != nullptr) {
            KConfig* cbval1 = param1;

            kconfigskeletonitem_readdefault_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kconfigskeletonitem_setproperty_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            kconfigskeletonitem_setproperty_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kconfigskeletonitem_isequal_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = kconfigskeletonitem_isequal_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kconfigskeletonitem_property_callback != nullptr) {
            QVariant* callback_ret = kconfigskeletonitem_property_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kconfigskeletonitem_minvalue_isbase) {
            kconfigskeletonitem_minvalue_isbase = false;
            return KConfigSkeletonItem::minValue();
        } else if (kconfigskeletonitem_minvalue_callback != nullptr) {
            QVariant* callback_ret = kconfigskeletonitem_minvalue_callback();
            return *callback_ret;
        } else {
            return KConfigSkeletonItem::minValue();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kconfigskeletonitem_maxvalue_isbase) {
            kconfigskeletonitem_maxvalue_isbase = false;
            return KConfigSkeletonItem::maxValue();
        } else if (kconfigskeletonitem_maxvalue_callback != nullptr) {
            QVariant* callback_ret = kconfigskeletonitem_maxvalue_callback();
            return *callback_ret;
        } else {
            return KConfigSkeletonItem::maxValue();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefault() override {
        if (kconfigskeletonitem_setdefault_callback != nullptr) {
            kconfigskeletonitem_setdefault_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void swapDefault() override {
        if (kconfigskeletonitem_swapdefault_callback != nullptr) {
            kconfigskeletonitem_swapdefault_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    void readImmutability(const KConfigGroup& group) {
        if (kconfigskeletonitem_readimmutability_isbase) {
            kconfigskeletonitem_readimmutability_isbase = false;
            KConfigSkeletonItem::readImmutability(group);
        } else if (kconfigskeletonitem_readimmutability_callback != nullptr) {
            const KConfigGroup& group_ret = group;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&group_ret);

            kconfigskeletonitem_readimmutability_callback(this, cbval1);
        } else {
            KConfigSkeletonItem::readImmutability(group);
        }
    }

    // Friend functions
    friend void KConfigSkeletonItem_ReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group);
    friend void KConfigSkeletonItem_QBaseReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group);
};

// This class is a subclass of KPropertySkeletonItem so that we can call protected methods
class VirtualKPropertySkeletonItem final : public KPropertySkeletonItem {

  public:
    // Virtual class boolean flag
    bool isVirtualKPropertySkeletonItem = true;

    // Virtual class public types (including callbacks)
    using KPropertySkeletonItem_Property_Callback = QVariant* (*)();
    using KPropertySkeletonItem_SetProperty_Callback = void (*)(KPropertySkeletonItem*, QVariant*);
    using KPropertySkeletonItem_IsEqual_Callback = bool (*)(const KPropertySkeletonItem*, QVariant*);
    using KPropertySkeletonItem_ReadConfig_Callback = void (*)(KPropertySkeletonItem*, KConfig*);
    using KPropertySkeletonItem_WriteConfig_Callback = void (*)(KPropertySkeletonItem*, KConfig*);
    using KPropertySkeletonItem_ReadDefault_Callback = void (*)(KPropertySkeletonItem*, KConfig*);
    using KPropertySkeletonItem_SetDefault_Callback = void (*)();
    using KPropertySkeletonItem_SwapDefault_Callback = void (*)();
    using KPropertySkeletonItem_MinValue_Callback = QVariant* (*)();
    using KPropertySkeletonItem_MaxValue_Callback = QVariant* (*)();
    using KPropertySkeletonItem_ReadImmutability_Callback = void (*)(KPropertySkeletonItem*, KConfigGroup*);

  protected:
    // Instance callback storage
    KPropertySkeletonItem_Property_Callback kpropertyskeletonitem_property_callback = nullptr;
    KPropertySkeletonItem_SetProperty_Callback kpropertyskeletonitem_setproperty_callback = nullptr;
    KPropertySkeletonItem_IsEqual_Callback kpropertyskeletonitem_isequal_callback = nullptr;
    KPropertySkeletonItem_ReadConfig_Callback kpropertyskeletonitem_readconfig_callback = nullptr;
    KPropertySkeletonItem_WriteConfig_Callback kpropertyskeletonitem_writeconfig_callback = nullptr;
    KPropertySkeletonItem_ReadDefault_Callback kpropertyskeletonitem_readdefault_callback = nullptr;
    KPropertySkeletonItem_SetDefault_Callback kpropertyskeletonitem_setdefault_callback = nullptr;
    KPropertySkeletonItem_SwapDefault_Callback kpropertyskeletonitem_swapdefault_callback = nullptr;
    KPropertySkeletonItem_MinValue_Callback kpropertyskeletonitem_minvalue_callback = nullptr;
    KPropertySkeletonItem_MaxValue_Callback kpropertyskeletonitem_maxvalue_callback = nullptr;
    KPropertySkeletonItem_ReadImmutability_Callback kpropertyskeletonitem_readimmutability_callback = nullptr;

    // Instance base flags
    mutable bool kpropertyskeletonitem_property_isbase = false;
    mutable bool kpropertyskeletonitem_setproperty_isbase = false;
    mutable bool kpropertyskeletonitem_isequal_isbase = false;
    mutable bool kpropertyskeletonitem_readconfig_isbase = false;
    mutable bool kpropertyskeletonitem_writeconfig_isbase = false;
    mutable bool kpropertyskeletonitem_readdefault_isbase = false;
    mutable bool kpropertyskeletonitem_setdefault_isbase = false;
    mutable bool kpropertyskeletonitem_swapdefault_isbase = false;
    mutable bool kpropertyskeletonitem_minvalue_isbase = false;
    mutable bool kpropertyskeletonitem_maxvalue_isbase = false;
    mutable bool kpropertyskeletonitem_readimmutability_isbase = false;

  public:
    VirtualKPropertySkeletonItem(QObject* object, const QByteArray& propertyName, const QVariant& defaultValue) : KPropertySkeletonItem(object, propertyName, defaultValue) {};
    VirtualKPropertySkeletonItem(const KPropertySkeletonItem& param1) : KPropertySkeletonItem(param1) {};

    ~VirtualKPropertySkeletonItem() {
        kpropertyskeletonitem_property_callback = nullptr;
        kpropertyskeletonitem_setproperty_callback = nullptr;
        kpropertyskeletonitem_isequal_callback = nullptr;
        kpropertyskeletonitem_readconfig_callback = nullptr;
        kpropertyskeletonitem_writeconfig_callback = nullptr;
        kpropertyskeletonitem_readdefault_callback = nullptr;
        kpropertyskeletonitem_setdefault_callback = nullptr;
        kpropertyskeletonitem_swapdefault_callback = nullptr;
        kpropertyskeletonitem_minvalue_callback = nullptr;
        kpropertyskeletonitem_maxvalue_callback = nullptr;
        kpropertyskeletonitem_readimmutability_callback = nullptr;
    }

    // Callback setters
    inline void setKPropertySkeletonItem_Property_Callback(KPropertySkeletonItem_Property_Callback cb) { kpropertyskeletonitem_property_callback = cb; }
    inline void setKPropertySkeletonItem_SetProperty_Callback(KPropertySkeletonItem_SetProperty_Callback cb) { kpropertyskeletonitem_setproperty_callback = cb; }
    inline void setKPropertySkeletonItem_IsEqual_Callback(KPropertySkeletonItem_IsEqual_Callback cb) { kpropertyskeletonitem_isequal_callback = cb; }
    inline void setKPropertySkeletonItem_ReadConfig_Callback(KPropertySkeletonItem_ReadConfig_Callback cb) { kpropertyskeletonitem_readconfig_callback = cb; }
    inline void setKPropertySkeletonItem_WriteConfig_Callback(KPropertySkeletonItem_WriteConfig_Callback cb) { kpropertyskeletonitem_writeconfig_callback = cb; }
    inline void setKPropertySkeletonItem_ReadDefault_Callback(KPropertySkeletonItem_ReadDefault_Callback cb) { kpropertyskeletonitem_readdefault_callback = cb; }
    inline void setKPropertySkeletonItem_SetDefault_Callback(KPropertySkeletonItem_SetDefault_Callback cb) { kpropertyskeletonitem_setdefault_callback = cb; }
    inline void setKPropertySkeletonItem_SwapDefault_Callback(KPropertySkeletonItem_SwapDefault_Callback cb) { kpropertyskeletonitem_swapdefault_callback = cb; }
    inline void setKPropertySkeletonItem_MinValue_Callback(KPropertySkeletonItem_MinValue_Callback cb) { kpropertyskeletonitem_minvalue_callback = cb; }
    inline void setKPropertySkeletonItem_MaxValue_Callback(KPropertySkeletonItem_MaxValue_Callback cb) { kpropertyskeletonitem_maxvalue_callback = cb; }
    inline void setKPropertySkeletonItem_ReadImmutability_Callback(KPropertySkeletonItem_ReadImmutability_Callback cb) { kpropertyskeletonitem_readimmutability_callback = cb; }

    // Base flag setters
    inline void setKPropertySkeletonItem_Property_IsBase(bool value) const { kpropertyskeletonitem_property_isbase = value; }
    inline void setKPropertySkeletonItem_SetProperty_IsBase(bool value) const { kpropertyskeletonitem_setproperty_isbase = value; }
    inline void setKPropertySkeletonItem_IsEqual_IsBase(bool value) const { kpropertyskeletonitem_isequal_isbase = value; }
    inline void setKPropertySkeletonItem_ReadConfig_IsBase(bool value) const { kpropertyskeletonitem_readconfig_isbase = value; }
    inline void setKPropertySkeletonItem_WriteConfig_IsBase(bool value) const { kpropertyskeletonitem_writeconfig_isbase = value; }
    inline void setKPropertySkeletonItem_ReadDefault_IsBase(bool value) const { kpropertyskeletonitem_readdefault_isbase = value; }
    inline void setKPropertySkeletonItem_SetDefault_IsBase(bool value) const { kpropertyskeletonitem_setdefault_isbase = value; }
    inline void setKPropertySkeletonItem_SwapDefault_IsBase(bool value) const { kpropertyskeletonitem_swapdefault_isbase = value; }
    inline void setKPropertySkeletonItem_MinValue_IsBase(bool value) const { kpropertyskeletonitem_minvalue_isbase = value; }
    inline void setKPropertySkeletonItem_MaxValue_IsBase(bool value) const { kpropertyskeletonitem_maxvalue_isbase = value; }
    inline void setKPropertySkeletonItem_ReadImmutability_IsBase(bool value) const { kpropertyskeletonitem_readimmutability_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kpropertyskeletonitem_property_isbase) {
            kpropertyskeletonitem_property_isbase = false;
            return KPropertySkeletonItem::property();
        } else if (kpropertyskeletonitem_property_callback != nullptr) {
            QVariant* callback_ret = kpropertyskeletonitem_property_callback();
            return *callback_ret;
        } else {
            return KPropertySkeletonItem::property();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kpropertyskeletonitem_setproperty_isbase) {
            kpropertyskeletonitem_setproperty_isbase = false;
            KPropertySkeletonItem::setProperty(p);
        } else if (kpropertyskeletonitem_setproperty_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            kpropertyskeletonitem_setproperty_callback(this, cbval1);
        } else {
            KPropertySkeletonItem::setProperty(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kpropertyskeletonitem_isequal_isbase) {
            kpropertyskeletonitem_isequal_isbase = false;
            return KPropertySkeletonItem::isEqual(p);
        } else if (kpropertyskeletonitem_isequal_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = kpropertyskeletonitem_isequal_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPropertySkeletonItem::isEqual(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* param1) override {
        if (kpropertyskeletonitem_readconfig_isbase) {
            kpropertyskeletonitem_readconfig_isbase = false;
            KPropertySkeletonItem::readConfig(param1);
        } else if (kpropertyskeletonitem_readconfig_callback != nullptr) {
            KConfig* cbval1 = param1;

            kpropertyskeletonitem_readconfig_callback(this, cbval1);
        } else {
            KPropertySkeletonItem::readConfig(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* param1) override {
        if (kpropertyskeletonitem_writeconfig_isbase) {
            kpropertyskeletonitem_writeconfig_isbase = false;
            KPropertySkeletonItem::writeConfig(param1);
        } else if (kpropertyskeletonitem_writeconfig_callback != nullptr) {
            KConfig* cbval1 = param1;

            kpropertyskeletonitem_writeconfig_callback(this, cbval1);
        } else {
            KPropertySkeletonItem::writeConfig(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readDefault(KConfig* param1) override {
        if (kpropertyskeletonitem_readdefault_isbase) {
            kpropertyskeletonitem_readdefault_isbase = false;
            KPropertySkeletonItem::readDefault(param1);
        } else if (kpropertyskeletonitem_readdefault_callback != nullptr) {
            KConfig* cbval1 = param1;

            kpropertyskeletonitem_readdefault_callback(this, cbval1);
        } else {
            KPropertySkeletonItem::readDefault(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefault() override {
        if (kpropertyskeletonitem_setdefault_isbase) {
            kpropertyskeletonitem_setdefault_isbase = false;
            KPropertySkeletonItem::setDefault();
        } else if (kpropertyskeletonitem_setdefault_callback != nullptr) {
            kpropertyskeletonitem_setdefault_callback();
        } else {
            KPropertySkeletonItem::setDefault();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void swapDefault() override {
        if (kpropertyskeletonitem_swapdefault_isbase) {
            kpropertyskeletonitem_swapdefault_isbase = false;
            KPropertySkeletonItem::swapDefault();
        } else if (kpropertyskeletonitem_swapdefault_callback != nullptr) {
            kpropertyskeletonitem_swapdefault_callback();
        } else {
            KPropertySkeletonItem::swapDefault();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kpropertyskeletonitem_minvalue_isbase) {
            kpropertyskeletonitem_minvalue_isbase = false;
            return KPropertySkeletonItem::minValue();
        } else if (kpropertyskeletonitem_minvalue_callback != nullptr) {
            QVariant* callback_ret = kpropertyskeletonitem_minvalue_callback();
            return *callback_ret;
        } else {
            return KPropertySkeletonItem::minValue();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kpropertyskeletonitem_maxvalue_isbase) {
            kpropertyskeletonitem_maxvalue_isbase = false;
            return KPropertySkeletonItem::maxValue();
        } else if (kpropertyskeletonitem_maxvalue_callback != nullptr) {
            QVariant* callback_ret = kpropertyskeletonitem_maxvalue_callback();
            return *callback_ret;
        } else {
            return KPropertySkeletonItem::maxValue();
        }
    }

    // Virtual method for C ABI access and custom callback
    void readImmutability(const KConfigGroup& group) {
        if (kpropertyskeletonitem_readimmutability_isbase) {
            kpropertyskeletonitem_readimmutability_isbase = false;
            KPropertySkeletonItem::readImmutability(group);
        } else if (kpropertyskeletonitem_readimmutability_callback != nullptr) {
            const KConfigGroup& group_ret = group;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&group_ret);

            kpropertyskeletonitem_readimmutability_callback(this, cbval1);
        } else {
            KPropertySkeletonItem::readImmutability(group);
        }
    }

    // Friend functions
    friend void KPropertySkeletonItem_ReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group);
    friend void KPropertySkeletonItem_QBaseReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group);
};

// This class is a subclass of KCoreConfigSkeleton so that we can call protected methods
class VirtualKCoreConfigSkeleton final : public KCoreConfigSkeleton {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeleton = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton_Metacall_Callback = int (*)(KCoreConfigSkeleton*, int, int, void**);
    using KCoreConfigSkeleton_SetDefaults_Callback = void (*)();
    using KCoreConfigSkeleton_UseDefaults_Callback = bool (*)(KCoreConfigSkeleton*, bool);
    using KCoreConfigSkeleton_UsrUseDefaults_Callback = bool (*)(KCoreConfigSkeleton*, bool);
    using KCoreConfigSkeleton_UsrSetDefaults_Callback = void (*)();
    using KCoreConfigSkeleton_UsrRead_Callback = void (*)();
    using KCoreConfigSkeleton_UsrSave_Callback = bool (*)();
    using KCoreConfigSkeleton_Event_Callback = bool (*)(KCoreConfigSkeleton*, QEvent*);
    using KCoreConfigSkeleton_EventFilter_Callback = bool (*)(KCoreConfigSkeleton*, QObject*, QEvent*);
    using KCoreConfigSkeleton_TimerEvent_Callback = void (*)(KCoreConfigSkeleton*, QTimerEvent*);
    using KCoreConfigSkeleton_ChildEvent_Callback = void (*)(KCoreConfigSkeleton*, QChildEvent*);
    using KCoreConfigSkeleton_CustomEvent_Callback = void (*)(KCoreConfigSkeleton*, QEvent*);
    using KCoreConfigSkeleton_ConnectNotify_Callback = void (*)(KCoreConfigSkeleton*, QMetaMethod*);
    using KCoreConfigSkeleton_DisconnectNotify_Callback = void (*)(KCoreConfigSkeleton*, QMetaMethod*);
    using KCoreConfigSkeleton_Sender_Callback = QObject* (*)();
    using KCoreConfigSkeleton_SenderSignalIndex_Callback = int (*)();
    using KCoreConfigSkeleton_Receivers_Callback = int (*)(const KCoreConfigSkeleton*, const char*);
    using KCoreConfigSkeleton_IsSignalConnected_Callback = bool (*)(const KCoreConfigSkeleton*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCoreConfigSkeleton_Metacall_Callback kcoreconfigskeleton_metacall_callback = nullptr;
    KCoreConfigSkeleton_SetDefaults_Callback kcoreconfigskeleton_setdefaults_callback = nullptr;
    KCoreConfigSkeleton_UseDefaults_Callback kcoreconfigskeleton_usedefaults_callback = nullptr;
    KCoreConfigSkeleton_UsrUseDefaults_Callback kcoreconfigskeleton_usrusedefaults_callback = nullptr;
    KCoreConfigSkeleton_UsrSetDefaults_Callback kcoreconfigskeleton_usrsetdefaults_callback = nullptr;
    KCoreConfigSkeleton_UsrRead_Callback kcoreconfigskeleton_usrread_callback = nullptr;
    KCoreConfigSkeleton_UsrSave_Callback kcoreconfigskeleton_usrsave_callback = nullptr;
    KCoreConfigSkeleton_Event_Callback kcoreconfigskeleton_event_callback = nullptr;
    KCoreConfigSkeleton_EventFilter_Callback kcoreconfigskeleton_eventfilter_callback = nullptr;
    KCoreConfigSkeleton_TimerEvent_Callback kcoreconfigskeleton_timerevent_callback = nullptr;
    KCoreConfigSkeleton_ChildEvent_Callback kcoreconfigskeleton_childevent_callback = nullptr;
    KCoreConfigSkeleton_CustomEvent_Callback kcoreconfigskeleton_customevent_callback = nullptr;
    KCoreConfigSkeleton_ConnectNotify_Callback kcoreconfigskeleton_connectnotify_callback = nullptr;
    KCoreConfigSkeleton_DisconnectNotify_Callback kcoreconfigskeleton_disconnectnotify_callback = nullptr;
    KCoreConfigSkeleton_Sender_Callback kcoreconfigskeleton_sender_callback = nullptr;
    KCoreConfigSkeleton_SenderSignalIndex_Callback kcoreconfigskeleton_sendersignalindex_callback = nullptr;
    KCoreConfigSkeleton_Receivers_Callback kcoreconfigskeleton_receivers_callback = nullptr;
    KCoreConfigSkeleton_IsSignalConnected_Callback kcoreconfigskeleton_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton_metacall_isbase = false;
    mutable bool kcoreconfigskeleton_setdefaults_isbase = false;
    mutable bool kcoreconfigskeleton_usedefaults_isbase = false;
    mutable bool kcoreconfigskeleton_usrusedefaults_isbase = false;
    mutable bool kcoreconfigskeleton_usrsetdefaults_isbase = false;
    mutable bool kcoreconfigskeleton_usrread_isbase = false;
    mutable bool kcoreconfigskeleton_usrsave_isbase = false;
    mutable bool kcoreconfigskeleton_event_isbase = false;
    mutable bool kcoreconfigskeleton_eventfilter_isbase = false;
    mutable bool kcoreconfigskeleton_timerevent_isbase = false;
    mutable bool kcoreconfigskeleton_childevent_isbase = false;
    mutable bool kcoreconfigskeleton_customevent_isbase = false;
    mutable bool kcoreconfigskeleton_connectnotify_isbase = false;
    mutable bool kcoreconfigskeleton_disconnectnotify_isbase = false;
    mutable bool kcoreconfigskeleton_sender_isbase = false;
    mutable bool kcoreconfigskeleton_sendersignalindex_isbase = false;
    mutable bool kcoreconfigskeleton_receivers_isbase = false;
    mutable bool kcoreconfigskeleton_issignalconnected_isbase = false;

  public:
    VirtualKCoreConfigSkeleton() : KCoreConfigSkeleton() {};
    VirtualKCoreConfigSkeleton(const QString& configname) : KCoreConfigSkeleton(configname) {};
    VirtualKCoreConfigSkeleton(const QString& configname, QObject* parent) : KCoreConfigSkeleton(configname, parent) {};

    ~VirtualKCoreConfigSkeleton() {
        kcoreconfigskeleton_metacall_callback = nullptr;
        kcoreconfigskeleton_setdefaults_callback = nullptr;
        kcoreconfigskeleton_usedefaults_callback = nullptr;
        kcoreconfigskeleton_usrusedefaults_callback = nullptr;
        kcoreconfigskeleton_usrsetdefaults_callback = nullptr;
        kcoreconfigskeleton_usrread_callback = nullptr;
        kcoreconfigskeleton_usrsave_callback = nullptr;
        kcoreconfigskeleton_event_callback = nullptr;
        kcoreconfigskeleton_eventfilter_callback = nullptr;
        kcoreconfigskeleton_timerevent_callback = nullptr;
        kcoreconfigskeleton_childevent_callback = nullptr;
        kcoreconfigskeleton_customevent_callback = nullptr;
        kcoreconfigskeleton_connectnotify_callback = nullptr;
        kcoreconfigskeleton_disconnectnotify_callback = nullptr;
        kcoreconfigskeleton_sender_callback = nullptr;
        kcoreconfigskeleton_sendersignalindex_callback = nullptr;
        kcoreconfigskeleton_receivers_callback = nullptr;
        kcoreconfigskeleton_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreConfigSkeleton_Metacall_Callback(KCoreConfigSkeleton_Metacall_Callback cb) { kcoreconfigskeleton_metacall_callback = cb; }
    inline void setKCoreConfigSkeleton_SetDefaults_Callback(KCoreConfigSkeleton_SetDefaults_Callback cb) { kcoreconfigskeleton_setdefaults_callback = cb; }
    inline void setKCoreConfigSkeleton_UseDefaults_Callback(KCoreConfigSkeleton_UseDefaults_Callback cb) { kcoreconfigskeleton_usedefaults_callback = cb; }
    inline void setKCoreConfigSkeleton_UsrUseDefaults_Callback(KCoreConfigSkeleton_UsrUseDefaults_Callback cb) { kcoreconfigskeleton_usrusedefaults_callback = cb; }
    inline void setKCoreConfigSkeleton_UsrSetDefaults_Callback(KCoreConfigSkeleton_UsrSetDefaults_Callback cb) { kcoreconfigskeleton_usrsetdefaults_callback = cb; }
    inline void setKCoreConfigSkeleton_UsrRead_Callback(KCoreConfigSkeleton_UsrRead_Callback cb) { kcoreconfigskeleton_usrread_callback = cb; }
    inline void setKCoreConfigSkeleton_UsrSave_Callback(KCoreConfigSkeleton_UsrSave_Callback cb) { kcoreconfigskeleton_usrsave_callback = cb; }
    inline void setKCoreConfigSkeleton_Event_Callback(KCoreConfigSkeleton_Event_Callback cb) { kcoreconfigskeleton_event_callback = cb; }
    inline void setKCoreConfigSkeleton_EventFilter_Callback(KCoreConfigSkeleton_EventFilter_Callback cb) { kcoreconfigskeleton_eventfilter_callback = cb; }
    inline void setKCoreConfigSkeleton_TimerEvent_Callback(KCoreConfigSkeleton_TimerEvent_Callback cb) { kcoreconfigskeleton_timerevent_callback = cb; }
    inline void setKCoreConfigSkeleton_ChildEvent_Callback(KCoreConfigSkeleton_ChildEvent_Callback cb) { kcoreconfigskeleton_childevent_callback = cb; }
    inline void setKCoreConfigSkeleton_CustomEvent_Callback(KCoreConfigSkeleton_CustomEvent_Callback cb) { kcoreconfigskeleton_customevent_callback = cb; }
    inline void setKCoreConfigSkeleton_ConnectNotify_Callback(KCoreConfigSkeleton_ConnectNotify_Callback cb) { kcoreconfigskeleton_connectnotify_callback = cb; }
    inline void setKCoreConfigSkeleton_DisconnectNotify_Callback(KCoreConfigSkeleton_DisconnectNotify_Callback cb) { kcoreconfigskeleton_disconnectnotify_callback = cb; }
    inline void setKCoreConfigSkeleton_Sender_Callback(KCoreConfigSkeleton_Sender_Callback cb) { kcoreconfigskeleton_sender_callback = cb; }
    inline void setKCoreConfigSkeleton_SenderSignalIndex_Callback(KCoreConfigSkeleton_SenderSignalIndex_Callback cb) { kcoreconfigskeleton_sendersignalindex_callback = cb; }
    inline void setKCoreConfigSkeleton_Receivers_Callback(KCoreConfigSkeleton_Receivers_Callback cb) { kcoreconfigskeleton_receivers_callback = cb; }
    inline void setKCoreConfigSkeleton_IsSignalConnected_Callback(KCoreConfigSkeleton_IsSignalConnected_Callback cb) { kcoreconfigskeleton_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton_Metacall_IsBase(bool value) const { kcoreconfigskeleton_metacall_isbase = value; }
    inline void setKCoreConfigSkeleton_SetDefaults_IsBase(bool value) const { kcoreconfigskeleton_setdefaults_isbase = value; }
    inline void setKCoreConfigSkeleton_UseDefaults_IsBase(bool value) const { kcoreconfigskeleton_usedefaults_isbase = value; }
    inline void setKCoreConfigSkeleton_UsrUseDefaults_IsBase(bool value) const { kcoreconfigskeleton_usrusedefaults_isbase = value; }
    inline void setKCoreConfigSkeleton_UsrSetDefaults_IsBase(bool value) const { kcoreconfigskeleton_usrsetdefaults_isbase = value; }
    inline void setKCoreConfigSkeleton_UsrRead_IsBase(bool value) const { kcoreconfigskeleton_usrread_isbase = value; }
    inline void setKCoreConfigSkeleton_UsrSave_IsBase(bool value) const { kcoreconfigskeleton_usrsave_isbase = value; }
    inline void setKCoreConfigSkeleton_Event_IsBase(bool value) const { kcoreconfigskeleton_event_isbase = value; }
    inline void setKCoreConfigSkeleton_EventFilter_IsBase(bool value) const { kcoreconfigskeleton_eventfilter_isbase = value; }
    inline void setKCoreConfigSkeleton_TimerEvent_IsBase(bool value) const { kcoreconfigskeleton_timerevent_isbase = value; }
    inline void setKCoreConfigSkeleton_ChildEvent_IsBase(bool value) const { kcoreconfigskeleton_childevent_isbase = value; }
    inline void setKCoreConfigSkeleton_CustomEvent_IsBase(bool value) const { kcoreconfigskeleton_customevent_isbase = value; }
    inline void setKCoreConfigSkeleton_ConnectNotify_IsBase(bool value) const { kcoreconfigskeleton_connectnotify_isbase = value; }
    inline void setKCoreConfigSkeleton_DisconnectNotify_IsBase(bool value) const { kcoreconfigskeleton_disconnectnotify_isbase = value; }
    inline void setKCoreConfigSkeleton_Sender_IsBase(bool value) const { kcoreconfigskeleton_sender_isbase = value; }
    inline void setKCoreConfigSkeleton_SenderSignalIndex_IsBase(bool value) const { kcoreconfigskeleton_sendersignalindex_isbase = value; }
    inline void setKCoreConfigSkeleton_Receivers_IsBase(bool value) const { kcoreconfigskeleton_receivers_isbase = value; }
    inline void setKCoreConfigSkeleton_IsSignalConnected_IsBase(bool value) const { kcoreconfigskeleton_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoreconfigskeleton_metacall_isbase) {
            kcoreconfigskeleton_metacall_isbase = false;
            return KCoreConfigSkeleton::qt_metacall(param1, param2, param3);
        } else if (kcoreconfigskeleton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcoreconfigskeleton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCoreConfigSkeleton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kcoreconfigskeleton_setdefaults_isbase) {
            kcoreconfigskeleton_setdefaults_isbase = false;
            KCoreConfigSkeleton::setDefaults();
        } else if (kcoreconfigskeleton_setdefaults_callback != nullptr) {
            kcoreconfigskeleton_setdefaults_callback();
        } else {
            KCoreConfigSkeleton::setDefaults();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kcoreconfigskeleton_usedefaults_isbase) {
            kcoreconfigskeleton_usedefaults_isbase = false;
            return KCoreConfigSkeleton::useDefaults(b);
        } else if (kcoreconfigskeleton_usedefaults_callback != nullptr) {
            bool cbval1 = b;

            bool callback_ret = kcoreconfigskeleton_usedefaults_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::useDefaults(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kcoreconfigskeleton_usrusedefaults_isbase) {
            kcoreconfigskeleton_usrusedefaults_isbase = false;
            return KCoreConfigSkeleton::usrUseDefaults(b);
        } else if (kcoreconfigskeleton_usrusedefaults_callback != nullptr) {
            bool cbval1 = b;

            bool callback_ret = kcoreconfigskeleton_usrusedefaults_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::usrUseDefaults(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kcoreconfigskeleton_usrsetdefaults_isbase) {
            kcoreconfigskeleton_usrsetdefaults_isbase = false;
            KCoreConfigSkeleton::usrSetDefaults();
        } else if (kcoreconfigskeleton_usrsetdefaults_callback != nullptr) {
            kcoreconfigskeleton_usrsetdefaults_callback();
        } else {
            KCoreConfigSkeleton::usrSetDefaults();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kcoreconfigskeleton_usrread_isbase) {
            kcoreconfigskeleton_usrread_isbase = false;
            KCoreConfigSkeleton::usrRead();
        } else if (kcoreconfigskeleton_usrread_callback != nullptr) {
            kcoreconfigskeleton_usrread_callback();
        } else {
            KCoreConfigSkeleton::usrRead();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kcoreconfigskeleton_usrsave_isbase) {
            kcoreconfigskeleton_usrsave_isbase = false;
            return KCoreConfigSkeleton::usrSave();
        } else if (kcoreconfigskeleton_usrsave_callback != nullptr) {
            bool callback_ret = kcoreconfigskeleton_usrsave_callback();
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::usrSave();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoreconfigskeleton_event_isbase) {
            kcoreconfigskeleton_event_isbase = false;
            return KCoreConfigSkeleton::event(event);
        } else if (kcoreconfigskeleton_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcoreconfigskeleton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoreconfigskeleton_eventfilter_isbase) {
            kcoreconfigskeleton_eventfilter_isbase = false;
            return KCoreConfigSkeleton::eventFilter(watched, event);
        } else if (kcoreconfigskeleton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcoreconfigskeleton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoreconfigskeleton_timerevent_isbase) {
            kcoreconfigskeleton_timerevent_isbase = false;
            KCoreConfigSkeleton::timerEvent(event);
        } else if (kcoreconfigskeleton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcoreconfigskeleton_timerevent_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoreconfigskeleton_childevent_isbase) {
            kcoreconfigskeleton_childevent_isbase = false;
            KCoreConfigSkeleton::childEvent(event);
        } else if (kcoreconfigskeleton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcoreconfigskeleton_childevent_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoreconfigskeleton_customevent_isbase) {
            kcoreconfigskeleton_customevent_isbase = false;
            KCoreConfigSkeleton::customEvent(event);
        } else if (kcoreconfigskeleton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcoreconfigskeleton_customevent_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoreconfigskeleton_connectnotify_isbase) {
            kcoreconfigskeleton_connectnotify_isbase = false;
            KCoreConfigSkeleton::connectNotify(signal);
        } else if (kcoreconfigskeleton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcoreconfigskeleton_connectnotify_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoreconfigskeleton_disconnectnotify_isbase) {
            kcoreconfigskeleton_disconnectnotify_isbase = false;
            KCoreConfigSkeleton::disconnectNotify(signal);
        } else if (kcoreconfigskeleton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcoreconfigskeleton_disconnectnotify_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcoreconfigskeleton_sender_isbase) {
            kcoreconfigskeleton_sender_isbase = false;
            return KCoreConfigSkeleton::sender();
        } else if (kcoreconfigskeleton_sender_callback != nullptr) {
            QObject* callback_ret = kcoreconfigskeleton_sender_callback();
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcoreconfigskeleton_sendersignalindex_isbase) {
            kcoreconfigskeleton_sendersignalindex_isbase = false;
            return KCoreConfigSkeleton::senderSignalIndex();
        } else if (kcoreconfigskeleton_sendersignalindex_callback != nullptr) {
            int callback_ret = kcoreconfigskeleton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCoreConfigSkeleton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcoreconfigskeleton_receivers_isbase) {
            kcoreconfigskeleton_receivers_isbase = false;
            return KCoreConfigSkeleton::receivers(signal);
        } else if (kcoreconfigskeleton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcoreconfigskeleton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCoreConfigSkeleton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcoreconfigskeleton_issignalconnected_isbase) {
            kcoreconfigskeleton_issignalconnected_isbase = false;
            return KCoreConfigSkeleton::isSignalConnected(signal);
        } else if (kcoreconfigskeleton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcoreconfigskeleton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KCoreConfigSkeleton_UsrUseDefaults(KCoreConfigSkeleton* self, bool b);
    friend bool KCoreConfigSkeleton_QBaseUsrUseDefaults(KCoreConfigSkeleton* self, bool b);
    friend void KCoreConfigSkeleton_UsrSetDefaults(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_QBaseUsrSetDefaults(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_UsrRead(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_QBaseUsrRead(KCoreConfigSkeleton* self);
    friend bool KCoreConfigSkeleton_UsrSave(KCoreConfigSkeleton* self);
    friend bool KCoreConfigSkeleton_QBaseUsrSave(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_TimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
    friend void KCoreConfigSkeleton_QBaseTimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
    friend void KCoreConfigSkeleton_ChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
    friend void KCoreConfigSkeleton_QBaseChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
    friend void KCoreConfigSkeleton_CustomEvent(KCoreConfigSkeleton* self, QEvent* event);
    friend void KCoreConfigSkeleton_QBaseCustomEvent(KCoreConfigSkeleton* self, QEvent* event);
    friend void KCoreConfigSkeleton_ConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_QBaseConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_DisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_QBaseDisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend QObject* KCoreConfigSkeleton_Sender(const KCoreConfigSkeleton* self);
    friend QObject* KCoreConfigSkeleton_QBaseSender(const KCoreConfigSkeleton* self);
    friend int KCoreConfigSkeleton_SenderSignalIndex(const KCoreConfigSkeleton* self);
    friend int KCoreConfigSkeleton_QBaseSenderSignalIndex(const KCoreConfigSkeleton* self);
    friend int KCoreConfigSkeleton_Receivers(const KCoreConfigSkeleton* self, const char* signal);
    friend int KCoreConfigSkeleton_QBaseReceivers(const KCoreConfigSkeleton* self, const char* signal);
    friend bool KCoreConfigSkeleton_IsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend bool KCoreConfigSkeleton_QBaseIsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal);
};

// This class is a subclass of KCoreConfigSkeleton::ItemPassword so that we can call protected methods
class VirtualKCoreConfigSkeletonItemPassword final : public KCoreConfigSkeleton::ItemPassword {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemPassword = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPassword*, KConfig*);
    using KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPassword*, KConfig*);
    using KCoreConfigSkeleton__ItemPassword_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPassword*, QVariant*);
    using KCoreConfigSkeleton__ItemPassword_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPassword*, QVariant*);
    using KCoreConfigSkeleton__ItemPassword_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback kcoreconfigskeleton__itempassword_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback kcoreconfigskeleton__itempassword_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_SetProperty_Callback kcoreconfigskeleton__itempassword_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_IsEqual_Callback kcoreconfigskeleton__itempassword_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_Property_Callback kcoreconfigskeleton__itempassword_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itempassword_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempassword_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempassword_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itempassword_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itempassword_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemPassword(const QString& _group, const QString& _key, QString& reference) : KCoreConfigSkeleton::ItemPassword(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPassword(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue) : KCoreConfigSkeleton::ItemPassword(_group, _key, reference, defaultValue) {};

    ~VirtualKCoreConfigSkeletonItemPassword() {
        kcoreconfigskeleton__itempassword_writeconfig_callback = nullptr;
        kcoreconfigskeleton__itempassword_readconfig_callback = nullptr;
        kcoreconfigskeleton__itempassword_setproperty_callback = nullptr;
        kcoreconfigskeleton__itempassword_isequal_callback = nullptr;
        kcoreconfigskeleton__itempassword_property_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemPassword_WriteConfig_Callback(KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback cb) { kcoreconfigskeleton__itempassword_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPassword_ReadConfig_Callback(KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback cb) { kcoreconfigskeleton__itempassword_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPassword_SetProperty_Callback(KCoreConfigSkeleton__ItemPassword_SetProperty_Callback cb) { kcoreconfigskeleton__itempassword_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPassword_IsEqual_Callback(KCoreConfigSkeleton__ItemPassword_IsEqual_Callback cb) { kcoreconfigskeleton__itempassword_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPassword_Property_Callback(KCoreConfigSkeleton__ItemPassword_Property_Callback cb) { kcoreconfigskeleton__itempassword_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemPassword_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itempassword_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPassword_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itempassword_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPassword_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itempassword_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPassword_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itempassword_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPassword_Property_IsBase(bool value) const { kcoreconfigskeleton__itempassword_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempassword_writeconfig_isbase) {
            kcoreconfigskeleton__itempassword_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemPassword::writeConfig(config);
        } else if (kcoreconfigskeleton__itempassword_writeconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itempassword_writeconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPassword::writeConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempassword_readconfig_isbase) {
            kcoreconfigskeleton__itempassword_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPassword::readConfig(config);
        } else if (kcoreconfigskeleton__itempassword_readconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itempassword_readconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPassword::readConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempassword_setproperty_isbase) {
            kcoreconfigskeleton__itempassword_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPassword::setProperty(p);
        } else if (kcoreconfigskeleton__itempassword_setproperty_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            kcoreconfigskeleton__itempassword_setproperty_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPassword::setProperty(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempassword_isequal_isbase) {
            kcoreconfigskeleton__itempassword_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPassword::isEqual(p);
        } else if (kcoreconfigskeleton__itempassword_isequal_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = kcoreconfigskeleton__itempassword_isequal_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemPassword::isEqual(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempassword_property_isbase) {
            kcoreconfigskeleton__itempassword_property_isbase = false;
            return KCoreConfigSkeleton__ItemPassword::property();
        } else if (kcoreconfigskeleton__itempassword_property_callback != nullptr) {
            QVariant* callback_ret = kcoreconfigskeleton__itempassword_property_callback();
            return *callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemPassword::property();
        }
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPath so that we can call protected methods
class VirtualKCoreConfigSkeletonItemPath final : public KCoreConfigSkeleton::ItemPath {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemPath = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemPath_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPath*, KConfig*);
    using KCoreConfigSkeleton__ItemPath_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPath*, KConfig*);
    using KCoreConfigSkeleton__ItemPath_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPath*, QVariant*);
    using KCoreConfigSkeleton__ItemPath_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPath*, QVariant*);
    using KCoreConfigSkeleton__ItemPath_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemPath_WriteConfig_Callback kcoreconfigskeleton__itempath_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_ReadConfig_Callback kcoreconfigskeleton__itempath_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_SetProperty_Callback kcoreconfigskeleton__itempath_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_IsEqual_Callback kcoreconfigskeleton__itempath_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_Property_Callback kcoreconfigskeleton__itempath_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itempath_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempath_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempath_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itempath_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itempath_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemPath(const QString& _group, const QString& _key, QString& reference) : KCoreConfigSkeleton::ItemPath(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPath(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue) : KCoreConfigSkeleton::ItemPath(_group, _key, reference, defaultValue) {};

    ~VirtualKCoreConfigSkeletonItemPath() {
        kcoreconfigskeleton__itempath_writeconfig_callback = nullptr;
        kcoreconfigskeleton__itempath_readconfig_callback = nullptr;
        kcoreconfigskeleton__itempath_setproperty_callback = nullptr;
        kcoreconfigskeleton__itempath_isequal_callback = nullptr;
        kcoreconfigskeleton__itempath_property_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemPath_WriteConfig_Callback(KCoreConfigSkeleton__ItemPath_WriteConfig_Callback cb) { kcoreconfigskeleton__itempath_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPath_ReadConfig_Callback(KCoreConfigSkeleton__ItemPath_ReadConfig_Callback cb) { kcoreconfigskeleton__itempath_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPath_SetProperty_Callback(KCoreConfigSkeleton__ItemPath_SetProperty_Callback cb) { kcoreconfigskeleton__itempath_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPath_IsEqual_Callback(KCoreConfigSkeleton__ItemPath_IsEqual_Callback cb) { kcoreconfigskeleton__itempath_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPath_Property_Callback(KCoreConfigSkeleton__ItemPath_Property_Callback cb) { kcoreconfigskeleton__itempath_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemPath_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itempath_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPath_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itempath_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPath_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itempath_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPath_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itempath_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPath_Property_IsBase(bool value) const { kcoreconfigskeleton__itempath_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempath_writeconfig_isbase) {
            kcoreconfigskeleton__itempath_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemPath::writeConfig(config);
        } else if (kcoreconfigskeleton__itempath_writeconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itempath_writeconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPath::writeConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempath_readconfig_isbase) {
            kcoreconfigskeleton__itempath_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPath::readConfig(config);
        } else if (kcoreconfigskeleton__itempath_readconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itempath_readconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPath::readConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempath_setproperty_isbase) {
            kcoreconfigskeleton__itempath_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPath::setProperty(p);
        } else if (kcoreconfigskeleton__itempath_setproperty_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            kcoreconfigskeleton__itempath_setproperty_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPath::setProperty(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempath_isequal_isbase) {
            kcoreconfigskeleton__itempath_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPath::isEqual(p);
        } else if (kcoreconfigskeleton__itempath_isequal_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = kcoreconfigskeleton__itempath_isequal_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemPath::isEqual(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempath_property_isbase) {
            kcoreconfigskeleton__itempath_property_isbase = false;
            return KCoreConfigSkeleton__ItemPath::property();
        } else if (kcoreconfigskeleton__itempath_property_callback != nullptr) {
            QVariant* callback_ret = kcoreconfigskeleton__itempath_property_callback();
            return *callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemPath::property();
        }
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemEnum so that we can call protected methods
class VirtualKCoreConfigSkeletonItemEnum final : public KCoreConfigSkeleton::ItemEnum {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemEnum = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemEnum*, KConfig*);
    using KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemEnum*, KConfig*);
    using KCoreConfigSkeleton__ItemEnum_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemEnum*, QVariant*);
    using KCoreConfigSkeleton__ItemEnum_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemEnum*, QVariant*);
    using KCoreConfigSkeleton__ItemEnum_Property_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemEnum_MinValue_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemEnum_MaxValue_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback kcoreconfigskeleton__itemenum_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback kcoreconfigskeleton__itemenum_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_SetProperty_Callback kcoreconfigskeleton__itemenum_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_IsEqual_Callback kcoreconfigskeleton__itemenum_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_Property_Callback kcoreconfigskeleton__itemenum_property_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_MinValue_Callback kcoreconfigskeleton__itemenum_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_MaxValue_Callback kcoreconfigskeleton__itemenum_maxvalue_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemenum_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemenum_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemenum_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemenum_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemenum_property_isbase = false;
    mutable bool kcoreconfigskeleton__itemenum_minvalue_isbase = false;
    mutable bool kcoreconfigskeleton__itemenum_maxvalue_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemEnum(const QString& _group, const QString& _key, qint32& reference, const QList<KCoreConfigSkeleton::ItemEnum::Choice>& choices) : KCoreConfigSkeleton::ItemEnum(_group, _key, reference, choices) {};
    VirtualKCoreConfigSkeletonItemEnum(const QString& _group, const QString& _key, qint32& reference, const QList<KCoreConfigSkeleton::ItemEnum::Choice>& choices, qint32 defaultValue) : KCoreConfigSkeleton::ItemEnum(_group, _key, reference, choices, defaultValue) {};

    ~VirtualKCoreConfigSkeletonItemEnum() {
        kcoreconfigskeleton__itemenum_readconfig_callback = nullptr;
        kcoreconfigskeleton__itemenum_writeconfig_callback = nullptr;
        kcoreconfigskeleton__itemenum_setproperty_callback = nullptr;
        kcoreconfigskeleton__itemenum_isequal_callback = nullptr;
        kcoreconfigskeleton__itemenum_property_callback = nullptr;
        kcoreconfigskeleton__itemenum_minvalue_callback = nullptr;
        kcoreconfigskeleton__itemenum_maxvalue_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemEnum_ReadConfig_Callback(KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback cb) { kcoreconfigskeleton__itemenum_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemEnum_WriteConfig_Callback(KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback cb) { kcoreconfigskeleton__itemenum_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemEnum_SetProperty_Callback(KCoreConfigSkeleton__ItemEnum_SetProperty_Callback cb) { kcoreconfigskeleton__itemenum_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemEnum_IsEqual_Callback(KCoreConfigSkeleton__ItemEnum_IsEqual_Callback cb) { kcoreconfigskeleton__itemenum_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemEnum_Property_Callback(KCoreConfigSkeleton__ItemEnum_Property_Callback cb) { kcoreconfigskeleton__itemenum_property_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemEnum_MinValue_Callback(KCoreConfigSkeleton__ItemEnum_MinValue_Callback cb) { kcoreconfigskeleton__itemenum_minvalue_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemEnum_MaxValue_Callback(KCoreConfigSkeleton__ItemEnum_MaxValue_Callback cb) { kcoreconfigskeleton__itemenum_maxvalue_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemEnum_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemenum_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemEnum_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itemenum_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemEnum_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemenum_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemEnum_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemenum_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemEnum_Property_IsBase(bool value) const { kcoreconfigskeleton__itemenum_property_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemEnum_MinValue_IsBase(bool value) const { kcoreconfigskeleton__itemenum_minvalue_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemEnum_MaxValue_IsBase(bool value) const { kcoreconfigskeleton__itemenum_maxvalue_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemenum_readconfig_isbase) {
            kcoreconfigskeleton__itemenum_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemEnum::readConfig(config);
        } else if (kcoreconfigskeleton__itemenum_readconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itemenum_readconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemEnum::readConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemenum_writeconfig_isbase) {
            kcoreconfigskeleton__itemenum_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemEnum::writeConfig(config);
        } else if (kcoreconfigskeleton__itemenum_writeconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itemenum_writeconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemEnum::writeConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemenum_setproperty_isbase) {
            kcoreconfigskeleton__itemenum_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemEnum::setProperty(p);
        } else if (kcoreconfigskeleton__itemenum_setproperty_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            kcoreconfigskeleton__itemenum_setproperty_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemEnum::setProperty(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemenum_isequal_isbase) {
            kcoreconfigskeleton__itemenum_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::isEqual(p);
        } else if (kcoreconfigskeleton__itemenum_isequal_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = kcoreconfigskeleton__itemenum_isequal_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemEnum::isEqual(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemenum_property_isbase) {
            kcoreconfigskeleton__itemenum_property_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::property();
        } else if (kcoreconfigskeleton__itemenum_property_callback != nullptr) {
            QVariant* callback_ret = kcoreconfigskeleton__itemenum_property_callback();
            return *callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemEnum::property();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemenum_minvalue_isbase) {
            kcoreconfigskeleton__itemenum_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::minValue();
        } else if (kcoreconfigskeleton__itemenum_minvalue_callback != nullptr) {
            QVariant* callback_ret = kcoreconfigskeleton__itemenum_minvalue_callback();
            return *callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemEnum::minValue();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemenum_maxvalue_isbase) {
            kcoreconfigskeleton__itemenum_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::maxValue();
        } else if (kcoreconfigskeleton__itemenum_maxvalue_callback != nullptr) {
            QVariant* callback_ret = kcoreconfigskeleton__itemenum_maxvalue_callback();
            return *callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemEnum::maxValue();
        }
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPathList so that we can call protected methods
class VirtualKCoreConfigSkeletonItemPathList final : public KCoreConfigSkeleton::ItemPathList {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemPathList = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPathList*, KConfig*);
    using KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPathList*, KConfig*);
    using KCoreConfigSkeleton__ItemPathList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPathList*, QVariant*);
    using KCoreConfigSkeleton__ItemPathList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPathList*, QVariant*);
    using KCoreConfigSkeleton__ItemPathList_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback kcoreconfigskeleton__itempathlist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback kcoreconfigskeleton__itempathlist_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_SetProperty_Callback kcoreconfigskeleton__itempathlist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_IsEqual_Callback kcoreconfigskeleton__itempathlist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_Property_Callback kcoreconfigskeleton__itempathlist_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itempathlist_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempathlist_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempathlist_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itempathlist_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itempathlist_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemPathList(const QString& _group, const QString& _key, QList<QString>& reference) : KCoreConfigSkeleton::ItemPathList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPathList(const QString& _group, const QString& _key, QList<QString>& reference, const QList<QString>& defaultValue) : KCoreConfigSkeleton::ItemPathList(_group, _key, reference, defaultValue) {};

    ~VirtualKCoreConfigSkeletonItemPathList() {
        kcoreconfigskeleton__itempathlist_readconfig_callback = nullptr;
        kcoreconfigskeleton__itempathlist_writeconfig_callback = nullptr;
        kcoreconfigskeleton__itempathlist_setproperty_callback = nullptr;
        kcoreconfigskeleton__itempathlist_isequal_callback = nullptr;
        kcoreconfigskeleton__itempathlist_property_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemPathList_ReadConfig_Callback(KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback cb) { kcoreconfigskeleton__itempathlist_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPathList_WriteConfig_Callback(KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback cb) { kcoreconfigskeleton__itempathlist_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPathList_SetProperty_Callback(KCoreConfigSkeleton__ItemPathList_SetProperty_Callback cb) { kcoreconfigskeleton__itempathlist_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPathList_IsEqual_Callback(KCoreConfigSkeleton__ItemPathList_IsEqual_Callback cb) { kcoreconfigskeleton__itempathlist_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPathList_Property_Callback(KCoreConfigSkeleton__ItemPathList_Property_Callback cb) { kcoreconfigskeleton__itempathlist_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemPathList_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itempathlist_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPathList_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itempathlist_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPathList_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itempathlist_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPathList_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itempathlist_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPathList_Property_IsBase(bool value) const { kcoreconfigskeleton__itempathlist_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempathlist_readconfig_isbase) {
            kcoreconfigskeleton__itempathlist_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPathList::readConfig(config);
        } else if (kcoreconfigskeleton__itempathlist_readconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itempathlist_readconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPathList::readConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempathlist_writeconfig_isbase) {
            kcoreconfigskeleton__itempathlist_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemPathList::writeConfig(config);
        } else if (kcoreconfigskeleton__itempathlist_writeconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kcoreconfigskeleton__itempathlist_writeconfig_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPathList::writeConfig(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempathlist_setproperty_isbase) {
            kcoreconfigskeleton__itempathlist_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPathList::setProperty(p);
        } else if (kcoreconfigskeleton__itempathlist_setproperty_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            kcoreconfigskeleton__itempathlist_setproperty_callback(this, cbval1);
        } else {
            KCoreConfigSkeleton__ItemPathList::setProperty(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempathlist_isequal_isbase) {
            kcoreconfigskeleton__itempathlist_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPathList::isEqual(p);
        } else if (kcoreconfigskeleton__itempathlist_isequal_callback != nullptr) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = kcoreconfigskeleton__itempathlist_isequal_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemPathList::isEqual(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempathlist_property_isbase) {
            kcoreconfigskeleton__itempathlist_property_isbase = false;
            return KCoreConfigSkeleton__ItemPathList::property();
        } else if (kcoreconfigskeleton__itempathlist_property_callback != nullptr) {
            QVariant* callback_ret = kcoreconfigskeleton__itempathlist_property_callback();
            return *callback_ret;
        } else {
            return KCoreConfigSkeleton__ItemPathList::property();
        }
    }
};

#endif
