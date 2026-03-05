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
        auto readconfig_cb = kconfigskeletonitem_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = param1;

            readconfig_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* param1) override {
        auto writeconfig_cb = kconfigskeletonitem_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = param1;

            writeconfig_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readDefault(KConfig* param1) override {
        auto readdefault_cb = kconfigskeletonitem_readdefault_callback;
        if (readdefault_cb) {
            KConfig* cbval1 = param1;

            readdefault_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        auto setproperty_cb = kconfigskeletonitem_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        auto isequal_cb = kconfigskeletonitem_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        auto property_cb = kconfigskeletonitem_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kconfigskeletonitem_minvalue_isbase) {
            kconfigskeletonitem_minvalue_isbase = false;
            return KConfigSkeletonItem::minValue();
        }
        auto minvalue_cb = kconfigskeletonitem_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KConfigSkeletonItem::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kconfigskeletonitem_maxvalue_isbase) {
            kconfigskeletonitem_maxvalue_isbase = false;
            return KConfigSkeletonItem::maxValue();
        }
        auto maxvalue_cb = kconfigskeletonitem_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KConfigSkeletonItem::maxValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefault() override {
        auto setdefault_cb = kconfigskeletonitem_setdefault_callback;
        if (setdefault_cb) {
            setdefault_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void swapDefault() override {
        auto swapdefault_cb = kconfigskeletonitem_swapdefault_callback;
        if (swapdefault_cb) {
            swapdefault_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    void readImmutability(const KConfigGroup& group) {
        if (kconfigskeletonitem_readimmutability_isbase) {
            kconfigskeletonitem_readimmutability_isbase = false;
            KConfigSkeletonItem::readImmutability(group);
            return;
        }
        auto readimmutability_cb = kconfigskeletonitem_readimmutability_callback;
        if (readimmutability_cb) {
            const KConfigGroup& group_ret = group;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&group_ret);

            readimmutability_cb(this, cbval1);
            return;
        }
        KConfigSkeletonItem::readImmutability(group);
    }

    // Friend functions
    friend void KConfigSkeletonItem_ReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group);
    friend void KConfigSkeletonItem_SuperReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group);
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
        }
        auto property_cb = kpropertyskeletonitem_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KPropertySkeletonItem::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kpropertyskeletonitem_setproperty_isbase) {
            kpropertyskeletonitem_setproperty_isbase = false;
            KPropertySkeletonItem::setProperty(p);
            return;
        }
        auto setproperty_cb = kpropertyskeletonitem_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KPropertySkeletonItem::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kpropertyskeletonitem_isequal_isbase) {
            kpropertyskeletonitem_isequal_isbase = false;
            return KPropertySkeletonItem::isEqual(p);
        }
        auto isequal_cb = kpropertyskeletonitem_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertySkeletonItem::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* param1) override {
        if (kpropertyskeletonitem_readconfig_isbase) {
            kpropertyskeletonitem_readconfig_isbase = false;
            KPropertySkeletonItem::readConfig(param1);
            return;
        }
        auto readconfig_cb = kpropertyskeletonitem_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = param1;

            readconfig_cb(this, cbval1);
            return;
        }
        KPropertySkeletonItem::readConfig(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* param1) override {
        if (kpropertyskeletonitem_writeconfig_isbase) {
            kpropertyskeletonitem_writeconfig_isbase = false;
            KPropertySkeletonItem::writeConfig(param1);
            return;
        }
        auto writeconfig_cb = kpropertyskeletonitem_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = param1;

            writeconfig_cb(this, cbval1);
            return;
        }
        KPropertySkeletonItem::writeConfig(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readDefault(KConfig* param1) override {
        if (kpropertyskeletonitem_readdefault_isbase) {
            kpropertyskeletonitem_readdefault_isbase = false;
            KPropertySkeletonItem::readDefault(param1);
            return;
        }
        auto readdefault_cb = kpropertyskeletonitem_readdefault_callback;
        if (readdefault_cb) {
            KConfig* cbval1 = param1;

            readdefault_cb(this, cbval1);
            return;
        }
        KPropertySkeletonItem::readDefault(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefault() override {
        if (kpropertyskeletonitem_setdefault_isbase) {
            kpropertyskeletonitem_setdefault_isbase = false;
            KPropertySkeletonItem::setDefault();
            return;
        }
        auto setdefault_cb = kpropertyskeletonitem_setdefault_callback;
        if (setdefault_cb) {
            setdefault_cb();
            return;
        }
        KPropertySkeletonItem::setDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual void swapDefault() override {
        if (kpropertyskeletonitem_swapdefault_isbase) {
            kpropertyskeletonitem_swapdefault_isbase = false;
            KPropertySkeletonItem::swapDefault();
            return;
        }
        auto swapdefault_cb = kpropertyskeletonitem_swapdefault_callback;
        if (swapdefault_cb) {
            swapdefault_cb();
            return;
        }
        KPropertySkeletonItem::swapDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kpropertyskeletonitem_minvalue_isbase) {
            kpropertyskeletonitem_minvalue_isbase = false;
            return KPropertySkeletonItem::minValue();
        }
        auto minvalue_cb = kpropertyskeletonitem_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KPropertySkeletonItem::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kpropertyskeletonitem_maxvalue_isbase) {
            kpropertyskeletonitem_maxvalue_isbase = false;
            return KPropertySkeletonItem::maxValue();
        }
        auto maxvalue_cb = kpropertyskeletonitem_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KPropertySkeletonItem::maxValue();
    }

    // Virtual method for C ABI access and custom callback
    void readImmutability(const KConfigGroup& group) {
        if (kpropertyskeletonitem_readimmutability_isbase) {
            kpropertyskeletonitem_readimmutability_isbase = false;
            KPropertySkeletonItem::readImmutability(group);
            return;
        }
        auto readimmutability_cb = kpropertyskeletonitem_readimmutability_callback;
        if (readimmutability_cb) {
            const KConfigGroup& group_ret = group;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&group_ret);

            readimmutability_cb(this, cbval1);
            return;
        }
        KPropertySkeletonItem::readImmutability(group);
    }

    // Friend functions
    friend void KPropertySkeletonItem_ReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group);
    friend void KPropertySkeletonItem_SuperReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group);
};

// This class is a subclass of KCoreConfigSkeleton so that we can call protected methods
class VirtualKCoreConfigSkeleton final : public KCoreConfigSkeleton {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeleton = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton_MetaObject_Callback = QMetaObject* (*)();
    using KCoreConfigSkeleton_Metacast_Callback = void* (*)(KCoreConfigSkeleton*, const char*);
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
    KCoreConfigSkeleton_MetaObject_Callback kcoreconfigskeleton_metaobject_callback = nullptr;
    KCoreConfigSkeleton_Metacast_Callback kcoreconfigskeleton_metacast_callback = nullptr;
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
    mutable bool kcoreconfigskeleton_metaobject_isbase = false;
    mutable bool kcoreconfigskeleton_metacast_isbase = false;
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

    // Callback setters
    inline void setKCoreConfigSkeleton_MetaObject_Callback(KCoreConfigSkeleton_MetaObject_Callback cb) { kcoreconfigskeleton_metaobject_callback = cb; }
    inline void setKCoreConfigSkeleton_Metacast_Callback(KCoreConfigSkeleton_Metacast_Callback cb) { kcoreconfigskeleton_metacast_callback = cb; }
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
    inline void setKCoreConfigSkeleton_MetaObject_IsBase(bool value) const { kcoreconfigskeleton_metaobject_isbase = value; }
    inline void setKCoreConfigSkeleton_Metacast_IsBase(bool value) const { kcoreconfigskeleton_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kcoreconfigskeleton_metaobject_isbase) {
            kcoreconfigskeleton_metaobject_isbase = false;
            return KCoreConfigSkeleton::metaObject();
        }
        auto metaobject_cb = kcoreconfigskeleton_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KCoreConfigSkeleton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcoreconfigskeleton_metacast_isbase) {
            kcoreconfigskeleton_metacast_isbase = false;
            return KCoreConfigSkeleton::qt_metacast(param1);
        }
        auto metacast_cb = kcoreconfigskeleton_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoreconfigskeleton_metacall_isbase) {
            kcoreconfigskeleton_metacall_isbase = false;
            return KCoreConfigSkeleton::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcoreconfigskeleton_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCoreConfigSkeleton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kcoreconfigskeleton_setdefaults_isbase) {
            kcoreconfigskeleton_setdefaults_isbase = false;
            KCoreConfigSkeleton::setDefaults();
            return;
        }
        auto setdefaults_cb = kcoreconfigskeleton_setdefaults_callback;
        if (setdefaults_cb) {
            setdefaults_cb();
            return;
        }
        KCoreConfigSkeleton::setDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kcoreconfigskeleton_usedefaults_isbase) {
            kcoreconfigskeleton_usedefaults_isbase = false;
            return KCoreConfigSkeleton::useDefaults(b);
        }
        auto usedefaults_cb = kcoreconfigskeleton_usedefaults_callback;
        if (usedefaults_cb) {
            bool cbval1 = b;

            bool callback_ret = usedefaults_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::useDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kcoreconfigskeleton_usrusedefaults_isbase) {
            kcoreconfigskeleton_usrusedefaults_isbase = false;
            return KCoreConfigSkeleton::usrUseDefaults(b);
        }
        auto usrusedefaults_cb = kcoreconfigskeleton_usrusedefaults_callback;
        if (usrusedefaults_cb) {
            bool cbval1 = b;

            bool callback_ret = usrusedefaults_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::usrUseDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kcoreconfigskeleton_usrsetdefaults_isbase) {
            kcoreconfigskeleton_usrsetdefaults_isbase = false;
            KCoreConfigSkeleton::usrSetDefaults();
            return;
        }
        auto usrsetdefaults_cb = kcoreconfigskeleton_usrsetdefaults_callback;
        if (usrsetdefaults_cb) {
            usrsetdefaults_cb();
            return;
        }
        KCoreConfigSkeleton::usrSetDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kcoreconfigskeleton_usrread_isbase) {
            kcoreconfigskeleton_usrread_isbase = false;
            KCoreConfigSkeleton::usrRead();
            return;
        }
        auto usrread_cb = kcoreconfigskeleton_usrread_callback;
        if (usrread_cb) {
            usrread_cb();
            return;
        }
        KCoreConfigSkeleton::usrRead();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kcoreconfigskeleton_usrsave_isbase) {
            kcoreconfigskeleton_usrsave_isbase = false;
            return KCoreConfigSkeleton::usrSave();
        }
        auto usrsave_cb = kcoreconfigskeleton_usrsave_callback;
        if (usrsave_cb) {
            bool callback_ret = usrsave_cb();
            return callback_ret;
        }
        return KCoreConfigSkeleton::usrSave();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoreconfigskeleton_event_isbase) {
            kcoreconfigskeleton_event_isbase = false;
            return KCoreConfigSkeleton::event(event);
        }
        auto event_cb = kcoreconfigskeleton_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoreconfigskeleton_eventfilter_isbase) {
            kcoreconfigskeleton_eventfilter_isbase = false;
            return KCoreConfigSkeleton::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcoreconfigskeleton_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCoreConfigSkeleton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoreconfigskeleton_timerevent_isbase) {
            kcoreconfigskeleton_timerevent_isbase = false;
            KCoreConfigSkeleton::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcoreconfigskeleton_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoreconfigskeleton_childevent_isbase) {
            kcoreconfigskeleton_childevent_isbase = false;
            KCoreConfigSkeleton::childEvent(event);
            return;
        }
        auto childevent_cb = kcoreconfigskeleton_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoreconfigskeleton_customevent_isbase) {
            kcoreconfigskeleton_customevent_isbase = false;
            KCoreConfigSkeleton::customEvent(event);
            return;
        }
        auto customevent_cb = kcoreconfigskeleton_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoreconfigskeleton_connectnotify_isbase) {
            kcoreconfigskeleton_connectnotify_isbase = false;
            KCoreConfigSkeleton::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcoreconfigskeleton_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoreconfigskeleton_disconnectnotify_isbase) {
            kcoreconfigskeleton_disconnectnotify_isbase = false;
            KCoreConfigSkeleton::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcoreconfigskeleton_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcoreconfigskeleton_sender_isbase) {
            kcoreconfigskeleton_sender_isbase = false;
            return KCoreConfigSkeleton::sender();
        }
        auto sender_cb = kcoreconfigskeleton_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KCoreConfigSkeleton::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcoreconfigskeleton_sendersignalindex_isbase) {
            kcoreconfigskeleton_sendersignalindex_isbase = false;
            return KCoreConfigSkeleton::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcoreconfigskeleton_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KCoreConfigSkeleton::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcoreconfigskeleton_receivers_isbase) {
            kcoreconfigskeleton_receivers_isbase = false;
            return KCoreConfigSkeleton::receivers(signal);
        }
        auto receivers_cb = kcoreconfigskeleton_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCoreConfigSkeleton::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcoreconfigskeleton_issignalconnected_isbase) {
            kcoreconfigskeleton_issignalconnected_isbase = false;
            return KCoreConfigSkeleton::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcoreconfigskeleton_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KCoreConfigSkeleton_UsrUseDefaults(KCoreConfigSkeleton* self, bool b);
    friend bool KCoreConfigSkeleton_SuperUsrUseDefaults(KCoreConfigSkeleton* self, bool b);
    friend void KCoreConfigSkeleton_UsrSetDefaults(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_SuperUsrSetDefaults(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_UsrRead(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_SuperUsrRead(KCoreConfigSkeleton* self);
    friend bool KCoreConfigSkeleton_UsrSave(KCoreConfigSkeleton* self);
    friend bool KCoreConfigSkeleton_SuperUsrSave(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_TimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
    friend void KCoreConfigSkeleton_SuperTimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
    friend void KCoreConfigSkeleton_ChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
    friend void KCoreConfigSkeleton_SuperChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
    friend void KCoreConfigSkeleton_CustomEvent(KCoreConfigSkeleton* self, QEvent* event);
    friend void KCoreConfigSkeleton_SuperCustomEvent(KCoreConfigSkeleton* self, QEvent* event);
    friend void KCoreConfigSkeleton_ConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_SuperConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_DisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_SuperDisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend QObject* KCoreConfigSkeleton_Sender(const KCoreConfigSkeleton* self);
    friend QObject* KCoreConfigSkeleton_SuperSender(const KCoreConfigSkeleton* self);
    friend int KCoreConfigSkeleton_SenderSignalIndex(const KCoreConfigSkeleton* self);
    friend int KCoreConfigSkeleton_SuperSenderSignalIndex(const KCoreConfigSkeleton* self);
    friend int KCoreConfigSkeleton_Receivers(const KCoreConfigSkeleton* self, const char* signal);
    friend int KCoreConfigSkeleton_SuperReceivers(const KCoreConfigSkeleton* self, const char* signal);
    friend bool KCoreConfigSkeleton_IsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend bool KCoreConfigSkeleton_SuperIsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal);
};

// This class is a subclass of KCoreConfigSkeleton::ItemString so that we can call protected methods
class VirtualKCoreConfigSkeletonItemString final : public KCoreConfigSkeleton::ItemString {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemString = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemString_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemString*, KConfig*);
    using KCoreConfigSkeleton__ItemString_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemString*, KConfig*);
    using KCoreConfigSkeleton__ItemString_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemString*, QVariant*);
    using KCoreConfigSkeleton__ItemString_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemString*, QVariant*);
    using KCoreConfigSkeleton__ItemString_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemString_WriteConfig_Callback kcoreconfigskeleton__itemstring_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemString_ReadConfig_Callback kcoreconfigskeleton__itemstring_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemString_SetProperty_Callback kcoreconfigskeleton__itemstring_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemString_IsEqual_Callback kcoreconfigskeleton__itemstring_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemString_Property_Callback kcoreconfigskeleton__itemstring_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemstring_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemstring_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemstring_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemstring_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemstring_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemString(const QString& _group, const QString& _key, QString& reference) : KCoreConfigSkeleton::ItemString(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemString(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue) : KCoreConfigSkeleton::ItemString(_group, _key, reference, defaultValue) {};
    VirtualKCoreConfigSkeletonItemString(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue, KCoreConfigSkeleton::ItemString::Type typeVal) : KCoreConfigSkeleton::ItemString(_group, _key, reference, defaultValue, typeVal) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemString_WriteConfig_Callback(KCoreConfigSkeleton__ItemString_WriteConfig_Callback cb) { kcoreconfigskeleton__itemstring_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemString_ReadConfig_Callback(KCoreConfigSkeleton__ItemString_ReadConfig_Callback cb) { kcoreconfigskeleton__itemstring_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemString_SetProperty_Callback(KCoreConfigSkeleton__ItemString_SetProperty_Callback cb) { kcoreconfigskeleton__itemstring_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemString_IsEqual_Callback(KCoreConfigSkeleton__ItemString_IsEqual_Callback cb) { kcoreconfigskeleton__itemstring_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemString_Property_Callback(KCoreConfigSkeleton__ItemString_Property_Callback cb) { kcoreconfigskeleton__itemstring_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemString_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itemstring_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemString_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemstring_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemString_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemstring_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemString_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemstring_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemString_Property_IsBase(bool value) const { kcoreconfigskeleton__itemstring_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemstring_writeconfig_isbase) {
            kcoreconfigskeleton__itemstring_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemString::writeConfig(config);
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itemstring_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemString::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemstring_readconfig_isbase) {
            kcoreconfigskeleton__itemstring_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemString::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemstring_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemString::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemstring_setproperty_isbase) {
            kcoreconfigskeleton__itemstring_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemString::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemstring_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemString::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemstring_isequal_isbase) {
            kcoreconfigskeleton__itemstring_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemString::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemstring_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemString::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemstring_property_isbase) {
            kcoreconfigskeleton__itemstring_property_isbase = false;
            return KCoreConfigSkeleton__ItemString::property();
        }
        auto property_cb = kcoreconfigskeleton__itemstring_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemString::property();
    }
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
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itempassword_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPassword::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempassword_readconfig_isbase) {
            kcoreconfigskeleton__itempassword_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPassword::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itempassword_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPassword::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempassword_setproperty_isbase) {
            kcoreconfigskeleton__itempassword_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPassword::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itempassword_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPassword::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempassword_isequal_isbase) {
            kcoreconfigskeleton__itempassword_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPassword::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itempassword_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPassword::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempassword_property_isbase) {
            kcoreconfigskeleton__itempassword_property_isbase = false;
            return KCoreConfigSkeleton__ItemPassword::property();
        }
        auto property_cb = kcoreconfigskeleton__itempassword_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemPassword::property();
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
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itempath_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPath::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempath_readconfig_isbase) {
            kcoreconfigskeleton__itempath_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPath::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itempath_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPath::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempath_setproperty_isbase) {
            kcoreconfigskeleton__itempath_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPath::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itempath_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPath::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempath_isequal_isbase) {
            kcoreconfigskeleton__itempath_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPath::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itempath_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPath::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempath_property_isbase) {
            kcoreconfigskeleton__itempath_property_isbase = false;
            return KCoreConfigSkeleton__ItemPath::property();
        }
        auto property_cb = kcoreconfigskeleton__itempath_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemPath::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemUrl so that we can call protected methods
class VirtualKCoreConfigSkeletonItemUrl final : public KCoreConfigSkeleton::ItemUrl {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemUrl = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrl*, KConfig*);
    using KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrl*, KConfig*);
    using KCoreConfigSkeleton__ItemUrl_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemUrl*, QVariant*);
    using KCoreConfigSkeleton__ItemUrl_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemUrl*, QVariant*);
    using KCoreConfigSkeleton__ItemUrl_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback kcoreconfigskeleton__itemurl_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback kcoreconfigskeleton__itemurl_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_SetProperty_Callback kcoreconfigskeleton__itemurl_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_IsEqual_Callback kcoreconfigskeleton__itemurl_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_Property_Callback kcoreconfigskeleton__itemurl_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemurl_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemurl_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemurl_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemurl_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemurl_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemUrl(const QString& _group, const QString& _key, QUrl& reference) : KCoreConfigSkeleton::ItemUrl(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemUrl(const QString& _group, const QString& _key, QUrl& reference, const QUrl& defaultValue) : KCoreConfigSkeleton::ItemUrl(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemUrl_WriteConfig_Callback(KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback cb) { kcoreconfigskeleton__itemurl_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrl_ReadConfig_Callback(KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback cb) { kcoreconfigskeleton__itemurl_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrl_SetProperty_Callback(KCoreConfigSkeleton__ItemUrl_SetProperty_Callback cb) { kcoreconfigskeleton__itemurl_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrl_IsEqual_Callback(KCoreConfigSkeleton__ItemUrl_IsEqual_Callback cb) { kcoreconfigskeleton__itemurl_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrl_Property_Callback(KCoreConfigSkeleton__ItemUrl_Property_Callback cb) { kcoreconfigskeleton__itemurl_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemUrl_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itemurl_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrl_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemurl_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrl_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemurl_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrl_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemurl_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrl_Property_IsBase(bool value) const { kcoreconfigskeleton__itemurl_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurl_writeconfig_isbase) {
            kcoreconfigskeleton__itemurl_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemUrl::writeConfig(config);
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itemurl_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrl::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurl_readconfig_isbase) {
            kcoreconfigskeleton__itemurl_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemUrl::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemurl_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrl::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemurl_setproperty_isbase) {
            kcoreconfigskeleton__itemurl_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemUrl::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemurl_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrl::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemurl_isequal_isbase) {
            kcoreconfigskeleton__itemurl_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemUrl::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemurl_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemUrl::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemurl_property_isbase) {
            kcoreconfigskeleton__itemurl_property_isbase = false;
            return KCoreConfigSkeleton__ItemUrl::property();
        }
        auto property_cb = kcoreconfigskeleton__itemurl_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemUrl::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemProperty so that we can call protected methods
class VirtualKCoreConfigSkeletonItemProperty final : public KCoreConfigSkeleton::ItemProperty {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemProperty = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemProperty*, KConfig*);
    using KCoreConfigSkeleton__ItemProperty_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemProperty*, QVariant*);
    using KCoreConfigSkeleton__ItemProperty_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemProperty*, QVariant*);
    using KCoreConfigSkeleton__ItemProperty_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback kcoreconfigskeleton__itemproperty_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemProperty_SetProperty_Callback kcoreconfigskeleton__itemproperty_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemProperty_IsEqual_Callback kcoreconfigskeleton__itemproperty_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemProperty_Property_Callback kcoreconfigskeleton__itemproperty_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemproperty_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemproperty_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemproperty_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemproperty_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemProperty(const QString& _group, const QString& _key, QVariant& reference) : KCoreConfigSkeleton::ItemProperty(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemProperty(const QString& _group, const QString& _key, QVariant& reference, const QVariant& defaultValue) : KCoreConfigSkeleton::ItemProperty(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemProperty_ReadConfig_Callback(KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback cb) { kcoreconfigskeleton__itemproperty_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemProperty_SetProperty_Callback(KCoreConfigSkeleton__ItemProperty_SetProperty_Callback cb) { kcoreconfigskeleton__itemproperty_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemProperty_IsEqual_Callback(KCoreConfigSkeleton__ItemProperty_IsEqual_Callback cb) { kcoreconfigskeleton__itemproperty_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemProperty_Property_Callback(KCoreConfigSkeleton__ItemProperty_Property_Callback cb) { kcoreconfigskeleton__itemproperty_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemProperty_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemproperty_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemProperty_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemproperty_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemProperty_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemproperty_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemProperty_Property_IsBase(bool value) const { kcoreconfigskeleton__itemproperty_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemproperty_readconfig_isbase) {
            kcoreconfigskeleton__itemproperty_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemProperty::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemproperty_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemProperty::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemproperty_setproperty_isbase) {
            kcoreconfigskeleton__itemproperty_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemProperty::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemproperty_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemProperty::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemproperty_isequal_isbase) {
            kcoreconfigskeleton__itemproperty_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemProperty::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemproperty_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemProperty::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemproperty_property_isbase) {
            kcoreconfigskeleton__itemproperty_property_isbase = false;
            return KCoreConfigSkeleton__ItemProperty::property();
        }
        auto property_cb = kcoreconfigskeleton__itemproperty_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemProperty::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemBool so that we can call protected methods
class VirtualKCoreConfigSkeletonItemBool final : public KCoreConfigSkeleton::ItemBool {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemBool = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemBool_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemBool*, KConfig*);
    using KCoreConfigSkeleton__ItemBool_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemBool*, QVariant*);
    using KCoreConfigSkeleton__ItemBool_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemBool*, QVariant*);
    using KCoreConfigSkeleton__ItemBool_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemBool_ReadConfig_Callback kcoreconfigskeleton__itembool_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemBool_SetProperty_Callback kcoreconfigskeleton__itembool_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemBool_IsEqual_Callback kcoreconfigskeleton__itembool_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemBool_Property_Callback kcoreconfigskeleton__itembool_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itembool_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itembool_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itembool_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itembool_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemBool(const QString& _group, const QString& _key, bool& reference) : KCoreConfigSkeleton::ItemBool(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemBool(const QString& _group, const QString& _key, bool& reference, bool defaultValue) : KCoreConfigSkeleton::ItemBool(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemBool_ReadConfig_Callback(KCoreConfigSkeleton__ItemBool_ReadConfig_Callback cb) { kcoreconfigskeleton__itembool_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemBool_SetProperty_Callback(KCoreConfigSkeleton__ItemBool_SetProperty_Callback cb) { kcoreconfigskeleton__itembool_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemBool_IsEqual_Callback(KCoreConfigSkeleton__ItemBool_IsEqual_Callback cb) { kcoreconfigskeleton__itembool_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemBool_Property_Callback(KCoreConfigSkeleton__ItemBool_Property_Callback cb) { kcoreconfigskeleton__itembool_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemBool_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itembool_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemBool_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itembool_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemBool_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itembool_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemBool_Property_IsBase(bool value) const { kcoreconfigskeleton__itembool_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itembool_readconfig_isbase) {
            kcoreconfigskeleton__itembool_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemBool::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itembool_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemBool::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itembool_setproperty_isbase) {
            kcoreconfigskeleton__itembool_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemBool::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itembool_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemBool::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itembool_isequal_isbase) {
            kcoreconfigskeleton__itembool_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemBool::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itembool_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemBool::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itembool_property_isbase) {
            kcoreconfigskeleton__itembool_property_isbase = false;
            return KCoreConfigSkeleton__ItemBool::property();
        }
        auto property_cb = kcoreconfigskeleton__itembool_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemBool::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemInt so that we can call protected methods
class VirtualKCoreConfigSkeletonItemInt final : public KCoreConfigSkeleton::ItemInt {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemInt = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemInt_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemInt*, KConfig*);
    using KCoreConfigSkeleton__ItemInt_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemInt*, QVariant*);
    using KCoreConfigSkeleton__ItemInt_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemInt*, QVariant*);
    using KCoreConfigSkeleton__ItemInt_Property_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemInt_MinValue_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemInt_MaxValue_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemInt_ReadConfig_Callback kcoreconfigskeleton__itemint_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_SetProperty_Callback kcoreconfigskeleton__itemint_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_IsEqual_Callback kcoreconfigskeleton__itemint_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_Property_Callback kcoreconfigskeleton__itemint_property_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_MinValue_Callback kcoreconfigskeleton__itemint_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_MaxValue_Callback kcoreconfigskeleton__itemint_maxvalue_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemint_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemint_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemint_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemint_property_isbase = false;
    mutable bool kcoreconfigskeleton__itemint_minvalue_isbase = false;
    mutable bool kcoreconfigskeleton__itemint_maxvalue_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemInt(const QString& _group, const QString& _key, qint32& reference) : KCoreConfigSkeleton::ItemInt(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemInt(const QString& _group, const QString& _key, qint32& reference, qint32 defaultValue) : KCoreConfigSkeleton::ItemInt(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemInt_ReadConfig_Callback(KCoreConfigSkeleton__ItemInt_ReadConfig_Callback cb) { kcoreconfigskeleton__itemint_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemInt_SetProperty_Callback(KCoreConfigSkeleton__ItemInt_SetProperty_Callback cb) { kcoreconfigskeleton__itemint_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemInt_IsEqual_Callback(KCoreConfigSkeleton__ItemInt_IsEqual_Callback cb) { kcoreconfigskeleton__itemint_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemInt_Property_Callback(KCoreConfigSkeleton__ItemInt_Property_Callback cb) { kcoreconfigskeleton__itemint_property_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemInt_MinValue_Callback(KCoreConfigSkeleton__ItemInt_MinValue_Callback cb) { kcoreconfigskeleton__itemint_minvalue_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemInt_MaxValue_Callback(KCoreConfigSkeleton__ItemInt_MaxValue_Callback cb) { kcoreconfigskeleton__itemint_maxvalue_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemInt_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemint_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemInt_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemint_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemInt_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemint_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemInt_Property_IsBase(bool value) const { kcoreconfigskeleton__itemint_property_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemInt_MinValue_IsBase(bool value) const { kcoreconfigskeleton__itemint_minvalue_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemInt_MaxValue_IsBase(bool value) const { kcoreconfigskeleton__itemint_maxvalue_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemint_readconfig_isbase) {
            kcoreconfigskeleton__itemint_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemInt::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemint_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemInt::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemint_setproperty_isbase) {
            kcoreconfigskeleton__itemint_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemInt::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemint_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemInt::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemint_isequal_isbase) {
            kcoreconfigskeleton__itemint_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemInt::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemint_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemInt::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemint_property_isbase) {
            kcoreconfigskeleton__itemint_property_isbase = false;
            return KCoreConfigSkeleton__ItemInt::property();
        }
        auto property_cb = kcoreconfigskeleton__itemint_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemInt::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemint_minvalue_isbase) {
            kcoreconfigskeleton__itemint_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemInt::minValue();
        }
        auto minvalue_cb = kcoreconfigskeleton__itemint_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemInt::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemint_maxvalue_isbase) {
            kcoreconfigskeleton__itemint_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemInt::maxValue();
        }
        auto maxvalue_cb = kcoreconfigskeleton__itemint_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemInt::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemLongLong so that we can call protected methods
class VirtualKCoreConfigSkeletonItemLongLong final : public KCoreConfigSkeleton::ItemLongLong {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemLongLong = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemLongLong*, KConfig*);
    using KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemLongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemLongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemLongLong_Property_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemLongLong_MinValue_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback kcoreconfigskeleton__itemlonglong_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback kcoreconfigskeleton__itemlonglong_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback kcoreconfigskeleton__itemlonglong_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_Property_Callback kcoreconfigskeleton__itemlonglong_property_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_MinValue_Callback kcoreconfigskeleton__itemlonglong_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback kcoreconfigskeleton__itemlonglong_maxvalue_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemlonglong_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemlonglong_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemlonglong_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemlonglong_property_isbase = false;
    mutable bool kcoreconfigskeleton__itemlonglong_minvalue_isbase = false;
    mutable bool kcoreconfigskeleton__itemlonglong_maxvalue_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemLongLong(const QString& _group, const QString& _key, qint64& reference) : KCoreConfigSkeleton::ItemLongLong(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemLongLong(const QString& _group, const QString& _key, qint64& reference, qint64 defaultValue) : KCoreConfigSkeleton::ItemLongLong(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback(KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback cb) { kcoreconfigskeleton__itemlonglong_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemLongLong_SetProperty_Callback(KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback cb) { kcoreconfigskeleton__itemlonglong_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemLongLong_IsEqual_Callback(KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback cb) { kcoreconfigskeleton__itemlonglong_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemLongLong_Property_Callback(KCoreConfigSkeleton__ItemLongLong_Property_Callback cb) { kcoreconfigskeleton__itemlonglong_property_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemLongLong_MinValue_Callback(KCoreConfigSkeleton__ItemLongLong_MinValue_Callback cb) { kcoreconfigskeleton__itemlonglong_minvalue_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemLongLong_MaxValue_Callback(KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback cb) { kcoreconfigskeleton__itemlonglong_maxvalue_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemLongLong_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemlonglong_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemLongLong_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemlonglong_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemLongLong_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemlonglong_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemLongLong_Property_IsBase(bool value) const { kcoreconfigskeleton__itemlonglong_property_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemLongLong_MinValue_IsBase(bool value) const { kcoreconfigskeleton__itemlonglong_minvalue_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemLongLong_MaxValue_IsBase(bool value) const { kcoreconfigskeleton__itemlonglong_maxvalue_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemlonglong_readconfig_isbase) {
            kcoreconfigskeleton__itemlonglong_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemLongLong::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemlonglong_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemLongLong::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemlonglong_setproperty_isbase) {
            kcoreconfigskeleton__itemlonglong_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemLongLong::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemlonglong_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemLongLong::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemlonglong_isequal_isbase) {
            kcoreconfigskeleton__itemlonglong_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemLongLong::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemlonglong_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemLongLong::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemlonglong_property_isbase) {
            kcoreconfigskeleton__itemlonglong_property_isbase = false;
            return KCoreConfigSkeleton__ItemLongLong::property();
        }
        auto property_cb = kcoreconfigskeleton__itemlonglong_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemLongLong::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemlonglong_minvalue_isbase) {
            kcoreconfigskeleton__itemlonglong_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemLongLong::minValue();
        }
        auto minvalue_cb = kcoreconfigskeleton__itemlonglong_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemLongLong::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemlonglong_maxvalue_isbase) {
            kcoreconfigskeleton__itemlonglong_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemLongLong::maxValue();
        }
        auto maxvalue_cb = kcoreconfigskeleton__itemlonglong_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemLongLong::maxValue();
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
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemenum_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemEnum::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemenum_writeconfig_isbase) {
            kcoreconfigskeleton__itemenum_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemEnum::writeConfig(config);
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itemenum_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemEnum::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemenum_setproperty_isbase) {
            kcoreconfigskeleton__itemenum_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemEnum::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemenum_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemEnum::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemenum_isequal_isbase) {
            kcoreconfigskeleton__itemenum_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemenum_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemEnum::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemenum_property_isbase) {
            kcoreconfigskeleton__itemenum_property_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::property();
        }
        auto property_cb = kcoreconfigskeleton__itemenum_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemEnum::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemenum_minvalue_isbase) {
            kcoreconfigskeleton__itemenum_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::minValue();
        }
        auto minvalue_cb = kcoreconfigskeleton__itemenum_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemEnum::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemenum_maxvalue_isbase) {
            kcoreconfigskeleton__itemenum_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemEnum::maxValue();
        }
        auto maxvalue_cb = kcoreconfigskeleton__itemenum_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemEnum::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemUInt so that we can call protected methods
class VirtualKCoreConfigSkeletonItemUInt final : public KCoreConfigSkeleton::ItemUInt {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemUInt = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUInt*, KConfig*);
    using KCoreConfigSkeleton__ItemUInt_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemUInt*, QVariant*);
    using KCoreConfigSkeleton__ItemUInt_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemUInt*, QVariant*);
    using KCoreConfigSkeleton__ItemUInt_Property_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemUInt_MinValue_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemUInt_MaxValue_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback kcoreconfigskeleton__itemuint_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_SetProperty_Callback kcoreconfigskeleton__itemuint_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_IsEqual_Callback kcoreconfigskeleton__itemuint_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_Property_Callback kcoreconfigskeleton__itemuint_property_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_MinValue_Callback kcoreconfigskeleton__itemuint_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_MaxValue_Callback kcoreconfigskeleton__itemuint_maxvalue_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemuint_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemuint_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemuint_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemuint_property_isbase = false;
    mutable bool kcoreconfigskeleton__itemuint_minvalue_isbase = false;
    mutable bool kcoreconfigskeleton__itemuint_maxvalue_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemUInt(const QString& _group, const QString& _key, quint32& reference) : KCoreConfigSkeleton::ItemUInt(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemUInt(const QString& _group, const QString& _key, quint32& reference, quint32 defaultValue) : KCoreConfigSkeleton::ItemUInt(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemUInt_ReadConfig_Callback(KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback cb) { kcoreconfigskeleton__itemuint_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUInt_SetProperty_Callback(KCoreConfigSkeleton__ItemUInt_SetProperty_Callback cb) { kcoreconfigskeleton__itemuint_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUInt_IsEqual_Callback(KCoreConfigSkeleton__ItemUInt_IsEqual_Callback cb) { kcoreconfigskeleton__itemuint_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUInt_Property_Callback(KCoreConfigSkeleton__ItemUInt_Property_Callback cb) { kcoreconfigskeleton__itemuint_property_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUInt_MinValue_Callback(KCoreConfigSkeleton__ItemUInt_MinValue_Callback cb) { kcoreconfigskeleton__itemuint_minvalue_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUInt_MaxValue_Callback(KCoreConfigSkeleton__ItemUInt_MaxValue_Callback cb) { kcoreconfigskeleton__itemuint_maxvalue_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemUInt_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemuint_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUInt_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemuint_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUInt_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemuint_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUInt_Property_IsBase(bool value) const { kcoreconfigskeleton__itemuint_property_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUInt_MinValue_IsBase(bool value) const { kcoreconfigskeleton__itemuint_minvalue_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUInt_MaxValue_IsBase(bool value) const { kcoreconfigskeleton__itemuint_maxvalue_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemuint_readconfig_isbase) {
            kcoreconfigskeleton__itemuint_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemUInt::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemuint_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUInt::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemuint_setproperty_isbase) {
            kcoreconfigskeleton__itemuint_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemUInt::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemuint_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUInt::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemuint_isequal_isbase) {
            kcoreconfigskeleton__itemuint_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemUInt::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemuint_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemUInt::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemuint_property_isbase) {
            kcoreconfigskeleton__itemuint_property_isbase = false;
            return KCoreConfigSkeleton__ItemUInt::property();
        }
        auto property_cb = kcoreconfigskeleton__itemuint_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemUInt::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemuint_minvalue_isbase) {
            kcoreconfigskeleton__itemuint_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemUInt::minValue();
        }
        auto minvalue_cb = kcoreconfigskeleton__itemuint_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemUInt::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemuint_maxvalue_isbase) {
            kcoreconfigskeleton__itemuint_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemUInt::maxValue();
        }
        auto maxvalue_cb = kcoreconfigskeleton__itemuint_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemUInt::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemULongLong so that we can call protected methods
class VirtualKCoreConfigSkeletonItemULongLong final : public KCoreConfigSkeleton::ItemULongLong {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemULongLong = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemULongLong*, KConfig*);
    using KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemULongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemULongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemULongLong_Property_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemULongLong_MinValue_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback kcoreconfigskeleton__itemulonglong_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback kcoreconfigskeleton__itemulonglong_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback kcoreconfigskeleton__itemulonglong_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_Property_Callback kcoreconfigskeleton__itemulonglong_property_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_MinValue_Callback kcoreconfigskeleton__itemulonglong_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback kcoreconfigskeleton__itemulonglong_maxvalue_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemulonglong_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemulonglong_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemulonglong_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemulonglong_property_isbase = false;
    mutable bool kcoreconfigskeleton__itemulonglong_minvalue_isbase = false;
    mutable bool kcoreconfigskeleton__itemulonglong_maxvalue_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemULongLong(const QString& _group, const QString& _key, quint64& reference) : KCoreConfigSkeleton::ItemULongLong(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemULongLong(const QString& _group, const QString& _key, quint64& reference, quint64 defaultValue) : KCoreConfigSkeleton::ItemULongLong(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback(KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback cb) { kcoreconfigskeleton__itemulonglong_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemULongLong_SetProperty_Callback(KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback cb) { kcoreconfigskeleton__itemulonglong_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemULongLong_IsEqual_Callback(KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback cb) { kcoreconfigskeleton__itemulonglong_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemULongLong_Property_Callback(KCoreConfigSkeleton__ItemULongLong_Property_Callback cb) { kcoreconfigskeleton__itemulonglong_property_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemULongLong_MinValue_Callback(KCoreConfigSkeleton__ItemULongLong_MinValue_Callback cb) { kcoreconfigskeleton__itemulonglong_minvalue_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemULongLong_MaxValue_Callback(KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback cb) { kcoreconfigskeleton__itemulonglong_maxvalue_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemULongLong_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemulonglong_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemULongLong_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemulonglong_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemULongLong_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemulonglong_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemULongLong_Property_IsBase(bool value) const { kcoreconfigskeleton__itemulonglong_property_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemULongLong_MinValue_IsBase(bool value) const { kcoreconfigskeleton__itemulonglong_minvalue_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemULongLong_MaxValue_IsBase(bool value) const { kcoreconfigskeleton__itemulonglong_maxvalue_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemulonglong_readconfig_isbase) {
            kcoreconfigskeleton__itemulonglong_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemULongLong::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemulonglong_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemULongLong::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemulonglong_setproperty_isbase) {
            kcoreconfigskeleton__itemulonglong_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemULongLong::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemulonglong_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemULongLong::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemulonglong_isequal_isbase) {
            kcoreconfigskeleton__itemulonglong_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemULongLong::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemulonglong_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemULongLong::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemulonglong_property_isbase) {
            kcoreconfigskeleton__itemulonglong_property_isbase = false;
            return KCoreConfigSkeleton__ItemULongLong::property();
        }
        auto property_cb = kcoreconfigskeleton__itemulonglong_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemULongLong::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemulonglong_minvalue_isbase) {
            kcoreconfigskeleton__itemulonglong_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemULongLong::minValue();
        }
        auto minvalue_cb = kcoreconfigskeleton__itemulonglong_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemULongLong::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemulonglong_maxvalue_isbase) {
            kcoreconfigskeleton__itemulonglong_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemULongLong::maxValue();
        }
        auto maxvalue_cb = kcoreconfigskeleton__itemulonglong_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemULongLong::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemDouble so that we can call protected methods
class VirtualKCoreConfigSkeletonItemDouble final : public KCoreConfigSkeleton::ItemDouble {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemDouble = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemDouble*, KConfig*);
    using KCoreConfigSkeleton__ItemDouble_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemDouble*, QVariant*);
    using KCoreConfigSkeleton__ItemDouble_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemDouble*, QVariant*);
    using KCoreConfigSkeleton__ItemDouble_Property_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemDouble_MinValue_Callback = QVariant* (*)();
    using KCoreConfigSkeleton__ItemDouble_MaxValue_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback kcoreconfigskeleton__itemdouble_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_SetProperty_Callback kcoreconfigskeleton__itemdouble_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_IsEqual_Callback kcoreconfigskeleton__itemdouble_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_Property_Callback kcoreconfigskeleton__itemdouble_property_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_MinValue_Callback kcoreconfigskeleton__itemdouble_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_MaxValue_Callback kcoreconfigskeleton__itemdouble_maxvalue_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemdouble_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemdouble_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemdouble_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemdouble_property_isbase = false;
    mutable bool kcoreconfigskeleton__itemdouble_minvalue_isbase = false;
    mutable bool kcoreconfigskeleton__itemdouble_maxvalue_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemDouble(const QString& _group, const QString& _key, double& reference) : KCoreConfigSkeleton::ItemDouble(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemDouble(const QString& _group, const QString& _key, double& reference, double defaultValue) : KCoreConfigSkeleton::ItemDouble(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemDouble_ReadConfig_Callback(KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback cb) { kcoreconfigskeleton__itemdouble_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDouble_SetProperty_Callback(KCoreConfigSkeleton__ItemDouble_SetProperty_Callback cb) { kcoreconfigskeleton__itemdouble_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDouble_IsEqual_Callback(KCoreConfigSkeleton__ItemDouble_IsEqual_Callback cb) { kcoreconfigskeleton__itemdouble_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDouble_Property_Callback(KCoreConfigSkeleton__ItemDouble_Property_Callback cb) { kcoreconfigskeleton__itemdouble_property_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDouble_MinValue_Callback(KCoreConfigSkeleton__ItemDouble_MinValue_Callback cb) { kcoreconfigskeleton__itemdouble_minvalue_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDouble_MaxValue_Callback(KCoreConfigSkeleton__ItemDouble_MaxValue_Callback cb) { kcoreconfigskeleton__itemdouble_maxvalue_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemDouble_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemdouble_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDouble_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemdouble_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDouble_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemdouble_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDouble_Property_IsBase(bool value) const { kcoreconfigskeleton__itemdouble_property_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDouble_MinValue_IsBase(bool value) const { kcoreconfigskeleton__itemdouble_minvalue_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDouble_MaxValue_IsBase(bool value) const { kcoreconfigskeleton__itemdouble_maxvalue_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemdouble_readconfig_isbase) {
            kcoreconfigskeleton__itemdouble_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemDouble::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemdouble_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDouble::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemdouble_setproperty_isbase) {
            kcoreconfigskeleton__itemdouble_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemDouble::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemdouble_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDouble::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemdouble_isequal_isbase) {
            kcoreconfigskeleton__itemdouble_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemDouble::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemdouble_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemDouble::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemdouble_property_isbase) {
            kcoreconfigskeleton__itemdouble_property_isbase = false;
            return KCoreConfigSkeleton__ItemDouble::property();
        }
        auto property_cb = kcoreconfigskeleton__itemdouble_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemDouble::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemdouble_minvalue_isbase) {
            kcoreconfigskeleton__itemdouble_minvalue_isbase = false;
            return KCoreConfigSkeleton__ItemDouble::minValue();
        }
        auto minvalue_cb = kcoreconfigskeleton__itemdouble_minvalue_callback;
        if (minvalue_cb) {
            QVariant* callback_ret = minvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemDouble::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemdouble_maxvalue_isbase) {
            kcoreconfigskeleton__itemdouble_maxvalue_isbase = false;
            return KCoreConfigSkeleton__ItemDouble::maxValue();
        }
        auto maxvalue_cb = kcoreconfigskeleton__itemdouble_maxvalue_callback;
        if (maxvalue_cb) {
            QVariant* callback_ret = maxvalue_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemDouble::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemRect so that we can call protected methods
class VirtualKCoreConfigSkeletonItemRect final : public KCoreConfigSkeleton::ItemRect {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemRect = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemRect_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemRect*, KConfig*);
    using KCoreConfigSkeleton__ItemRect_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemRect*, QVariant*);
    using KCoreConfigSkeleton__ItemRect_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemRect*, QVariant*);
    using KCoreConfigSkeleton__ItemRect_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemRect_ReadConfig_Callback kcoreconfigskeleton__itemrect_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemRect_SetProperty_Callback kcoreconfigskeleton__itemrect_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemRect_IsEqual_Callback kcoreconfigskeleton__itemrect_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemRect_Property_Callback kcoreconfigskeleton__itemrect_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemrect_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemrect_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemrect_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemrect_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemRect(const QString& _group, const QString& _key, QRect& reference) : KCoreConfigSkeleton::ItemRect(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemRect(const QString& _group, const QString& _key, QRect& reference, const QRect& defaultValue) : KCoreConfigSkeleton::ItemRect(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemRect_ReadConfig_Callback(KCoreConfigSkeleton__ItemRect_ReadConfig_Callback cb) { kcoreconfigskeleton__itemrect_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemRect_SetProperty_Callback(KCoreConfigSkeleton__ItemRect_SetProperty_Callback cb) { kcoreconfigskeleton__itemrect_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemRect_IsEqual_Callback(KCoreConfigSkeleton__ItemRect_IsEqual_Callback cb) { kcoreconfigskeleton__itemrect_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemRect_Property_Callback(KCoreConfigSkeleton__ItemRect_Property_Callback cb) { kcoreconfigskeleton__itemrect_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemRect_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemrect_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemRect_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemrect_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemRect_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemrect_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemRect_Property_IsBase(bool value) const { kcoreconfigskeleton__itemrect_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemrect_readconfig_isbase) {
            kcoreconfigskeleton__itemrect_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemRect::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemrect_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRect::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemrect_setproperty_isbase) {
            kcoreconfigskeleton__itemrect_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemRect::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemrect_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRect::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemrect_isequal_isbase) {
            kcoreconfigskeleton__itemrect_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemRect::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemrect_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemRect::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemrect_property_isbase) {
            kcoreconfigskeleton__itemrect_property_isbase = false;
            return KCoreConfigSkeleton__ItemRect::property();
        }
        auto property_cb = kcoreconfigskeleton__itemrect_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemRect::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemRectF so that we can call protected methods
class VirtualKCoreConfigSkeletonItemRectF final : public KCoreConfigSkeleton::ItemRectF {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemRectF = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemRectF*, KConfig*);
    using KCoreConfigSkeleton__ItemRectF_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemRectF*, QVariant*);
    using KCoreConfigSkeleton__ItemRectF_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemRectF*, QVariant*);
    using KCoreConfigSkeleton__ItemRectF_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback kcoreconfigskeleton__itemrectf_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemRectF_SetProperty_Callback kcoreconfigskeleton__itemrectf_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemRectF_IsEqual_Callback kcoreconfigskeleton__itemrectf_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemRectF_Property_Callback kcoreconfigskeleton__itemrectf_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemrectf_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemrectf_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemrectf_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemrectf_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemRectF(const QString& _group, const QString& _key, QRectF& reference) : KCoreConfigSkeleton::ItemRectF(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemRectF(const QString& _group, const QString& _key, QRectF& reference, const QRectF& defaultValue) : KCoreConfigSkeleton::ItemRectF(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemRectF_ReadConfig_Callback(KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback cb) { kcoreconfigskeleton__itemrectf_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemRectF_SetProperty_Callback(KCoreConfigSkeleton__ItemRectF_SetProperty_Callback cb) { kcoreconfigskeleton__itemrectf_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemRectF_IsEqual_Callback(KCoreConfigSkeleton__ItemRectF_IsEqual_Callback cb) { kcoreconfigskeleton__itemrectf_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemRectF_Property_Callback(KCoreConfigSkeleton__ItemRectF_Property_Callback cb) { kcoreconfigskeleton__itemrectf_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemRectF_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemrectf_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemRectF_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemrectf_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemRectF_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemrectf_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemRectF_Property_IsBase(bool value) const { kcoreconfigskeleton__itemrectf_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemrectf_readconfig_isbase) {
            kcoreconfigskeleton__itemrectf_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemRectF::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemrectf_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRectF::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemrectf_setproperty_isbase) {
            kcoreconfigskeleton__itemrectf_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemRectF::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemrectf_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRectF::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemrectf_isequal_isbase) {
            kcoreconfigskeleton__itemrectf_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemRectF::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemrectf_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemRectF::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemrectf_property_isbase) {
            kcoreconfigskeleton__itemrectf_property_isbase = false;
            return KCoreConfigSkeleton__ItemRectF::property();
        }
        auto property_cb = kcoreconfigskeleton__itemrectf_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemRectF::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPoint so that we can call protected methods
class VirtualKCoreConfigSkeletonItemPoint final : public KCoreConfigSkeleton::ItemPoint {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemPoint = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPoint*, KConfig*);
    using KCoreConfigSkeleton__ItemPoint_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPoint*, QVariant*);
    using KCoreConfigSkeleton__ItemPoint_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPoint*, QVariant*);
    using KCoreConfigSkeleton__ItemPoint_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback kcoreconfigskeleton__itempoint_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPoint_SetProperty_Callback kcoreconfigskeleton__itempoint_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPoint_IsEqual_Callback kcoreconfigskeleton__itempoint_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPoint_Property_Callback kcoreconfigskeleton__itempoint_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itempoint_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempoint_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itempoint_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itempoint_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemPoint(const QString& _group, const QString& _key, QPoint& reference) : KCoreConfigSkeleton::ItemPoint(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPoint(const QString& _group, const QString& _key, QPoint& reference, const QPoint& defaultValue) : KCoreConfigSkeleton::ItemPoint(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemPoint_ReadConfig_Callback(KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback cb) { kcoreconfigskeleton__itempoint_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPoint_SetProperty_Callback(KCoreConfigSkeleton__ItemPoint_SetProperty_Callback cb) { kcoreconfigskeleton__itempoint_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPoint_IsEqual_Callback(KCoreConfigSkeleton__ItemPoint_IsEqual_Callback cb) { kcoreconfigskeleton__itempoint_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPoint_Property_Callback(KCoreConfigSkeleton__ItemPoint_Property_Callback cb) { kcoreconfigskeleton__itempoint_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemPoint_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itempoint_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPoint_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itempoint_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPoint_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itempoint_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPoint_Property_IsBase(bool value) const { kcoreconfigskeleton__itempoint_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempoint_readconfig_isbase) {
            kcoreconfigskeleton__itempoint_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPoint::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itempoint_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPoint::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempoint_setproperty_isbase) {
            kcoreconfigskeleton__itempoint_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPoint::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itempoint_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPoint::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempoint_isequal_isbase) {
            kcoreconfigskeleton__itempoint_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPoint::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itempoint_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPoint::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempoint_property_isbase) {
            kcoreconfigskeleton__itempoint_property_isbase = false;
            return KCoreConfigSkeleton__ItemPoint::property();
        }
        auto property_cb = kcoreconfigskeleton__itempoint_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemPoint::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPointF so that we can call protected methods
class VirtualKCoreConfigSkeletonItemPointF final : public KCoreConfigSkeleton::ItemPointF {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemPointF = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPointF*, KConfig*);
    using KCoreConfigSkeleton__ItemPointF_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPointF*, QVariant*);
    using KCoreConfigSkeleton__ItemPointF_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPointF*, QVariant*);
    using KCoreConfigSkeleton__ItemPointF_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback kcoreconfigskeleton__itempointf_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPointF_SetProperty_Callback kcoreconfigskeleton__itempointf_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPointF_IsEqual_Callback kcoreconfigskeleton__itempointf_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPointF_Property_Callback kcoreconfigskeleton__itempointf_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itempointf_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itempointf_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itempointf_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itempointf_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemPointF(const QString& _group, const QString& _key, QPointF& reference) : KCoreConfigSkeleton::ItemPointF(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPointF(const QString& _group, const QString& _key, QPointF& reference, const QPointF& defaultValue) : KCoreConfigSkeleton::ItemPointF(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemPointF_ReadConfig_Callback(KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback cb) { kcoreconfigskeleton__itempointf_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPointF_SetProperty_Callback(KCoreConfigSkeleton__ItemPointF_SetProperty_Callback cb) { kcoreconfigskeleton__itempointf_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPointF_IsEqual_Callback(KCoreConfigSkeleton__ItemPointF_IsEqual_Callback cb) { kcoreconfigskeleton__itempointf_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemPointF_Property_Callback(KCoreConfigSkeleton__ItemPointF_Property_Callback cb) { kcoreconfigskeleton__itempointf_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemPointF_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itempointf_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPointF_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itempointf_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPointF_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itempointf_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemPointF_Property_IsBase(bool value) const { kcoreconfigskeleton__itempointf_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempointf_readconfig_isbase) {
            kcoreconfigskeleton__itempointf_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemPointF::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itempointf_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPointF::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempointf_setproperty_isbase) {
            kcoreconfigskeleton__itempointf_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPointF::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itempointf_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPointF::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempointf_isequal_isbase) {
            kcoreconfigskeleton__itempointf_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPointF::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itempointf_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPointF::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempointf_property_isbase) {
            kcoreconfigskeleton__itempointf_property_isbase = false;
            return KCoreConfigSkeleton__ItemPointF::property();
        }
        auto property_cb = kcoreconfigskeleton__itempointf_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemPointF::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemSize so that we can call protected methods
class VirtualKCoreConfigSkeletonItemSize final : public KCoreConfigSkeleton::ItemSize {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemSize = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemSize_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemSize*, KConfig*);
    using KCoreConfigSkeleton__ItemSize_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemSize*, QVariant*);
    using KCoreConfigSkeleton__ItemSize_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemSize*, QVariant*);
    using KCoreConfigSkeleton__ItemSize_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemSize_ReadConfig_Callback kcoreconfigskeleton__itemsize_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemSize_SetProperty_Callback kcoreconfigskeleton__itemsize_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemSize_IsEqual_Callback kcoreconfigskeleton__itemsize_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemSize_Property_Callback kcoreconfigskeleton__itemsize_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemsize_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemsize_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemsize_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemsize_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemSize(const QString& _group, const QString& _key, QSize& reference) : KCoreConfigSkeleton::ItemSize(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemSize(const QString& _group, const QString& _key, QSize& reference, const QSize& defaultValue) : KCoreConfigSkeleton::ItemSize(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemSize_ReadConfig_Callback(KCoreConfigSkeleton__ItemSize_ReadConfig_Callback cb) { kcoreconfigskeleton__itemsize_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemSize_SetProperty_Callback(KCoreConfigSkeleton__ItemSize_SetProperty_Callback cb) { kcoreconfigskeleton__itemsize_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemSize_IsEqual_Callback(KCoreConfigSkeleton__ItemSize_IsEqual_Callback cb) { kcoreconfigskeleton__itemsize_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemSize_Property_Callback(KCoreConfigSkeleton__ItemSize_Property_Callback cb) { kcoreconfigskeleton__itemsize_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemSize_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemsize_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemSize_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemsize_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemSize_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemsize_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemSize_Property_IsBase(bool value) const { kcoreconfigskeleton__itemsize_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemsize_readconfig_isbase) {
            kcoreconfigskeleton__itemsize_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemSize::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemsize_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSize::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemsize_setproperty_isbase) {
            kcoreconfigskeleton__itemsize_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemSize::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemsize_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSize::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemsize_isequal_isbase) {
            kcoreconfigskeleton__itemsize_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemSize::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemsize_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemSize::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemsize_property_isbase) {
            kcoreconfigskeleton__itemsize_property_isbase = false;
            return KCoreConfigSkeleton__ItemSize::property();
        }
        auto property_cb = kcoreconfigskeleton__itemsize_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemSize::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemSizeF so that we can call protected methods
class VirtualKCoreConfigSkeletonItemSizeF final : public KCoreConfigSkeleton::ItemSizeF {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemSizeF = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemSizeF*, KConfig*);
    using KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemSizeF*, QVariant*);
    using KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemSizeF*, QVariant*);
    using KCoreConfigSkeleton__ItemSizeF_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback kcoreconfigskeleton__itemsizef_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback kcoreconfigskeleton__itemsizef_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback kcoreconfigskeleton__itemsizef_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemSizeF_Property_Callback kcoreconfigskeleton__itemsizef_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemsizef_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemsizef_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemsizef_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemsizef_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemSizeF(const QString& _group, const QString& _key, QSizeF& reference) : KCoreConfigSkeleton::ItemSizeF(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemSizeF(const QString& _group, const QString& _key, QSizeF& reference, const QSizeF& defaultValue) : KCoreConfigSkeleton::ItemSizeF(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback(KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback cb) { kcoreconfigskeleton__itemsizef_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemSizeF_SetProperty_Callback(KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback cb) { kcoreconfigskeleton__itemsizef_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemSizeF_IsEqual_Callback(KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback cb) { kcoreconfigskeleton__itemsizef_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemSizeF_Property_Callback(KCoreConfigSkeleton__ItemSizeF_Property_Callback cb) { kcoreconfigskeleton__itemsizef_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemSizeF_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemsizef_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemSizeF_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemsizef_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemSizeF_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemsizef_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemSizeF_Property_IsBase(bool value) const { kcoreconfigskeleton__itemsizef_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemsizef_readconfig_isbase) {
            kcoreconfigskeleton__itemsizef_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemSizeF::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemsizef_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSizeF::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemsizef_setproperty_isbase) {
            kcoreconfigskeleton__itemsizef_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemSizeF::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemsizef_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSizeF::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemsizef_isequal_isbase) {
            kcoreconfigskeleton__itemsizef_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemSizeF::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemsizef_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemSizeF::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemsizef_property_isbase) {
            kcoreconfigskeleton__itemsizef_property_isbase = false;
            return KCoreConfigSkeleton__ItemSizeF::property();
        }
        auto property_cb = kcoreconfigskeleton__itemsizef_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemSizeF::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemDateTime so that we can call protected methods
class VirtualKCoreConfigSkeletonItemDateTime final : public KCoreConfigSkeleton::ItemDateTime {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemDateTime = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemDateTime*, KConfig*);
    using KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemDateTime*, QVariant*);
    using KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemDateTime*, QVariant*);
    using KCoreConfigSkeleton__ItemDateTime_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback kcoreconfigskeleton__itemdatetime_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback kcoreconfigskeleton__itemdatetime_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback kcoreconfigskeleton__itemdatetime_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemDateTime_Property_Callback kcoreconfigskeleton__itemdatetime_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemdatetime_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemdatetime_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemdatetime_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemdatetime_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemDateTime(const QString& _group, const QString& _key, QDateTime& reference) : KCoreConfigSkeleton::ItemDateTime(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemDateTime(const QString& _group, const QString& _key, QDateTime& reference, const QDateTime& defaultValue) : KCoreConfigSkeleton::ItemDateTime(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback(KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback cb) { kcoreconfigskeleton__itemdatetime_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDateTime_SetProperty_Callback(KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback cb) { kcoreconfigskeleton__itemdatetime_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDateTime_IsEqual_Callback(KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback cb) { kcoreconfigskeleton__itemdatetime_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemDateTime_Property_Callback(KCoreConfigSkeleton__ItemDateTime_Property_Callback cb) { kcoreconfigskeleton__itemdatetime_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemDateTime_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemdatetime_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDateTime_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemdatetime_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDateTime_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemdatetime_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemDateTime_Property_IsBase(bool value) const { kcoreconfigskeleton__itemdatetime_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemdatetime_readconfig_isbase) {
            kcoreconfigskeleton__itemdatetime_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemDateTime::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemdatetime_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDateTime::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemdatetime_setproperty_isbase) {
            kcoreconfigskeleton__itemdatetime_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemDateTime::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemdatetime_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDateTime::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemdatetime_isequal_isbase) {
            kcoreconfigskeleton__itemdatetime_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemDateTime::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemdatetime_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemDateTime::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemdatetime_property_isbase) {
            kcoreconfigskeleton__itemdatetime_property_isbase = false;
            return KCoreConfigSkeleton__ItemDateTime::property();
        }
        auto property_cb = kcoreconfigskeleton__itemdatetime_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemDateTime::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemStringList so that we can call protected methods
class VirtualKCoreConfigSkeletonItemStringList final : public KCoreConfigSkeleton::ItemStringList {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemStringList = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemStringList*, KConfig*);
    using KCoreConfigSkeleton__ItemStringList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemStringList*, QVariant*);
    using KCoreConfigSkeleton__ItemStringList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemStringList*, QVariant*);
    using KCoreConfigSkeleton__ItemStringList_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback kcoreconfigskeleton__itemstringlist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemStringList_SetProperty_Callback kcoreconfigskeleton__itemstringlist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemStringList_IsEqual_Callback kcoreconfigskeleton__itemstringlist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemStringList_Property_Callback kcoreconfigskeleton__itemstringlist_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemstringlist_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemstringlist_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemstringlist_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemstringlist_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemStringList(const QString& _group, const QString& _key, QList<QString>& reference) : KCoreConfigSkeleton::ItemStringList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemStringList(const QString& _group, const QString& _key, QList<QString>& reference, const QList<QString>& defaultValue) : KCoreConfigSkeleton::ItemStringList(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemStringList_ReadConfig_Callback(KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback cb) { kcoreconfigskeleton__itemstringlist_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemStringList_SetProperty_Callback(KCoreConfigSkeleton__ItemStringList_SetProperty_Callback cb) { kcoreconfigskeleton__itemstringlist_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemStringList_IsEqual_Callback(KCoreConfigSkeleton__ItemStringList_IsEqual_Callback cb) { kcoreconfigskeleton__itemstringlist_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemStringList_Property_Callback(KCoreConfigSkeleton__ItemStringList_Property_Callback cb) { kcoreconfigskeleton__itemstringlist_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemStringList_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemstringlist_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemStringList_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemstringlist_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemStringList_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemstringlist_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemStringList_Property_IsBase(bool value) const { kcoreconfigskeleton__itemstringlist_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemstringlist_readconfig_isbase) {
            kcoreconfigskeleton__itemstringlist_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemStringList::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemstringlist_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemStringList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemstringlist_setproperty_isbase) {
            kcoreconfigskeleton__itemstringlist_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemStringList::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemstringlist_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemStringList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemstringlist_isequal_isbase) {
            kcoreconfigskeleton__itemstringlist_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemStringList::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemstringlist_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemStringList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemstringlist_property_isbase) {
            kcoreconfigskeleton__itemstringlist_property_isbase = false;
            return KCoreConfigSkeleton__ItemStringList::property();
        }
        auto property_cb = kcoreconfigskeleton__itemstringlist_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemStringList::property();
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
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itempathlist_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPathList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempathlist_writeconfig_isbase) {
            kcoreconfigskeleton__itempathlist_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemPathList::writeConfig(config);
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itempathlist_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPathList::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempathlist_setproperty_isbase) {
            kcoreconfigskeleton__itempathlist_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemPathList::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itempathlist_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPathList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempathlist_isequal_isbase) {
            kcoreconfigskeleton__itempathlist_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemPathList::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itempathlist_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPathList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempathlist_property_isbase) {
            kcoreconfigskeleton__itempathlist_property_isbase = false;
            return KCoreConfigSkeleton__ItemPathList::property();
        }
        auto property_cb = kcoreconfigskeleton__itempathlist_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemPathList::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemUrlList so that we can call protected methods
class VirtualKCoreConfigSkeletonItemUrlList final : public KCoreConfigSkeleton::ItemUrlList {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemUrlList = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrlList*, KConfig*);
    using KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrlList*, KConfig*);
    using KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemUrlList*, QVariant*);
    using KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemUrlList*, QVariant*);
    using KCoreConfigSkeleton__ItemUrlList_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback kcoreconfigskeleton__itemurllist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback kcoreconfigskeleton__itemurllist_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback kcoreconfigskeleton__itemurllist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback kcoreconfigskeleton__itemurllist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_Property_Callback kcoreconfigskeleton__itemurllist_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemurllist_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemurllist_writeconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemurllist_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemurllist_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemurllist_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemUrlList(const QString& _group, const QString& _key, QList<QUrl>& reference) : KCoreConfigSkeleton::ItemUrlList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemUrlList(const QString& _group, const QString& _key, QList<QUrl>& reference, const QList<QUrl>& defaultValue) : KCoreConfigSkeleton::ItemUrlList(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback(KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback cb) { kcoreconfigskeleton__itemurllist_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback(KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback cb) { kcoreconfigskeleton__itemurllist_writeconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrlList_SetProperty_Callback(KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback cb) { kcoreconfigskeleton__itemurllist_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrlList_IsEqual_Callback(KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback cb) { kcoreconfigskeleton__itemurllist_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemUrlList_Property_Callback(KCoreConfigSkeleton__ItemUrlList_Property_Callback cb) { kcoreconfigskeleton__itemurllist_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemUrlList_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemurllist_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrlList_WriteConfig_IsBase(bool value) const { kcoreconfigskeleton__itemurllist_writeconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrlList_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemurllist_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrlList_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemurllist_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemUrlList_Property_IsBase(bool value) const { kcoreconfigskeleton__itemurllist_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurllist_readconfig_isbase) {
            kcoreconfigskeleton__itemurllist_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemUrlList::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemurllist_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrlList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurllist_writeconfig_isbase) {
            kcoreconfigskeleton__itemurllist_writeconfig_isbase = false;
            KCoreConfigSkeleton__ItemUrlList::writeConfig(config);
            return;
        }
        auto writeconfig_cb = kcoreconfigskeleton__itemurllist_writeconfig_callback;
        if (writeconfig_cb) {
            KConfig* cbval1 = config;

            writeconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrlList::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemurllist_setproperty_isbase) {
            kcoreconfigskeleton__itemurllist_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemUrlList::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemurllist_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrlList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemurllist_isequal_isbase) {
            kcoreconfigskeleton__itemurllist_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemUrlList::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemurllist_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemUrlList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemurllist_property_isbase) {
            kcoreconfigskeleton__itemurllist_property_isbase = false;
            return KCoreConfigSkeleton__ItemUrlList::property();
        }
        auto property_cb = kcoreconfigskeleton__itemurllist_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemUrlList::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemIntList so that we can call protected methods
class VirtualKCoreConfigSkeletonItemIntList final : public KCoreConfigSkeleton::ItemIntList {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreConfigSkeletonItemIntList = true;

    // Virtual class public types (including callbacks)
    using KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemIntList*, KConfig*);
    using KCoreConfigSkeleton__ItemIntList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemIntList*, QVariant*);
    using KCoreConfigSkeleton__ItemIntList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemIntList*, QVariant*);
    using KCoreConfigSkeleton__ItemIntList_Property_Callback = QVariant* (*)();

  protected:
    // Instance callback storage
    KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback kcoreconfigskeleton__itemintlist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemIntList_SetProperty_Callback kcoreconfigskeleton__itemintlist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemIntList_IsEqual_Callback kcoreconfigskeleton__itemintlist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemIntList_Property_Callback kcoreconfigskeleton__itemintlist_property_callback = nullptr;

    // Instance base flags
    mutable bool kcoreconfigskeleton__itemintlist_readconfig_isbase = false;
    mutable bool kcoreconfigskeleton__itemintlist_setproperty_isbase = false;
    mutable bool kcoreconfigskeleton__itemintlist_isequal_isbase = false;
    mutable bool kcoreconfigskeleton__itemintlist_property_isbase = false;

  public:
    VirtualKCoreConfigSkeletonItemIntList(const QString& _group, const QString& _key, QList<int>& reference) : KCoreConfigSkeleton::ItemIntList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemIntList(const QString& _group, const QString& _key, QList<int>& reference, const QList<int>& defaultValue) : KCoreConfigSkeleton::ItemIntList(_group, _key, reference, defaultValue) {};

    // Callback setters
    inline void setKCoreConfigSkeleton__ItemIntList_ReadConfig_Callback(KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback cb) { kcoreconfigskeleton__itemintlist_readconfig_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemIntList_SetProperty_Callback(KCoreConfigSkeleton__ItemIntList_SetProperty_Callback cb) { kcoreconfigskeleton__itemintlist_setproperty_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemIntList_IsEqual_Callback(KCoreConfigSkeleton__ItemIntList_IsEqual_Callback cb) { kcoreconfigskeleton__itemintlist_isequal_callback = cb; }
    inline void setKCoreConfigSkeleton__ItemIntList_Property_Callback(KCoreConfigSkeleton__ItemIntList_Property_Callback cb) { kcoreconfigskeleton__itemintlist_property_callback = cb; }

    // Base flag setters
    inline void setKCoreConfigSkeleton__ItemIntList_ReadConfig_IsBase(bool value) const { kcoreconfigskeleton__itemintlist_readconfig_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemIntList_SetProperty_IsBase(bool value) const { kcoreconfigskeleton__itemintlist_setproperty_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemIntList_IsEqual_IsBase(bool value) const { kcoreconfigskeleton__itemintlist_isequal_isbase = value; }
    inline void setKCoreConfigSkeleton__ItemIntList_Property_IsBase(bool value) const { kcoreconfigskeleton__itemintlist_property_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemintlist_readconfig_isbase) {
            kcoreconfigskeleton__itemintlist_readconfig_isbase = false;
            KCoreConfigSkeleton__ItemIntList::readConfig(config);
            return;
        }
        auto readconfig_cb = kcoreconfigskeleton__itemintlist_readconfig_callback;
        if (readconfig_cb) {
            KConfig* cbval1 = config;

            readconfig_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemIntList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemintlist_setproperty_isbase) {
            kcoreconfigskeleton__itemintlist_setproperty_isbase = false;
            KCoreConfigSkeleton__ItemIntList::setProperty(p);
            return;
        }
        auto setproperty_cb = kcoreconfigskeleton__itemintlist_setproperty_callback;
        if (setproperty_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            setproperty_cb(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemIntList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemintlist_isequal_isbase) {
            kcoreconfigskeleton__itemintlist_isequal_isbase = false;
            return KCoreConfigSkeleton__ItemIntList::isEqual(p);
        }
        auto isequal_cb = kcoreconfigskeleton__itemintlist_isequal_callback;
        if (isequal_cb) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);

            bool callback_ret = isequal_cb(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemIntList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemintlist_property_isbase) {
            kcoreconfigskeleton__itemintlist_property_isbase = false;
            return KCoreConfigSkeleton__ItemIntList::property();
        }
        auto property_cb = kcoreconfigskeleton__itemintlist_property_callback;
        if (property_cb) {
            QVariant* callback_ret = property_cb();
            return *callback_ret;
        }
        return KCoreConfigSkeleton__ItemIntList::property();
    }
};

#endif
